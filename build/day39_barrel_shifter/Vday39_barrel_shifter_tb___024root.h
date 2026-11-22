// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday39_barrel_shifter_tb.h for the primary calling header

#ifndef VERILATED_VDAY39_BARREL_SHIFTER_TB___024ROOT_H_
#define VERILATED_VDAY39_BARREL_SHIFTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday39_barrel_shifter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday39_barrel_shifter_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ day39_barrel_shifter_tb__DOT____VlemCall_0__ref_shift;
    CData/*0:0*/ day39_barrel_shifter_tb__DOT__clk;
    CData/*7:0*/ day39_barrel_shifter_tb__DOT__din;
    CData/*7:0*/ day39_barrel_shifter_tb__DOT__dout;
    CData/*2:0*/ day39_barrel_shifter_tb__DOT__shamt;
    CData/*1:0*/ day39_barrel_shifter_tb__DOT__mode;
    CData/*2:0*/ __Vsampled_TOP__day39_barrel_shifter_tb__DOT__shamt;
    CData/*7:0*/ __Vsampled_TOP__day39_barrel_shifter_tb__DOT__dout;
    CData/*7:0*/ __Vsampled_TOP__day39_barrel_shifter_tb__DOT__din;
    CData/*1:0*/ __Vsampled_TOP__day39_barrel_shifter_tb__DOT__mode;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day39_barrel_shifter_tb__DOT__clk__0;
    IData/*31:0*/ day39_barrel_shifter_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h604e20c9__0;
    VlTriggerScheduler __VtrigSched_h604e210a__0;

    // INTERNAL VARIABLES
    Vday39_barrel_shifter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday39_barrel_shifter_tb___024root(Vday39_barrel_shifter_tb__Syms* symsp, const char* namep);
    ~Vday39_barrel_shifter_tb___024root();
    VL_UNCOPYABLE(Vday39_barrel_shifter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
