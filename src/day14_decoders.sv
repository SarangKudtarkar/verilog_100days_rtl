// Day-14 : binary decoders
module dec_bin2oct (                 // 3 -> 8 : one line per octal digit
  input  logic       en,
  input  logic [2:0] bin,
  output logic [7:0] oct_o
);
  assign oct_o = en ? (8'd1 << bin) : 8'd0;
endmodule

module dec_bin2dec (                 // BCD 4 -> 10 : one line per decimal digit
  input  logic       en,
  input  logic [3:0] bin,
  output logic [9:0] dec_o
);
  assign dec_o = (en && bin <= 4'd9) ? (10'd1 << bin) : 10'd0;
endmodule

module dec_bin2hex (                 // 4 -> 16 : one line per hex digit
  input  logic        en,
  input  logic [3:0]  bin,
  output logic [15:0] hex_o
);
  assign hex_o = en ? (16'd1 << bin) : 16'd0;
endmodule
