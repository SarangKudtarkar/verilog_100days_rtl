// Day-25 : synchronous traffic-light FSM  RED -> GREEN -> YELLOW -> RED ...
// Each state lasts T_x clock cycles.
module traffic_light #(
  parameter int T_RED = 5, T_GREEN = 6, T_YELLOW = 2
) (
  input  logic clk, rst,
  output logic red, yellow, green
);
  typedef enum logic [1:0] {S_RED, S_GREEN, S_YELLOW} state_e;
  state_e state;
  logic [7:0] timer;

  always_ff @(posedge clk) begin
    if (rst) begin
      state <= S_RED; timer <= '0;
    end else begin
      case (state)
        S_RED:    if (timer == T_RED-1)    begin state <= S_GREEN;  timer <= '0; end else timer <= timer + 1'b1;
        S_GREEN:  if (timer == T_GREEN-1)  begin state <= S_YELLOW; timer <= '0; end else timer <= timer + 1'b1;
        S_YELLOW: if (timer == T_YELLOW-1) begin state <= S_RED;    timer <= '0; end else timer <= timer + 1'b1;
        default:  begin state <= S_RED; timer <= '0; end
      endcase
    end
  end
  assign red    = (state == S_RED);
  assign green  = (state == S_GREEN);
  assign yellow = (state == S_YELLOW);
endmodule
