`include "tb_utils.svh"
module day33_ripple_counter_tb;
  logic clk = 1'b0, rst = 1'b1;
  logic [3:0] q, exp;
  int errors = 0;

  ripple_counter_4bit dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day33_ripple_counter.vcd")

  // q changes once per clock (on the falling edge), so sampled values step by +1
  `ASSERT_CLK(a_count, clk, rst, 1'b1 |=> (q == ($past(q) + 4'd1)))

  initial begin
    exp = '0;
    repeat (3) @(posedge clk);
    #2 rst = 1'b0;
    for (int i = 0; i < 40; i++) begin
      @(negedge clk);
      exp = exp + 4'd1;
      #1;                                   // let the ripple settle
      `CHECK(q == exp, "ripple count")
      if (i < 20) $display("  count = %2d (%04b)", q, q);
    end
    `TB_DONE("day33_ripple_counter")
  end
endmodule
