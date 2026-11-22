// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday09_add_sub_4bit_tb.h for the primary calling header

#include "Vday09_add_sub_4bit_tb__pch.h"

VlCoroutine Vday09_add_sub_4bit_tb___024root___eval_initial__TOP__Vtiming__0(Vday09_add_sub_4bit_tb___024root* vlSelf);
VlCoroutine Vday09_add_sub_4bit_tb___024root___eval_initial__TOP__Vtiming__1(Vday09_add_sub_4bit_tb___024root* vlSelf);

void Vday09_add_sub_4bit_tb___024root___eval_initial(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_initial\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday09_add_sub_4bit_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday09_add_sub_4bit_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday09_add_sub_4bit_tb___024root___eval_sample(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_sample\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__mode 
        = vlSelfRef.day09_add_sub_4bit_tb__DOT__mode;
    vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__cout 
        = vlSelfRef.day09_add_sub_4bit_tb__DOT__cout;
    vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__result 
        = vlSelfRef.day09_add_sub_4bit_tb__DOT__result;
    vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__a 
        = vlSelfRef.day09_add_sub_4bit_tb__DOT__a;
    vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__b 
        = vlSelfRef.day09_add_sub_4bit_tb__DOT__b;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday09_add_sub_4bit_tb___024root___eval_ico(Vday09_add_sub_4bit_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_ico\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday09_add_sub_4bit_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday09_add_sub_4bit_tb___024root___timing_ready(Vday09_add_sub_4bit_tb___024root* vlSelf);
void Vday09_add_sub_4bit_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday09_add_sub_4bit_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday09_add_sub_4bit_tb___024root___timing_resume(Vday09_add_sub_4bit_tb___024root* vlSelf);

bool Vday09_add_sub_4bit_tb___024root___eval_act(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_act\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0 
            = vlSelfRef.day09_add_sub_4bit_tb__DOT__clk;
    }
    Vday09_add_sub_4bit_tb___024root___timing_ready(vlSelf);
    Vday09_add_sub_4bit_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday09_add_sub_4bit_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday09_add_sub_4bit_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday09_add_sub_4bit_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday09_add_sub_4bit_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    CData/*3:0*/ __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx;
                    __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx = 0;
                    __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx 
                        = (0x0000000fU & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__b) 
                                          ^ (- (IData)((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__mode)))));
                    vlSelfRef.day09_add_sub_4bit_tb__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                  + ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__mode) 
                                     + (IData)(__Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx))) 
                                 >> 4U));
                    vlSelfRef.day09_add_sub_4bit_tb__DOT__result 
                        = (0x0000000fU & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                          + ((IData)(__Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx) 
                                             + (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__mode))));
                    vlSelfRef.day09_add_sub_4bit_tb__DOT__ovf 
                        = (((1U & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                   >> 3U)) == (1U & 
                                               (__Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx 
                                                >> 3U))) 
                           & ((1U & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__result) 
                                                    >> 3U))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday09_add_sub_4bit_tb___024root___eval_inact(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_inact\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day09_add_sub_4bit_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday09_add_sub_4bit_tb___024root___nba_sequent__TOP__0(Vday09_add_sub_4bit_tb___024root* vlSelf);
void Vday09_add_sub_4bit_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday09_add_sub_4bit_tb___024root___eval_nba(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_nba\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday09_add_sub_4bit_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday09_add_sub_4bit_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    CData/*3:0*/ __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx;
                    __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx = 0;
                    __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx 
                        = (0x0000000fU & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__b) 
                                          ^ (- (IData)((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__mode)))));
                    vlSelfRef.day09_add_sub_4bit_tb__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                  + ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__mode) 
                                     + (IData)(__Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx))) 
                                 >> 4U));
                    vlSelfRef.day09_add_sub_4bit_tb__DOT__result 
                        = (0x0000000fU & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                          + ((IData)(__Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx) 
                                             + (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__mode))));
                    vlSelfRef.day09_add_sub_4bit_tb__DOT__ovf 
                        = (((1U & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                   >> 3U)) == (1U & 
                                               (__Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx 
                                                >> 3U))) 
                           & ((1U & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__result) 
                                                    >> 3U))));
                }
            }
        }
        Vday09_add_sub_4bit_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday09_add_sub_4bit_tb___024root___eval_obs(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_obs\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday09_add_sub_4bit_tb___024root___eval_react(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_react\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday09_add_sub_4bit_tb___024root___eval_postponed(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_postponed\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday09_add_sub_4bit_tb___024root____VbeforeTrig_hb4db88d5__0(Vday09_add_sub_4bit_tb___024root* vlSelf, const char* __VeventDescription);
void Vday09_add_sub_4bit_tb___024root____VbeforeTrig_hb4db8916__0(Vday09_add_sub_4bit_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday09_add_sub_4bit_tb___024root___eval_initial__TOP__Vtiming__0(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day09_add_sub_4bit_tb__DOT__unnamedblk1__DOT__i;
    day09_add_sub_4bit_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day09_add_sub_4bit_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000200U, day09_add_sub_4bit_tb__DOT__unnamedblk1__DOT__i)) {
        Vday09_add_sub_4bit_tb___024root____VbeforeTrig_hb4db88d5__0(vlSelf, 
                                                                     "@(negedge day09_add_sub_4bit_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb4db88d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day09_add_sub_4bit_tb.clk)", 
                                                             "tb/day09_add_sub_4bit_tb.sv", 
                                                             18);
        vlSelfRef.day09_add_sub_4bit_tb__DOT__mode 
            = (1U & (day09_add_sub_4bit_tb__DOT__unnamedblk1__DOT__i 
                     >> 8U));
        vlSelfRef.day09_add_sub_4bit_tb__DOT__a = (0x0000000fU 
                                                   & (day09_add_sub_4bit_tb__DOT__unnamedblk1__DOT__i 
                                                      >> 4U));
        vlSelfRef.day09_add_sub_4bit_tb__DOT__b = (0x0000000fU 
                                                   & day09_add_sub_4bit_tb__DOT__unnamedblk1__DOT__i);
        Vday09_add_sub_4bit_tb___024root____VbeforeTrig_hb4db8916__0(vlSelf, 
                                                                     "@(posedge day09_add_sub_4bit_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb4db8916__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day09_add_sub_4bit_tb.clk)", 
                                                             "tb/day09_add_sub_4bit_tb.sv", 
                                                             19);
        if (vlSelfRef.day09_add_sub_4bit_tb__DOT__mode) {
            vlSelfRef.day09_add_sub_4bit_tb__DOT__exp 
                = (VL_EXTENDS_II(32,4, (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a)) 
                   - VL_EXTENDS_II(32,4, (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__b)));
            if (VL_UNLIKELY((((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__result) 
                              != (0x0000000fU & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                                 - (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__b))))))) {
                vlSelfRef.day09_add_sub_4bit_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day09_add_sub_4bit_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] subtraction (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        } else {
            vlSelfRef.day09_add_sub_4bit_tb__DOT__exp 
                = (VL_EXTENDS_II(32,4, (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a)) 
                   + VL_EXTENDS_II(32,4, (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__b)));
            if (VL_UNLIKELY((((((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__cout) 
                                << 4U) | (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__result)) 
                              != (0x0000001fU & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                                 + (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__b))))))) {
                vlSelfRef.day09_add_sub_4bit_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day09_add_sub_4bit_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] addition (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__ovf) 
                          != (VL_LTS_III(32, 7U, vlSelfRef.day09_add_sub_4bit_tb__DOT__exp) 
                              | VL_GTS_III(32, 0xfffffff8U, vlSelfRef.day09_add_sub_4bit_tb__DOT__exp)))))) {
            vlSelfRef.day09_add_sub_4bit_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day09_add_sub_4bit_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] signed overflow flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY(((0U == VL_MODDIVS_III(32, day09_add_sub_4bit_tb__DOT__unnamedblk1__DOT__i, (IData)(0x00000035U)))))) {
            VL_WRITEF_NX("  %s : a=%2d b=%2d -> result=%2d cout=%b ovf=%b\n",6
                         , '#',24,((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__mode)
                                    ? 0x00535542U : 0x00414444U)
                         , '#',4,(IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a)
                         , '#',4,vlSelfRef.day09_add_sub_4bit_tb__DOT__b
                         , '#',4,(IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__result)
                         , '#',1,vlSelfRef.day09_add_sub_4bit_tb__DOT__cout
                         , '#',1,(IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__ovf));
        }
        day09_add_sub_4bit_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day09_add_sub_4bit_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day09_add_sub_4bit_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day09_add_sub_4bit\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day09_add_sub_4bit : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day09_add_sub_4bit_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day09_add_sub_4bit_tb.sv", 28, "");
    co_return;
}

VlCoroutine Vday09_add_sub_4bit_tb___024root___eval_initial__TOP__Vtiming__1(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day09_add_sub_4bit_tb.sv", 
                                             9);
        vlSelfRef.day09_add_sub_4bit_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__clk)));
    }
    co_return;
}

bool Vday09_add_sub_4bit_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vday09_add_sub_4bit_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vday09_add_sub_4bit_tb___024root___nba_sequent__TOP__0(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___nba_sequent__TOP__0\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__mode)) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__result) 
                                          == (0x0000000fU 
                                              & ((IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__a) 
                                                 - (IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__b)))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day09_add_sub_4bit_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_sub\n",3, 'M',vlSymsp->name(),"day09_add_sub_4bit_tb.a_sub", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day09_add_sub_4bit_tb.sv", 13, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__mode)) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__cout) 
                                          == ((IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__a) 
                                              >= (IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__b))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day09_add_sub_4bit_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_nb\n",3, 'M',vlSymsp->name(),"day09_add_sub_4bit_tb.a_nb", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day09_add_sub_4bit_tb.sv", 14, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__mode) 
                                       | ((((IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__cout) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__result)) 
                                          == (0x0000001fU 
                                              & ((IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__a) 
                                                 + (IData)(vlSelfRef.__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__b)))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day09_add_sub_4bit_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_add\n",3, 'M',vlSymsp->name(),"day09_add_sub_4bit_tb.a_add", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day09_add_sub_4bit_tb.sv", 12, "");
            }
        }
    }
}

void Vday09_add_sub_4bit_tb___024root___timing_ready(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___timing_ready\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb4db88d5__0.ready("@(negedge day09_add_sub_4bit_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb4db8916__0.ready("@(posedge day09_add_sub_4bit_tb.clk)");
    }
}

void Vday09_add_sub_4bit_tb___024root___timing_resume(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___timing_resume\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hb4db88d5__0.moveToResumeQueue(
                                                          "@(negedge day09_add_sub_4bit_tb.clk)");
    vlSelfRef.__VtrigSched_hb4db8916__0.moveToResumeQueue(
                                                          "@(posedge day09_add_sub_4bit_tb.clk)");
    vlSelfRef.__VtrigSched_hb4db88d5__0.resume("@(negedge day09_add_sub_4bit_tb.clk)");
    vlSelfRef.__VtrigSched_hb4db8916__0.resume("@(posedge day09_add_sub_4bit_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday09_add_sub_4bit_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday09_add_sub_4bit_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday09_add_sub_4bit_tb___024root____VbeforeTrig_hb4db88d5__0(Vday09_add_sub_4bit_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root____VbeforeTrig_hb4db88d5__0\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0 
        = vlSelfRef.day09_add_sub_4bit_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb4db8916__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb4db88d5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday09_add_sub_4bit_tb___024root____VbeforeTrig_hb4db8916__0(Vday09_add_sub_4bit_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root____VbeforeTrig_hb4db8916__0\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0 
        = vlSelfRef.day09_add_sub_4bit_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb4db8916__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb4db88d5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday09_add_sub_4bit_tb___024root___eval_debug_assertions(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_debug_assertions\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
