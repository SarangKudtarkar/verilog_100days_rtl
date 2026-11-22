// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday41_memory_1mb_tb.h for the primary calling header

#ifndef VERILATED_VDAY41_MEMORY_1MB_TB___024ROOT_H_
#define VERILATED_VDAY41_MEMORY_1MB_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday41_memory_1mb_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday41_memory_1mb_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day41_memory_1mb_tb__DOT__clk;
    CData/*0:0*/ day41_memory_1mb_tb__DOT__we;
    CData/*0:0*/ day41_memory_1mb_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day41_memory_1mb_tb__DOT___Vpast_3_1;
    CData/*0:0*/ __Vsampled_TOP__day41_memory_1mb_tb__DOT__we;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day41_memory_1mb_tb__DOT__clk__0;
    IData/*17:0*/ day41_memory_1mb_tb__DOT__addr;
    IData/*31:0*/ day41_memory_1mb_tb__DOT__din;
    IData/*31:0*/ day41_memory_1mb_tb__DOT__dout;
    IData/*31:0*/ day41_memory_1mb_tb__DOT__errors;
    IData/*17:0*/ day41_memory_1mb_tb__DOT___Vpast_2_1;
    IData/*31:0*/ day41_memory_1mb_tb__DOT___Vpast_4_1;
    IData/*31:0*/ day41_memory_1mb_tb__DOT___Vpast_4_2;
    IData/*31:0*/ __Vsampled_TOP__day41_memory_1mb_tb__DOT__dout;
    IData/*17:0*/ __Vsampled_TOP__day41_memory_1mb_tb__DOT__addr;
    IData/*31:0*/ __Vsampled_TOP__day41_memory_1mb_tb__DOT__din;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*17:0*/, 128> day41_memory_1mb_tb__DOT__list;
    VlUnpacked<IData/*31:0*/, 262144> day41_memory_1mb_tb__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> day41_memory_1mb_tb__DOT__shadow;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hce30d683__0;

    // INTERNAL VARIABLES
    Vday41_memory_1mb_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday41_memory_1mb_tb___024root(Vday41_memory_1mb_tb__Syms* symsp, const char* namep);
    ~Vday41_memory_1mb_tb___024root();
    VL_UNCOPYABLE(Vday41_memory_1mb_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
