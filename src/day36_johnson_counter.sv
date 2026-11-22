// Day-36 : Johnson counter - the inverted MSB is fed back to the LSB.  2N states.
module johnson_counter #(parameter int N = 4) (
  input  logic         clk, rst,
  output logic [N-1:0] q
);
  always_ff @(posedge clk)
    if (rst) q <= '0;
    else     q <= {q[N-2:0], ~q[N-1]};
endmodule
