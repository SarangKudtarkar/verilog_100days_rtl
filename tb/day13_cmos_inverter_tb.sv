`include "tb_utils.svh"
module day13_cmos_inverter_tb;
  logic clk = 1'b0;
  logic in = 1'b0;
  wire  out;
  int errors = 0;

  cmos_inverter dut (.in, .out);
  always #5 clk = ~clk;
  `DUMP("waves/day13_cmos_inverter.vcd")

  `ASSERT_CLK(a_invert, clk, 1'b0, out === ~in)

  initial begin
    $display("  in out");
    repeat (8) begin
      @(negedge clk) in = ~in;
      @(posedge clk);
      `CHECK(out === ~in, "out must be the complement of in")
      $display("   %b   %b", in, out);
    end
    `TB_DONE("day13_cmos_inverter")
  end
endmodule
