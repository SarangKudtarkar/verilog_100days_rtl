// Day-29 : 4-bit D flip-flop (captures every clock) vs 4-bit register
// (asynchronous reset + load enable -> holds its value when en = 0)
module dff_4bit (
  input  logic       clk,
  input  logic [3:0] d,
  output logic [3:0] q
);
  always_ff @(posedge clk) q <= d;
endmodule

module reg_4bit (
  input  logic       clk, rst_n, en,
  input  logic [3:0] d,
  output logic [3:0] q
);
  always_ff @(posedge clk or negedge rst_n)
    if (!rst_n)  q <= 4'd0;
    else if (en) q <= d;
endmodule
