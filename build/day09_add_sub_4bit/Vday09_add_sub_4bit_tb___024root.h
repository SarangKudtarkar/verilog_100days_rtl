// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday09_add_sub_4bit_tb.h for the primary calling header

#ifndef VERILATED_VDAY09_ADD_SUB_4BIT_TB___024ROOT_H_
#define VERILATED_VDAY09_ADD_SUB_4BIT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday09_add_sub_4bit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday09_add_sub_4bit_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day09_add_sub_4bit_tb__DOT__clk;
    CData/*3:0*/ day09_add_sub_4bit_tb__DOT__a;
    CData/*3:0*/ day09_add_sub_4bit_tb__DOT__b;
    CData/*3:0*/ day09_add_sub_4bit_tb__DOT__result;
    CData/*0:0*/ day09_add_sub_4bit_tb__DOT__mode;
    CData/*0:0*/ day09_add_sub_4bit_tb__DOT__cout;
    CData/*0:0*/ day09_add_sub_4bit_tb__DOT__ovf;
    CData/*0:0*/ __Vsampled_TOP__day09_add_sub_4bit_tb__DOT__mode;
    CData/*0:0*/ __Vsampled_TOP__day09_add_sub_4bit_tb__DOT__cout;
    CData/*3:0*/ __Vsampled_TOP__day09_add_sub_4bit_tb__DOT__result;
    CData/*3:0*/ __Vsampled_TOP__day09_add_sub_4bit_tb__DOT__a;
    CData/*3:0*/ __Vsampled_TOP__day09_add_sub_4bit_tb__DOT__b;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0;
    IData/*31:0*/ day09_add_sub_4bit_tb__DOT__errors;
    IData/*31:0*/ day09_add_sub_4bit_tb__DOT__exp;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb4db88d5__0;
    VlTriggerScheduler __VtrigSched_hb4db8916__0;

    // INTERNAL VARIABLES
    Vday09_add_sub_4bit_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday09_add_sub_4bit_tb___024root(Vday09_add_sub_4bit_tb__Syms* symsp, const char* namep);
    ~Vday09_add_sub_4bit_tb___024root();
    VL_UNCOPYABLE(Vday09_add_sub_4bit_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
