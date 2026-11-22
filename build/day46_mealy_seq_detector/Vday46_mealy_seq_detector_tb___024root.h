// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday46_mealy_seq_detector_tb.h for the primary calling header

#ifndef VERILATED_VDAY46_MEALY_SEQ_DETECTOR_TB___024ROOT_H_
#define VERILATED_VDAY46_MEALY_SEQ_DETECTOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday46_mealy_seq_detector_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday46_mealy_seq_detector_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day46_mealy_seq_detector_tb__DOT__clk;
    CData/*0:0*/ day46_mealy_seq_detector_tb__DOT__rst;
    CData/*0:0*/ day46_mealy_seq_detector_tb__DOT__in;
    CData/*0:0*/ day46_mealy_seq_detector_tb__DOT__pv;
    CData/*0:0*/ day46_mealy_seq_detector_tb__DOT__prev;
    CData/*0:0*/ day46_mealy_seq_detector_tb__DOT__exp_y;
    CData/*0:0*/ day46_mealy_seq_detector_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day46_mealy_seq_detector_tb__DOT___Vpast_3_1;
    CData/*1:0*/ day46_mealy_seq_detector_tb__DOT__dut__DOT__state;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    CData/*2:0*/ __Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0;
    CData/*0:0*/ __Vsampled_TOP__day46_mealy_seq_detector_tb__DOT__in;
    CData/*0:0*/ __Vsampled_TOP__day46_mealy_seq_detector_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day46_mealy_seq_detector_tb__DOT__clk__0;
    IData/*31:0*/ day46_mealy_seq_detector_tb__DOT__errors;
    IData/*31:0*/ day46_mealy_seq_detector_tb__DOT__n_det;
    IData/*31:0*/ day46_mealy_seq_detector_tb__DOT__cyc;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*0:0*/, 8> __Vsampled_TOP__TABLE_h07827a76_0;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4e098367__0;

    // INTERNAL VARIABLES
    Vday46_mealy_seq_detector_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday46_mealy_seq_detector_tb___024root(Vday46_mealy_seq_detector_tb__Syms* symsp, const char* namep);
    ~Vday46_mealy_seq_detector_tb___024root();
    VL_UNCOPYABLE(Vday46_mealy_seq_detector_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
