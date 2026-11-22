# #100DAYSRTL - Verilog / SystemVerilog examples (Day 1 - Day 50)

Every example has

* `src/dayNN_<name>.sv` - the design (RTL), written in synthesisable Verilog/SystemVerilog
* `tb/dayNN_<name>_tb.sv` - a **self-checking testbench** that prints `[PASS]` / `[FAIL]`,
  contains **SVA (SystemVerilog Assertions)** and prints the "console results" shown in the slides
* `include/tb_utils.svh` - shared macros (`CHECK`, `ASSERT_CLK`, `DUMP`, `TB_DONE`)

```
verilog_100days_rtl/
├── include/tb_utils.svh
├── src/   day01_clk_div_even.sv ... day50_round_robin_arbiter.sv
├── tb/    day01_clk_div_even_tb.sv ... day50_round_robin_arbiter_tb.sv
├── run.sh        compile + simulate helper
├── waves/        VCD files (when run with -w)
├── logs/         one log per example
└── build/        simulator work files
```

## 1. Requirements

| Simulator | SVA (concurrent assertions) | Notes |
|-----------|-----------------------------|-------|
| **Verilator >= 5.0** (default) | yes | free, fast, `sudo apt install verilator` |
| Icarus Verilog >= 12 | no (auto `-DNO_SVA`) | free, self-checks still run, but its SV support is partial: 34 of 45 examples build and pass, the rest hit Icarus language limits (use Verilator for those) |
| Questa / ModelSim, VCS, Xcelium, Vivado xsim | yes | commercial, supported by `run.sh -s` |

Optional: `gtkwave` to view waveforms.

## 2. Quick start

```bash
cd verilog_100days_rtl
./run.sh -l              # list all examples
./run.sh                 # run all 45 examples (default simulator: verilator)
./run.sh 5               # run Day-5 only
./run.sh 5 7 9           # run several days
./run.sh day20           # by prefix
./run.sh -w 12           # run Day-12 and write waves/day12_gray_bin.vcd
./run.sh -s iverilog     # use Icarus Verilog (no SVA)
./run.sh -s questa 25    # use Questa
```

Expected output

```
Simulator: verilator   examples: 45
  PASS  day01_clk_div_even
  ...
Passed: 45   Failed: 0
```

A run is reported as FAIL if the simulator errors, a `CHECK` fails (`[FAIL]`),
an SVA fails (`[SVA FAIL]`) or `[PASS]` is never printed. Full output is in `logs/<example>.log`
(this is where the "console results" of each day are printed).

## 3. Running by hand (without run.sh)

Replace `day05_rca_4bit` by any example name. Run from the project root.

```bash
# Verilator (with SVA)
verilator --binary --assert --timing --top-module day05_rca_4bit_tb -Iinclude \
          -Wno-fatal -Wno-lint -Wno-style src/day05_rca_4bit.sv tb/day05_rca_4bit_tb.sv -o sim
./obj_dir/sim
# add  --trace -DWAVES  to the verilator line to get waves/*.vcd

# Icarus Verilog (no concurrent SVA)
iverilog -g2012 -DNO_SVA -DSWITCH_LEVEL -Iinclude -s day05_rca_4bit_tb -o sim.vvp \
         src/day05_rca_4bit.sv tb/day05_rca_4bit_tb.sv
vvp sim.vvp

# Questa
vlib work && vlog -sv +incdir+include +define+SWITCH_LEVEL src/day05_rca_4bit.sv tb/day05_rca_4bit_tb.sv
vsim -c day05_rca_4bit_tb -do "run -all; quit -f"

# VCS
vcs -full64 -sverilog -assert svaext +incdir+include +define+SWITCH_LEVEL -top day05_rca_4bit_tb \
    src/day05_rca_4bit.sv tb/day05_rca_4bit_tb.sv -o simv && ./simv

# Xcelium
xrun -sv -access +rwc -incdir include -define SWITCH_LEVEL -top day05_rca_4bit_tb \
     src/day05_rca_4bit.sv tb/day05_rca_4bit_tb.sv

# Vivado xsim
xvlog -sv -i include -d SWITCH_LEVEL src/day05_rca_4bit.sv tb/day05_rca_4bit_tb.sv
xelab day05_rca_4bit_tb -s snap && xsim snap -runall
```

Compile **one design file + its testbench** at a time (several designs reuse the same
helper module names such as `tff_neg`, so they must not be compiled together).
Vivado users: the same files can be added as simulation sources in a project; set
`day05_rca_4bit_tb` as the simulation top. Use the elaborated/implemented schematic
views for the "Schematics" part of the slides.

## 4. How SVA is used

Concurrent assertions are written with the macro

```systemverilog
`ASSERT_CLK(name, clk, reset_expr, property)
// expands to:  name: assert property (@(posedge clk) disable iff (reset_expr) property)
//                      else  begin errors++; $display("[SVA FAIL] ...");  end
```

* testbenches drive inputs on the **falling** clock edge, assertions sample on the
  **rising** edge, so there are no races;
* typical properties: implication `|->`, `|=>`, `##N`, `##[1:N]`, `[*N]`, `$rose`, `$fell`,
  `$stable`, `$past`, `$onehot`, `$onehot0`, `$countones`;
* every testbench also has immediate assertions (`CHECK` macro) comparing the DUT with an
  independent reference model / scoreboard;
* pass `-DNO_SVA` for a simulator that cannot parse `assert property` (Icarus).

## 5. Contents

| Day | Design (file in `src/`) | What the testbench / SVA checks |
|-----|-------------------------|---------------------------------|
| 1  | `day01_clk_div_even` - clk/2N divider | period = 2N clocks, high time = N clocks (`$rose`, `##`) |
| 3  | `day03_clk_div_odd` - clk/odd divider, 50 % duty | period = N clocks, duty measured in sim time |
| 5  | `day05_rca_4bit` - 4-bit ripple-carry adder | exhaustive 512 vectors, sum/cout property |
| 7  | `day07_cla_4bit` - 4-bit CLA + 16-bit top | exhaustive 4-bit, random 16-bit |
| 9  | `day09_add_sub_4bit` - adder/subtractor | add, sub, no-borrow, overflow flag |
| 11 | `day11_mult_4bit` - 4x4 multiplier | exhaustive 256 products |
| 12 | `day12_gray_bin` - binary<->gray | round trip, adjacent codes differ by 1 bit |
| 13 | `day13_cmos_inverter` - CMOS inverter | `out === ~in`; `-DSWITCH_LEVEL` uses pmos/nmos primitives |
| 14 | `day14_decoders` - binary -> octal / decimal / hex | one-hot outputs, enable |
| 15 | `day15_encoders` - octal / decimal / hex -> binary | priority encoding, valid flag |
| 16 | `day16_bcd_7seg` - BCD to 7-segment | pattern table, blank for invalid |
| 17 | `day17_water_level` - level indicator (8x3 encoder) | level code, empty/full flags |
| 18 | `day18_parity` - parity generator / checker | all single-bit errors detected |
| 19 | `day19_bit_counter` - count ones and zeros | exhaustive, ones + zeros = 8 |
| 20 | `day20_alu` - ALU, 16 operations | directed + 4000 random vs. reference model |
| 21 | `day21_mux_piso` - MUX as async PISO | serial stream rebuilds the word |
| 22 | `day22_demux_sipo` - DEMUX as async SIPO (SV style) | routing + other outputs low |
| 23 | `day23_majority5` - 5-input majority (gate + dataflow) | all 32 minterms |
| 24 | `day24_hcf` - HCF/GCD FSM (SystemVerilog) | vs. Euclid, bounded-latency SVA `##[1:600]` |
| 25 | `day25_traffic_light` - traffic-light FSM | one-hot lights, legal transitions, phase length `[*N]` |
| 26 | `day26_sr_latch` - SR latch (NAND and NOR) | set/reset/hold, `Q == Q'` = invalid |
| 27 | `day27_jk_d_latch` - JK latch and D latch | transparency, hold |
| 28 | `day28_flipflops` - SR, JK, T, D flip-flops | `|=>` + `$past` per flip-flop, async reset |
| 29 | `day29_ff_vs_register` - 4-bit FF vs register | register holds when `en=0`, FF does not |
| 30 | `day30_siso_sipo` - SISO / SIPO | `sout == $past(sin,4)` |
| 31 | `day31_piso_pipo` - PISO / PIPO | MSB-first shift-out, load/hold |
| 32 | `day32_universal_shift_reg` - linear + circular shifts | each mode, rotate keeps popcount |
| 33 | `day33_ripple_counter` - binary ripple counter | +1 per clock |
| 34 | `day34_decade_counter` - MOD-10 ripple counter | range 0..9, wraps 9 -> 0 |
| 35 | `day35_ring_counter` - ring counter (non self-starting) | one-hot rotation |
| 36 | `day36_johnson_counter` - Johnson counter | 8-state sequence, one-bit change |
| 37 | `day37_sync_counter` - synchronous counter | +1 per clock |
| 38 | `day38_universal_counter` - up/down counter with load | up, down, hold, load |
| 39 | `day39_barrel_shifter` - barrel shifter (shift + rotate) | exhaustive 8192 vectors |
| 40 | `day40_edge_detectors` - positive / negative edge | one-clock pulses |
| 41 | `day41_memory_1mb` - 1 MB x 32-bit memory (2^18 words) | write/read-back, first and last word |
| 42 | `day42_sync_fifo` - synchronous FIFO, depth 32 | scoreboard, full/empty/count SVA, overflow/underflow |
| 43 | `day43_single_port_ram` - 32-bit single-port RAM | write-through, read stability |
| 44 | `day44_dual_port_ram` - 32-bit dual-port RAM | both ports, collision rules |
| 45 | `day45_async_fifo` - async FIFO, depth 16, 2 clocks | gray pointer changes 1 bit, scoreboard, overflow/underflow |
| 46 | `day46_mealy_seq_detector` - detect 11 or 00 (non-overlapping) | reference model + SVA |
| 47 | `day47_moore_seq_detector` - same sequence, Moore | output one clock later, reference model |
| 48 | `day48_prime_seq_gen` - 2,3,5,7,11 generator | sequence + transition SVA |
| 49 | `day49_fixed_priority_arbiter` - strict priority | exhaustive, priority properties |
| 50 | `day50_round_robin_arbiter` - round-robin | rotation SVA, bounded wait, fairness counters |

## 6. Notes / design decisions

* **Day 13 (CMOS inverter)** - transistor-level `pmos`/`nmos` primitives are used with
  `-DSWITCH_LEVEL` (run.sh passes it for every simulator except Verilator, which does
  not support switch primitives and gets an equivalent pull-up/pull-down model).
* **Day 14 / 15** - "binary to octal/decimal/hex decoder" is implemented as the usual one-hot decoders
  (3->8, BCD 4->10, 4->16); the encoders (Day 15) are their inverse priority encoders.
* **Day 23** - the min-term list printed in the slides (1,3,5,7,...) is not a majority function;
  the design implements the real 5-input majority, min-terms
  7,11,13,14,15,19,21,22,23,25,26,27,28,29,30,31, and the testbench prints them.
* **Day 26** - when `Q == Q'` the latch is in the *invalid* state (S=R active); the testbench
  never releases both inputs simultaneously, which would oscillate in zero-delay simulation.
* **Day 27** - a real level-sensitive JK latch with J=K=1 suffers race-around. The model toggles once
  per enable event so the simulation terminates; use the Day-28 flip-flop in real designs.
* **Day 35** - the ring counter is intentionally *not* self-starting (illegal states are not corrected).
* **Day 41** - 1 MB / 4 bytes = 2^18 words, hence the 18-bit address.
* **Day 49** - strict priority (req[0] highest). Day 50 adds fairness.
* Examples that use the same helper names (`tff_neg`, `sync_2ff` ...) are in separate files;
  compile one day at a time, as `run.sh` does.

## 7. Adding your own example

1. create `src/dayNN_name.sv` with the design;
2. create `tb/dayNN_name_tb.sv` (module `dayNN_name_tb`), start it with
   `` `include "tb_utils.svh" ``, declare `int errors = 0;`, use `` `CHECK `` / `` `ASSERT_CLK ``
   and finish with `` `TB_DONE("dayNN_name") ``;
3. run `./run.sh NN`.
