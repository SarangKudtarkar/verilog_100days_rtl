// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday24_hcf_tb.h for the primary calling header

#ifndef VERILATED_VDAY24_HCF_TB___024ROOT_H_
#define VERILATED_VDAY24_HCF_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday24_hcf_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday24_hcf_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day24_hcf_tb__DOT__clk;
    CData/*0:0*/ day24_hcf_tb__DOT__rst;
    CData/*0:0*/ day24_hcf_tb__DOT__start;
    CData/*7:0*/ day24_hcf_tb__DOT__a;
    CData/*7:0*/ day24_hcf_tb__DOT__b;
    CData/*7:0*/ day24_hcf_tb__DOT__hcf;
    CData/*0:0*/ day24_hcf_tb__DOT__done;
    CData/*0:0*/ day24_hcf_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day24_hcf_tb__DOT___Vpast_5_1;
    CData/*0:0*/ day24_hcf_tb__DOT__dut__DOT__state;
    CData/*7:0*/ day24_hcf_tb__DOT__dut__DOT__x;
    CData/*7:0*/ day24_hcf_tb__DOT__dut__DOT__y;
    CData/*0:0*/ __Vsampled_TOP__day24_hcf_tb__DOT__dut__DOT__state;
    CData/*0:0*/ __Vsampled_TOP__day24_hcf_tb__DOT__done;
    CData/*0:0*/ __Vsampled_TOP__day24_hcf_tb__DOT__rst;
    CData/*0:0*/ __Vsampled_TOP__day24_hcf_tb__DOT__start;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day24_hcf_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day24_hcf_tb__DOT__done__0;
    IData/*31:0*/ day24_hcf_tb__DOT__errors;
    IData/*31:0*/ day24_hcf_tb__DOT__wd;
    IData/*31:0*/ __Vsampled_TOP__day24_hcf_tb__DOT__wd;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb0ff0df7__0;
    VlTriggerScheduler __VtrigSched_hb0ff0cb8__0;
    VlTriggerScheduler __VtrigSched_hc51f226e__0;

    // INTERNAL VARIABLES
    Vday24_hcf_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday24_hcf_tb___024root(Vday24_hcf_tb__Syms* symsp, const char* namep);
    ~Vday24_hcf_tb___024root();
    VL_UNCOPYABLE(Vday24_hcf_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
