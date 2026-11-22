`include "tb_utils.svh"
module day22_demux_sipo_tb;
  logic clk = 1'b0;
  logic din;
  logic [2:0] sel;
  logic [7:0] q, word, rx;
  int errors = 0;

  demux_sipo #(8) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day22_demux_sipo.vcd")

  `ASSERT_CLK(a_route,  clk, 1'b0, q == (8'(din) << sel))
  `ASSERT_CLK(a_others, clk, 1'b0, (q & ~(8'd1 << sel)) == 8'd0)

  initial begin
    for (int n = 0; n < 20; n++) begin
      word = (n == 0) ? 8'h96 : $urandom;
      rx   = '0;
      for (int i = 0; i < 8; i++) begin
        @(negedge clk) begin sel = 3'(i); din = word[i]; end
        @(posedge clk);
        rx[i] = q[i];                          // capture the selected output line
      end
      `CHECK(rx == word, "serial stream must be spread onto the parallel outputs")
      if (n < 3) $display("  serial word %08b -> parallel %08b", word, rx);
    end
    `TB_DONE("day22_demux_sipo")
  end
endmodule
