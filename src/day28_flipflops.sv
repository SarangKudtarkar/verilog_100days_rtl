// Day-28 : edge-triggered flip-flops with asynchronous active-low reset
module sr_ff (
  input  logic clk, rst_n, s, r,
  output logic q, qn,
  output logic invalid                    // s = r = 1 is forbidden (q holds)
);
  always_ff @(posedge clk or negedge rst_n)
    if (!rst_n) q <= 1'b0;
    else case ({s, r})
      2'b10:   q <= 1'b1;
      2'b01:   q <= 1'b0;
      default: q <= q;                    // 00 hold, 11 invalid -> hold
    endcase
  assign qn      = ~q;
  assign invalid = s & r;
endmodule

module jk_ff (
  input  logic clk, rst_n, j, k,
  output logic q, qn
);
  always_ff @(posedge clk or negedge rst_n)
    if (!rst_n) q <= 1'b0;
    else case ({j, k})
      2'b00: q <= q;
      2'b01: q <= 1'b0;
      2'b10: q <= 1'b1;
      2'b11: q <= ~q;
    endcase
  assign qn = ~q;
endmodule

module t_ff (
  input  logic clk, rst_n, t,
  output logic q, qn
);
  always_ff @(posedge clk or negedge rst_n)
    if (!rst_n) q <= 1'b0;
    else if (t) q <= ~q;
  assign qn = ~q;
endmodule

module d_ff (
  input  logic clk, rst_n, d,
  output logic q, qn
);
  always_ff @(posedge clk or negedge rst_n)
    if (!rst_n) q <= 1'b0;
    else        q <= d;
  assign qn = ~q;
endmodule
