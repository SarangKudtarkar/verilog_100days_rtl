`include "tb_utils.svh"
module day12_gray_bin_tb;
  logic clk = 1'b0;
  logic [3:0] bin_in, gray, bin_back, gray_prev;
  int errors = 0;

  bin2gray_4bit dut_b2g (.bin(bin_in), .gray);
  gray2bin_4bit dut_g2b (.gray, .bin(bin_back));
  always #5 clk = ~clk;
  `DUMP("waves/day12_gray_bin.vcd")

  `ASSERT_CLK(a_roundtrip, clk, 1'b0, bin_back == bin_in)
  `ASSERT_CLK(a_msb,       clk, 1'b0, gray[3] == bin_in[3])

  initial begin
    $display("  BIN   GRAY");
    for (int i = 0; i < 16; i++) begin
      @(negedge clk) bin_in = i[3:0];
      @(posedge clk);
      `CHECK(gray == (bin_in ^ (bin_in >> 1)), "binary -> gray")
      `CHECK(bin_back == bin_in, "gray -> binary round trip")
      if (i > 0) `CHECK($countones(gray ^ gray_prev) == 1, "adjacent gray codes differ in 1 bit")
      gray_prev = gray;
      $display("  %04b  %04b", bin_in, gray);
    end
    `TB_DONE("day12_gray_bin")
  end
endmodule
