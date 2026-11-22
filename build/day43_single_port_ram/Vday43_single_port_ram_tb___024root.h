// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday43_single_port_ram_tb.h for the primary calling header

#ifndef VERILATED_VDAY43_SINGLE_PORT_RAM_TB___024ROOT_H_
#define VERILATED_VDAY43_SINGLE_PORT_RAM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday43_single_port_ram_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday43_single_port_ram_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day43_single_port_ram_tb__DOT__clk;
    CData/*0:0*/ day43_single_port_ram_tb__DOT__we;
    CData/*7:0*/ day43_single_port_ram_tb__DOT__addr;
    CData/*0:0*/ day43_single_port_ram_tb__DOT__exp_valid;
    CData/*0:0*/ day43_single_port_ram_tb__DOT___Vpast_1_1;
    CData/*0:0*/ day43_single_port_ram_tb__DOT___Vpast_4_1;
    CData/*7:0*/ day43_single_port_ram_tb__DOT___Vpast_5_1;
    CData/*0:0*/ day43_single_port_ram_tb__DOT___Vpast_6_1;
    CData/*0:0*/ __Vsampled_TOP__day43_single_port_ram_tb__DOT__we;
    CData/*7:0*/ __Vsampled_TOP__day43_single_port_ram_tb__DOT__addr;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day43_single_port_ram_tb__DOT__clk__0;
    IData/*31:0*/ day43_single_port_ram_tb__DOT__din;
    IData/*31:0*/ day43_single_port_ram_tb__DOT__dout;
    IData/*31:0*/ day43_single_port_ram_tb__DOT__exp_dout;
    IData/*31:0*/ day43_single_port_ram_tb__DOT__errors;
    IData/*31:0*/ day43_single_port_ram_tb__DOT___Vpast_2_1;
    IData/*31:0*/ day43_single_port_ram_tb__DOT___Vpast_7_1;
    IData/*31:0*/ __Vsampled_TOP__day43_single_port_ram_tb__DOT__dout;
    IData/*31:0*/ __Vsampled_TOP__day43_single_port_ram_tb__DOT__din;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 256> day43_single_port_ram_tb__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> day43_single_port_ram_tb__DOT__shadow;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf54aa612__0;

    // INTERNAL VARIABLES
    Vday43_single_port_ram_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vday43_single_port_ram_tb___024root(Vday43_single_port_ram_tb__Syms* symsp, const char* namep);
    ~Vday43_single_port_ram_tb___024root();
    VL_UNCOPYABLE(Vday43_single_port_ram_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
