`include "tb_utils.svh"
module day38_universal_counter_tb;
  logic clk = 1'b0, rst = 1'b1, en = 1'b0, load = 1'b0, up = 1'b1;
  logic [3:0] d = '0, q, exp;
  int errors = 0;

  universal_counter #(4) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day38_universal_counter.vcd")

  `ASSERT_CLK(a_up,   clk, rst, (!load &&  en &&  up) |=> (q == $past(q) + 4'd1))
  `ASSERT_CLK(a_down, clk, rst, (!load &&  en && !up) |=> (q == $past(q) - 4'd1))
  `ASSERT_CLK(a_hold, clk, rst, (!load && !en)        |=> $stable(q))
  `ASSERT_CLK(a_load, clk, rst, load                  |=> (q == $past(d)))

  initial begin
    exp = '0;
    repeat (3) @(negedge clk);
    rst = 1'b0;
    // directed: count up through the wrap point, then down through zero
    en = 1'b1; up = 1'b1;
    repeat (18) begin @(negedge clk); exp = exp + 4'd1; `CHECK(q == exp, "up count") end
    up = 1'b0;
    repeat (20) begin @(negedge clk); exp = exp - 4'd1; `CHECK(q == exp, "down count") end
    en = 1'b0;                                    // stop counting before the random phase
    $display("  after directed up/down test q = %0d", q);
    // random
    for (int i = 0; i < 500; i++) begin
      @(negedge clk);
      `CHECK(q == exp, "random operation")
      {en, load, up} = 3'($urandom);
      d = $urandom;
      if (load)    exp = d;
      else if (en) exp = up ? exp + 4'd1 : exp - 4'd1;
    end
    `TB_DONE("day38_universal_counter")
  end
endmodule
