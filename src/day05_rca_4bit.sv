// Day-5 : 4-bit ripple carry adder built from 1-bit full adders
module full_adder (
  input  logic a, b, cin,
  output logic sum, cout
);
  assign sum  = a ^ b ^ cin;
  assign cout = (a & b) | (b & cin) | (a & cin);
endmodule

module rca_4bit (
  input  logic [3:0] a, b,
  input  logic       cin,
  output logic [3:0] sum,
  output logic       cout
);
  logic [3:1] c;
  full_adder fa0 (a[0], b[0], cin,  sum[0], c[1]);
  full_adder fa1 (a[1], b[1], c[1], sum[1], c[2]);
  full_adder fa2 (a[2], b[2], c[2], sum[2], c[3]);
  full_adder fa3 (a[3], b[3], c[3], sum[3], cout);
endmodule
