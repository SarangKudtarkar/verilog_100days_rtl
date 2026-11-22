// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday37_sync_counter_tb.h for the primary calling header

#ifndef VERILATED_VDAY37_SYNC_COUNTER_TB___024ROOT_H_
#define VERILATED_VDAY37_SYNC_COUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday37_sync_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday37_sync_counter_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day37_sync_counter_tb__DOT__clk;
    CData/*0:0*/ day37_sync_counter_tb__DOT__rst;
    CData/*3:0*/ day37_sync_counter_tb__DOT__q;
    CData/*0:0*/ day37_sync_counter_tb__DOT___Vpast_1_1;
    CData/*3:0*/ day37_sync_counter_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day37_sync_counter_tb__DOT__dut__DOT__t__BRA__2__KET__;
    CData/*0:0*/ day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q;
    CData/*0:0*/ day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q;
    CData/*0:0*/ day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q;
    CData/*0:0*/ day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q;
    CData/*3:0*/ __Vsampled_TOP__day37_sync_counter_tb__DOT__q;
    CData/*0:0*/ __Vsampled_TOP__day37_sync_counter_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day37_sync_counter_tb__DOT__clk__0;
    IData/*31:0*/ day37_sync_counter_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h223503e7__0;

    // INTERNAL VARIABLES
    Vday37_sync_counter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday37_sync_counter_tb___024root(Vday37_sync_counter_tb__Syms* symsp, const char* namep);
    ~Vday37_sync_counter_tb___024root();
    VL_UNCOPYABLE(Vday37_sync_counter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
