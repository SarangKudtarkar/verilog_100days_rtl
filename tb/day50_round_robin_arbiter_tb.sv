`include "tb_utils.svh"
module day50_round_robin_arbiter_tb;
  logic clk = 1'b0, rst = 1'b1;
  logic [3:0] req = '0, grant;
  logic any_grant;
  int errors = 0;
  int waitc [4];
  int gcount [4];

  round_robin_arbiter #(4) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day50_round_robin_arbiter.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_onehot0, clk, rst, $onehot0(grant))
  `ASSERT_CLK(a_subset,  clk, rst, (grant & ~req) == 4'b0)
  `ASSERT_CLK(a_live,    clk, rst, (|req) |-> (|grant))
  `ASSERT_CLK(a_idle,    clk, rst, (req == 0) |-> (grant == 0))
  // with every requester active the grant must rotate 0 -> 1 -> 2 -> 3 -> 0
  for (genvar i = 0; i < 4; i++) begin : g_rot
    `ASSERT_CLK(a_rotate, clk, rst, ((&req) && grant[i]) |=> (!(&req) || grant[(i + 1) % 4]))
  end

  // ---- bounded-wait (starvation freedom): a continuous requester waits <= N-1 cycles ----
  always @(posedge clk) if (!rst) begin
    for (int i = 0; i < 4; i++) begin
      if (req[i] && !grant[i]) begin
        waitc[i]++;
        `CHECK(waitc[i] <= 3, "requester must be served within N-1 cycles")
      end else waitc[i] = 0;
      if (grant[i]) gcount[i]++;
    end
  end

  initial begin
    for (int i = 0; i < 4; i++) begin waitc[i] = 0; gcount[i] = 0; end
    repeat (3) @(negedge clk);
    rst = 1'b0;
    $display("  all four requesting -> grant rotates:");
    req = 4'hF;
    repeat (12) begin @(posedge clk); $display("    grant = %04b", grant); @(negedge clk); end
    // two requesters share equally
    req = 4'b0101;
    repeat (8) begin @(posedge clk); $display("    req=0101 grant = %04b", grant); @(negedge clk); end
    // random traffic
    for (int i = 0; i < 2000; i++) @(negedge clk) req = $urandom;
    // heavy contention: every requester should have been granted many times
    for (int i = 0; i < 4; i++) begin
      $display("  requester %0d granted %0d times", i, gcount[i]);
      `CHECK(gcount[i] > 100, "every requester is served")
    end
    `TB_DONE("day50_round_robin_arbiter")
  end
endmodule
