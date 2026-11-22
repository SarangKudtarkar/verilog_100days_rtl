// Day-48 : generates the first five prime numbers 2,3,5,7,11 repeatedly
module prime_seq_gen (
  input  logic       clk, rst,
  output logic [3:0] seq_out
);
  logic [2:0] idx;
  always_ff @(posedge clk)
    if (rst) idx <= 3'd0;
    else     idx <= (idx == 3'd4) ? 3'd0 : idx + 1'b1;

  always_comb begin
    case (idx)
      3'd0:    seq_out = 4'd2;
      3'd1:    seq_out = 4'd3;
      3'd2:    seq_out = 4'd5;
      3'd3:    seq_out = 4'd7;
      3'd4:    seq_out = 4'd11;
      default: seq_out = 4'd2;
    endcase
  end
endmodule
