// Day-40 : synchronous edge detectors (one-clock-wide pulse)
module pos_edge_detector (
  input  logic clk, rst, sig,
  output logic pos_edge
);
  logic prev;
  always_ff @(posedge clk) if (rst) prev <= 1'b0; else prev <= sig;
  assign pos_edge = sig & ~prev;
endmodule

module neg_edge_detector (
  input  logic clk, rst, sig,
  output logic neg_edge
);
  logic prev;
  always_ff @(posedge clk) if (rst) prev <= 1'b0; else prev <= sig;
  assign neg_edge = ~sig & prev;
endmodule
