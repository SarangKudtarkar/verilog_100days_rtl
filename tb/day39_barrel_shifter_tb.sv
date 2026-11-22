`include "tb_utils.svh"
module day39_barrel_shifter_tb;
  logic clk = 1'b0;
  logic [7:0] din, dout;
  logic [2:0] shamt;
  logic [1:0] mode;
  int errors = 0;

  barrel_shifter #(8) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day39_barrel_shifter.vcd")

  function automatic logic [7:0] ref_shift(logic [7:0] v, int s, logic [1:0] m);
    logic [31:0] w;
    w = {24'd0, v};
    case (m)
      2'b00: return 8'((w << s) & 32'hFF);
      2'b01: return 8'(w >> s);
      2'b10: return 8'(((w << s) | (w >> (8 - s))) & 32'hFF);
      default: return 8'(((w >> s) | (w << (8 - s))) & 32'hFF);
    endcase
  endfunction

  // ---- SVA ----
  `ASSERT_CLK(a_zero_shift, clk, 1'b0, (shamt == 0) |-> (dout == din))
  `ASSERT_CLK(a_rot_pop,    clk, 1'b0, mode[1] |-> ($countones(dout) == $countones(din)))
  `ASSERT_CLK(a_sll_msb,    clk, 1'b0, (mode == 2'b00 && shamt == 1) |-> (dout == {din[6:0], 1'b0}))
  `ASSERT_CLK(a_rol_1,      clk, 1'b0, (mode == 2'b10 && shamt == 1) |-> (dout == {din[6:0], din[7]}))

  initial begin
    $display("Console results (din = 8'b10110001):");
    for (int i = 0; i < 8192; i++) begin       // exhaustive: 256 values x 8 amounts x 4 modes
      @(negedge clk) {mode, shamt, din} = i[12:0];
      @(posedge clk);
      `CHECK(dout == ref_shift(din, shamt, mode), "barrel shift result")
    end
    for (int m = 0; m < 4; m++) begin
      @(negedge clk) begin din = 8'b1011_0001; mode = m[1:0]; shamt = 3'd3; end
      @(posedge clk);
      $display("  mode=%02b shamt=3 -> %08b", mode, dout);
    end
    `TB_DONE("day39_barrel_shifter")
  end
endmodule
