// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday05_rca_4bit_tb.h for the primary calling header

#ifndef VERILATED_VDAY05_RCA_4BIT_TB___024ROOT_H_
#define VERILATED_VDAY05_RCA_4BIT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday05_rca_4bit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday05_rca_4bit_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day05_rca_4bit_tb__DOT__clk;
    CData/*3:0*/ day05_rca_4bit_tb__DOT__a;
    CData/*3:0*/ day05_rca_4bit_tb__DOT__b;
    CData/*3:0*/ day05_rca_4bit_tb__DOT__sum;
    CData/*0:0*/ day05_rca_4bit_tb__DOT__cin;
    CData/*0:0*/ day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__;
    CData/*0:0*/ day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__2__KET__;
    CData/*0:0*/ day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__1__KET__;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    CData/*0:0*/ __Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__;
    CData/*3:0*/ __Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0;
    CData/*3:0*/ __Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_1;
    CData/*3:0*/ __Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2;
    CData/*0:0*/ __Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__2__KET__;
    CData/*0:0*/ __Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__1__KET__;
    CData/*0:0*/ __Vsampled_TOP__day05_rca_4bit_tb__DOT__cin;
    CData/*3:0*/ __Vsampled_TOP__day05_rca_4bit_tb__DOT__a;
    CData/*3:0*/ __Vsampled_TOP__day05_rca_4bit_tb__DOT__b;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0;
    IData/*31:0*/ day05_rca_4bit_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd11c2305__0;
    VlTriggerScheduler __VtrigSched_hd11c2246__0;

    // INTERNAL VARIABLES
    Vday05_rca_4bit_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday05_rca_4bit_tb___024root(Vday05_rca_4bit_tb__Syms* symsp, const char* namep);
    ~Vday05_rca_4bit_tb___024root();
    VL_UNCOPYABLE(Vday05_rca_4bit_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
