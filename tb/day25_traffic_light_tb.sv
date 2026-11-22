`include "tb_utils.svh"
module day25_traffic_light_tb;
  localparam int TR = 5, TG = 6, TY = 2;
  logic clk = 1'b0, rst = 1'b1;
  logic red, yellow, green;
  int errors = 0, run_len = 0, cycles = 0;
  logic [2:0] prev = 3'b000;

  traffic_light #(TR, TG, TY) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day25_traffic_light.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_onehot,  clk, rst, $onehot({red, yellow, green}))
  `ASSERT_CLK(a_r_next,  clk, rst, red    |=> (red    || green))
  `ASSERT_CLK(a_g_next,  clk, rst, green  |=> (green  || yellow))
  `ASSERT_CLK(a_y_next,  clk, rst, yellow |=> (yellow || red))
  `ASSERT_CLK(a_g_len,   clk, rst, $fell(green)  |-> (yellow && $past(green,  TG) && !$past(green,  TG+1)))
  `ASSERT_CLK(a_y_len,   clk, rst, $fell(yellow) |-> (red    && $past(yellow, TY) && !$past(yellow, TY+1)))

  // ---- procedural check of each phase duration ----
  always @(posedge clk) if (!rst) begin
    cycles++;
    if ({red, yellow, green} == prev) run_len++;
    else begin
      if (prev == 3'b100) `CHECK(run_len == TR, "red duration")
      if (prev == 3'b001) `CHECK(run_len == TG, "green duration")
      if (prev == 3'b010) `CHECK(run_len == TY, "yellow duration")
      if (prev != 3'b000) $display("  phase %s lasted %0d cycles",
                                   prev == 3'b100 ? "RED" : prev == 3'b001 ? "GREEN" : "YELLOW", run_len);
      run_len = 1;
      prev = {red, yellow, green};
    end
  end

  initial begin
    repeat (3) @(posedge clk);
    #1 rst = 1'b0;
    repeat (3 * (TR + TG + TY)) @(posedge clk);
    `TB_DONE("day25_traffic_light")
  end
endmodule
