// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday27_jk_d_latch_tb.h for the primary calling header

#ifndef VERILATED_VDAY27_JK_D_LATCH_TB___024ROOT_H_
#define VERILATED_VDAY27_JK_D_LATCH_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday27_jk_d_latch_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday27_jk_d_latch_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__clk;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__ready;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__en_d;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__d;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__q_d;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__en_j;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__j;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__k;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__q_j;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT___Vpast_6_1;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT___Vpast_7_1;
    CData/*0:0*/ __Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_d;
    CData/*0:0*/ __Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_d;
    CData/*0:0*/ __Vsampled_TOP__day27_jk_d_latch_tb__DOT__d;
    CData/*0:0*/ __Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_j;
    CData/*0:0*/ __Vsampled_TOP__day27_jk_d_latch_tb__DOT__j;
    CData/*0:0*/ __Vsampled_TOP__day27_jk_d_latch_tb__DOT__k;
    CData/*0:0*/ __Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_j;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__en_j__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__j__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__k__0;
    IData/*31:0*/ day27_jk_d_latch_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hcc6644a1__0;
    VlTriggerScheduler __VtrigSched_hcc6645e2__0;

    // INTERNAL VARIABLES
    Vday27_jk_d_latch_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday27_jk_d_latch_tb___024root(Vday27_jk_d_latch_tb__Syms* symsp, const char* namep);
    ~Vday27_jk_d_latch_tb___024root();
    VL_UNCOPYABLE(Vday27_jk_d_latch_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
