// Day-24 : HCF / GCD by repeated subtraction (SystemVerilog)
// start (1-cycle pulse while idle) -> busy ... -> done (1-cycle pulse), hcf valid
module hcf_calc #(parameter int W = 8) (
  input  logic         clk, rst,
  input  logic         start,
  input  logic [W-1:0] a, b,
  output logic         busy,
  output logic         done,
  output logic [W-1:0] hcf
);
  typedef enum logic {IDLE, RUN} state_e;
  state_e      state;
  logic [W-1:0] x, y;

  always_ff @(posedge clk) begin
    if (rst) begin
      state <= IDLE; x <= '0; y <= '0; hcf <= '0; done <= 1'b0;
    end else begin
      done <= 1'b0;
      case (state)
        IDLE: if (start) begin x <= a; y <= b; state <= RUN; end
        RUN : begin
          if (x == y || x == '0 || y == '0) begin   // finished (also handles zero operands)
            hcf   <= x | y;
            done  <= 1'b1;
            state <= IDLE;
          end else if (x > y) x <= x - y;
          else                y <= y - x;
        end
      endcase
    end
  end
  assign busy = (state == RUN);
endmodule
