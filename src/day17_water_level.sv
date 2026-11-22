// Day-17 : water level indicator. sensor[i]=1 when water has reached probe i.
// An 8:3 priority encoder converts the highest wet probe to a binary level.
module enc_8x3 (
  input  logic [7:0] in,
  output logic [2:0] out,
  output logic       valid
);
  always_comb begin
    valid = |in;
    out   = '0;
    for (int i = 0; i < 8; i++) if (in[i]) out = 3'(i);
  end
endmodule

module water_level_indicator (
  input  logic [7:0] sensor,
  output logic [2:0] level,    // 0..7 : index of highest wet probe
  output logic       empty,    // no probe is wet
  output logic       full      // top probe is wet
);
  logic valid;
  enc_8x3 u_enc (.in(sensor), .out(level), .valid);
  assign empty = ~valid;
  assign full  = sensor[7];
endmodule
