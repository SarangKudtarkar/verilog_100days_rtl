`include "tb_utils.svh"
module day27_jk_d_latch_tb;
  logic clk = 1'b0, ready = 1'b0;
  logic en_d, d, q_d;
  logic en_j, j, k, q_j, qn_j;
  logic exp_d, exp_j;
  int errors = 0;

  d_latch  u_d  (.en(en_d), .d, .q(q_d));
  jk_latch u_jk (.en(en_j), .j, .k, .q(q_j), .qn(qn_j));
  always #5 clk = ~clk;
  `DUMP("waves/day27_jk_d_latch.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_d_transp, clk, !ready, en_d  |-> (q_d == d))
  `ASSERT_CLK(a_d_hold,   clk, !ready, !en_d |-> $stable(q_d))
  `ASSERT_CLK(a_jk_set,   clk, !ready, (en_j && j && !k) |-> q_j)
  `ASSERT_CLK(a_jk_rst,   clk, !ready, (en_j && !j && k) |-> !q_j)
  `ASSERT_CLK(a_jk_tog,   clk, !ready, (en_j && j && k && !$past(en_j)) |-> (q_j != $past(q_j)))
  `ASSERT_CLK(a_jk_hold,  clk, !ready, !en_j |-> $stable(q_j))

  initial begin
    // ----- D latch -----
    @(negedge clk) {en_d, d} = 2'b11;  exp_d = 1'b1;
    @(posedge clk); ready = 1'b1;
    for (int i = 0; i < 100; i++) begin
      @(negedge clk) {en_d, d} = $urandom;
      if (en_d) exp_d = d;
      @(posedge clk);
      `CHECK(q_d == exp_d, "D latch output")
    end
    // ----- JK latch : (j,k) set while disabled, then a 1-cycle enable pulse -----
    @(negedge clk) {en_j, j, k} = 3'b001; exp_j = 1'b0;
    @(posedge clk);
    @(negedge clk) {en_j, j, k} = 3'b101; exp_j = 1'b0;       // reset (J=0,K=1)
    @(posedge clk);
    for (int i = 0; i < 60; i++) begin
      @(negedge clk) en_j = 1'b0;                              // close latch first ...
      #1 {j, k} = 2'($urandom);                                // ... then choose J,K
      @(posedge clk);
      `CHECK(q_j == exp_j, "JK latch must hold while closed")
      @(negedge clk) en_j = 1'b1;                              // open latch for one cycle
      case ({j, k})
        2'b01: exp_j = 1'b0;
        2'b10: exp_j = 1'b1;
        2'b11: exp_j = ~exp_j;
        default: ;
      endcase
      @(posedge clk);
      `CHECK(q_j == exp_j, "JK latch output")
      if (i < 8) $display("  J=%b K=%b -> Q=%b", j, k, q_j);
    end
    @(negedge clk) en_j = 1'b0;
    @(posedge clk);
    `TB_DONE("day27_jk_d_latch")
  end
endmodule
