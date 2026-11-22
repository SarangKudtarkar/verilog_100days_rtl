// Shared helpers for every testbench.
// Each testbench must declare:  int errors = 0;
`ifndef TB_UTILS_SVH
`define TB_UTILS_SVH

// Immediate assertion + error counter (works in every simulator)
`define CHECK(cond, msg) \
  if (!(cond)) begin errors = errors + 1; $display("  [FAIL] %s (t=%0t)", msg, $time); end

// Concurrent assertion (SVA) sampled on posedge clk, disabled while rst is true.
// Compile with -DNO_SVA for simulators without concurrent-assertion support.
`ifdef NO_SVA
  `define ASSERT_CLK(name, clk, rst, prop)
`else
  `define ASSERT_CLK(name, clk, rst, prop) \
    name: assert property (@(posedge clk) disable iff (rst) prop) \
      else $error("[SVA FAIL] %s", `"name`");
`endif

// VCD dump only when compiled with -DWAVES (run.sh -w)
`ifdef WAVES
  `define DUMP(f) initial begin $dumpfile(f); $dumpvars(0); end
`else
  `define DUMP(f)
`endif

`define TB_DONE(tag) \
  begin \
    if (errors == 0) $display("[PASS] %s", tag); \
    else             $display("[FAIL] %s : %0d error(s)", tag, errors); \
    $finish; \
  end
`endif
