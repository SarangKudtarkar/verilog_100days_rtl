`include "tb_utils.svh"
module day46_mealy_seq_detector_tb;
  logic clk = 1'b0, rst = 1'b1, in = 1'b0, y;
  logic pv = 1'b0, prev = 1'b0, exp_y;
  int errors = 0, n_det = 0, cyc = 0;
  localparam logic [0:23] PAT = 24'b1100_1011_1100_0101_0011_1000;

  mealy_seq_detector dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day46_mealy_seq_detector.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_equal_bits, clk, rst, y |-> (in == $past(in)))     // detection needs two equal bits
  `ASSERT_CLK(a_non_overlap, clk, rst, y |=> !y)                    // non-overlapping

  // ---- scoreboard : independent behavioural model ----
  always @(posedge clk) if (!rst) begin
    exp_y = pv && (prev == in);
    `CHECK(y == exp_y, "Mealy output")
    if (cyc < 24) $display("  in=%b  y=%b", in, y);
    cyc++;
    if (y) n_det++;
    if (exp_y) pv = 1'b0; else begin pv = 1'b1; prev = in; end
  end

  initial begin
    repeat (3) @(negedge clk);
    rst = 1'b0;
    for (int i = 0; i < 24; i++) @(negedge clk) in = PAT[i];
    for (int i = 0; i < 400; i++) @(negedge clk) in = $urandom;
    @(negedge clk);
    $display("  detections = %0d", n_det);
    `CHECK(n_det > 20, "sequence detected several times")
    `TB_DONE("day46_mealy_seq_detector")
  end
endmodule
