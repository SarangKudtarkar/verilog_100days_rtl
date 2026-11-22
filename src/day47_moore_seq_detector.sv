// Day-47 : Moore FSM - same detector, output depends on the present state only.
module moore_seq_detector (
  input  logic clk, rst, in,
  output logic y
);
  typedef enum logic [1:0] {S0, S1, S2, DET} state_e;  // DET : sequence found
  state_e state, next;

  always_ff @(posedge clk)
    if (rst) state <= S0;
    else     state <= next;

  always_comb begin
    case (state)
      S0:      next = in ? S1  : S2;
      S1:      next = in ? DET : S2;
      S2:      next = in ? S1  : DET;
      DET:     next = in ? S1  : S2;     // non-overlapping: start afresh
      default: next = S0;
    endcase
  end
  assign y = (state == DET);
endmodule
