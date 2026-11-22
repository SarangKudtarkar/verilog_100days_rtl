// Day-13 : CMOS inverter.
//   -DSWITCH_LEVEL : transistor-level (pmos/nmos primitives) - Icarus, Questa, VCS, Xcelium, xsim
//   default        : behavioural pull-up / pull-down network (Verilator has no switch primitives)
module cmos_inverter (
  input  wire in,
  output wire out
);
  supply1 vdd;
  supply0 gnd;
`ifdef SWITCH_LEVEL
  pmos p1 (out, vdd, in);      // conducts when in = 0 : pulls out to VDD
  nmos n1 (out, gnd, in);      // conducts when in = 1 : pulls out to GND
`else
  assign out = (in == 1'b0) ? 1'b1 : 1'bz;   // PMOS pull-up network
  assign out = (in == 1'b1) ? 1'b0 : 1'bz;   // NMOS pull-down network
`endif
endmodule
