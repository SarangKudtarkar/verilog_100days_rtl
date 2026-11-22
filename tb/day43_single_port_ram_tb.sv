`include "tb_utils.svh"
module day43_single_port_ram_tb;
  logic clk = 1'b0, we = 1'b0;
  logic [7:0]  addr = '0;
  logic [31:0] din = '0, dout, exp_dout;
  bit   [31:0] shadow [int];
  bit   exp_valid = 1'b0;
  int errors = 0;

  single_port_ram #(32, 8) dut (.*);
  always #5 clk = ~clk;
  `DUMP("waves/day43_single_port_ram.vcd")

  `ASSERT_CLK(a_write_through, clk, 1'b0, we |=> (dout == $past(din)))
  `ASSERT_CLK(a_read_stable,   clk, 1'b0,
              (!we && !$past(we) && addr == $past(addr)) |=> (dout == $past(dout)))

  task automatic cyc(input bit w, input logic [7:0] a, input logic [31:0] v);
    @(negedge clk);
    if (exp_valid) begin `CHECK(dout == exp_dout, "RAM output") end
    we = w; addr = a; din = v;
    exp_dout  = w ? v : shadow[a];
    exp_valid = 1'b1;
    if (w) shadow[a] = v;
  endtask

  initial begin
    for (int i = 0; i < 256; i++) cyc(1, i[7:0], $urandom);      // write every location
    for (int i = 0; i < 256; i++) cyc(0, i[7:0], '0);            // read every location
    for (int i = 0; i < 1000; i++) cyc($urandom, $urandom, $urandom);
    cyc(0, 8'd0, '0);
    $display("  mem[0]=%08h  mem[255]=%08h", shadow[0], shadow[255]);
    `TB_DONE("day43_single_port_ram")
  end
endmodule
