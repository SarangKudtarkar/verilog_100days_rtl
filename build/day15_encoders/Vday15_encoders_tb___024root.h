// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday15_encoders_tb.h for the primary calling header

#ifndef VERILATED_VDAY15_ENCODERS_TB___024ROOT_H_
#define VERILATED_VDAY15_ENCODERS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday15_encoders_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday15_encoders_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day15_encoders_tb__DOT__clk;
    CData/*7:0*/ day15_encoders_tb__DOT__oct_i;
    CData/*3:0*/ day15_encoders_tb__DOT__dec_b;
    CData/*3:0*/ day15_encoders_tb__DOT__hex_b;
    CData/*7:0*/ __Vsampled_TOP__day15_encoders_tb__DOT__oct_i;
    CData/*3:0*/ __Vsampled_TOP__day15_encoders_tb__DOT__dec_b;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day15_encoders_tb__DOT__clk__0;
    SData/*9:0*/ day15_encoders_tb__DOT__dec_i;
    SData/*15:0*/ day15_encoders_tb__DOT__hex_i;
    SData/*9:0*/ __Vsampled_TOP__day15_encoders_tb__DOT__dec_i;
    SData/*15:0*/ __Vsampled_TOP__day15_encoders_tb__DOT__hex_i;
    IData/*31:0*/ day15_encoders_tb__DOT____VlemExpr_0;
    IData/*31:0*/ day15_encoders_tb__DOT__errors;
    IData/*31:0*/ day15_encoders_tb__DOT__hi;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*0:0*/, 256> __Vsampled_TOP__TABLE_he2a5b38f_0;
    VlUnpacked<CData/*2:0*/, 256> __Vsampled_TOP__TABLE_h0a26a470_0;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h118fbdcf__0;
    VlTriggerScheduler __VtrigSched_h118fbe10__0;

    // INTERNAL VARIABLES
    Vday15_encoders_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday15_encoders_tb___024root(Vday15_encoders_tb__Syms* symsp, const char* namep);
    ~Vday15_encoders_tb___024root();
    VL_UNCOPYABLE(Vday15_encoders_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
