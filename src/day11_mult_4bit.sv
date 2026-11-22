// Day-11 : 4x4 -> 8-bit unsigned array multiplier
module mult_4bit (
  input  logic [3:0] a, b,
  output logic [7:0] p
);
  logic [7:0] pp [4];            // partial products
  always_comb begin
    for (int i = 0; i < 4; i++)
      pp[i] = b[i] ? (8'(a) << i) : 8'd0;
    p = pp[0] + pp[1] + pp[2] + pp[3];
  end
endmodule
