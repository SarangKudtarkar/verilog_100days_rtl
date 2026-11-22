// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday31_piso_pipo_tb.h for the primary calling header

#ifndef VERILATED_VDAY31_PISO_PIPO_TB___024ROOT_H_
#define VERILATED_VDAY31_PISO_PIPO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday31_piso_pipo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday31_piso_pipo_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day31_piso_pipo_tb__DOT__clk;
    CData/*0:0*/ day31_piso_pipo_tb__DOT__rst;
    CData/*0:0*/ day31_piso_pipo_tb__DOT__load;
    CData/*0:0*/ day31_piso_pipo_tb__DOT__en;
    CData/*3:0*/ day31_piso_pipo_tb__DOT__d;
    CData/*3:0*/ day31_piso_pipo_tb__DOT__q;
    CData/*0:0*/ day31_piso_pipo_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day31_piso_pipo_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day31_piso_pipo_tb__DOT___Vpast_4_1;
    CData/*0:0*/ day31_piso_pipo_tb__DOT___Vpast_5_1;
    CData/*0:0*/ day31_piso_pipo_tb__DOT___Vpast_7_1;
    CData/*3:0*/ day31_piso_pipo_tb__DOT___Vpast_8_1;
    CData/*0:0*/ day31_piso_pipo_tb__DOT___Vpast_10_1;
    CData/*3:0*/ day31_piso_pipo_tb__DOT___Vpast_11_1;
    CData/*3:0*/ day31_piso_pipo_tb__DOT__u_piso__DOT__sr;
    CData/*3:0*/ __Vsampled_TOP__day31_piso_pipo_tb__DOT__u_piso__DOT__sr;
    CData/*3:0*/ __Vsampled_TOP__day31_piso_pipo_tb__DOT__q;
    CData/*0:0*/ __Vsampled_TOP__day31_piso_pipo_tb__DOT__rst;
    CData/*0:0*/ __Vsampled_TOP__day31_piso_pipo_tb__DOT__load;
    CData/*3:0*/ __Vsampled_TOP__day31_piso_pipo_tb__DOT__d;
    CData/*0:0*/ __Vsampled_TOP__day31_piso_pipo_tb__DOT__en;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day31_piso_pipo_tb__DOT__clk__0;
    IData/*31:0*/ day31_piso_pipo_tb__DOT__errors;
    IData/*31:0*/ day31_piso_pipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h14dd458a__0;

    // INTERNAL VARIABLES
    Vday31_piso_pipo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday31_piso_pipo_tb___024root(Vday31_piso_pipo_tb__Syms* symsp, const char* namep);
    ~Vday31_piso_pipo_tb___024root();
    VL_UNCOPYABLE(Vday31_piso_pipo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
