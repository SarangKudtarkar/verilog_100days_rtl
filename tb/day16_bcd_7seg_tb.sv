`include "tb_utils.svh"
module day16_bcd_7seg_tb;
  logic clk = 1'b0;
  logic [3:0] bcd;
  logic [6:0] seg;
  int errors = 0;
  localparam logic [6:0] EXP [10] = '{7'b1111110, 7'b0110000, 7'b1101101, 7'b1111001,
                                      7'b0110011, 7'b1011011, 7'b1011111, 7'b1110000,
                                      7'b1111111, 7'b1111011};

  bcd_to_7seg dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day16_bcd_7seg.vcd")

  `ASSERT_CLK(a_blank,  clk, 1'b0, (bcd > 9) |-> (seg == 7'b0))
  `ASSERT_CLK(a_eight,  clk, 1'b0, (bcd == 8) |-> (seg == 7'b1111111))
  `ASSERT_CLK(a_one,    clk, 1'b0, (bcd == 1) |-> ($countones(seg) == 2))

  initial begin
    $display("Console results: digit -> abcdefg");
    for (int i = 0; i < 16; i++) begin
      @(negedge clk) bcd = i[3:0];
      @(posedge clk);
      if (i < 10) begin `CHECK(seg == EXP[i], "7-seg pattern") end
      else        begin `CHECK(seg == 7'd0, "invalid BCD is blank") end
      $display("  %2d -> %07b", i, seg);
    end
    `TB_DONE("day16_bcd_7seg")
  end
endmodule
