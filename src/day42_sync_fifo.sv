// Day-42 : synchronous FIFO (depth 32). Registered read data (valid 1 clock after rd_en).
module sync_fifo #(
  parameter int DEPTH = 32,
  parameter int WIDTH = 8
) (
  input  logic                     clk, rst,
  input  logic                     wr_en, rd_en,
  input  logic [WIDTH-1:0]         din,
  output logic [WIDTH-1:0]         dout,
  output logic                     full, empty,
  output logic [$clog2(DEPTH):0]   count
);
  localparam int AW = $clog2(DEPTH);
  logic [WIDTH-1:0] mem [DEPTH];
  logic [AW-1:0]    wptr, rptr;

  assign full  = (count == DEPTH);
  assign empty = (count == 0);
  wire do_wr = wr_en && !full;
  wire do_rd = rd_en && !empty;

  always_ff @(posedge clk) begin
    if (rst) begin
      wptr <= '0; rptr <= '0; count <= '0; dout <= '0;
    end else begin
      if (do_wr) begin mem[wptr] <= din;  wptr <= wptr + 1'b1; end
      if (do_rd) begin dout <= mem[rptr]; rptr <= rptr + 1'b1; end
      count <= count + do_wr - do_rd;
    end
  end
endmodule
