`include "tb_utils.svh"
module day49_fixed_priority_arbiter_tb;
  logic clk = 1'b0;
  logic [3:0] req, grant, exp_g;
  logic any_grant;
  int errors = 0;

  fixed_priority_arbiter #(4) dut (.req, .grant, .any_grant);
  always #5 clk = ~clk;
  `DUMP("waves/day49_fixed_priority_arbiter.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_onehot0,  clk, 1'b0, $onehot0(grant))
  `ASSERT_CLK(a_subset,   clk, 1'b0, (grant & ~req) == 4'b0)
  `ASSERT_CLK(a_live,     clk, 1'b0, (|req) |-> (|grant))
  `ASSERT_CLK(a_idle,     clk, 1'b0, (req == 0) |-> (grant == 0))
  `ASSERT_CLK(a_prio0,    clk, 1'b0, req[0] |-> grant[0])
  `ASSERT_CLK(a_prio1,    clk, 1'b0, (req[1] && !req[0]) |-> grant[1])
  `ASSERT_CLK(a_prio2,    clk, 1'b0, (req[2] && !req[1] && !req[0]) |-> grant[2])
  `ASSERT_CLK(a_prio3,    clk, 1'b0, (req[3] && !req[2] && !req[1] && !req[0]) |-> grant[3])
  `ASSERT_CLK(a_any,      clk, 1'b0, any_grant == (|req))

  initial begin
    $display("  req  -> grant");
    for (int i = 0; i < 16; i++) begin
      @(negedge clk) req = i[3:0];
      @(posedge clk);
      exp_g = '0;
      for (int b = 3; b >= 0; b--) if (req[b]) begin exp_g = '0; exp_g[b] = 1'b1; end
      `CHECK(grant == exp_g, "lowest-index request wins")
      $display("  %04b -> %04b", req, grant);
    end
    `TB_DONE("day49_fixed_priority_arbiter")
  end
endmodule
