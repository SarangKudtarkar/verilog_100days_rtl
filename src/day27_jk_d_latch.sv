// Day-27 : level-sensitive latches
module d_latch (
  input  logic en, d,
  output logic q
);
  always_latch if (en) q = d;        // transparent while en = 1
endmodule

// JK latch. In real hardware J=K=1 with a long enable causes "race-around"
// (continuous toggling) - the reason edge-triggered / master-slave JK exist.
// Here the toggle is modelled once per enable event so zero-delay simulation terminates.
module jk_latch (
  input  logic en, j, k,
  output logic q,
  output logic qn
);
  always @(en or j or k)
    if (en)
      case ({j, k})
        2'b00: q <= q;
        2'b01: q <= 1'b0;
        2'b10: q <= 1'b1;
        2'b11: q <= ~q;
      endcase
  assign qn = ~q;
endmodule
