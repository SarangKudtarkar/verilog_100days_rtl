`include "tb_utils.svh"
module day32_universal_shift_reg_tb;
  logic clk = 1'b0, rst = 1'b1, si = 1'b0;
  logic [2:0] mode = '0;
  logic [7:0] pin = '0, q, exp;
  int errors = 0;

  universal_shift_reg #(8) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day32_universal_shift_reg.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_load, clk, rst, (mode == 3'd1) |=> (q == $past(pin)))
  `ASSERT_CLK(a_shl,  clk, rst, (mode == 3'd2) |=> (q == {$past(q[6:0]), $past(si)}))
  `ASSERT_CLK(a_shr,  clk, rst, (mode == 3'd3) |=> (q == {$past(si), $past(q[7:1])}))
  `ASSERT_CLK(a_rol,  clk, rst, (mode == 3'd4) |=> (q == {$past(q[6:0]), $past(q[7])}))
  `ASSERT_CLK(a_ror,  clk, rst, (mode == 3'd5) |=> (q == {$past(q[0]), $past(q[7:1])}))
  `ASSERT_CLK(a_hold, clk, rst, (mode == 3'd0 || mode > 3'd5) |=> $stable(q))
  `ASSERT_CLK(a_rot_pop, clk, rst, (mode == 3'd4 || mode == 3'd5) |=> ($countones(q) == $countones($past(q))))

  initial begin
    exp = '0;
    repeat (2) @(negedge clk);
    rst = 1'b0;
    for (int i = 0; i < 600; i++) begin
      @(negedge clk);
      `CHECK(q == exp, "shift register contents")
      if (i < 14) $display("  mode=%0d  q=%08b", mode, q);
      mode = (i < 2) ? 3'd1 : 3'($urandom_range(0, 7));
      pin  = (i < 2) ? 8'hA5 : $urandom;
      si   = $urandom;
      case (mode)
        3'd1: exp = pin;
        3'd2: exp = {exp[6:0], si};
        3'd3: exp = {si, exp[7:1]};
        3'd4: exp = {exp[6:0], exp[7]};
        3'd5: exp = {exp[0], exp[7:1]};
        default: ;
      endcase
    end
    `TB_DONE("day32_universal_shift_reg")
  end
endmodule
