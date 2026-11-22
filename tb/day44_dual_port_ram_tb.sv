`include "tb_utils.svh"
module day44_dual_port_ram_tb;
  logic clk = 1'b0;
  logic we_a = 1'b0, we_b = 1'b0;
  logic [7:0]  addr_a = '0, addr_b = '0;
  logic [31:0] din_a = '0, din_b = '0, dout_a, dout_b, exp_a, exp_b;
  bit   [31:0] shadow [int];
  bit   chk = 1'b0;
  int errors = 0;

  dual_port_ram #(32, 8) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day44_dual_port_ram.vcd")

  `ASSERT_CLK(a_a_write, clk, 1'b0, we_a |=> (dout_a == $past(din_a)))
  `ASSERT_CLK(a_b_write, clk, 1'b0, we_b |=> (dout_b == $past(din_b)))
  `ASSERT_CLK(a_stable_b, clk, 1'b0,
              (!we_a && !we_b && !$past(we_a) && !$past(we_b) && addr_b == $past(addr_b) && addr_a == $past(addr_a)
               && addr_a != addr_b) |=> (dout_b == $past(dout_b)))

  task automatic cyc(input bit wa, wb, input logic [7:0] aa, ab, input logic [31:0] da, db);
    @(negedge clk);
    if (chk) begin
      `CHECK(dout_a == exp_a, "port A output")
      `CHECK(dout_b == exp_b, "port B output")
    end
    we_a = wa; we_b = wb; addr_a = aa; addr_b = ab; din_a = da; din_b = db;
    exp_a = wa ? da : shadow[aa];                 // reads see the data from before this edge
    exp_b = wb ? db : shadow[ab];
    if (wb && !(wa && aa == ab)) shadow[ab] = db;
    if (wa) shadow[aa] = da;
  endtask

  initial begin
    for (int i = 0; i < 256; i++) cyc(1, 0, i[7:0], '0, 32'h0, '0);   // initialise via port A
    chk = 1'b1;
    // port A writes while port B reads the previously written locations
    for (int i = 0; i < 256; i++) cyc(1, 0, i[7:0], 8'(255 - i), $urandom, '0);
    for (int i = 0; i < 256; i++) cyc(0, 0, 8'(255 - i), i[7:0], '0, '0);
    // random activity on both ports (collisions included)
    for (int i = 0; i < 3000; i++)
      cyc($urandom, $urandom, $urandom_range(0, 15), $urandom_range(0, 15), $urandom, $urandom);
    cyc(0, 0, 8'd0, 8'd1, '0, '0);
    $display("  mem[0]=%08h  mem[1]=%08h", shadow[0], shadow[1]);
    `TB_DONE("day44_dual_port_ram")
  end
endmodule
