`include "tb_utils.svh"
module day48_prime_seq_gen_tb;
  logic clk = 1'b0, rst = 1'b1;
  logic [3:0] seq_out;
  int errors = 0;
  localparam logic [3:0] PR [5] = '{4'd2, 4'd3, 4'd5, 4'd7, 4'd11};

  prime_seq_gen dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day48_prime_seq_gen.vcd")

  `ASSERT_CLK(a_legal, clk, rst, seq_out == 2 || seq_out == 3 || seq_out == 5 || seq_out == 7 || seq_out == 11)
  `ASSERT_CLK(a_2_3,   clk, rst, (seq_out == 2)  |=> (seq_out == 3))
  `ASSERT_CLK(a_3_5,   clk, rst, (seq_out == 3)  |=> (seq_out == 5))
  `ASSERT_CLK(a_5_7,   clk, rst, (seq_out == 5)  |=> (seq_out == 7))
  `ASSERT_CLK(a_7_11,  clk, rst, (seq_out == 7)  |=> (seq_out == 11))
  `ASSERT_CLK(a_11_2,  clk, rst, (seq_out == 11) |=> (seq_out == 2))

  initial begin
    repeat (3) @(posedge clk);
    @(negedge clk) rst = 1'b0;
    for (int i = 0; i < 30; i++) begin
      `CHECK(seq_out == PR[i % 5], "prime sequence")
      $display("  seq_out = %0d", seq_out);
      @(negedge clk);
    end
    `TB_DONE("day48_prime_seq_gen")
  end
endmodule
