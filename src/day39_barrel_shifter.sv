// Day-39 : logarithmic barrel shifter  (mode: 00 SLL, 01 SRL, 10 ROL, 11 ROR)
module barrel_shifter #(parameter int W = 8) (
  input  logic [W-1:0]         din,
  input  logic [$clog2(W)-1:0] shamt,
  input  logic [1:0]           mode,
  output logic [W-1:0]         dout
);
  localparam int SW = $clog2(W);
  logic [W-1:0] x;
  always_comb begin
    x = din;
    for (int k = 0; k < SW; k++) begin        // one mux stage per shift-amount bit
      if (shamt[k]) begin
        case (mode)
          2'b00: x = x << (1 << k);
          2'b01: x = x >> (1 << k);
          2'b10: x = (x << (1 << k)) | (x >> (W - (1 << k)));
          2'b11: x = (x >> (1 << k)) | (x << (W - (1 << k)));
        endcase
      end
    end
    dout = x;
  end
endmodule
