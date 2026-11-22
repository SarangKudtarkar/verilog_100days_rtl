// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday34_decade_counter_tb.h for the primary calling header

#ifndef VERILATED_VDAY34_DECADE_COUNTER_TB___024ROOT_H_
#define VERILATED_VDAY34_DECADE_COUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday34_decade_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday34_decade_counter_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day34_decade_counter_tb__DOT__clk;
    CData/*0:0*/ day34_decade_counter_tb__DOT__rst;
    CData/*3:0*/ day34_decade_counter_tb__DOT__q;
    CData/*0:0*/ day34_decade_counter_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day34_decade_counter_tb__DOT___Vpast_4_1;
    CData/*3:0*/ day34_decade_counter_tb__DOT___Vpast_5_1;
    CData/*3:0*/ __Vdly__day34_decade_counter_tb__DOT__q;
    CData/*3:0*/ __Vsampled_TOP__day34_decade_counter_tb__DOT__q;
    CData/*0:0*/ __Vsampled_TOP__day34_decade_counter_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr_hc55ab210__0;
    CData/*0:0*/ __Vtrigprevexpr_hc55aa1a8__0;
    IData/*31:0*/ day34_decade_counter_tb__DOT__errors;
    IData/*31:0*/ day34_decade_counter_tb__DOT__exp;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0d12b46b__0;
    VlTriggerScheduler __VtrigSched_h0d12b42c__0;

    // INTERNAL VARIABLES
    Vday34_decade_counter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday34_decade_counter_tb___024root(Vday34_decade_counter_tb__Syms* symsp, const char* namep);
    ~Vday34_decade_counter_tb___024root();
    VL_UNCOPYABLE(Vday34_decade_counter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
