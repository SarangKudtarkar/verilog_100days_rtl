// Day-37 : 4-bit synchronous counter - all T flip-flops share the same clock;
// stage n toggles when all lower bits are 1.
module t_ff_sync (
  input  logic clk, rst, t,
  output logic q
);
  always_ff @(posedge clk)
    if (rst)    q <= 1'b0;
    else if (t) q <= ~q;
endmodule

module sync_counter_4bit (
  input  logic       clk, rst,
  output logic [3:0] q
);
  logic [3:0] t;
  assign t[0] = 1'b1;
  assign t[1] = q[0];
  assign t[2] = q[0] & q[1];
  assign t[3] = q[0] & q[1] & q[2];
  for (genvar i = 0; i < 4; i++) begin : g_ff
    t_ff_sync u (.clk, .rst, .t(t[i]), .q(q[i]));
  end
endmodule
