`include "tb_utils.svh"
module day03_clk_div_odd_tb;
  localparam int N = 3;
  logic clk = 1'b0, rst = 1'b1;
  logic clk_out;
  int errors = 0, periods = 0;
  longint t_rise = 0;

  clk_div_odd #(.N(N)) dut (.clk, .rst, .clk_out);
  always #5 clk = ~clk;
  `DUMP("waves/day03_clk_div_odd.vcd")

  // ---- SVA : period must be N clocks ----
  `ASSERT_CLK(a_period, clk, rst, ($rose(clk_out) && !$past(rst, N+1)) |-> ($past(clk_out, N) && !$past(clk_out, N+1)))

  // ---- 50 % duty check in simulation time ----
  always @(posedge clk_out) if (!rst) begin
    if (t_rise != 0) begin
      periods++;
      `CHECK(($time - t_rise) == 10*N, "period must be N clk cycles")
    end
    t_rise = $time;
  end
  always @(negedge clk_out) if (!rst && t_rise != 0) begin
    `CHECK(($time - t_rise) == 5*N, "duty cycle must be 50%")
    $display("  high time = %0t of period %0d", $time - t_rise, 10*N);
  end

  initial begin
    repeat (3) @(posedge clk);
    #1 rst = 1'b0;
    repeat (15*N) @(posedge clk);
    `CHECK(periods >= 8, "enough periods observed")
    `TB_DONE("day03_clk_div_odd")
  end
endmodule
