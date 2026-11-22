// Day-1 : Clock divider  f_out = f_clk / (2*N)   (even division, 50% duty)
module clk_div_even #(parameter int N = 2) (
  input  logic clk,
  input  logic rst,        // synchronous, active high
  output logic clk_out
);
  localparam int W = (N > 1) ? $clog2(N) : 1;
  logic [W-1:0] cnt;

  always_ff @(posedge clk) begin
    if (rst) begin
      cnt     <= '0;
      clk_out <= 1'b0;
    end else if (cnt == N-1) begin
      cnt     <= '0;
      clk_out <= ~clk_out;       // toggle every N clocks -> period 2N clocks
    end else begin
      cnt <= cnt + 1'b1;
    end
  end
endmodule
