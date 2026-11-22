`include "tb_utils.svh"
module day24_hcf_tb;
  logic clk = 1'b0, rst = 1'b1, start = 1'b0;
  logic [7:0] a, b, hcf;
  logic busy, done;
  int errors = 0;

  hcf_calc #(8) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day24_hcf.vcd")

  function automatic int gcd_ref(int x, int y);
    while (y != 0) begin int t = x % y; x = y; y = t; end
    return x;
  endfunction

  // ---- SVA ----
  `ASSERT_CLK(a_finish,  clk, rst, (start && !busy) |=> busy)
  int wd = 0;                                   // watchdog: HCF must finish within 600 cycles
  always @(posedge clk) wd <= busy ? wd + 1 : 0;
  `ASSERT_CLK(a_watchdog, clk, rst, wd < 600)
  `ASSERT_CLK(a_done_idle, clk, rst, done |-> !busy)
  `ASSERT_CLK(a_fell_done, clk, rst, $fell(busy) |-> done)

  task automatic run_hcf(input logic [7:0] ta, tb_);
    @(negedge clk) begin a = ta; b = tb_; start = 1'b1; end
    @(negedge clk) start = 1'b0;
    wait (done);
    @(negedge clk);
    `CHECK(hcf == 8'(gcd_ref(ta, tb_)), "HCF result")
    $display("  HCF(%3d,%3d) = %3d", ta, tb_, hcf);
  endtask

  initial begin
    repeat (3) @(posedge clk);
    #1 rst = 1'b0;
    run_hcf(48, 18);  run_hcf(17, 5);   run_hcf(100, 75); run_hcf(255, 1);
    run_hcf(0, 9);    run_hcf(7, 0);    run_hcf(0, 0);    run_hcf(64, 16);
    run_hcf(36, 36);  run_hcf(252, 105);
    for (int i = 0; i < 40; i++) run_hcf($urandom, $urandom);
    `TB_DONE("day24_hcf")
  end
endmodule
