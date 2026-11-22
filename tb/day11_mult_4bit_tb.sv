`include "tb_utils.svh"
module day11_mult_4bit_tb;
  logic clk = 1'b0;
  logic [3:0] a, b;
  logic [7:0] p;
  int errors = 0;

  mult_4bit dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day11_mult_4bit.vcd")

  `ASSERT_CLK(a_mul,  clk, 1'b0, p == (8'(a) * 8'(b)))
  `ASSERT_CLK(a_zero, clk, 1'b0, (a == 0 || b == 0) |-> (p == 0))

  initial begin
    for (int i = 0; i < 256; i++) begin
      @(negedge clk) {a, b} = i[7:0];
      @(posedge clk);
      `CHECK(p == (8'(a) * 8'(b)), "product")
      if (i % 29 == 0) $display("  %2d x %2d = %3d", a, b, p);
    end
    `TB_DONE("day11_mult_4bit")
  end
endmodule
