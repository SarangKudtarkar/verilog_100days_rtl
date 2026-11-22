// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday14_decoders_tb.h for the primary calling header

#ifndef VERILATED_VDAY14_DECODERS_TB___024ROOT_H_
#define VERILATED_VDAY14_DECODERS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday14_decoders_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday14_decoders_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day14_decoders_tb__DOT__clk;
    CData/*0:0*/ day14_decoders_tb__DOT__en;
    CData/*3:0*/ day14_decoders_tb__DOT__bin;
    CData/*7:0*/ day14_decoders_tb__DOT__oct_o;
    CData/*7:0*/ __Vsampled_TOP__day14_decoders_tb__DOT__oct_o;
    CData/*0:0*/ __Vsampled_TOP__day14_decoders_tb__DOT__en;
    CData/*3:0*/ __Vsampled_TOP__day14_decoders_tb__DOT__bin;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day14_decoders_tb__DOT__clk__0;
    SData/*9:0*/ day14_decoders_tb__DOT__dec_o;
    SData/*15:0*/ day14_decoders_tb__DOT__hex_o;
    SData/*9:0*/ __Vsampled_TOP__day14_decoders_tb__DOT__dec_o;
    SData/*15:0*/ __Vsampled_TOP__day14_decoders_tb__DOT__hex_o;
    IData/*31:0*/ day14_decoders_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9e7a6c1c__0;
    VlTriggerScheduler __VtrigSched_h9e7a6b5b__0;

    // INTERNAL VARIABLES
    Vday14_decoders_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday14_decoders_tb___024root(Vday14_decoders_tb__Syms* symsp, const char* namep);
    ~Vday14_decoders_tb___024root();
    VL_UNCOPYABLE(Vday14_decoders_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
