// Day-18 : even parity generator and checker
module parity_gen #(parameter int W = 8) (
  input  logic [W-1:0] data,
  output logic         parity       // makes the total number of 1s even
);
  assign parity = ^data;
endmodule

module parity_checker #(parameter int W = 8) (
  input  logic [W-1:0] data,
  input  logic         parity_in,
  output logic         error        // 1 = odd number of 1s received
);
  assign error = ^{data, parity_in};
endmodule
