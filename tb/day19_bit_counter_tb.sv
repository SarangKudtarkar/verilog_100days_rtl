`include "tb_utils.svh"
module day19_bit_counter_tb;
  logic clk = 1'b0;
  logic [7:0] data;
  logic [3:0] ones, zeros;
  int errors = 0;

  bit_counter #(8) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day19_bit_counter.vcd")

  `ASSERT_CLK(a_sum,  clk, 1'b0, (ones + zeros) == 4'd8)
  `ASSERT_CLK(a_ones, clk, 1'b0, ones == $countones(data))

  initial begin
    for (int i = 0; i < 256; i++) begin
      @(negedge clk) data = i[7:0];
      @(posedge clk);
      `CHECK(ones  == $countones(data), "number of ones")
      `CHECK(zeros == 8 - $countones(data), "number of zeros")
      if (i % 43 == 0) $display("  data=%08b ones=%0d zeros=%0d", data, ones, zeros);
    end
    `TB_DONE("day19_bit_counter")
  end
endmodule
