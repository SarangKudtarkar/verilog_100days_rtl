// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday47_moore_seq_detector_tb.h for the primary calling header

#ifndef VERILATED_VDAY47_MOORE_SEQ_DETECTOR_TB___024ROOT_H_
#define VERILATED_VDAY47_MOORE_SEQ_DETECTOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday47_moore_seq_detector_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday47_moore_seq_detector_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day47_moore_seq_detector_tb__DOT__clk;
    CData/*0:0*/ day47_moore_seq_detector_tb__DOT__rst;
    CData/*0:0*/ day47_moore_seq_detector_tb__DOT__in;
    CData/*0:0*/ day47_moore_seq_detector_tb__DOT__pv;
    CData/*0:0*/ day47_moore_seq_detector_tb__DOT__prev;
    CData/*0:0*/ day47_moore_seq_detector_tb__DOT__det;
    CData/*0:0*/ day47_moore_seq_detector_tb__DOT__exp_y;
    CData/*0:0*/ day47_moore_seq_detector_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day47_moore_seq_detector_tb__DOT___Vpast_1_2;
    CData/*0:0*/ day47_moore_seq_detector_tb__DOT___Vpast_3_1;
    CData/*1:0*/ day47_moore_seq_detector_tb__DOT__dut__DOT__state;
    CData/*1:0*/ __Vsampled_TOP__day47_moore_seq_detector_tb__DOT__dut__DOT__state;
    CData/*0:0*/ __Vsampled_TOP__day47_moore_seq_detector_tb__DOT__in;
    CData/*0:0*/ __Vsampled_TOP__day47_moore_seq_detector_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day47_moore_seq_detector_tb__DOT__clk__0;
    IData/*31:0*/ day47_moore_seq_detector_tb__DOT__errors;
    IData/*31:0*/ day47_moore_seq_detector_tb__DOT__n_det;
    IData/*31:0*/ day47_moore_seq_detector_tb__DOT__cyc;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf9bf4da7__0;

    // INTERNAL VARIABLES
    Vday47_moore_seq_detector_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday47_moore_seq_detector_tb___024root(Vday47_moore_seq_detector_tb__Syms* symsp, const char* namep);
    ~Vday47_moore_seq_detector_tb___024root();
    VL_UNCOPYABLE(Vday47_moore_seq_detector_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
