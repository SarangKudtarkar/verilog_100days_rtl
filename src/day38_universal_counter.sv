// Day-38 : universal counter - up/down, parallel load, enable
module universal_counter #(parameter int W = 4) (
  input  logic         clk, rst,
  input  logic         en, load, up,
  input  logic [W-1:0] d,
  output logic [W-1:0] q
);
  always_ff @(posedge clk) begin
    if (rst)       q <= '0;
    else if (load) q <= d;
    else if (en)   q <= up ? q + 1'b1 : q - 1'b1;
  end
endmodule
