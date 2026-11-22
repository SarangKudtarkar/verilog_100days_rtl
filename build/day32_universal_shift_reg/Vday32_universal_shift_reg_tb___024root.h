// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday32_universal_shift_reg_tb.h for the primary calling header

#ifndef VERILATED_VDAY32_UNIVERSAL_SHIFT_REG_TB___024ROOT_H_
#define VERILATED_VDAY32_UNIVERSAL_SHIFT_REG_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday32_universal_shift_reg_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday32_universal_shift_reg_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ day32_universal_shift_reg_tb__DOT____VlemCond_1;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT__clk;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT__rst;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT__si;
    CData/*2:0*/ day32_universal_shift_reg_tb__DOT__mode;
    CData/*7:0*/ day32_universal_shift_reg_tb__DOT__pin;
    CData/*7:0*/ day32_universal_shift_reg_tb__DOT__q;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT___Vpast_1_1;
    CData/*7:0*/ day32_universal_shift_reg_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT___Vpast_4_1;
    CData/*6:0*/ day32_universal_shift_reg_tb__DOT___Vpast_5_1;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT___Vpast_6_1;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT___Vpast_8_1;
    CData/*6:0*/ day32_universal_shift_reg_tb__DOT___Vpast_9_1;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT___Vpast_11_1;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT___Vpast_12_1;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT___Vpast_14_1;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT___Vpast_15_1;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT___Vpast_17_1;
    CData/*7:0*/ day32_universal_shift_reg_tb__DOT___Vpast_18_1;
    CData/*0:0*/ day32_universal_shift_reg_tb__DOT___Vpast_20_1;
    CData/*7:0*/ __Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q;
    CData/*0:0*/ __Vsampled_TOP__day32_universal_shift_reg_tb__DOT__rst;
    CData/*2:0*/ __Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode;
    CData/*7:0*/ __Vsampled_TOP__day32_universal_shift_reg_tb__DOT__pin;
    CData/*0:0*/ __Vsampled_TOP__day32_universal_shift_reg_tb__DOT__si;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day32_universal_shift_reg_tb__DOT__clk__0;
    IData/*31:0*/ day32_universal_shift_reg_tb__DOT____VlemExpr_0;
    IData/*31:0*/ day32_universal_shift_reg_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_habadc65e__0;

    // INTERNAL VARIABLES
    Vday32_universal_shift_reg_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday32_universal_shift_reg_tb___024root(Vday32_universal_shift_reg_tb__Syms* symsp, const char* namep);
    ~Vday32_universal_shift_reg_tb___024root();
    VL_UNCOPYABLE(Vday32_universal_shift_reg_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
