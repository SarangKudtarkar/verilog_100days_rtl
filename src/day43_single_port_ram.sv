// Day-43 : single-port RAM, 32-bit data. One address port used for read and write.
// Write-first behaviour: dout shows the data being written.
module single_port_ram #(
  parameter int DATA_W = 32,
  parameter int ADDR_W = 8
) (
  input  logic              clk, we,
  input  logic [ADDR_W-1:0] addr,
  input  logic [DATA_W-1:0] din,
  output logic [DATA_W-1:0] dout
);
  logic [DATA_W-1:0] mem [0:(1 << ADDR_W) - 1];
  always_ff @(posedge clk) begin
    if (we) begin
      mem[addr] <= din;
      dout      <= din;
    end else begin
      dout      <= mem[addr];
    end
  end
endmodule
