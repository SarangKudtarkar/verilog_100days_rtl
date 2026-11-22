// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday03_clk_div_odd_tb.h for the primary calling header

#include "Vday03_clk_div_odd_tb__pch.h"

VlCoroutine Vday03_clk_div_odd_tb___024root___eval_initial__TOP__Vtiming__0(Vday03_clk_div_odd_tb___024root* vlSelf);
VlCoroutine Vday03_clk_div_odd_tb___024root___eval_initial__TOP__Vtiming__1(Vday03_clk_div_odd_tb___024root* vlSelf);

void Vday03_clk_div_odd_tb___024root___eval_initial(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_initial\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday03_clk_div_odd_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday03_clk_div_odd_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday03_clk_div_odd_tb___024root___eval_sample(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_sample\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day03_clk_div_odd_tb__DOT__clk_out 
        = vlSelfRef.day03_clk_div_odd_tb__DOT__clk_out;
    vlSelfRef.__Vsampled_TOP__day03_clk_div_odd_tb__DOT__rst 
        = vlSelfRef.day03_clk_div_odd_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday03_clk_div_odd_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday03_clk_div_odd_tb___024root___eval_ico(Vday03_clk_div_odd_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_ico\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday03_clk_div_odd_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday03_clk_div_odd_tb___024root___timing_ready(Vday03_clk_div_odd_tb___024root* vlSelf);
void Vday03_clk_div_odd_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday03_clk_div_odd_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday03_clk_div_odd_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday03_clk_div_odd_tb___024root___timing_resume(Vday03_clk_div_odd_tb___024root* vlSelf);

bool Vday03_clk_div_odd_tb___024root___eval_act(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_act\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 4U) 
                                                         | (((((~ (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__clk)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day03_clk_div_odd_tb__DOT__clk__0)) 
                                                              << 3U) 
                                                             | (((~ (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__clk_out)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day03_clk_div_odd_tb__DOT__clk_out__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__clk_out) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day03_clk_div_odd_tb__DOT__clk_out__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day03_clk_div_odd_tb__DOT__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day03_clk_div_odd_tb__DOT__clk__0 
            = vlSelfRef.day03_clk_div_odd_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__day03_clk_div_odd_tb__DOT__clk_out__0 
            = vlSelfRef.day03_clk_div_odd_tb__DOT__clk_out;
    }
    Vday03_clk_div_odd_tb___024root___timing_ready(vlSelf);
    Vday03_clk_div_odd_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday03_clk_div_odd_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday03_clk_div_odd_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday03_clk_div_odd_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday03_clk_div_odd_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday03_clk_div_odd_tb___024root___eval_inact(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_inact\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day03_clk_div_odd_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday03_clk_div_odd_tb___024root___nba_sequent__TOP__0(Vday03_clk_div_odd_tb___024root* vlSelf);
void Vday03_clk_div_odd_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday03_clk_div_odd_tb___024root___eval_nba(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_nba\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday03_clk_div_odd_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday03_clk_div_odd_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    vlSelfRef.day03_clk_div_odd_tb__DOT__dut__DOT__cnt_n 
                        = ((IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__rst)
                            ? 0U : ((2U == (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__dut__DOT__cnt_n))
                                     ? 0U : (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__dut__DOT__cnt_n)))));
                }
            }
            if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__2
                    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__rst)) 
                                      & (0ULL != vlSelfRef.day03_clk_div_odd_tb__DOT__t_rise))))) {
                        if (VL_UNLIKELY(((0x000000000000000fULL 
                                          != ((QData)(VL_TIME_UNITED_Q(1)) 
                                              - vlSelfRef.day03_clk_div_odd_tb__DOT__t_rise))))) {
                            vlSelfRef.day03_clk_div_odd_tb__DOT__errors 
                                = ((IData)(1U) + vlSelfRef.day03_clk_div_odd_tb__DOT__errors);
                            VL_WRITEF_NX("  [FAIL] duty cycle must be 50%% (t=%0t)\n",2, 'T',-12
                                         , '#',64,VL_TIME_UNITED_Q(1));
                        }
                        VL_WRITEF_NX("  high time = %0t of period 30\n",2, 'T',-12
                                     , '#',64,((QData)(VL_TIME_UNITED_Q(1)) 
                                               - vlSelfRef.day03_clk_div_odd_tb__DOT__t_rise));
                    }
                }
            }
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__3
                    if ((1U & (~ (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__rst)))) {
                        if ((0ULL != vlSelfRef.day03_clk_div_odd_tb__DOT__t_rise)) {
                            vlSelfRef.day03_clk_div_odd_tb__DOT__periods 
                                = ((IData)(1U) + vlSelfRef.day03_clk_div_odd_tb__DOT__periods);
                            if (VL_UNLIKELY(((0x000000000000001eULL 
                                              != ((QData)(VL_TIME_UNITED_Q(1)) 
                                                  - vlSelfRef.day03_clk_div_odd_tb__DOT__t_rise))))) {
                                vlSelfRef.day03_clk_div_odd_tb__DOT__errors 
                                    = ((IData)(1U) 
                                       + vlSelfRef.day03_clk_div_odd_tb__DOT__errors);
                                VL_WRITEF_NX("  [FAIL] period must be N clk cycles (t=%0t)\n",2, 'T',-12
                                             , '#',64,VL_TIME_UNITED_Q(1));
                            }
                        }
                        vlSelfRef.day03_clk_div_odd_tb__DOT__t_rise 
                            = VL_TIME_UNITED_Q(1);
                    }
                }
            }
            if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_comb__TOP__0
                    vlSelfRef.day03_clk_div_odd_tb__DOT__clk_out 
                        = ((1U <= (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__dut__DOT__cnt_p)) 
                           & (1U <= (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__dut__DOT__cnt_n)));
                }
            }
        }
        Vday03_clk_div_odd_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday03_clk_div_odd_tb___024root___eval_obs(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_obs\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday03_clk_div_odd_tb___024root___eval_react(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_react\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday03_clk_div_odd_tb___024root___eval_postponed(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_postponed\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday03_clk_div_odd_tb___024root____VbeforeTrig_h6c231d9f__0(Vday03_clk_div_odd_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday03_clk_div_odd_tb___024root___eval_initial__TOP__Vtiming__0(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day03_clk_div_odd_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day03_clk_div_odd_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day03_clk_div_odd_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    day03_clk_div_odd_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    day03_clk_div_odd_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day03_clk_div_odd_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday03_clk_div_odd_tb___024root____VbeforeTrig_h6c231d9f__0(vlSelf, 
                                                                    "@(posedge day03_clk_div_odd_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h6c231d9f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day03_clk_div_odd_tb.clk)", 
                                                             "tb/day03_clk_div_odd_tb.sv", 
                                                             30);
        day03_clk_div_odd_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day03_clk_div_odd_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/day03_clk_div_odd_tb.sv", 
                                         31);
    vlSelfRef.day03_clk_div_odd_tb__DOT__rst = 0U;
    day03_clk_div_odd_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x0000002dU;
    while (VL_LTS_III(32, 0U, day03_clk_div_odd_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vday03_clk_div_odd_tb___024root____VbeforeTrig_h6c231d9f__0(vlSelf, 
                                                                    "@(posedge day03_clk_div_odd_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h6c231d9f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day03_clk_div_odd_tb.clk)", 
                                                             "tb/day03_clk_div_odd_tb.sv", 
                                                             32);
        day03_clk_div_odd_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (day03_clk_div_odd_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((VL_GTS_III(32, 8U, vlSelfRef.day03_clk_div_odd_tb__DOT__periods)))) {
        vlSelfRef.day03_clk_div_odd_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day03_clk_div_odd_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] enough periods observed (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if ((0U == vlSelfRef.day03_clk_div_odd_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day03_clk_div_odd\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day03_clk_div_odd : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day03_clk_div_odd_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day03_clk_div_odd_tb.sv", 34, "");
    co_return;
}

VlCoroutine Vday03_clk_div_odd_tb___024root___eval_initial__TOP__Vtiming__1(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day03_clk_div_odd_tb.sv", 
                                             10);
        vlSelfRef.day03_clk_div_odd_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__clk)));
    }
    co_return;
}

bool Vday03_clk_div_odd_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday03_clk_div_odd_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___trigger_anySet__act\n"); );
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

void Vday03_clk_div_odd_tb___024root___nba_sequent__TOP__0(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___nba_sequent__TOP__0\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (((~ (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_1_1)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__day03_clk_div_odd_tb__DOT__clk_out)) 
                                               & (~ (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_2_4)))) 
                                           | ((IData)(vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_1_3) 
                                              & (~ (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_1_4))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day03_clk_div_odd_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_period\n",3, 'M',vlSymsp->name(),"day03_clk_div_odd_tb.a_period", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day03_clk_div_odd_tb.sv", 14, "");
                }
            }
        }
    }
    vlSelfRef.day03_clk_div_odd_tb__DOT__dut__DOT__cnt_p 
        = ((IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__rst)
            ? 0U : ((2U == (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__dut__DOT__cnt_p))
                     ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__dut__DOT__cnt_p)))));
    vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_2_4 
        = vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_2_3;
    vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_1_4 
        = vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_1_3;
    vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_2_3 
        = vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_2_2;
    vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_1_3 
        = vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_1_2;
    vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_2_2 
        = vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_2_1;
    vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_1_2 
        = vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_1_1;
    vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day03_clk_div_odd_tb__DOT__rst;
    vlSelfRef.day03_clk_div_odd_tb__DOT___Vpast_1_1 
        = vlSelfRef.__Vsampled_TOP__day03_clk_div_odd_tb__DOT__clk_out;
}

void Vday03_clk_div_odd_tb___024root___timing_ready(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___timing_ready\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h6c231d9f__0.ready("@(posedge day03_clk_div_odd_tb.clk)");
    }
}

void Vday03_clk_div_odd_tb___024root___timing_resume(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___timing_resume\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h6c231d9f__0.moveToResumeQueue(
                                                          "@(posedge day03_clk_div_odd_tb.clk)");
    vlSelfRef.__VtrigSched_h6c231d9f__0.resume("@(posedge day03_clk_div_odd_tb.clk)");
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday03_clk_div_odd_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday03_clk_div_odd_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday03_clk_div_odd_tb___024root____VbeforeTrig_h6c231d9f__0(Vday03_clk_div_odd_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root____VbeforeTrig_h6c231d9f__0\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.day03_clk_div_odd_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day03_clk_div_odd_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__day03_clk_div_odd_tb__DOT__clk__0 
        = vlSelfRef.day03_clk_div_odd_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h6c231d9f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6c231d9f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday03_clk_div_odd_tb___024root___eval_debug_assertions(Vday03_clk_div_odd_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday03_clk_div_odd_tb___024root___eval_debug_assertions\n"); );
    Vday03_clk_div_odd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
