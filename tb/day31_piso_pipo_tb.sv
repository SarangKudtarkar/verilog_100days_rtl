`include "tb_utils.svh"
module day31_piso_pipo_tb;
  logic clk = 1'b0, rst = 1'b1, load = 1'b0, en = 1'b0;
  logic [3:0] d, q, e_q;
  logic sout;
  int errors = 0;

  piso_4bit u_piso (.clk, .rst, .load, .d, .sout);
  pipo_4bit u_pipo (.clk, .rst, .en, .d, .q);
  always #5 clk = ~clk;
  `DUMP("waves/day31_piso_pipo.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_piso_load,  clk, rst, load  |=> (sout == $past(d[3])))
  `ASSERT_CLK(a_piso_shift, clk, rst, !load |=> (sout == $past(u_piso.sr[2])))
  `ASSERT_CLK(a_pipo_load,  clk, rst, en    |=> (q == $past(d)))
  `ASSERT_CLK(a_pipo_hold,  clk, rst, !en   |=> $stable(q))

  initial begin
    d = '0; e_q = '0;
    repeat (3) @(negedge clk);
    rst = 1'b0;
    for (int n = 0; n < 12; n++) begin
      // ---- PISO : load a word, shift it out MSB first ----
      @(negedge clk) begin load = 1'b1; d = $urandom; end
      @(negedge clk) begin load = 1'b0; `CHECK(sout == d[3], "PISO bit 3") end
      for (int i = 2; i >= 0; i--) begin
        @(negedge clk) `CHECK(sout == d[i], "PISO shifting")
      end
      if (n < 4) $display("  PISO word %04b shifted out MSB first", d);
    end
    // ---- PIPO : random loads with enable ----
    for (int i = 0; i < 60; i++) begin
      @(negedge clk);
      `CHECK(q == e_q, "PIPO output")
      {en, d} = 5'($urandom);
      if (en) e_q = d;
    end
    `TB_DONE("day31_piso_pipo")
  end
endmodule
