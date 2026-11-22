// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday45_async_fifo_tb.h for the primary calling header

#ifndef VERILATED_VDAY45_ASYNC_FIFO_TB___024ROOT_H_
#define VERILATED_VDAY45_ASYNC_FIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday45_async_fifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday45_async_fifo_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day45_async_fifo_tb__DOT__wclk;
    CData/*0:0*/ day45_async_fifo_tb__DOT__rclk;
    CData/*0:0*/ day45_async_fifo_tb__DOT__wrst_n;
    CData/*0:0*/ day45_async_fifo_tb__DOT__rrst_n;
    CData/*0:0*/ day45_async_fifo_tb__DOT__winc;
    CData/*0:0*/ day45_async_fifo_tb__DOT__rinc;
    CData/*7:0*/ day45_async_fifo_tb__DOT__wdata;
    CData/*0:0*/ day45_async_fifo_tb__DOT__wfull;
    CData/*0:0*/ day45_async_fifo_tb__DOT__rempty;
    CData/*4:0*/ day45_async_fifo_tb__DOT___Vpast_1_1;
    CData/*4:0*/ day45_async_fifo_tb__DOT___Vpast_3_1;
    CData/*0:0*/ day45_async_fifo_tb__DOT___Vpast_5_1;
    CData/*4:0*/ day45_async_fifo_tb__DOT___Vpast_6_1;
    CData/*0:0*/ day45_async_fifo_tb__DOT___Vpast_8_1;
    CData/*4:0*/ day45_async_fifo_tb__DOT___Vpast_9_1;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__wbin;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__wgray;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__wbin_n;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__wgray_n;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__wq2_rgray;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__rbin;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__rgray;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__rbin_n;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__rgray_n;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__rq2_wgray;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__u_sync_w2r__DOT__m;
    CData/*4:0*/ day45_async_fifo_tb__DOT__dut__DOT__u_sync_r2w__DOT__m;
    CData/*7:0*/ __VdlyVal__day45_async_fifo_tb__DOT__dut__DOT__mem__v0;
    CData/*3:0*/ __VdlyDim0__day45_async_fifo_tb__DOT__dut__DOT__mem__v0;
    CData/*0:0*/ __VdlySet__day45_async_fifo_tb__DOT__dut__DOT__mem__v0;
    CData/*4:0*/ __Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wgray;
    CData/*4:0*/ __Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wbin;
    CData/*0:0*/ __Vsampled_TOP__day45_async_fifo_tb__DOT__wrst_n;
    CData/*0:0*/ __Vsampled_TOP__day45_async_fifo_tb__DOT__wfull;
    CData/*0:0*/ __Vsampled_TOP__day45_async_fifo_tb__DOT__winc;
    CData/*4:0*/ __Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__rgray;
    CData/*4:0*/ __Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__rbin;
    CData/*0:0*/ __Vsampled_TOP__day45_async_fifo_tb__DOT__rrst_n;
    CData/*0:0*/ __Vsampled_TOP__day45_async_fifo_tb__DOT__rempty;
    CData/*0:0*/ __Vsampled_TOP__day45_async_fifo_tb__DOT__rinc;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wrst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rrst_n__0;
    IData/*31:0*/ day45_async_fifo_tb__DOT____VlemExpr_1;
    IData/*31:0*/ day45_async_fifo_tb__DOT____VlemExpr_0;
    IData/*31:0*/ day45_async_fifo_tb__DOT__wr_prob;
    IData/*31:0*/ day45_async_fifo_tb__DOT__rd_prob;
    IData/*31:0*/ day45_async_fifo_tb__DOT__errors;
    IData/*31:0*/ day45_async_fifo_tb__DOT__n_wr;
    IData/*31:0*/ day45_async_fifo_tb__DOT__n_rd;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*7:0*/, 16> day45_async_fifo_tb__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlQueue<CData/*7:0*/> day45_async_fifo_tb__DOT__model;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h09fd21a6__0;
    VlTriggerScheduler __VtrigSched_hd7da7fc3__0;

    // INTERNAL VARIABLES
    Vday45_async_fifo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday45_async_fifo_tb___024root(Vday45_async_fifo_tb__Syms* symsp, const char* namep);
    ~Vday45_async_fifo_tb___024root();
    VL_UNCOPYABLE(Vday45_async_fifo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
