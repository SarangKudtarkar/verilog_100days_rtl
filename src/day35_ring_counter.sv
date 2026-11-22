// Day-35 : ring counter. Reset presets the one-hot pattern 0001.
// It is NOT self-starting: an illegal state (e.g. 0000) is never corrected.
module ring_counter #(parameter int N = 4) (
  input  logic         clk, rst,
  output logic [N-1:0] q
);
  always_ff @(posedge clk)
    if (rst) q <= {{(N-1){1'b0}}, 1'b1};
    else     q <= {q[N-2:0], q[N-1]};
endmodule
