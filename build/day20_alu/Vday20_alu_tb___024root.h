// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday20_alu_tb.h for the primary calling header

#ifndef VERILATED_VDAY20_ALU_TB___024ROOT_H_
#define VERILATED_VDAY20_ALU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday20_alu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday20_alu_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day20_alu_tb__DOT__clk;
    CData/*7:0*/ day20_alu_tb__DOT__a;
    CData/*7:0*/ day20_alu_tb__DOT__b;
    CData/*3:0*/ day20_alu_tb__DOT__op;
    CData/*3:0*/ __Vsampled_TOP__day20_alu_tb__DOT__op;
    CData/*7:0*/ __Vsampled_TOP__day20_alu_tb__DOT__a;
    CData/*7:0*/ __Vsampled_TOP__day20_alu_tb__DOT__b;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day20_alu_tb__DOT__clk__0;
    SData/*8:0*/ day20_alu_tb__DOT__dut__DOT__r;
    SData/*8:0*/ __Vsampled_TOP__day20_alu_tb__DOT__dut__DOT__r;
    IData/*31:0*/ day20_alu_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc801c9c1__0;
    VlTriggerScheduler __VtrigSched_hc801ca02__0;

    // INTERNAL VARIABLES
    Vday20_alu_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday20_alu_tb___024root(Vday20_alu_tb__Syms* symsp, const char* namep);
    ~Vday20_alu_tb___024root();
    VL_UNCOPYABLE(Vday20_alu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
