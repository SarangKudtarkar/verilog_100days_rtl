// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday33_ripple_counter_tb.h for the primary calling header

#ifndef VERILATED_VDAY33_RIPPLE_COUNTER_TB___024ROOT_H_
#define VERILATED_VDAY33_RIPPLE_COUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday33_ripple_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday33_ripple_counter_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day33_ripple_counter_tb__DOT__clk;
    CData/*0:0*/ day33_ripple_counter_tb__DOT__rst;
    CData/*3:0*/ day33_ripple_counter_tb__DOT__q;
    CData/*0:0*/ day33_ripple_counter_tb__DOT___Vpast_1_1;
    CData/*3:0*/ day33_ripple_counter_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t0__q;
    CData/*0:0*/ day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t1__q;
    CData/*0:0*/ day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t2__q;
    CData/*0:0*/ day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t3__q;
    CData/*3:0*/ __Vsampled_TOP__day33_ripple_counter_tb__DOT__q;
    CData/*0:0*/ __Vsampled_TOP__day33_ripple_counter_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t2__q__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t1__q__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t0__q__0;
    IData/*31:0*/ day33_ripple_counter_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd55a22e2__0;
    VlTriggerScheduler __VtrigSched_hd55a21a1__0;

    // INTERNAL VARIABLES
    Vday33_ripple_counter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday33_ripple_counter_tb___024root(Vday33_ripple_counter_tb__Syms* symsp, const char* namep);
    ~Vday33_ripple_counter_tb___024root();
    VL_UNCOPYABLE(Vday33_ripple_counter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
