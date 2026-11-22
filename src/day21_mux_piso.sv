// Day-21 : an 8:1 MUX used as an asynchronous (clock-less) PISO.
// The parallel word is applied on d; sweeping sel serialises it on y.
module mux_piso #(parameter int W = 8) (
  input  logic [W-1:0]         d,
  input  logic [$clog2(W)-1:0] sel,
  output logic                 y
);
  assign y = d[sel];
endmodule
