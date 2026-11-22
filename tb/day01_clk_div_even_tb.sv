`include "tb_utils.svh"
module day01_clk_div_even_tb;
  localparam int N = 3;                    // period of clk_out = 2*N clk cycles
  logic clk = 1'b0, rst = 1'b1;
  logic clk_out;
  int errors = 0, periods = 0;
  longint t_prev = 0;

  clk_div_even #(.N(N)) dut (.clk, .rst, .clk_out);
  always #5 clk = ~clk;
  `DUMP("waves/day01_clk_div_even.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_period,    clk, rst, ($rose(clk_out) && !$past(rst, 2*N)) |-> ($past(clk_out, 2*N) && !$past(clk_out, 2*N+1)))
  `ASSERT_CLK(a_high_time, clk, rst, $fell(clk_out) |-> ($past(clk_out, N) && !$past(clk_out, N+1)))

  // ---- measure period in simulation time ----
  always @(posedge clk_out) begin
    if (t_prev != 0) begin
      periods++;
      `CHECK(($time - t_prev) == 10*2*N, "clk_out period must be 2N clk cycles")
      $display("  clk_out period = %0t (expected %0d)", $time - t_prev, 10*2*N);
    end
    t_prev = $time;
  end

  initial begin
    repeat (3) @(posedge clk);
    #1 rst = 1'b0;
    repeat (12*2*N) @(posedge clk);
    `CHECK(periods >= 10, "enough output periods observed")
    `TB_DONE("day01_clk_div_even")
  end
endmodule
