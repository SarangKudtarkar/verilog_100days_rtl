`include "tb_utils.svh"
module day36_johnson_counter_tb;
  logic clk = 1'b0, rst = 1'b1;
  logic [3:0] q, exp;
  int errors = 0;
  localparam logic [3:0] SEQ [8] = '{4'b0000, 4'b0001, 4'b0011, 4'b0111,
                                     4'b1111, 4'b1110, 4'b1100, 4'b1000};

  johnson_counter #(4) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day36_johnson_counter.vcd")

  `ASSERT_CLK(a_next,   clk, rst, 1'b1 |=> (q == {$past(q[2:0]), ~$past(q[3])}))
  `ASSERT_CLK(a_onebit, clk, rst, 1'b1 |=> ($countones(q ^ $past(q)) == 1))
  `ASSERT_CLK(a_period, clk, rst, (q == 4'b0000 && !$past(rst, 8)) |-> ($past(q, 8) == 4'b0000))

  initial begin
    repeat (3) @(negedge clk);
    rst = 1'b0;
    for (int i = 0; i < 24; i++) begin
      @(negedge clk);
      `CHECK(q == SEQ[(i + 1) % 8], "Johnson sequence")
      $display("  q = %04b", q);
      // SEQ[0] (=0000) is the reset state; the first clock after release gives SEQ[1]
    end
    `TB_DONE("day36_johnson_counter")
  end
endmodule
