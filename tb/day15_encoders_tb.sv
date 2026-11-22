`include "tb_utils.svh"
module day15_encoders_tb;
  logic clk = 1'b0;
  logic [7:0]  oct_i;  logic [2:0] oct_b;  logic oct_v;
  logic [9:0]  dec_i;  logic [3:0] dec_b;  logic dec_v;
  logic [15:0] hex_i;  logic [3:0] hex_b;  logic hex_v;
  int errors = 0, hi;

  enc_oct2bin dut_o (.oct_i, .bin(oct_b), .valid(oct_v));
  enc_dec2bin dut_d (.dec_i, .bin(dec_b), .valid(dec_v));
  enc_hex2bin dut_h (.hex_i, .bin(hex_b), .valid(hex_v));
  always #5 clk = ~clk;
  `DUMP("waves/day15_encoders.vcd")

  `ASSERT_CLK(a_oct, clk, 1'b0, oct_v |-> oct_i[oct_b])
  `ASSERT_CLK(a_dec, clk, 1'b0, dec_v |-> dec_i[dec_b])
  `ASSERT_CLK(a_hex, clk, 1'b0, hex_v |-> hex_i[hex_b])
  `ASSERT_CLK(a_inv, clk, 1'b0, (oct_i == 0) |-> !oct_v)

  initial begin
    // one-hot inputs
    for (int i = 0; i < 16; i++) begin
      @(negedge clk) begin oct_i = 8'd1 << (i % 8); dec_i = 10'd1 << (i % 10); hex_i = 16'd1 << i; end
      @(posedge clk);
      `CHECK(oct_b == 3'(i % 8) && oct_v, "octal -> binary")
      `CHECK(dec_b == 4'(i % 10) && dec_v, "decimal -> binary")
      `CHECK(hex_b == 4'(i) && hex_v, "hex -> binary")
      $display("  one-hot idx %2d : oct->%03b dec->%04b hex->%04b", i, oct_b, dec_b, hex_b);
    end
    // all-zero input => not valid
    @(negedge clk) begin oct_i = 0; dec_i = 0; hex_i = 0; end
    @(posedge clk);
    `CHECK(!oct_v && !dec_v && !hex_v, "valid low for zero input")
    // random multi-hot inputs => highest set bit is encoded
    for (int n = 0; n < 200; n++) begin
      @(negedge clk) begin oct_i = $urandom; dec_i = $urandom_range(0, 1023); hex_i = $urandom; end
      @(posedge clk);
      hi = -1; for (int i = 0; i < 16; i++) if (hex_i[i]) hi = i;
      `CHECK((hi < 0) ? !hex_v : (hex_v && hex_b == 4'(hi)), "hex priority")
      hi = -1; for (int i = 0; i < 8; i++) if (oct_i[i]) hi = i;
      `CHECK((hi < 0) ? !oct_v : (oct_v && oct_b == 3'(hi)), "octal priority")
      hi = -1; for (int i = 0; i < 10; i++) if (dec_i[i]) hi = i;
      `CHECK((hi < 0) ? !dec_v : (dec_v && dec_b == 4'(hi)), "decimal priority")
    end
    `TB_DONE("day15_encoders")
  end
endmodule
