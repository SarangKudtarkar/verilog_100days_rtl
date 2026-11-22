// Day-44 : true dual-port RAM (two independent read/write ports, one clock).
//  - write-first on the port that writes
//  - read of an address written by the other port in the same cycle returns the OLD data
//  - simultaneous writes to the same address : port A wins
module dual_port_ram #(
  parameter int DATA_W = 32,
  parameter int ADDR_W = 8
) (
  input  logic              clk,
  input  logic              we_a,
  input  logic [ADDR_W-1:0] addr_a,
  input  logic [DATA_W-1:0] din_a,
  output logic [DATA_W-1:0] dout_a,
  input  logic              we_b,
  input  logic [ADDR_W-1:0] addr_b,
  input  logic [DATA_W-1:0] din_b,
  output logic [DATA_W-1:0] dout_b
);
  logic [DATA_W-1:0] mem [0:(1 << ADDR_W) - 1];
  always_ff @(posedge clk) begin
    if (we_a) begin
      mem[addr_a] <= din_a;
      dout_a      <= din_a;
    end else dout_a <= mem[addr_a];

    if (we_b) begin
      if (!(we_a && addr_a == addr_b)) mem[addr_b] <= din_b;
      dout_b <= din_b;
    end else dout_b <= mem[addr_b];
  end
endmodule
