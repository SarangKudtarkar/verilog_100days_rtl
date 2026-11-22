// Day-26 : SR latches built from cross-coupled gates
/* verilator lint_off UNOPTFLAT */
module sr_latch_nand (               // active-LOW inputs
  input  wire s_n, r_n,
  output wire q, qn
);
  nand g1 (q,  s_n, qn);
  nand g2 (qn, r_n, q);              // s_n = r_n = 0  -> q = qn = 1 (invalid)
endmodule

module sr_latch_nor (                // active-HIGH inputs
  input  wire s, r,
  output wire q, qn
);
  nor g1 (q,  r, qn);
  nor g2 (qn, s, q);                 // s = r = 1      -> q = qn = 0 (invalid)
endmodule
/* verilator lint_on UNOPTFLAT */
