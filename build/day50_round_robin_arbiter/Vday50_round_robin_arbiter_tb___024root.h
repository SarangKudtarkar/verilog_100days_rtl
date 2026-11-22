// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday50_round_robin_arbiter_tb.h for the primary calling header

#ifndef VERILATED_VDAY50_ROUND_ROBIN_ARBITER_TB___024ROOT_H_
#define VERILATED_VDAY50_ROUND_ROBIN_ARBITER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday50_round_robin_arbiter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday50_round_robin_arbiter_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day50_round_robin_arbiter_tb__DOT__clk;
    CData/*0:0*/ day50_round_robin_arbiter_tb__DOT__rst;
    CData/*3:0*/ day50_round_robin_arbiter_tb__DOT__req;
    CData/*0:0*/ day50_round_robin_arbiter_tb__DOT___Vpast_5_1;
    CData/*0:0*/ day50_round_robin_arbiter_tb__DOT___Vpast_7_1;
    CData/*0:0*/ day50_round_robin_arbiter_tb__DOT___Vpast_9_1;
    CData/*0:0*/ day50_round_robin_arbiter_tb__DOT___Vpast_11_1;
    CData/*1:0*/ day50_round_robin_arbiter_tb__DOT__dut__DOT__ptr;
    CData/*3:0*/ day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c;
    CData/*1:0*/ day50_round_robin_arbiter_tb__DOT__dut__DOT__gidx;
    CData/*3:0*/ __Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c;
    CData/*3:0*/ __Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req;
    CData/*0:0*/ __Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0;
    IData/*31:0*/ day50_round_robin_arbiter_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 4> day50_round_robin_arbiter_tb__DOT__waitc;
    VlUnpacked<IData/*31:0*/, 4> day50_round_robin_arbiter_tb__DOT__gcount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h96387ef1__0;
    VlTriggerScheduler __VtrigSched_h96387f32__0;

    // INTERNAL VARIABLES
    Vday50_round_robin_arbiter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday50_round_robin_arbiter_tb___024root(Vday50_round_robin_arbiter_tb__Syms* symsp, const char* namep);
    ~Vday50_round_robin_arbiter_tb___024root();
    VL_UNCOPYABLE(Vday50_round_robin_arbiter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
