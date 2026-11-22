#!/usr/bin/env bash
# run.sh - compile and simulate the #100DAYSRTL examples
#
#   ./run.sh [-s SIM] [-w] [-l] [day ...]
#     day  : number (5), prefix (day05) or full name (day05_rca_4bit). none/"all" = everything
#     -s   : simulator  verilator (default) | iverilog | questa | vcs | xrun | xsim
#     -w   : dump VCD waveforms into ./waves
#     -l   : list the available examples and exit
#
#   Verilator (>= 5.0) is the default because it is free AND runs the SVA
#   (concurrent assertions). Icarus (iverilog) is supported but runs WITHOUT
#   concurrent assertions (-DNO_SVA); the self-checking CHECK macros still run.
set -u
cd "$(dirname "$0")"
SIM=verilator; WAVES=0; LIST=0

while getopts "s:wlh" o; do
  case $o in
    s) SIM=$OPTARG ;;
    w) WAVES=1 ;;
    l) LIST=1 ;;
    h|*) sed -n '2,12p' "$0"; exit 0 ;;
  esac
done
shift $((OPTIND-1))

mkdir -p build logs waves
mapfile -t ALL < <(ls tb/*_tb.sv | xargs -n1 basename | sed 's/_tb\.sv$//' | sort)

if (( LIST )); then printf '%s\n' "${ALL[@]}"; exit 0; fi

SEL=()
if [[ $# -eq 0 || "${1:-}" == "all" ]]; then
  SEL=("${ALL[@]}")
else
  for a in "$@"; do
    if [[ $a =~ ^[0-9]+$ ]]; then p=$(printf 'day%02d_' "$((10#$a))"); else p=$a; fi
    found=0
    for n in "${ALL[@]}"; do [[ $n == $p* ]] && { SEL+=("$n"); found=1; }; done
    (( found )) || echo "warning: no example matches '$a'" >&2
  done
fi

DEFS=""; (( WAVES )) && DEFS="-DWAVES"

run_one() {
  local n=$1 top=${n}_tb log=logs/$1.log
  local d=src/$n.sv t=tb/${n}_tb.sv
  : > "$log"
  case $SIM in
    verilator)
      local tr=""; (( WAVES )) && tr="--trace"
      verilator --binary --assert --timing --top-module "$top" -Iinclude \
        -Wno-fatal -Wno-lint -Wno-style $DEFS $tr --Mdir "build/$n" -o sim \
        "$d" "$t" >>"$log" 2>&1 && "./build/$n/sim" >>"$log" 2>&1 ;;
    iverilog)
      iverilog -g2012 -DNO_SVA -DSWITCH_LEVEL $DEFS -Iinclude -s "$top" \
        -o "build/$n.vvp" "$d" "$t" >>"$log" 2>&1 && vvp -n "build/$n.vvp" >>"$log" 2>&1 ;;
    questa)
      { vlib build/work && vlog -sv -work build/work +incdir+include +define+SWITCH_LEVEL ${DEFS:++define+WAVES} "$d" "$t" \
        && vsim -c -work build/work "$top" -do "run -all; quit -f"; } >>"$log" 2>&1 ;;
    vcs)
      { vcs -full64 -sverilog -assert svaext +incdir+include +define+SWITCH_LEVEL ${DEFS:+-DWAVES} \
          -top "$top" "$d" "$t" -o "build/$n.simv" && "./build/$n.simv"; } >>"$log" 2>&1 ;;
    xrun)
      xrun -sv -access +rwc -incdir include -define SWITCH_LEVEL ${DEFS:+-define WAVES} \
        -top "$top" "$d" "$t" >>"$log" 2>&1 ;;
    xsim)
      { xvlog -sv -i include -d SWITCH_LEVEL ${DEFS:+-d WAVES} "$d" "$t" \
        && xelab "$top" -s "snap_$n" && xsim "snap_$n" -runall; } >>"$log" 2>&1 ;;
    *) echo "unknown simulator '$SIM'" >&2; return 2 ;;
  esac
  local rc=$?
  if (( rc == 0 )) && grep -q '^\[PASS\]' "$log" && ! grep -qE 'FAIL\]|%Error|%Fatal' "$log"; then
    printf '  PASS  %s\n' "$n"; return 0
  else
    printf '  FAIL  %s   (see logs/%s.log)\n' "$n" "$n"; return 1
  fi
}

pass=0; fail=0
echo "Simulator: $SIM   examples: ${#SEL[@]}"
for n in "${SEL[@]}"; do
  if run_one "$n"; then pass=$((pass+1)); else fail=$((fail+1)); fi
done
echo "----------------------------------------"
echo "Passed: $pass   Failed: $fail"
(( WAVES )) && echo "Waveforms written to ./waves (open with: gtkwave waves/<name>.vcd)"
exit $(( fail > 0 ))
