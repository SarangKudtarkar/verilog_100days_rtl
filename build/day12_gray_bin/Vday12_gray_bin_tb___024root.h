// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday12_gray_bin_tb.h for the primary calling header

#ifndef VERILATED_VDAY12_GRAY_BIN_TB___024ROOT_H_
#define VERILATED_VDAY12_GRAY_BIN_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday12_gray_bin_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday12_gray_bin_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day12_gray_bin_tb__DOT__clk;
    CData/*3:0*/ day12_gray_bin_tb__DOT__bin_in;
    CData/*3:0*/ day12_gray_bin_tb__DOT__gray;
    CData/*3:0*/ day12_gray_bin_tb__DOT__gray_prev;
    CData/*3:0*/ __Vsampled_TOP__day12_gray_bin_tb__DOT__gray;
    CData/*3:0*/ __Vsampled_TOP__day12_gray_bin_tb__DOT__bin_in;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day12_gray_bin_tb__DOT__clk__0;
    IData/*31:0*/ day12_gray_bin_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he42f41d7__0;
    VlTriggerScheduler __VtrigSched_he42f4218__0;

    // INTERNAL VARIABLES
    Vday12_gray_bin_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday12_gray_bin_tb___024root(Vday12_gray_bin_tb__Syms* symsp, const char* namep);
    ~Vday12_gray_bin_tb___024root();
    VL_UNCOPYABLE(Vday12_gray_bin_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
