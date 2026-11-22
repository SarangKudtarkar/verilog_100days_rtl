// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday13_cmos_inverter_tb.h for the primary calling header

#ifndef VERILATED_VDAY13_CMOS_INVERTER_TB___024ROOT_H_
#define VERILATED_VDAY13_CMOS_INVERTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday13_cmos_inverter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday13_cmos_inverter_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day13_cmos_inverter_tb__DOT__clk;
    CData/*0:0*/ day13_cmos_inverter_tb__DOT__in;
    CData/*0:0*/ day13_cmos_inverter_tb__DOT__out;
    CData/*0:0*/ __Vsampled_TOP__day13_cmos_inverter_tb__DOT__in;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day13_cmos_inverter_tb__DOT__clk__0;
    IData/*31:0*/ day13_cmos_inverter_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd58e5562__0;
    VlTriggerScheduler __VtrigSched_hd58e55a1__0;

    // INTERNAL VARIABLES
    Vday13_cmos_inverter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday13_cmos_inverter_tb___024root(Vday13_cmos_inverter_tb__Syms* symsp, const char* namep);
    ~Vday13_cmos_inverter_tb___024root();
    VL_UNCOPYABLE(Vday13_cmos_inverter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
