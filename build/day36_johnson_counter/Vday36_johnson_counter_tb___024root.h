// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday36_johnson_counter_tb.h for the primary calling header

#ifndef VERILATED_VDAY36_JOHNSON_COUNTER_TB___024ROOT_H_
#define VERILATED_VDAY36_JOHNSON_COUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday36_johnson_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday36_johnson_counter_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day36_johnson_counter_tb__DOT__clk;
    CData/*0:0*/ day36_johnson_counter_tb__DOT__rst;
    CData/*3:0*/ day36_johnson_counter_tb__DOT__q;
    CData/*0:0*/ day36_johnson_counter_tb__DOT___Vpast_1_1;
    CData/*2:0*/ day36_johnson_counter_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day36_johnson_counter_tb__DOT___Vpast_3_1;
    CData/*3:0*/ day36_johnson_counter_tb__DOT___Vpast_5_1;
    CData/*0:0*/ day36_johnson_counter_tb__DOT___Vpast_7_1;
    CData/*0:0*/ day36_johnson_counter_tb__DOT___Vpast_7_2;
    CData/*0:0*/ day36_johnson_counter_tb__DOT___Vpast_7_3;
    CData/*0:0*/ day36_johnson_counter_tb__DOT___Vpast_7_4;
    CData/*0:0*/ day36_johnson_counter_tb__DOT___Vpast_7_5;
    CData/*0:0*/ day36_johnson_counter_tb__DOT___Vpast_7_6;
    CData/*0:0*/ day36_johnson_counter_tb__DOT___Vpast_7_7;
    CData/*0:0*/ day36_johnson_counter_tb__DOT___Vpast_7_8;
    CData/*3:0*/ day36_johnson_counter_tb__DOT___Vpast_5_2;
    CData/*3:0*/ day36_johnson_counter_tb__DOT___Vpast_5_3;
    CData/*3:0*/ day36_johnson_counter_tb__DOT___Vpast_5_4;
    CData/*3:0*/ day36_johnson_counter_tb__DOT___Vpast_5_5;
    CData/*3:0*/ day36_johnson_counter_tb__DOT___Vpast_5_6;
    CData/*3:0*/ day36_johnson_counter_tb__DOT___Vpast_5_7;
    CData/*3:0*/ day36_johnson_counter_tb__DOT___Vpast_5_8;
    CData/*3:0*/ __Vsampled_TOP__day36_johnson_counter_tb__DOT__q;
    CData/*0:0*/ __Vsampled_TOP__day36_johnson_counter_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day36_johnson_counter_tb__DOT__clk__0;
    IData/*31:0*/ day36_johnson_counter_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0a5469a9__0;

    // INTERNAL VARIABLES
    Vday36_johnson_counter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 8> day36_johnson_counter_tb__DOT__SEQ = {{
        0U, 1U, 3U, 7U, 0x0fU, 0x0eU, 0x0cU, 8U
    }};

    // CONSTRUCTORS
    Vday36_johnson_counter_tb___024root(Vday36_johnson_counter_tb__Syms* symsp, const char* namep);
    ~Vday36_johnson_counter_tb___024root();
    VL_UNCOPYABLE(Vday36_johnson_counter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
