// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday48_prime_seq_gen_tb.h for the primary calling header

#ifndef VERILATED_VDAY48_PRIME_SEQ_GEN_TB___024ROOT_H_
#define VERILATED_VDAY48_PRIME_SEQ_GEN_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday48_prime_seq_gen_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday48_prime_seq_gen_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day48_prime_seq_gen_tb__DOT__clk;
    CData/*0:0*/ day48_prime_seq_gen_tb__DOT__rst;
    CData/*0:0*/ day48_prime_seq_gen_tb__DOT___Vpast_2_1;
    CData/*0:0*/ day48_prime_seq_gen_tb__DOT___Vpast_4_1;
    CData/*0:0*/ day48_prime_seq_gen_tb__DOT___Vpast_6_1;
    CData/*0:0*/ day48_prime_seq_gen_tb__DOT___Vpast_8_1;
    CData/*0:0*/ day48_prime_seq_gen_tb__DOT___Vpast_10_1;
    CData/*2:0*/ day48_prime_seq_gen_tb__DOT__dut__DOT__idx;
    CData/*2:0*/ __Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx;
    CData/*0:0*/ __Vsampled_TOP__day48_prime_seq_gen_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day48_prime_seq_gen_tb__DOT__clk__0;
    IData/*31:0*/ day48_prime_seq_gen_tb__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3d9c7854__0;
    VlTriggerScheduler __VtrigSched_h3d9c7913__0;

    // INTERNAL VARIABLES
    Vday48_prime_seq_gen_tb__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 5> day48_prime_seq_gen_tb__DOT__PR = {{
        2U, 3U, 5U, 7U, 0x0bU
    }};

    // CONSTRUCTORS
    Vday48_prime_seq_gen_tb___024root(Vday48_prime_seq_gen_tb__Syms* symsp, const char* namep);
    ~Vday48_prime_seq_gen_tb___024root();
    VL_UNCOPYABLE(Vday48_prime_seq_gen_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
