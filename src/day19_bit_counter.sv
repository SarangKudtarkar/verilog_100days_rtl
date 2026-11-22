// Day-19 : counts the number of ones and zeros in a W-bit word
module bit_counter #(
  parameter int W  = 8,
  parameter int CW = $clog2(W+1)
) (
  input  logic [W-1:0]  data,
  output logic [CW-1:0] ones,
  output logic [CW-1:0] zeros
);
  always_comb begin
    ones = '0;
    for (int i = 0; i < W; i++) ones = ones + CW'(data[i]);
    zeros = CW'(W) - ones;
  end
endmodule
