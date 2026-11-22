`include "tb_utils.svh"
module day21_mux_piso_tb;
  logic clk = 1'b0;
  logic [7:0] d, rx;
  logic [2:0] sel;
  logic y;
  int errors = 0;

  mux_piso #(8) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day21_mux_piso.vcd")

  `ASSERT_CLK(a_mux, clk, 1'b0, y == d[sel])

  initial begin
    for (int n = 0; n < 20; n++) begin
      @(negedge clk) d = (n == 0) ? 8'hA5 : $urandom;
      rx = '0;
      for (int i = 0; i < 8; i++) begin       // serial shift-out, LSB first
        @(negedge clk) sel = 3'(i);
        @(posedge clk);
        rx[i] = y;
      end
      `CHECK(rx == d, "serial stream must rebuild parallel word")
      if (n < 3) $display("  parallel %08b  -> serial (LSB first) rebuilt %08b", d, rx);
    end
    `TB_DONE("day21_mux_piso")
  end
endmodule
