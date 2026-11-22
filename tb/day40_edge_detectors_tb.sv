`include "tb_utils.svh"
module day40_edge_detectors_tb;
  logic clk = 1'b0, rst = 1'b1, sig = 1'b0, pv = 1'b0;
  logic pos_edge, neg_edge;
  int errors = 0, n_pos = 0, n_neg = 0;

  pos_edge_detector u_pos (.clk, .rst, .sig, .pos_edge);
  neg_edge_detector u_neg (.clk, .rst, .sig, .neg_edge);
  always #5 clk = ~clk;
  `DUMP("waves/day40_edge_detectors.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_pos,  clk, rst, pos_edge == ( sig && !$past(sig)))
  `ASSERT_CLK(a_neg,  clk, rst, neg_edge == (!sig &&  $past(sig)))
  `ASSERT_CLK(a_excl, clk, rst, !(pos_edge && neg_edge))

  always @(posedge clk) if (!rst) begin
    `CHECK(pos_edge == (sig && !pv), "positive edge pulse")
    `CHECK(neg_edge == (!sig && pv), "negative edge pulse")
    if (pos_edge) n_pos++;
    if (neg_edge) n_neg++;
    pv = sig;
  end

  initial begin
    repeat (3) @(negedge clk);
    rst = 1'b0;
    for (int i = 0; i < 200; i++) begin
      @(negedge clk);
      if ($urandom_range(0, 99) < 40) sig = ~sig;
    end
    $display("  detected %0d rising and %0d falling edges", n_pos, n_neg);
    `CHECK(n_pos > 10 && (n_pos - n_neg) inside {-1, 0, 1}, "edge counts are consistent")
    `TB_DONE("day40_edge_detectors")
  end
endmodule
