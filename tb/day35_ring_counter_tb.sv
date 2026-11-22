`include "tb_utils.svh"
module day35_ring_counter_tb;
  logic clk = 1'b0, rst = 1'b1;
  logic [3:0] q, exp;
  int errors = 0;

  ring_counter #(4) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day35_ring_counter.vcd")

  `ASSERT_CLK(a_onehot, clk, rst, $onehot(q))
  `ASSERT_CLK(a_rotate, clk, rst, 1'b1 |=> (q == {$past(q[2:0]), $past(q[3])}))

  initial begin
    repeat (3) @(negedge clk);
    rst = 1'b0; exp = 4'b0001;
    #1;                                           // before the first active edge
    `CHECK(q == 4'b0001, "preset state after reset")
    for (int i = 0; i < 16; i++) begin
      exp = {exp[2:0], exp[3]};
      @(negedge clk);
      `CHECK(q == exp, "ring rotation")
      $display("  q = %04b", q);
    end
    $display("  (non self-starting: an illegal state such as 0000 would never recover)");
    `TB_DONE("day35_ring_counter")
  end
endmodule
