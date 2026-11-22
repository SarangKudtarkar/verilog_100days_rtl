`include "tb_utils.svh"
module day42_sync_fifo_tb;
  localparam int DEPTH = 32;
  logic clk = 1'b0, rst = 1'b1, wr_en = 1'b0, rd_en = 1'b0;
  logic [7:0] din = '0, dout;
  logic full, empty;
  logic [5:0] count;
  logic [7:0] model [$];
  logic [7:0] exp_dout;
  bit exp_valid = 1'b0;
  int errors = 0;

  sync_fifo #(DEPTH, 8) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day42_sync_fifo.vcd")

  // ---- SVA ----
  `ASSERT_CLK(a_not_both, clk, rst, !(full && empty))
  `ASSERT_CLK(a_full,     clk, rst, full  |-> (count == DEPTH))
  `ASSERT_CLK(a_empty,    clk, rst, empty |-> (count == 0))
  `ASSERT_CLK(a_range,    clk, rst, count <= DEPTH)
  `ASSERT_CLK(a_push,     clk, rst, (wr_en && !full && !(rd_en && !empty)) |=> (count == $past(count) + 1))
  `ASSERT_CLK(a_pop,      clk, rst, (rd_en && !empty && !(wr_en && !full)) |=> (count == $past(count) - 1))
  `ASSERT_CLK(a_no_ovf,   clk, rst, (full  && wr_en && !rd_en) |=> $stable(count))
  `ASSERT_CLK(a_no_unf,   clk, rst, (empty && rd_en && !wr_en) |=> $stable(count))

  // one clock cycle: drive inputs, update scoreboard (model of the coming clock edge)
  task automatic cyc(input bit w, input bit r);
    bit dw, dr;
    @(negedge clk);
    if (exp_valid) begin `CHECK(dout == exp_dout, "FIFO read data") end
    `CHECK(count == model.size(), "FIFO occupancy")
    `CHECK(full  == (model.size() == DEPTH), "full flag")
    `CHECK(empty == (model.size() == 0),     "empty flag")
    wr_en = w; rd_en = r; din = $urandom;
    dw = w && (model.size() < DEPTH);
    dr = r && (model.size() > 0);
    exp_valid = dr;
    if (dr) exp_dout = model.pop_front();
    if (dw) model.push_back(din);
  endtask

  initial begin
    repeat (3) @(negedge clk);
    rst = 1'b0;
    for (int i = 0; i < DEPTH + 8; i++) cyc(1, 0);          // fill + overflow attempts
    cyc(0, 0);
    `CHECK(full, "FIFO must be full")
    $display("  after fill : count=%0d full=%b", count, full);
    for (int i = 0; i < DEPTH + 8; i++) cyc(0, 1);          // drain + underflow attempts
    cyc(0, 0); cyc(0, 0);
    `CHECK(empty, "FIFO must be empty")
    $display("  after drain: count=%0d empty=%b", count, empty);
    for (int i = 0; i < 1500; i++) cyc($urandom_range(0, 99) < 55, $urandom_range(0, 99) < 45);
    for (int i = 0; i < 40; i++) cyc(0, 1);
    cyc(0, 0);
    `TB_DONE("day42_sync_fifo")
  end
endmodule
