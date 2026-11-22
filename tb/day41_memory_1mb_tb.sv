`include "tb_utils.svh"
module day41_memory_1mb_tb;
  logic        clk = 1'b0, we = 1'b0;
  logic [17:0] addr = '0;
  logic [31:0] din = '0, dout;
  bit   [31:0] shadow [int];
  int errors = 0;

  memory_1mb dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day41_memory_1mb.vcd")

  // write followed by a read of the same address returns the written data
  `ASSERT_CLK(a_rw, clk, 1'b0,
              (!we && $past(we) && addr == $past(addr)) |=> (dout == $past(din, 2)))

  task automatic mem_write(input logic [17:0] a, input logic [31:0] v);
    @(negedge clk) begin we = 1'b1; addr = a; din = v; end
    @(negedge clk) we = 1'b0;
    shadow[a] = v;
  endtask

  task automatic mem_read(input logic [17:0] a);
    @(negedge clk) begin we = 1'b0; addr = a; end
    @(negedge clk);
    `CHECK(dout == shadow[a], "memory read-back")
  endtask

  logic [17:0] list [128];
  initial begin
    $display("Memory size = %0d words x 32 bit = %0d KB", 1 << 18, (1 << 18) * 4 / 1024);
    list[0] = 18'h00000;  list[1] = 18'h3FFFF;                      // first and last word
    for (int i = 2; i < 128; i++) list[i] = $urandom;
    for (int i = 0; i < 128; i++) mem_write(list[i], $urandom);
    for (int i = 127; i >= 0; i--) mem_read(list[i]);
    $display("  mem[0x00000]=%08h  mem[0x3FFFF]=%08h", shadow[0], shadow[18'h3FFFF]);
    // overwrite and read again
    for (int i = 0; i < 32; i++) mem_write(list[i], 32'hDEAD_0000 + i);
    for (int i = 0; i < 32; i++) mem_read(list[i]);
    `TB_DONE("day41_memory_1mb")
  end
endmodule
