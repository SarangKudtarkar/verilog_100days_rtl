// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday25_traffic_light_tb.h for the primary calling header

#ifndef VERILATED_VDAY25_TRAFFIC_LIGHT_TB___024ROOT_H_
#define VERILATED_VDAY25_TRAFFIC_LIGHT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday25_traffic_light_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday25_traffic_light_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day25_traffic_light_tb__DOT__clk;
    CData/*0:0*/ day25_traffic_light_tb__DOT__rst;
    CData/*2:0*/ day25_traffic_light_tb__DOT__prev;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_4_1;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_6_1;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_8_1;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_8_2;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_8_3;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_8_4;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_8_5;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_8_6;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_8_7;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_10_1;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_10_2;
    CData/*0:0*/ day25_traffic_light_tb__DOT___Vpast_10_3;
    CData/*1:0*/ day25_traffic_light_tb__DOT__dut__DOT__state;
    CData/*7:0*/ day25_traffic_light_tb__DOT__dut__DOT__timer;
    CData/*1:0*/ __Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state;
    CData/*0:0*/ __Vsampled_TOP__day25_traffic_light_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day25_traffic_light_tb__DOT__clk__0;
    IData/*31:0*/ day25_traffic_light_tb__DOT__errors;
    IData/*31:0*/ day25_traffic_light_tb__DOT__run_len;
    IData/*31:0*/ day25_traffic_light_tb__DOT__cycles;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc3ba543c__0;

    // INTERNAL VARIABLES
    Vday25_traffic_light_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday25_traffic_light_tb___024root(Vday25_traffic_light_tb__Syms* symsp, const char* namep);
    ~Vday25_traffic_light_tb___024root();
    VL_UNCOPYABLE(Vday25_traffic_light_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
