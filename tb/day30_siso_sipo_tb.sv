`include "tb_utils.svh"
module day30_siso_sipo_tb;
  logic clk = 1'b0, rst = 1'b1, sin = 1'b0, sout;
  logic [3:0] q, m;
  int errors = 0;

  siso_4bit u_siso (.clk, .rst, .sin, .sout);
  sipo_4bit u_sipo (.clk, .rst, .sin, .q);
  always #5 clk = ~clk;
  `DUMP("waves/day30_siso_sipo.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_siso, clk, rst, sout == $past(sin, 4))
  `ASSERT_CLK(a_sipo, clk, rst, q == {$past(sin, 4), $past(sin, 3), $past(sin, 2), $past(sin, 1)})

  initial begin
    m = '0;
    repeat (5) @(negedge clk);
    rst = 1'b0;
    for (int i = 0; i < 60; i++) begin
      @(negedge clk);
      `CHECK(q == m,       "SIPO parallel word")
      `CHECK(sout == m[3], "SISO serial output")
      sin = $urandom;
      m   = {m[2:0], sin};
    end
    $display("  last SIPO word = %04b, SISO out = %b", q, sout);
    `TB_DONE("day30_siso_sipo")
  end
endmodule
