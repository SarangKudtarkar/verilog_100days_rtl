// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday29_ff_vs_register_tb.h for the primary calling header

#ifndef VERILATED_VDAY29_FF_VS_REGISTER_TB___024ROOT_H_
#define VERILATED_VDAY29_FF_VS_REGISTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday29_ff_vs_register_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday29_ff_vs_register_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day29_ff_vs_register_tb__DOT__clk;
    CData/*0:0*/ day29_ff_vs_register_tb__DOT__rst_n;
    CData/*0:0*/ day29_ff_vs_register_tb__DOT__en;
    CData/*3:0*/ day29_ff_vs_register_tb__DOT__d;
    CData/*3:0*/ day29_ff_vs_register_tb__DOT__q_ff;
    CData/*3:0*/ day29_ff_vs_register_tb__DOT__q_reg;
    CData/*3:0*/ day29_ff_vs_register_tb__DOT__e_ff;
    CData/*0:0*/ day29_ff_vs_register_tb__DOT___Vpast_1_1;
    CData/*3:0*/ day29_ff_vs_register_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day29_ff_vs_register_tb__DOT___Vpast_4_1;
    CData/*0:0*/ day29_ff_vs_register_tb__DOT___Vpast_6_1;
    CData/*3:0*/ day29_ff_vs_register_tb__DOT___Vpast_7_1;
    CData/*3:0*/ __Vsampled_TOP__day29_ff_vs_register_tb__DOT__q_ff;
    CData/*3:0*/ __Vsampled_TOP__day29_ff_vs_register_tb__DOT__q_reg;
    CData/*3:0*/ __Vsampled_TOP__day29_ff_vs_register_tb__DOT__d;
    CData/*0:0*/ __Vsampled_TOP__day29_ff_vs_register_tb__DOT__rst_n;
    CData/*0:0*/ __Vsampled_TOP__day29_ff_vs_register_tb__DOT__en;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__rst_n__0;
    IData/*31:0*/ day29_ff_vs_register_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc8596dd5__0;

    // INTERNAL VARIABLES
    Vday29_ff_vs_register_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday29_ff_vs_register_tb___024root(Vday29_ff_vs_register_tb__Syms* symsp, const char* namep);
    ~Vday29_ff_vs_register_tb___024root();
    VL_UNCOPYABLE(Vday29_ff_vs_register_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
