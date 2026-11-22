// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday26_sr_latch_tb.h for the primary calling header

#ifndef VERILATED_VDAY26_SR_LATCH_TB___024ROOT_H_
#define VERILATED_VDAY26_SR_LATCH_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday26_sr_latch_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday26_sr_latch_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day26_sr_latch_tb__DOT__clk;
    CData/*0:0*/ day26_sr_latch_tb__DOT__s_n;
    CData/*0:0*/ day26_sr_latch_tb__DOT__r_n;
    CData/*0:0*/ day26_sr_latch_tb__DOT__s;
    CData/*0:0*/ day26_sr_latch_tb__DOT__r;
    CData/*0:0*/ day26_sr_latch_tb__DOT__qa;
    CData/*0:0*/ day26_sr_latch_tb__DOT__qna;
    CData/*0:0*/ day26_sr_latch_tb__DOT__qb;
    CData/*0:0*/ day26_sr_latch_tb__DOT__qnb;
    CData/*0:0*/ day26_sr_latch_tb__DOT___Vpast_4_1;
    CData/*0:0*/ day26_sr_latch_tb__DOT___Vpast_9_1;
    CData/*0:0*/ __Vsampled_TOP__day26_sr_latch_tb__DOT__s_n;
    CData/*0:0*/ __Vsampled_TOP__day26_sr_latch_tb__DOT__r_n;
    CData/*0:0*/ __Vsampled_TOP__day26_sr_latch_tb__DOT__qa;
    CData/*0:0*/ __Vsampled_TOP__day26_sr_latch_tb__DOT__qna;
    CData/*0:0*/ __Vsampled_TOP__day26_sr_latch_tb__DOT__s;
    CData/*0:0*/ __Vsampled_TOP__day26_sr_latch_tb__DOT__r;
    CData/*0:0*/ __Vsampled_TOP__day26_sr_latch_tb__DOT__qb;
    CData/*0:0*/ __Vsampled_TOP__day26_sr_latch_tb__DOT__qnb;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qb__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qa__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qb__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qa__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0;
    IData/*31:0*/ day26_sr_latch_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 2> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hdd1a3e37__0;
    VlTriggerScheduler __VtrigSched_hdd1a3d78__0;

    // INTERNAL VARIABLES
    Vday26_sr_latch_tb__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*1:0*/, 8> day26_sr_latch_tb__DOT__NAND_V = {{
        1U, 3U, 2U, 3U, 1U, 0U, 1U, 3U
    }};
    static constexpr VlUnpacked<CData/*1:0*/, 8> day26_sr_latch_tb__DOT__NOR_V = {{
        2U, 0U, 1U, 0U, 2U, 3U, 2U, 0U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 8> day26_sr_latch_tb__DOT__EXP = {{
        1U, 1U, 0U, 0U,
        1U, 2U, 1U, 1U
    }};

    // CONSTRUCTORS
    Vday26_sr_latch_tb___024root(Vday26_sr_latch_tb__Syms* symsp, const char* namep);
    ~Vday26_sr_latch_tb___024root();
    VL_UNCOPYABLE(Vday26_sr_latch_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
