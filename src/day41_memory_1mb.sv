// Day-41 : 1 MB memory, 32-bit words -> 2^18 words, 18-bit word address.
// Synchronous write, synchronous read (read-first).
module memory_1mb #(
  parameter int DATA_W = 32,
  parameter int ADDR_W = 18
) (
  input  logic              clk, we,
  input  logic [ADDR_W-1:0] addr,
  input  logic [DATA_W-1:0] din,
  output logic [DATA_W-1:0] dout
);
  logic [DATA_W-1:0] mem [0:(1 << ADDR_W) - 1];
  always_ff @(posedge clk) begin
    if (we) mem[addr] <= din;
    dout <= mem[addr];
  end
endmodule
