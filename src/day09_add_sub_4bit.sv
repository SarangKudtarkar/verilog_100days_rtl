// Day-9 : 4-bit adder-subtractor.  mode=0 : a+b   mode=1 : a-b (a + ~b + 1)
module add_sub_4bit (
  input  logic [3:0] a, b,
  input  logic       mode,
  output logic [3:0] result,
  output logic       cout,       // add: carry-out ; sub: 1 = no borrow (a>=b)
  output logic       ovf         // signed overflow
);
  logic [3:0] bx;
  assign bx = b ^ {4{mode}};
  assign {cout, result} = {1'b0, a} + {1'b0, bx} + {4'b0, mode};
  assign ovf = (a[3] == bx[3]) && (result[3] != a[3]);
endmodule
