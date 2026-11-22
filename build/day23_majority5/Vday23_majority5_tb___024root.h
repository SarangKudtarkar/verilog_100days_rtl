// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday23_majority5_tb.h for the primary calling header

#ifndef VERILATED_VDAY23_MAJORITY5_TB___024ROOT_H_
#define VERILATED_VDAY23_MAJORITY5_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday23_majority5_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday23_majority5_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day23_majority5_tb__DOT__clk;
    CData/*0:0*/ day23_majority5_tb__DOT__a;
    CData/*0:0*/ day23_majority5_tb__DOT__b;
    CData/*0:0*/ day23_majority5_tb__DOT__c;
    CData/*0:0*/ day23_majority5_tb__DOT__d;
    CData/*0:0*/ day23_majority5_tb__DOT__e;
    CData/*0:0*/ day23_majority5_tb__DOT__y;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    CData/*0:0*/ __Vsampled_TOP__day23_majority5_tb__DOT__c;
    CData/*0:0*/ __Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0;
    CData/*0:0*/ __Vsampled_TOP__day23_majority5_tb__DOT__d;
    CData/*0:0*/ __Vsampled_TOP__day23_majority5_tb__DOT__e;
    CData/*0:0*/ __Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_1;
    CData/*0:0*/ __Vsampled_TOP__day23_majority5_tb__DOT__a;
    CData/*0:0*/ __Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_3;
    CData/*0:0*/ __Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2;
    CData/*0:0*/ __Vsampled_TOP__day23_majority5_tb__DOT__b;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day23_majority5_tb__DOT__clk__0;
    IData/*31:0*/ day23_majority5_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string day23_majority5_tb__DOT__minterms;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc2abb722__0;
    VlTriggerScheduler __VtrigSched_hc2abb661__0;

    // INTERNAL VARIABLES
    Vday23_majority5_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday23_majority5_tb___024root(Vday23_majority5_tb__Syms* symsp, const char* namep);
    ~Vday23_majority5_tb___024root();
    VL_UNCOPYABLE(Vday23_majority5_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
