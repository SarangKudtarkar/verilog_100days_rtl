// Day-7 : 4-bit carry look-ahead adder and a 16-bit top module built from it
module cla_4bit (
  input  logic [3:0] a, b,
  input  logic       cin,
  output logic [3:0] sum,
  output logic       cout
);
  logic [3:0] g, p;
  logic [4:0] c;
  assign g = a & b;             // generate
  assign p = a ^ b;             // propagate
  assign c[0] = cin;
  assign c[1] = g[0] | (p[0] & cin);
  assign c[2] = g[1] | (p[1] & g[0]) | (p[1] & p[0] & cin);
  assign c[3] = g[2] | (p[2] & g[1]) | (p[2] & p[1] & g[0])
              | (p[2] & p[1] & p[0] & cin);
  assign c[4] = g[3] | (p[3] & g[2]) | (p[3] & p[2] & g[1])
              | (p[3] & p[2] & p[1] & g[0]) | (p[3] & p[2] & p[1] & p[0] & cin);
  assign sum  = p ^ c[3:0];
  assign cout = c[4];
endmodule

// TopModule : 16-bit adder from four 4-bit CLA blocks
module cla_16bit (
  input  logic [15:0] a, b,
  input  logic        cin,
  output logic [15:0] sum,
  output logic        cout
);
  logic [4:0] c;
  assign c[0] = cin;
  for (genvar i = 0; i < 4; i++) begin : g_blk
    cla_4bit u (.a(a[4*i+:4]), .b(b[4*i+:4]), .cin(c[i]),
                .sum(sum[4*i+:4]), .cout(c[i+1]));
  end
  assign cout = c[4];
endmodule
