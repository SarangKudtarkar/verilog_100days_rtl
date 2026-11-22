// Day-33 : 4-bit asynchronous (ripple) up-counter. Each T flip-flop toggles on the
// falling edge of the previous stage's output.
module tff_neg (
  input  logic clk, rst,         // async active-high reset
  output logic q
);
  always_ff @(negedge clk or posedge rst)
    if (rst) q <= 1'b0;
    else     q <= ~q;
endmodule

module ripple_counter_4bit (
  input  logic       clk, rst,
  output logic [3:0] q
);
  tff_neg t0 (.clk(clk),  .rst, .q(q[0]));
  tff_neg t1 (.clk(q[0]), .rst, .q(q[1]));
  tff_neg t2 (.clk(q[1]), .rst, .q(q[2]));
  tff_neg t3 (.clk(q[2]), .rst, .q(q[3]));
endmodule
