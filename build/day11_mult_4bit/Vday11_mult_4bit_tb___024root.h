// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday11_mult_4bit_tb.h for the primary calling header

#ifndef VERILATED_VDAY11_MULT_4BIT_TB___024ROOT_H_
#define VERILATED_VDAY11_MULT_4BIT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday11_mult_4bit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday11_mult_4bit_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day11_mult_4bit_tb__DOT__clk;
    CData/*3:0*/ day11_mult_4bit_tb__DOT__a;
    CData/*3:0*/ day11_mult_4bit_tb__DOT__b;
    CData/*7:0*/ day11_mult_4bit_tb__DOT__p;
    CData/*7:0*/ __Vsampled_TOP__day11_mult_4bit_tb__DOT__p;
    CData/*3:0*/ __Vsampled_TOP__day11_mult_4bit_tb__DOT__a;
    CData/*3:0*/ __Vsampled_TOP__day11_mult_4bit_tb__DOT__b;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day11_mult_4bit_tb__DOT__clk__0;
    IData/*31:0*/ day11_mult_4bit_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*7:0*/, 4> day11_mult_4bit_tb__DOT__dut__DOT__pp;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h05fe2129__0;
    VlTriggerScheduler __VtrigSched_h05fe206a__0;

    // INTERNAL VARIABLES
    Vday11_mult_4bit_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday11_mult_4bit_tb___024root(Vday11_mult_4bit_tb__Syms* symsp, const char* namep);
    ~Vday11_mult_4bit_tb___024root();
    VL_UNCOPYABLE(Vday11_mult_4bit_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
