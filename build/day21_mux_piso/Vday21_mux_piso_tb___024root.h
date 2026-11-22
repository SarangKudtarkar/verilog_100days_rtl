// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday21_mux_piso_tb.h for the primary calling header

#ifndef VERILATED_VDAY21_MUX_PISO_TB___024ROOT_H_
#define VERILATED_VDAY21_MUX_PISO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday21_mux_piso_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday21_mux_piso_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day21_mux_piso_tb__DOT__clk;
    CData/*7:0*/ day21_mux_piso_tb__DOT__d;
    CData/*7:0*/ day21_mux_piso_tb__DOT__rx;
    CData/*2:0*/ day21_mux_piso_tb__DOT__sel;
    CData/*0:0*/ day21_mux_piso_tb__DOT__y;
    CData/*7:0*/ __Vsampled_TOP__day21_mux_piso_tb__DOT__d;
    CData/*2:0*/ __Vsampled_TOP__day21_mux_piso_tb__DOT__sel;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0;
    IData/*31:0*/ day21_mux_piso_tb__DOT__errors;
    IData/*31:0*/ day21_mux_piso_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc6c63a53__0;
    VlTriggerScheduler __VtrigSched_hc6c63a94__0;

    // INTERNAL VARIABLES
    Vday21_mux_piso_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday21_mux_piso_tb___024root(Vday21_mux_piso_tb__Syms* symsp, const char* namep);
    ~Vday21_mux_piso_tb___024root();
    VL_UNCOPYABLE(Vday21_mux_piso_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
