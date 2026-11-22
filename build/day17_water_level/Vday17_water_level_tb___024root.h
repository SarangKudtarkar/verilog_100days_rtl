// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday17_water_level_tb.h for the primary calling header

#ifndef VERILATED_VDAY17_WATER_LEVEL_TB___024ROOT_H_
#define VERILATED_VDAY17_WATER_LEVEL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday17_water_level_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday17_water_level_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day17_water_level_tb__DOT__clk;
    CData/*7:0*/ day17_water_level_tb__DOT__sensor;
    CData/*0:0*/ day17_water_level_tb__DOT__empty;
    CData/*7:0*/ __Vsampled_TOP__day17_water_level_tb__DOT__sensor;
    CData/*0:0*/ __Vsampled_TOP__day17_water_level_tb__DOT__empty;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day17_water_level_tb__DOT__clk__0;
    IData/*31:0*/ day17_water_level_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*2:0*/, 256> __Vsampled_TOP__TABLE_h0a26a470_0;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3d8e99d8__0;
    VlTriggerScheduler __VtrigSched_h3d8e9a17__0;

    // INTERNAL VARIABLES
    Vday17_water_level_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday17_water_level_tb___024root(Vday17_water_level_tb__Syms* symsp, const char* namep);
    ~Vday17_water_level_tb___024root();
    VL_UNCOPYABLE(Vday17_water_level_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
