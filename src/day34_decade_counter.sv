// Day-34 : MOD-10 (decade) ripple counter, 7490 style - no asynchronous clear needed.
//   FF0 : toggles on every falling edge of clk
//   FF1 : clocked by q0, J = ~q3, K = 1  (stays 0 while q3 = 1)
//   FF2 : clocked by q1, toggles
//   FF3 : clocked by q0, J = q2 & q1, K = 1
// Sequence 0,1,...,9,0,... ; the stage that would go to 10 is blocked by the J inputs.
module decade_counter (
  input  logic       clk, rst,
  output logic [3:0] q
);
  always @(negedge clk or posedge rst)
    if (rst) q[0] <= 1'b0; else q[0] <= ~q[0];

  always @(negedge q[0] or posedge rst)
    if (rst) q[1] <= 1'b0; else q[1] <= ~q[1] & ~q[3];

  always @(negedge q[1] or posedge rst)
    if (rst) q[2] <= 1'b0; else q[2] <= ~q[2];

  always @(negedge q[0] or posedge rst)
    if (rst) q[3] <= 1'b0; else q[3] <= q[2] & q[1] & ~q[3];
endmodule
