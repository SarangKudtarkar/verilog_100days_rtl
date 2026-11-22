// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday28_flipflops_tb.h for the primary calling header

#ifndef VERILATED_VDAY28_FLIPFLOPS_TB___024ROOT_H_
#define VERILATED_VDAY28_FLIPFLOPS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday28_flipflops_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday28_flipflops_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day28_flipflops_tb__DOT__clk;
    CData/*0:0*/ day28_flipflops_tb__DOT__rst_n;
    CData/*0:0*/ day28_flipflops_tb__DOT__d;
    CData/*0:0*/ day28_flipflops_tb__DOT__t;
    CData/*0:0*/ day28_flipflops_tb__DOT__j;
    CData/*0:0*/ day28_flipflops_tb__DOT__k;
    CData/*0:0*/ day28_flipflops_tb__DOT__s;
    CData/*0:0*/ day28_flipflops_tb__DOT__r;
    CData/*0:0*/ day28_flipflops_tb__DOT__q_d;
    CData/*0:0*/ day28_flipflops_tb__DOT__q_t;
    CData/*0:0*/ day28_flipflops_tb__DOT__q_jk;
    CData/*0:0*/ day28_flipflops_tb__DOT__q_sr;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_4_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_5_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_7_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_9_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_11_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_13_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_14_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_16_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_18_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_20_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_22_1;
    CData/*0:0*/ day28_flipflops_tb__DOT___Vpast_23_1;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__q_d;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__q_t;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__q_jk;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__q_sr;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__s;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__r;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__rst_n;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__d;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__t;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__j;
    CData/*0:0*/ __Vsampled_TOP__day28_flipflops_tb__DOT__k;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__rst_n__0;
    IData/*31:0*/ day28_flipflops_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9970be69__0;

    // INTERNAL VARIABLES
    Vday28_flipflops_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday28_flipflops_tb___024root(Vday28_flipflops_tb__Syms* symsp, const char* namep);
    ~Vday28_flipflops_tb___024root();
    VL_UNCOPYABLE(Vday28_flipflops_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
