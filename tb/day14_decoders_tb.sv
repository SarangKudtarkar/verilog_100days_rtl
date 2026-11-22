`include "tb_utils.svh"
module day14_decoders_tb;
  logic clk = 1'b0, en;
  logic [3:0] bin;
  logic [7:0]  oct_o;
  logic [9:0]  dec_o;
  logic [15:0] hex_o;
  int errors = 0;

  dec_bin2oct dut_o (.en, .bin(bin[2:0]), .oct_o);
  dec_bin2dec dut_d (.en, .bin, .dec_o);
  dec_bin2hex dut_h (.en, .bin, .hex_o);
  always #5 clk = ~clk;
  `DUMP("waves/day14_decoders.vcd")

  `ASSERT_CLK(a_oct_1hot, clk, 1'b0, $onehot0(oct_o))
  `ASSERT_CLK(a_dec_1hot, clk, 1'b0, $onehot0(dec_o))
  `ASSERT_CLK(a_hex_1hot, clk, 1'b0, $onehot0(hex_o))
  `ASSERT_CLK(a_en_off,   clk, 1'b0, !en |-> (oct_o == 0 && dec_o == 0 && hex_o == 0))
  `ASSERT_CLK(a_hex_sel,  clk, 1'b0, en |-> hex_o[bin])

  initial begin
    for (int i = 0; i < 32; i++) begin
      @(negedge clk) {en, bin} = i[4:0];
      @(posedge clk);
      `CHECK(oct_o == (en ? (8'd1 << bin[2:0]) : 8'd0), "octal decoder")
      `CHECK(dec_o == ((en && bin <= 9) ? (10'd1 << bin) : 10'd0), "decimal decoder")
      `CHECK(hex_o == (en ? (16'd1 << bin) : 16'd0), "hex decoder")
      if (en) $display("  bin=%04b  oct=%08b  dec=%010b  hex=%016b", bin, oct_o, dec_o, hex_o);
    end
    `TB_DONE("day14_decoders")
  end
endmodule
