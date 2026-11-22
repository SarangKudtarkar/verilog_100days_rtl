// Day-49 : fixed priority arbiter. req[0] has the highest priority, req[N-1] the lowest.
module fixed_priority_arbiter #(parameter int N = 4) (
  input  logic [N-1:0] req,
  output logic [N-1:0] grant,       // one-hot
  output logic         any_grant
);
  assign grant     = req & (~req + 1'b1);   // isolate the lowest set bit
  assign any_grant = |req;
endmodule
