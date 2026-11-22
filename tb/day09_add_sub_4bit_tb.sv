`include "tb_utils.svh"
module day09_add_sub_4bit_tb;
  logic clk = 1'b0;
  logic [3:0] a, b, result;
  logic mode, cout, ovf;
  int errors = 0, exp;

  add_sub_4bit dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day09_add_sub_4bit.vcd")

  `ASSERT_CLK(a_add, clk, 1'b0, !mode |-> ({cout, result} == (5'(a) + 5'(b))))
  `ASSERT_CLK(a_sub, clk, 1'b0,  mode |-> (result == 4'(a - b)))
  `ASSERT_CLK(a_nb,  clk, 1'b0,  mode |-> (cout == (a >= b)))

  initial begin
    for (int i = 0; i < 512; i++) begin
      @(negedge clk) {mode, a, b} = i[8:0];
      @(posedge clk);
      exp = mode ? ($signed(a) - $signed(b)) : ($signed(a) + $signed(b));
      if (!mode) begin `CHECK({cout, result} == (5'(a) + 5'(b)), "addition") end
      else       begin `CHECK(result == 4'(a - b), "subtraction") end
      `CHECK(ovf == (exp > 7 || exp < -8), "signed overflow flag")
      if (i % 53 == 0)
        $display("  %s : a=%2d b=%2d -> result=%2d cout=%b ovf=%b",
                 mode ? "SUB" : "ADD", a, b, result, cout, ovf);
    end
    `TB_DONE("day09_add_sub_4bit")
  end
endmodule
