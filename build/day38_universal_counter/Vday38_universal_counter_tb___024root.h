// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday38_universal_counter_tb.h for the primary calling header

#ifndef VERILATED_VDAY38_UNIVERSAL_COUNTER_TB___024ROOT_H_
#define VERILATED_VDAY38_UNIVERSAL_COUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday38_universal_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday38_universal_counter_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day38_universal_counter_tb__DOT__clk;
    CData/*0:0*/ day38_universal_counter_tb__DOT__rst;
    CData/*0:0*/ day38_universal_counter_tb__DOT__en;
    CData/*0:0*/ day38_universal_counter_tb__DOT__load;
    CData/*0:0*/ day38_universal_counter_tb__DOT__up;
    CData/*3:0*/ day38_universal_counter_tb__DOT__d;
    CData/*3:0*/ day38_universal_counter_tb__DOT__q;
    CData/*0:0*/ day38_universal_counter_tb__DOT___Vpast_1_1;
    CData/*3:0*/ day38_universal_counter_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day38_universal_counter_tb__DOT___Vpast_4_1;
    CData/*0:0*/ day38_universal_counter_tb__DOT___Vpast_6_1;
    CData/*0:0*/ day38_universal_counter_tb__DOT___Vpast_8_1;
    CData/*3:0*/ day38_universal_counter_tb__DOT___Vpast_9_1;
    CData/*3:0*/ __Vsampled_TOP__day38_universal_counter_tb__DOT__q;
    CData/*0:0*/ __Vsampled_TOP__day38_universal_counter_tb__DOT__rst;
    CData/*0:0*/ __Vsampled_TOP__day38_universal_counter_tb__DOT__load;
    CData/*0:0*/ __Vsampled_TOP__day38_universal_counter_tb__DOT__en;
    CData/*0:0*/ __Vsampled_TOP__day38_universal_counter_tb__DOT__up;
    CData/*3:0*/ __Vsampled_TOP__day38_universal_counter_tb__DOT__d;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day38_universal_counter_tb__DOT__clk__0;
    IData/*31:0*/ day38_universal_counter_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd13c84f0__0;

    // INTERNAL VARIABLES
    Vday38_universal_counter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday38_universal_counter_tb___024root(Vday38_universal_counter_tb__Syms* symsp, const char* namep);
    ~Vday38_universal_counter_tb___024root();
    VL_UNCOPYABLE(Vday38_universal_counter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
