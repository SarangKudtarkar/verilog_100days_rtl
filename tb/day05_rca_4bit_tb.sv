`include "tb_utils.svh"
module day05_rca_4bit_tb;
  logic clk = 1'b0;
  logic [3:0] a, b, sum;
  logic cin, cout;
  int errors = 0;

  rca_4bit dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day05_rca_4bit.vcd")

  `ASSERT_CLK(a_add, clk, 1'b0, ({cout, sum} == (5'(a) + 5'(b) + 5'(cin))))

  initial begin
    $display("Console results (every 37th vector):");
    for (int i = 0; i < 512; i++) begin          // exhaustive: 16 x 16 x 2
      @(negedge clk) {cin, a, b} = i[8:0];
      @(posedge clk);
      `CHECK({cout, sum} == (5'(a) + 5'(b) + 5'(cin)), "ripple-carry sum")
      if (i % 37 == 0)
        $display("  %2d + %2d + %0d = %2d  (cout=%b)", a, b, cin, sum, cout);
    end
    `TB_DONE("day05_rca_4bit")
  end
endmodule
