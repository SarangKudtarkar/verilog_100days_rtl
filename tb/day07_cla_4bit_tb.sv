`include "tb_utils.svh"
module day07_cla_4bit_tb;
  logic clk = 1'b0;
  logic [3:0]  a, b, sum;
  logic        cin, cout;
  logic [15:0] a16, b16, sum16;
  logic        cin16, cout16;
  int errors = 0;

  cla_4bit  dut4  (.a, .b, .cin, .sum, .cout);
  cla_16bit dut16 (.a(a16), .b(b16), .cin(cin16), .sum(sum16), .cout(cout16));
  always #5 clk = ~clk;
  `DUMP("waves/day07_cla_4bit.vcd")

  `ASSERT_CLK(a_cla4,  clk, 1'b0, ({cout, sum} == (5'(a) + 5'(b) + 5'(cin))))
  `ASSERT_CLK(a_cla16, clk, 1'b0, ({cout16, sum16} == (17'(a16) + 17'(b16) + 17'(cin16))))

  initial begin
    for (int i = 0; i < 512; i++) begin
      @(negedge clk) {cin, a, b} = i[8:0];
      @(posedge clk);
      `CHECK({cout, sum} == (5'(a) + 5'(b) + 5'(cin)), "4-bit CLA")
      if (i % 61 == 0) $display("  CLA4 : %2d + %2d + %0d = %2d cout=%b", a, b, cin, sum, cout);
    end
    for (int i = 0; i < 2000; i++) begin
      @(negedge clk) begin a16 = $urandom; b16 = $urandom; cin16 = $urandom; end
      @(posedge clk);
      `CHECK({cout16, sum16} == (17'(a16) + 17'(b16) + 17'(cin16)), "16-bit CLA top")
    end
    $display("  CLA16 sample: %0d + %0d + %0d = %0d", a16, b16, cin16, {cout16, sum16});
    `TB_DONE("day07_cla_4bit")
  end
endmodule
