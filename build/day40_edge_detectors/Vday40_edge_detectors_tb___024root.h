// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday40_edge_detectors_tb.h for the primary calling header

#ifndef VERILATED_VDAY40_EDGE_DETECTORS_TB___024ROOT_H_
#define VERILATED_VDAY40_EDGE_DETECTORS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday40_edge_detectors_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday40_edge_detectors_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day40_edge_detectors_tb__DOT__clk;
    CData/*0:0*/ day40_edge_detectors_tb__DOT__rst;
    CData/*0:0*/ day40_edge_detectors_tb__DOT__sig;
    CData/*0:0*/ day40_edge_detectors_tb__DOT__pv;
    CData/*0:0*/ day40_edge_detectors_tb__DOT__pos_edge;
    CData/*0:0*/ day40_edge_detectors_tb__DOT__neg_edge;
    CData/*0:0*/ day40_edge_detectors_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day40_edge_detectors_tb__DOT__u_neg__DOT__prev;
    CData/*0:0*/ day40_edge_detectors_tb__DOT__u_pos__DOT__prev;
    CData/*0:0*/ __Vsampled_TOP__day40_edge_detectors_tb__DOT__pos_edge;
    CData/*0:0*/ __Vsampled_TOP__day40_edge_detectors_tb__DOT__sig;
    CData/*0:0*/ __Vsampled_TOP__day40_edge_detectors_tb__DOT__neg_edge;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day40_edge_detectors_tb__DOT__clk__0;
    IData/*31:0*/ day40_edge_detectors_tb__DOT____VlemExpr_0;
    IData/*31:0*/ day40_edge_detectors_tb__DOT__errors;
    IData/*31:0*/ day40_edge_detectors_tb__DOT__n_pos;
    IData/*31:0*/ day40_edge_detectors_tb__DOT__n_neg;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hdd57652b__0;

    // INTERNAL VARIABLES
    Vday40_edge_detectors_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday40_edge_detectors_tb___024root(Vday40_edge_detectors_tb__Syms* symsp, const char* namep);
    ~Vday40_edge_detectors_tb___024root();
    VL_UNCOPYABLE(Vday40_edge_detectors_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
