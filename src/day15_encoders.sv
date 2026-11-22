// Day-15 : priority encoders (highest active line wins), with valid flag
module enc_oct2bin (
  input  logic [7:0] oct_i,
  output logic [2:0] bin,
  output logic       valid
);
  always_comb begin
    valid = |oct_i;
    bin   = '0;
    for (int i = 0; i < 8; i++) if (oct_i[i]) bin = 3'(i);
  end
endmodule

module enc_dec2bin (
  input  logic [9:0] dec_i,
  output logic [3:0] bin,
  output logic       valid
);
  always_comb begin
    valid = |dec_i;
    bin   = '0;
    for (int i = 0; i < 10; i++) if (dec_i[i]) bin = 4'(i);
  end
endmodule

module enc_hex2bin (
  input  logic [15:0] hex_i,
  output logic [3:0]  bin,
  output logic        valid
);
  always_comb begin
    valid = |hex_i;
    bin   = '0;
    for (int i = 0; i < 16; i++) if (hex_i[i]) bin = 4'(i);
  end
endmodule
