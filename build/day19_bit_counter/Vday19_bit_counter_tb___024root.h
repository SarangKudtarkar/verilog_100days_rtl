// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday19_bit_counter_tb.h for the primary calling header

#ifndef VERILATED_VDAY19_BIT_COUNTER_TB___024ROOT_H_
#define VERILATED_VDAY19_BIT_COUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday19_bit_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday19_bit_counter_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day19_bit_counter_tb__DOT__clk;
    CData/*7:0*/ day19_bit_counter_tb__DOT__data;
    CData/*3:0*/ day19_bit_counter_tb__DOT__ones;
    CData/*3:0*/ day19_bit_counter_tb__DOT__zeros;
    CData/*7:0*/ __Vsampled_TOP__day19_bit_counter_tb__DOT__data;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day19_bit_counter_tb__DOT__clk__0;
    IData/*31:0*/ day19_bit_counter_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h406f66fc__0;
    VlTriggerScheduler __VtrigSched_h406f663b__0;

    // INTERNAL VARIABLES
    Vday19_bit_counter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday19_bit_counter_tb___024root(Vday19_bit_counter_tb__Syms* symsp, const char* namep);
    ~Vday19_bit_counter_tb___024root();
    VL_UNCOPYABLE(Vday19_bit_counter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
