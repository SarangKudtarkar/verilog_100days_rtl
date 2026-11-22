// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday49_fixed_priority_arbiter_tb.h for the primary calling header

#ifndef VERILATED_VDAY49_FIXED_PRIORITY_ARBITER_TB___024ROOT_H_
#define VERILATED_VDAY49_FIXED_PRIORITY_ARBITER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday49_fixed_priority_arbiter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday49_fixed_priority_arbiter_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day49_fixed_priority_arbiter_tb__DOT__clk;
    CData/*3:0*/ day49_fixed_priority_arbiter_tb__DOT__req;
    CData/*3:0*/ day49_fixed_priority_arbiter_tb__DOT__grant;
    CData/*3:0*/ day49_fixed_priority_arbiter_tb__DOT__exp_g;
    CData/*3:0*/ __Vsampled_TOP__day49_fixed_priority_arbiter_tb__DOT__grant;
    CData/*3:0*/ __Vsampled_TOP__day49_fixed_priority_arbiter_tb__DOT__req;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day49_fixed_priority_arbiter_tb__DOT__clk__0;
    IData/*31:0*/ day49_fixed_priority_arbiter_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc00c037d__0;
    VlTriggerScheduler __VtrigSched_hc00c04be__0;

    // INTERNAL VARIABLES
    Vday49_fixed_priority_arbiter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday49_fixed_priority_arbiter_tb___024root(Vday49_fixed_priority_arbiter_tb__Syms* symsp, const char* namep);
    ~Vday49_fixed_priority_arbiter_tb___024root();
    VL_UNCOPYABLE(Vday49_fixed_priority_arbiter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
