// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday16_bcd_7seg_tb.h for the primary calling header

#ifndef VERILATED_VDAY16_BCD_7SEG_TB___024ROOT_H_
#define VERILATED_VDAY16_BCD_7SEG_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday16_bcd_7seg_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday16_bcd_7seg_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day16_bcd_7seg_tb__DOT__clk;
    CData/*3:0*/ day16_bcd_7seg_tb__DOT__bcd;
    CData/*6:0*/ day16_bcd_7seg_tb__DOT__seg;
    CData/*3:0*/ __Vsampled_TOP__day16_bcd_7seg_tb__DOT__bcd;
    CData/*6:0*/ __Vsampled_TOP__day16_bcd_7seg_tb__DOT__seg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day16_bcd_7seg_tb__DOT__clk__0;
    IData/*31:0*/ day16_bcd_7seg_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hed3cb701__0;
    VlTriggerScheduler __VtrigSched_hed3cb642__0;

    // INTERNAL VARIABLES
    Vday16_bcd_7seg_tb__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*6:0*/, 10> day16_bcd_7seg_tb__DOT__EXP = {{
        0x7eU, 0x30U, 0x6dU, 0x79U, 0x33U, 0x5bU, 0x5fU, 0x70U,
        0x7fU, 0x7bU
    }};

    // CONSTRUCTORS
    Vday16_bcd_7seg_tb___024root(Vday16_bcd_7seg_tb__Syms* symsp, const char* namep);
    ~Vday16_bcd_7seg_tb___024root();
    VL_UNCOPYABLE(Vday16_bcd_7seg_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
