// Day-32 : universal shift register
//  mode: 0 hold | 1 parallel load | 2 shift left | 3 shift right
//        4 rotate left | 5 rotate right | 6,7 hold
module universal_shift_reg #(parameter int W = 8) (
  input  logic         clk, rst,
  input  logic [2:0]   mode,
  input  logic [W-1:0] pin,       // parallel in
  input  logic         si,        // serial in for linear shifts
  output logic [W-1:0] q
);
  always_ff @(posedge clk) begin
    if (rst) q <= '0;
    else case (mode)
      3'd1:    q <= pin;
      3'd2:    q <= {q[W-2:0], si};         // linear left
      3'd3:    q <= {si, q[W-1:1]};         // linear right
      3'd4:    q <= {q[W-2:0], q[W-1]};     // circular left
      3'd5:    q <= {q[0], q[W-1:1]};       // circular right
      default: q <= q;
    endcase
  end
endmodule
