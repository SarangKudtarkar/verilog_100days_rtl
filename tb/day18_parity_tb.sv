`include "tb_utils.svh"
module day18_parity_tb;
  logic clk = 1'b0;
  logic [7:0] data, rx_data;
  logic p, rx_p, error;
  int errors = 0;

  parity_gen     #(8) u_gen (.data, .parity(p));
  parity_checker #(8) u_chk (.data(rx_data), .parity_in(rx_p), .error);
  always #5 clk = ~clk;
  `DUMP("waves/day18_parity.vcd")

  `ASSERT_CLK(a_even, clk, 1'b0, (^{data, p}) == 1'b0)

  initial begin
    $display("Console results:");
    for (int i = 0; i < 256; i++) begin
      @(negedge clk) begin data = i[7:0]; end
      #1;
      // clean transmission
      rx_data = data; rx_p = p; #1;
      `CHECK(error == 1'b0, "no error on clean frame")
      // every single-bit error (data or parity) must be detected
      for (int b = 0; b < 9; b++) begin
        rx_data = data; rx_p = p;
        if (b < 8) rx_data[b] = ~rx_data[b]; else rx_p = ~rx_p;
        #1;
        `CHECK(error == 1'b1, "single-bit error must be detected")
      end
      // double error is NOT detectable by simple parity
      rx_data = data ^ 8'b0000_0011; rx_p = p; #1;
      `CHECK(error == 1'b0, "double-bit error escapes parity")
      @(posedge clk);
      if (i % 51 == 0) $display("  data=%08b parity=%b", data, p);
    end
    `TB_DONE("day18_parity")
  end
endmodule
