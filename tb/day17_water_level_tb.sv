`include "tb_utils.svh"
module day17_water_level_tb;
  logic clk = 1'b0;
  logic [7:0] sensor;
  logic [2:0] level;
  logic empty, full;
  int errors = 0;

  water_level_indicator dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day17_water_level.vcd")

  `ASSERT_CLK(a_full,  clk, 1'b0, full  |-> (level == 3'd7))
  `ASSERT_CLK(a_empty, clk, 1'b0, empty |-> (sensor == 8'd0))
  `ASSERT_CLK(a_xor,   clk, 1'b0, !(empty && full))

  initial begin
    $display("Console results (water rising, thermometer-coded probes):");
    for (int k = 0; k <= 8; k++) begin
      @(negedge clk) sensor = 8'((1 << k) - 1);
      @(posedge clk);
      `CHECK(empty == (k == 0), "empty flag")
      `CHECK(full  == (k == 8), "full flag")
      if (k > 0) `CHECK(level == 3'(k - 1), "level code")
      $display("  sensors=%08b  level=%0d  empty=%b full=%b", sensor, level, empty, full);
    end
    `TB_DONE("day17_water_level")
  end
endmodule
