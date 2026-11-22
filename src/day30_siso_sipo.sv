// Day-30 : 4-bit serial-in/serial-out and serial-in/parallel-out shift registers
module siso_4bit (
  input  logic clk, rst, sin,
  output logic sout
);
  logic [3:0] sr;
  always_ff @(posedge clk)
    if (rst) sr <= '0;
    else     sr <= {sr[2:0], sin};
  assign sout = sr[3];
endmodule

module sipo_4bit (
  input  logic       clk, rst, sin,
  output logic [3:0] q
);
  always_ff @(posedge clk)
    if (rst) q <= '0;
    else     q <= {q[2:0], sin};
endmodule
