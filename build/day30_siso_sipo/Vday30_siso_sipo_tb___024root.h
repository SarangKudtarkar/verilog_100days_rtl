// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday30_siso_sipo_tb.h for the primary calling header

#ifndef VERILATED_VDAY30_SISO_SIPO_TB___024ROOT_H_
#define VERILATED_VDAY30_SISO_SIPO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday30_siso_sipo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday30_siso_sipo_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day30_siso_sipo_tb__DOT__clk;
    CData/*0:0*/ day30_siso_sipo_tb__DOT__rst;
    CData/*0:0*/ day30_siso_sipo_tb__DOT__sin;
    CData/*3:0*/ day30_siso_sipo_tb__DOT__q;
    CData/*0:0*/ day30_siso_sipo_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day30_siso_sipo_tb__DOT___Vpast_1_2;
    CData/*0:0*/ day30_siso_sipo_tb__DOT___Vpast_1_3;
    CData/*0:0*/ day30_siso_sipo_tb__DOT___Vpast_1_4;
    CData/*3:0*/ day30_siso_sipo_tb__DOT__u_siso__DOT__sr;
    CData/*3:0*/ __Vsampled_TOP__day30_siso_sipo_tb__DOT__u_siso__DOT__sr;
    CData/*3:0*/ __Vsampled_TOP__day30_siso_sipo_tb__DOT__q;
    CData/*0:0*/ __Vsampled_TOP__day30_siso_sipo_tb__DOT__sin;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day30_siso_sipo_tb__DOT__clk__0;
    IData/*31:0*/ day30_siso_sipo_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6fc3e553__0;

    // INTERNAL VARIABLES
    Vday30_siso_sipo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday30_siso_sipo_tb___024root(Vday30_siso_sipo_tb__Syms* symsp, const char* namep);
    ~Vday30_siso_sipo_tb___024root();
    VL_UNCOPYABLE(Vday30_siso_sipo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
