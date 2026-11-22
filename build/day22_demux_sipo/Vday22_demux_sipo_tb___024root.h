// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday22_demux_sipo_tb.h for the primary calling header

#ifndef VERILATED_VDAY22_DEMUX_SIPO_TB___024ROOT_H_
#define VERILATED_VDAY22_DEMUX_SIPO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday22_demux_sipo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday22_demux_sipo_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day22_demux_sipo_tb__DOT__clk;
    CData/*0:0*/ day22_demux_sipo_tb__DOT__din;
    CData/*2:0*/ day22_demux_sipo_tb__DOT__sel;
    CData/*7:0*/ day22_demux_sipo_tb__DOT__q;
    CData/*7:0*/ day22_demux_sipo_tb__DOT__word;
    CData/*7:0*/ day22_demux_sipo_tb__DOT__rx;
    CData/*7:0*/ __Vsampled_TOP__day22_demux_sipo_tb__DOT__q;
    CData/*0:0*/ __Vsampled_TOP__day22_demux_sipo_tb__DOT__din;
    CData/*2:0*/ __Vsampled_TOP__day22_demux_sipo_tb__DOT__sel;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0;
    IData/*31:0*/ day22_demux_sipo_tb__DOT__errors;
    IData/*31:0*/ day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h83f0833f__0;
    VlTriggerScheduler __VtrigSched_h83f08380__0;

    // INTERNAL VARIABLES
    Vday22_demux_sipo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday22_demux_sipo_tb___024root(Vday22_demux_sipo_tb__Syms* symsp, const char* namep);
    ~Vday22_demux_sipo_tb___024root();
    VL_UNCOPYABLE(Vday22_demux_sipo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
