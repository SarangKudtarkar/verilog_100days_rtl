// Day-22 : 1:8 DEMUX used as an asynchronous SIPO (SystemVerilog design style)
module demux_sipo #(parameter int W = 8) (
  input  logic                 din,
  input  logic [$clog2(W)-1:0] sel,
  output logic [W-1:0]         q
);
  always_comb begin
    q      = '0;
    q[sel] = din;
  end
endmodule
