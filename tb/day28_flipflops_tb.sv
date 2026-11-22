`include "tb_utils.svh"
module day28_flipflops_tb;
  logic clk = 1'b0, rst_n = 1'b0;
  logic d, t, j, k, s, r;
  logic q_d, qn_d, q_t, qn_t, q_jk, qn_jk, q_sr, qn_sr, inv_sr;
  logic e_d, e_t, e_jk, e_sr;
  int errors = 0;

  d_ff  u_d  (.clk, .rst_n, .d,      .q(q_d),  .qn(qn_d));
  t_ff  u_t  (.clk, .rst_n, .t,      .q(q_t),  .qn(qn_t));
  jk_ff u_jk (.clk, .rst_n, .j, .k,  .q(q_jk), .qn(qn_jk));
  sr_ff u_sr (.clk, .rst_n, .s, .r,  .q(q_sr), .qn(qn_sr), .invalid(inv_sr));
  always #5 clk = ~clk;
  `DUMP("waves/day28_flipflops.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_d,      clk, !rst_n, 1'b1 |=> (q_d == $past(d)))
  `ASSERT_CLK(a_t_tog,  clk, !rst_n, t  |=> (q_t != $past(q_t)))
  `ASSERT_CLK(a_t_hold, clk, !rst_n, !t |=> $stable(q_t))
  `ASSERT_CLK(a_jk_s,   clk, !rst_n, ( j && !k) |=> q_jk)
  `ASSERT_CLK(a_jk_r,   clk, !rst_n, (!j &&  k) |=> !q_jk)
  `ASSERT_CLK(a_jk_h,   clk, !rst_n, (!j && !k) |=> $stable(q_jk))
  `ASSERT_CLK(a_jk_t,   clk, !rst_n, ( j &&  k) |=> (q_jk != $past(q_jk)))
  `ASSERT_CLK(a_sr_s,   clk, !rst_n, ( s && !r) |=> q_sr)
  `ASSERT_CLK(a_sr_r,   clk, !rst_n, (!s &&  r) |=> !q_sr)
  `ASSERT_CLK(a_sr_h,   clk, !rst_n, (!s && !r) |=> $stable(q_sr))
  `ASSERT_CLK(a_sr_inv, clk, !rst_n, (s && r) |-> inv_sr)
  `ASSERT_CLK(a_qn,     clk, !rst_n, (qn_d == !q_d) && (qn_t == !q_t) && (qn_jk == !q_jk) && (qn_sr == !q_sr))

  initial begin
    {d, t, j, k, s, r} = '0; {e_d, e_t, e_jk, e_sr} = '0;
    repeat (2) @(negedge clk);
    rst_n = 1'b1;
    $display("  cycle | D T | J K | S R | qD qT qJK qSR");
    for (int i = 0; i < 300; i++) begin
      @(negedge clk);
      `CHECK({q_d, q_t, q_jk, q_sr} == {e_d, e_t, e_jk, e_sr}, "flip-flop outputs")
      if (i < 12) $display("  %5d | %b %b | %b %b | %b %b |  %b  %b  %b   %b",
                           i, d, t, j, k, s, r, q_d, q_t, q_jk, q_sr);
      {d, t, j, k, s, r} = 6'($urandom);
      // reference model of what the next clock edge does
      e_d = d;
      if (t) e_t = ~e_t;
      case ({j, k}) 2'b01: e_jk = 1'b0; 2'b10: e_jk = 1'b1; 2'b11: e_jk = ~e_jk; default: ; endcase
      case ({s, r}) 2'b01: e_sr = 1'b0; 2'b10: e_sr = 1'b1; default: ; endcase
    end
    // asynchronous reset in the middle of a clock period
    @(negedge clk) #2 rst_n = 1'b0;
    #1 `CHECK({q_d, q_t, q_jk, q_sr} == 4'b0000, "asynchronous reset clears all flip-flops")
    rst_n = 1'b1;
    `TB_DONE("day28_flipflops")
  end
endmodule
