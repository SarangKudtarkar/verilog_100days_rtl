// Day-45 : asynchronous (dual clock) FIFO, depth 2**ADDR_W = 16.
// Binary pointers are converted to gray code and passed through 2-FF synchronisers.
module sync_2ff #(parameter int W = 5) (
  input  logic         clk, rst_n,
  input  logic [W-1:0] d,
  output logic [W-1:0] q
);
  logic [W-1:0] m;
  always_ff @(posedge clk or negedge rst_n)
    if (!rst_n) begin m <= '0; q <= '0; end
    else        begin m <= d;  q <= m;  end
endmodule

module async_fifo #(
  parameter int DATA_W = 8,
  parameter int ADDR_W = 4
) (
  // write domain
  input  logic              wclk, wrst_n, winc,
  input  logic [DATA_W-1:0] wdata,
  output logic              wfull,
  // read domain
  input  logic              rclk, rrst_n, rinc,
  output logic [DATA_W-1:0] rdata,
  output logic              rempty
);
  logic [DATA_W-1:0] mem [0:(1 << ADDR_W) - 1];
  logic [ADDR_W:0] wbin, wgray, wbin_n, wgray_n, wq2_rgray;
  logic [ADDR_W:0] rbin, rgray, rbin_n, rgray_n, rq2_wgray;

  // ---------------- write domain ----------------
  assign wbin_n  = wbin + (ADDR_W+1)'(winc & ~wfull);
  assign wgray_n = (wbin_n >> 1) ^ wbin_n;

  always_ff @(posedge wclk or negedge wrst_n)
    if (!wrst_n) begin wbin <= '0; wgray <= '0; wfull <= 1'b0; end
    else begin
      wbin  <= wbin_n;
      wgray <= wgray_n;
      // full : next write gray == read gray with the two MSBs inverted
      wfull <= (wgray_n == {~wq2_rgray[ADDR_W:ADDR_W-1], wq2_rgray[ADDR_W-2:0]});
    end

  always_ff @(posedge wclk)
    if (winc && !wfull) mem[wbin[ADDR_W-1:0]] <= wdata;

  // ---------------- read domain ----------------
  assign rbin_n  = rbin + (ADDR_W+1)'(rinc & ~rempty);
  assign rgray_n = (rbin_n >> 1) ^ rbin_n;

  always_ff @(posedge rclk or negedge rrst_n)
    if (!rrst_n) begin rbin <= '0; rgray <= '0; rempty <= 1'b1; end
    else begin
      rbin   <= rbin_n;
      rgray  <= rgray_n;
      rempty <= (rgray_n == rq2_wgray);
    end

  assign rdata = mem[rbin[ADDR_W-1:0]];           // first-word-fall-through

  // ---------------- pointer synchronisers ----------------
  sync_2ff #(ADDR_W+1) u_sync_r2w (.clk(wclk), .rst_n(wrst_n), .d(rgray), .q(wq2_rgray));
  sync_2ff #(ADDR_W+1) u_sync_w2r (.clk(rclk), .rst_n(rrst_n), .d(wgray), .q(rq2_wgray));
endmodule
