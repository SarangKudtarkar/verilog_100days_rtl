// Day-31 : 4-bit parallel-in/serial-out (MSB first) and parallel-in/parallel-out
module piso_4bit (
  input  logic       clk, rst, load,
  input  logic [3:0] d,
  output logic       sout
);
  logic [3:0] sr;
  always_ff @(posedge clk)
    if (rst)       sr <= '0;
    else if (load) sr <= d;
    else           sr <= {sr[2:0], 1'b0};
  assign sout = sr[3];
endmodule

module pipo_4bit (
  input  logic       clk, rst, en,
  input  logic [3:0] d,
  output logic [3:0] q
);
  always_ff @(posedge clk)
    if (rst)     q <= '0;
    else if (en) q <= d;
endmodule
