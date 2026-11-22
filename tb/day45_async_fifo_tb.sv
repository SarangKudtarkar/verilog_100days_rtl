`include "tb_utils.svh"
module day45_async_fifo_tb;
  logic wclk = 1'b0, rclk = 1'b0, wrst_n = 1'b0, rrst_n = 1'b0;
  logic winc = 1'b0, rinc = 1'b0;
  logic [7:0] wdata = '0;
  wire  [7:0] rdata;
  wire  wfull, rempty;
  logic [7:0] model [$];
  int wr_prob = 0, rd_prob = 0, errors = 0, n_wr = 0, n_rd = 0;

  async_fifo #(8, 4) dut (.*);
  always #5 wclk = ~wclk;            // 100 MHz-ish write clock (period 10)
  always #7 rclk = ~rclk;            // different read clock   (period 14)
  `DUMP("waves/day45_async_fifo.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_wgray_1bit, wclk, !wrst_n, $countones(dut.wgray ^ $past(dut.wgray)) <= 1)
  `ASSERT_CLK(a_rgray_1bit, rclk, !rrst_n, $countones(dut.rgray ^ $past(dut.rgray)) <= 1)
  `ASSERT_CLK(a_no_overflow,  wclk, !wrst_n, (wfull  && winc) |=> $stable(dut.wbin))
  `ASSERT_CLK(a_no_underflow, rclk, !rrst_n, (rempty && rinc) |=> $stable(dut.rbin))
  `ASSERT_CLK(a_wgray_def,    wclk, !wrst_n, dut.wgray == ((dut.wbin >> 1) ^ dut.wbin))

  // ---- writer (write clock domain) : also tries to write while full ----
  always @(negedge wclk) if (wrst_n) begin
    if ($urandom_range(0, 99) < wr_prob) begin
      winc = 1'b1; wdata = $urandom;
      if (!wfull) begin model.push_back(wdata); n_wr++; end
    end else winc = 1'b0;
  end

  // ---- reader (read clock domain) : also tries to read while empty ----
  always @(negedge rclk) if (rrst_n) begin
    if ($urandom_range(0, 99) < rd_prob) begin
      rinc = 1'b1;
      if (!rempty) begin
        `CHECK(model.size() > 0, "FIFO delivered data that was never written")
        if (model.size() > 0) begin
          `CHECK(rdata == model[0], "read data must match write order")
          void'(model.pop_front());
          n_rd++;
        end
      end
    end else rinc = 1'b0;
  end

  always @(posedge wclk) `CHECK(model.size() <= 16, "occupancy never exceeds depth")

  initial begin
    repeat (4) @(posedge wclk);  #1 wrst_n = 1'b1;
    repeat (2) @(posedge rclk);  #1 rrst_n = 1'b1;
    `CHECK(rempty, "empty after reset")
    wr_prob = 95; rd_prob = 0;   repeat (40) @(posedge wclk);      // fill
    `CHECK(wfull, "FIFO must report full")
    $display("  after fill : wfull=%b occupancy=%0d", wfull, model.size());
    wr_prob = 0;  rd_prob = 95;  repeat (60) @(posedge rclk);      // drain
    `CHECK(rempty, "FIFO must report empty")
    $display("  after drain: rempty=%b occupancy=%0d", rempty, model.size());
    wr_prob = 60; rd_prob = 60;  repeat (400) @(posedge wclk);
    wr_prob = 90; rd_prob = 30;  repeat (300) @(posedge wclk);
    wr_prob = 20; rd_prob = 90;  repeat (300) @(posedge wclk);
    wr_prob = 0;  rd_prob = 95;  repeat (80) @(posedge rclk);
    `CHECK(model.size() == 0, "all written words were read")
    `CHECK(rempty, "FIFO empty at end of test")
    $display("  words written = %0d, words read = %0d", n_wr, n_rd);
    `CHECK(n_wr == n_rd && n_wr > 100, "write/read counts match")
    `TB_DONE("day45_async_fifo")
  end
endmodule
