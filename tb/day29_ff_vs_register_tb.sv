`include "tb_utils.svh"
module day29_ff_vs_register_tb;
  logic clk = 1'b0, rst_n = 1'b0, en;
  logic [3:0] d, q_ff, q_reg, e_reg, e_ff;
  int errors = 0;

  dff_4bit u_ff  (.clk, .d, .q(q_ff));
  reg_4bit u_reg (.clk, .rst_n, .en, .d, .q(q_reg));
  always #5 clk = ~clk;
  `DUMP("waves/day29_ff_vs_register.vcd")

  `ASSERT_CLK(a_ff_follow, clk, 1'b0,   1'b1 |=> (q_ff == $past(d)))
  `ASSERT_CLK(a_reg_load, clk, !rst_n,  en  |=> (q_reg == $past(d)))
  `ASSERT_CLK(a_reg_hold, clk, !rst_n, !en  |=> $stable(q_reg))

  initial begin
    {en, d} = '0; e_reg = '0;
    repeat (2) @(negedge clk);
    rst_n = 1'b1;
    $display("  d   en | FF(q)  REG(q)   <- register keeps its value when en=0");
    for (int i = 0; i < 100; i++) begin
      @(negedge clk);
      `CHECK(q_reg == e_reg, "register output")
      if (i > 0) begin `CHECK(q_ff == e_ff, "flip-flop output") end
      if (i < 12) $display("  %2d   %b |  %2d     %2d", d, en, q_ff, q_reg);
      {en, d} = 5'($urandom);
      e_ff = d;
      if (en) e_reg = d;
    end
    `TB_DONE("day29_ff_vs_register")
  end
endmodule
