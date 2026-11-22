`include "tb_utils.svh"
module day23_majority5_tb;
  logic clk = 1'b0;
  logic a, b, c, d, e, y;
  int errors = 0;
  string minterms = "";

  majority5 dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day23_majority5.vcd")

  `ASSERT_CLK(a_maj, clk, 1'b0, y == ($countones({a, b, c, d, e}) >= 3))

  initial begin
    for (int i = 0; i < 32; i++) begin
      @(negedge clk) {a, b, c, d, e} = i[4:0];
      @(posedge clk);
      `CHECK(y == ($countones(i[4:0]) >= 3), "majority function")
      if (y) minterms = {minterms, $sformatf("%0d ", i)};
    end
    $display("  min-terms where y=1 : %s", minterms);
    `TB_DONE("day23_majority5")
  end
endmodule
