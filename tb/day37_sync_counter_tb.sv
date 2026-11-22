`include "tb_utils.svh"
module day37_sync_counter_tb;
  logic clk = 1'b0, rst = 1'b1;
  logic [3:0] q, exp;
  int errors = 0;

  sync_counter_4bit dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day37_sync_counter.vcd")

  `ASSERT_CLK(a_inc, clk, rst, 1'b1 |=> (q == $past(q) + 4'd1))

  initial begin
    exp = '0;
    repeat (3) @(negedge clk);
    rst = 1'b0;
    for (int i = 0; i < 40; i++) begin
      @(negedge clk);
      exp = exp + 4'd1;
      `CHECK(q == exp, "synchronous count")
      if (i < 18) $display("  count = %2d", q);
    end
    `TB_DONE("day37_sync_counter")
  end
endmodule
