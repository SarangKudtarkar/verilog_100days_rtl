// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday44_dual_port_ram_tb.h for the primary calling header

#ifndef VERILATED_VDAY44_DUAL_PORT_RAM_TB___024ROOT_H_
#define VERILATED_VDAY44_DUAL_PORT_RAM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday44_dual_port_ram_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday44_dual_port_ram_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day44_dual_port_ram_tb__DOT__clk;
    CData/*0:0*/ day44_dual_port_ram_tb__DOT__we_a;
    CData/*0:0*/ day44_dual_port_ram_tb__DOT__we_b;
    CData/*7:0*/ day44_dual_port_ram_tb__DOT__addr_a;
    CData/*7:0*/ day44_dual_port_ram_tb__DOT__addr_b;
    CData/*0:0*/ day44_dual_port_ram_tb__DOT__chk;
    CData/*0:0*/ day44_dual_port_ram_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day44_dual_port_ram_tb__DOT___Vpast_4_1;
    CData/*0:0*/ day44_dual_port_ram_tb__DOT___Vpast_7_1;
    CData/*0:0*/ day44_dual_port_ram_tb__DOT___Vpast_8_1;
    CData/*7:0*/ day44_dual_port_ram_tb__DOT___Vpast_9_1;
    CData/*7:0*/ day44_dual_port_ram_tb__DOT___Vpast_10_1;
    CData/*0:0*/ day44_dual_port_ram_tb__DOT___Vpast_11_1;
    CData/*0:0*/ __Vsampled_TOP__day44_dual_port_ram_tb__DOT__we_a;
    CData/*0:0*/ __Vsampled_TOP__day44_dual_port_ram_tb__DOT__we_b;
    CData/*7:0*/ __Vsampled_TOP__day44_dual_port_ram_tb__DOT__addr_b;
    CData/*7:0*/ __Vsampled_TOP__day44_dual_port_ram_tb__DOT__addr_a;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day44_dual_port_ram_tb__DOT__clk__0;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT____VlemExpr_1;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT____VlemExpr_0;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__din_a;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__din_b;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__dout_a;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__dout_b;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__exp_a;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__exp_b;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__errors;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT___Vpast_2_1;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT___Vpast_5_1;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT___Vpast_12_1;
    IData/*31:0*/ __Vsampled_TOP__day44_dual_port_ram_tb__DOT__dout_a;
    IData/*31:0*/ __Vsampled_TOP__day44_dual_port_ram_tb__DOT__dout_b;
    IData/*31:0*/ __Vsampled_TOP__day44_dual_port_ram_tb__DOT__din_a;
    IData/*31:0*/ __Vsampled_TOP__day44_dual_port_ram_tb__DOT__din_b;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 256> day44_dual_port_ram_tb__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> day44_dual_port_ram_tb__DOT__shadow;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1b6fe5ab__0;

    // INTERNAL VARIABLES
    Vday44_dual_port_ram_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday44_dual_port_ram_tb___024root(Vday44_dual_port_ram_tb__Syms* symsp, const char* namep);
    ~Vday44_dual_port_ram_tb___024root();
    VL_UNCOPYABLE(Vday44_dual_port_ram_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
