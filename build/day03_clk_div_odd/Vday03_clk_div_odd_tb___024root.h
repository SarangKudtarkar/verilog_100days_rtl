// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday03_clk_div_odd_tb.h for the primary calling header

#ifndef VERILATED_VDAY03_CLK_DIV_ODD_TB___024ROOT_H_
#define VERILATED_VDAY03_CLK_DIV_ODD_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday03_clk_div_odd_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday03_clk_div_odd_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day03_clk_div_odd_tb__DOT__clk;
    CData/*0:0*/ day03_clk_div_odd_tb__DOT__rst;
    CData/*0:0*/ day03_clk_div_odd_tb__DOT__clk_out;
    CData/*0:0*/ day03_clk_div_odd_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day03_clk_div_odd_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day03_clk_div_odd_tb__DOT___Vpast_2_2;
    CData/*0:0*/ day03_clk_div_odd_tb__DOT___Vpast_2_3;
    CData/*0:0*/ day03_clk_div_odd_tb__DOT___Vpast_2_4;
    CData/*0:0*/ day03_clk_div_odd_tb__DOT___Vpast_1_2;
    CData/*0:0*/ day03_clk_div_odd_tb__DOT___Vpast_1_3;
    CData/*0:0*/ day03_clk_div_odd_tb__DOT___Vpast_1_4;
    CData/*1:0*/ day03_clk_div_odd_tb__DOT__dut__DOT__cnt_p;
    CData/*1:0*/ day03_clk_div_odd_tb__DOT__dut__DOT__cnt_n;
    CData/*0:0*/ __Vsampled_TOP__day03_clk_div_odd_tb__DOT__clk_out;
    CData/*0:0*/ __Vsampled_TOP__day03_clk_div_odd_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day03_clk_div_odd_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day03_clk_div_odd_tb__DOT__clk_out__0;
    IData/*31:0*/ day03_clk_div_odd_tb__DOT__errors;
    IData/*31:0*/ day03_clk_div_odd_tb__DOT__periods;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ day03_clk_div_odd_tb__DOT__t_rise;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6c231d9f__0;

    // INTERNAL VARIABLES
    Vday03_clk_div_odd_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday03_clk_div_odd_tb___024root(Vday03_clk_div_odd_tb__Syms* symsp, const char* namep);
    ~Vday03_clk_div_odd_tb___024root();
    VL_UNCOPYABLE(Vday03_clk_div_odd_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
