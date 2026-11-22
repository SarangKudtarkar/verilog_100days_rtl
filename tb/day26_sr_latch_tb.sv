`include "tb_utils.svh"
module day26_sr_latch_tb;
  logic clk = 1'b0;
  logic s_n, r_n, s, r;
  wire  qa, qna, qb, qnb;
  int errors = 0;
  // vectors: {s_n,r_n} for NAND and {s,r} for NOR ; expected q (2 = invalid)
  localparam logic [1:0] NAND_V [8] = '{2'b01, 2'b11, 2'b10, 2'b11, 2'b01, 2'b00, 2'b01, 2'b11};
  localparam logic [1:0] NOR_V  [8] = '{2'b10, 2'b00, 2'b01, 2'b00, 2'b10, 2'b11, 2'b10, 2'b00};
  localparam int         EXP    [8] = '{1, 1, 0, 0, 1, 2, 1, 1};

  sr_latch_nand u_nand (.s_n, .r_n, .q(qa), .qn(qna));
  sr_latch_nor  u_nor  (.s, .r, .q(qb), .qn(qnb));
  always #5 clk = ~clk;
  `DUMP("waves/day26_sr_latch.vcd")

  // ---- SVA (NAND) ----
  `ASSERT_CLK(a_nand_set,  clk, 1'b0, (!s_n &&  r_n) |-> ( qa && !qna))
  `ASSERT_CLK(a_nand_rst,  clk, 1'b0, ( s_n && !r_n) |-> (!qa &&  qna))
  `ASSERT_CLK(a_nand_inv,  clk, 1'b0, (!s_n && !r_n) |-> (qa == qna))
  `ASSERT_CLK(a_nand_hold, clk, 1'b0, ( s_n &&  r_n) |-> $stable(qa))
  // ---- SVA (NOR) ----
  `ASSERT_CLK(a_nor_set,   clk, 1'b0, ( s && !r) |-> ( qb && !qnb))
  `ASSERT_CLK(a_nor_rst,   clk, 1'b0, (!s &&  r) |-> (!qb &&  qnb))
  `ASSERT_CLK(a_nor_inv,   clk, 1'b0, ( s &&  r) |-> (qb == qnb))
  `ASSERT_CLK(a_nor_hold,  clk, 1'b0, (!s && !r) |-> $stable(qb))

  initial begin
    $display("SR latch (NAND) / (NOR)  -  'Q == Q-bar' means INVALID condition");
    for (int i = 0; i < 8; i++) begin
      @(negedge clk) begin {s_n, r_n} = NAND_V[i]; {s, r} = NOR_V[i]; end
      @(posedge clk);
      if (EXP[i] == 2) begin
        `CHECK(qa == qna && qb == qnb, "invalid state: Q equals Q-bar")
      end else begin
        `CHECK(qa == EXP[i][0] && qna != qa, "NAND latch Q")
        `CHECK(qb == EXP[i][0] && qnb != qb, "NOR latch Q")
      end
      $display("  NAND s_n,r_n=%b%b q=%b qn=%b %s | NOR s,r=%b%b q=%b qn=%b %s",
               s_n, r_n, qa, qna, (qa == qna) ? "INVALID" : "       ",
               s, r, qb, qnb, (qb == qnb) ? "INVALID" : "");
    end
    `TB_DONE("day26_sr_latch")
  end
endmodule
