// Day-3 : Clock divider by an odd number N with 50% duty cycle.
// Two counters (posedge / negedge) generate two waveforms that are ANDed.
module clk_div_odd #(parameter int N = 3) (
  input  logic clk,
  input  logic rst,
  output logic clk_out
);
  localparam int W = $clog2(N);
  logic [W-1:0] cnt_p, cnt_n;
  logic out_p, out_n;

  always_ff @(posedge clk)
    if (rst) cnt_p <= '0;
    else     cnt_p <= (cnt_p == N-1) ? '0 : cnt_p + 1'b1;

  always_ff @(negedge clk)
    if (rst) cnt_n <= '0;
    else     cnt_n <= (cnt_n == N-1) ? '0 : cnt_n + 1'b1;

  assign out_p   = (cnt_p >= N/2);   // high for (N+1)/2 clocks
  assign out_n   = (cnt_n >= N/2);   // same waveform, half a clock apart
  assign clk_out = out_p & out_n;    // high N/2 clocks, low N/2 clocks
endmodule
