// Day-20 : 8-bit ALU, 16 operations selected by op[3:0]
module alu #(parameter int W = 8) (
  input  logic [W-1:0] a, b,
  input  logic [3:0]   op,
  output logic [W-1:0] y,
  output logic         carry,      // carry / borrow / shifted-out bit
  output logic         zero
);
  typedef enum logic [3:0] {
    ADD = 4'd0,  SUB = 4'd1,  INC = 4'd2,  DEC = 4'd3,
    AND_= 4'd4,  OR_ = 4'd5,  XOR_= 4'd6,  NOT_= 4'd7,
    NAND= 4'd8,  NOR = 4'd9,  XNOR= 4'd10, SHL = 4'd11,
    SHR = 4'd12, ROL = 4'd13, ROR = 4'd14, CMP = 4'd15   // CMP: y = (a == b)
  } alu_op_e;

  logic [W:0] r;
  always_comb begin
    r = '0;
    case (alu_op_e'(op))
      ADD:  r = {1'b0, a} + {1'b0, b};
      SUB:  r = {1'b0, a} - {1'b0, b};
      INC:  r = {1'b0, a} + (W+1)'(1);
      DEC:  r = {1'b0, a} - (W+1)'(1);
      AND_: r = {1'b0, a & b};
      OR_:  r = {1'b0, a | b};
      XOR_: r = {1'b0, a ^ b};
      NOT_: r = {1'b0, ~a};
      NAND: r = {1'b0, ~(a & b)};
      NOR:  r = {1'b0, ~(a | b)};
      XNOR: r = {1'b0, ~(a ^ b)};
      SHL:  r = {a, 1'b0};                         // carry = old MSB
      SHR:  r = {a[0], 1'b0, a[W-1:1]};            // carry = old LSB
      ROL:  r = {1'b0, a[W-2:0], a[W-1]};
      ROR:  r = {1'b0, a[0], a[W-1:1]};
      CMP:  r = {{W{1'b0}}, (a == b)};
      default: r = '0;
    endcase
  end
  assign y     = r[W-1:0];
  assign carry = r[W];
  assign zero  = (y == '0);
endmodule
