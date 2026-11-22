// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday42_sync_fifo_tb.h for the primary calling header

#ifndef VERILATED_VDAY42_SYNC_FIFO_TB___024ROOT_H_
#define VERILATED_VDAY42_SYNC_FIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday42_sync_fifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday42_sync_fifo_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day42_sync_fifo_tb__DOT__clk;
    CData/*0:0*/ day42_sync_fifo_tb__DOT__rst;
    CData/*0:0*/ day42_sync_fifo_tb__DOT__wr_en;
    CData/*0:0*/ day42_sync_fifo_tb__DOT__rd_en;
    CData/*7:0*/ day42_sync_fifo_tb__DOT__din;
    CData/*7:0*/ day42_sync_fifo_tb__DOT__dout;
    CData/*5:0*/ day42_sync_fifo_tb__DOT__count;
    CData/*7:0*/ day42_sync_fifo_tb__DOT__exp_dout;
    CData/*0:0*/ day42_sync_fifo_tb__DOT__exp_valid;
    CData/*0:0*/ day42_sync_fifo_tb__DOT___Vpast_5_1;
    CData/*5:0*/ day42_sync_fifo_tb__DOT___Vpast_6_1;
    CData/*0:0*/ day42_sync_fifo_tb__DOT___Vpast_8_1;
    CData/*0:0*/ day42_sync_fifo_tb__DOT___Vpast_10_1;
    CData/*0:0*/ day42_sync_fifo_tb__DOT___Vpast_12_1;
    CData/*4:0*/ day42_sync_fifo_tb__DOT__dut__DOT__wptr;
    CData/*4:0*/ day42_sync_fifo_tb__DOT__dut__DOT__rptr;
    CData/*0:0*/ day42_sync_fifo_tb__DOT__dut__DOT__do_wr;
    CData/*0:0*/ day42_sync_fifo_tb__DOT__dut__DOT__do_rd;
    CData/*5:0*/ __Vsampled_TOP__day42_sync_fifo_tb__DOT__count;
    CData/*0:0*/ __Vsampled_TOP__day42_sync_fifo_tb__DOT__rst;
    CData/*0:0*/ __Vsampled_TOP__day42_sync_fifo_tb__DOT__wr_en;
    CData/*0:0*/ __Vsampled_TOP__day42_sync_fifo_tb__DOT__rd_en;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day42_sync_fifo_tb__DOT__clk__0;
    IData/*31:0*/ day42_sync_fifo_tb__DOT____VlemExpr_1;
    IData/*31:0*/ day42_sync_fifo_tb__DOT____VlemExpr_0;
    IData/*31:0*/ day42_sync_fifo_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*7:0*/, 32> day42_sync_fifo_tb__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlQueue<CData/*7:0*/> day42_sync_fifo_tb__DOT__model;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4d1942c9__0;

    // INTERNAL VARIABLES
    Vday42_sync_fifo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday42_sync_fifo_tb___024root(Vday42_sync_fifo_tb__Syms* symsp, const char* namep);
    ~Vday42_sync_fifo_tb___024root();
    VL_UNCOPYABLE(Vday42_sync_fifo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
