`include "tb_utils.svh"
module day20_alu_tb;
  logic clk = 1'b0;
  logic [7:0] a, b, y;
  logic [3:0] op;
  logic carry, zero;
  int errors = 0;

  alu #(8) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day20_alu.vcd")

  // Reference model written with integers (independent of the RTL style)
  function automatic int ref_alu(input logic [7:0] x, z, input logic [3:0] o);
    int xi, zi;
    xi = x; zi = z;
    case (o)
      0:  return xi + zi;
      1:  return xi - zi;
      2:  return xi + 1;
      3:  return xi - 1;
      4:  return xi & zi;
      5:  return xi | zi;
      6:  return xi ^ zi;
      7:  return (~xi) & 255;
      8:  return (~(xi & zi)) & 255;
      9:  return (~(xi | zi)) & 255;
      10: return (~(xi ^ zi)) & 255;
      11: return xi << 1;
      12: return (xi >> 1) | ((xi & 1) << 8);
      13: return ((xi << 1) & 255) | (xi >> 7);
      14: return (xi >> 1) | ((xi & 1) << 7);
      default: return (xi == zi) ? 1 : 0;
    endcase
  endfunction

  // ---- SVA ----
  `ASSERT_CLK(a_zero, clk, 1'b0, zero == (y == 8'd0))
  `ASSERT_CLK(a_add,  clk, 1'b0, (op == 4'd0) |-> ({carry, y} == (9'(a) + 9'(b))))
  `ASSERT_CLK(a_and,  clk, 1'b0, (op == 4'd4) |-> (y == (a & b)))
  `ASSERT_CLK(a_xor,  clk, 1'b0, (op == 4'd6) |-> (y == (a ^ b)))
  `ASSERT_CLK(a_cmp,  clk, 1'b0, (op == 4'd15) |-> (y[0] == (a == b)))

  task automatic apply(input logic [7:0] ta, tb_, input logic [3:0] to);
    int r;
    @(negedge clk) begin a = ta; b = tb_; op = to; end
    @(posedge clk);
    r = ref_alu(ta, tb_, to);
    `CHECK(y == r[7:0],          "ALU result")
    `CHECK(carry == r[8],        "ALU carry")
    `CHECK(zero == (r[7:0] == 0),"ALU zero")
  endtask

  initial begin
    // directed corner cases for each op
    for (int o = 0; o < 16; o++) begin
      apply(8'h00, 8'h00, o[3:0]);
      apply(8'hFF, 8'hFF, o[3:0]);
      apply(8'hFF, 8'h01, o[3:0]);
      apply(8'h80, 8'h7F, o[3:0]);
      apply(8'hA5, 8'h5A, o[3:0]);
      $display("  op=%2d  a=A5 b=5A -> y=%02h carry=%b zero=%b", o, y, carry, zero);
    end
    // random
    for (int i = 0; i < 4000; i++) apply($urandom, $urandom, $urandom);
    `TB_DONE("day20_alu")
  end
endmodule
