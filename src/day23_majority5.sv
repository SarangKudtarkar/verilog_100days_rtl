// Day-23 : 5-input majority (output 1 when at least 3 inputs are 1).
// Mixed modelling : the ten 3-input product terms use gate primitives,
// the final OR is written as a data-flow assign.
//
// NOTE: the true min-term list is
//   sum(7,11,13,14,15,19,21,22,23,25,26,27,28,29,30,31)   (index = {a,b,c,d,e})
// (the list printed in the original slides contains odd-parity terms and is not a majority function)
module majority5 (
  input  logic a, b, c, d, e,
  output logic y
);
  wire [9:0] t;
  and g0 (t[0], a, b, c);
  and g1 (t[1], a, b, d);
  and g2 (t[2], a, b, e);
  and g3 (t[3], a, c, d);
  and g4 (t[4], a, c, e);
  and g5 (t[5], a, d, e);
  and g6 (t[6], b, c, d);
  and g7 (t[7], b, c, e);
  and g8 (t[8], b, d, e);
  and g9 (t[9], c, d, e);
  assign y = |t;                       // data-flow OR of all terms
endmodule
