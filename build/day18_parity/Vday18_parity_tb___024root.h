// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday18_parity_tb.h for the primary calling header

#ifndef VERILATED_VDAY18_PARITY_TB___024ROOT_H_
#define VERILATED_VDAY18_PARITY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday18_parity_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday18_parity_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day18_parity_tb__DOT__clk;
    CData/*7:0*/ day18_parity_tb__DOT__data;
    CData/*7:0*/ day18_parity_tb__DOT__rx_data;
    CData/*0:0*/ day18_parity_tb__DOT__rx_p;
    CData/*0:0*/ day18_parity_tb__DOT__error;
    CData/*7:0*/ __Vsampled_TOP__day18_parity_tb__DOT__data;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day18_parity_tb__DOT__clk__0;
    IData/*31:0*/ day18_parity_tb__DOT__errors;
    IData/*31:0*/ day18_parity_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1cf86759__0;
    VlTriggerScheduler __VtrigSched_h1cf8679a__0;

    // INTERNAL VARIABLES
    Vday18_parity_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday18_parity_tb___024root(Vday18_parity_tb__Syms* symsp, const char* namep);
    ~Vday18_parity_tb___024root();
    VL_UNCOPYABLE(Vday18_parity_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
