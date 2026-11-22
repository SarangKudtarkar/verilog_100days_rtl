// Day-46 : Mealy FSM - detects two equal consecutive bits (11 or 00), non-overlapping.
// Output depends on present state AND present input.
module mealy_seq_detector (
  input  logic clk, rst, in,
  output logic y
);
  typedef enum logic [1:0] {S0, S1, S2} state_e;   // S0 idle, S1 saw '1', S2 saw '0'
  state_e state, next;

  always_ff @(posedge clk)
    if (rst) state <= S0;
    else     state <= next;

  always_comb begin
    next = state;
    y    = 1'b0;
    case (state)
      S0: next = in ? S1 : S2;
      S1: if (in) begin y = 1'b1; next = S0; end else next = S2;
      S2: if (!in) begin y = 1'b1; next = S0; end else next = S1;
      default: next = S0;
    endcase
  end
endmodule
