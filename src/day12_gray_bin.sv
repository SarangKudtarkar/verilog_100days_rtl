// Day-12 : 4-bit binary-to-gray and gray-to-binary converters
module bin2gray_4bit (
  input  logic [3:0] bin,
  output logic [3:0] gray
);
  assign gray = bin ^ (bin >> 1);
endmodule

module gray2bin_4bit (
  input  logic [3:0] gray,
  output logic [3:0] bin
);
  assign bin[3] = gray[3];
  assign bin[2] = bin[3] ^ gray[2];
  assign bin[1] = bin[2] ^ gray[1];
  assign bin[0] = bin[1] ^ gray[0];
endmodule
