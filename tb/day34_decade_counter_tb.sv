`include "tb_utils.svh"
module day34_decade_counter_tb;
  logic clk = 1'b0, rst = 1'b1;
  logic [3:0] q;
  int errors = 0, exp = 0;

  decade_counter dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day34_decade_counter.vcd")

  `ASSERT_CLK(a_range, clk, rst, q <= 4'd9)
  `ASSERT_CLK(a_wrap,  clk, rst, (q == 4'd9) |=> (q == 4'd0))
  `ASSERT_CLK(a_inc,   clk, rst, (q != 4'd9) |=> (q == $past(q) + 4'd1))

  initial begin
    repeat (3) @(posedge clk);
    #2 rst = 1'b0;
    for (int i = 0; i < 35; i++) begin
      @(negedge clk);
      exp = (exp + 1) % 10;
      #1;
      `CHECK(q == exp[3:0], "decade count")
      $display("  count = %0d", q);
    end
    `TB_DONE("day34_decade_counter")
  end
endmodule
