// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday48_prime_seq_gen_tb.h for the primary calling header

#include "Vday48_prime_seq_gen_tb__pch.h"

VlCoroutine Vday48_prime_seq_gen_tb___024root___eval_initial__TOP__Vtiming__0(Vday48_prime_seq_gen_tb___024root* vlSelf);
VlCoroutine Vday48_prime_seq_gen_tb___024root___eval_initial__TOP__Vtiming__1(Vday48_prime_seq_gen_tb___024root* vlSelf);

void Vday48_prime_seq_gen_tb___024root___eval_initial(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_initial\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday48_prime_seq_gen_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday48_prime_seq_gen_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday48_prime_seq_gen_tb___024root___eval_sample(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_sample\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx 
        = vlSelfRef.day48_prime_seq_gen_tb__DOT__dut__DOT__idx;
    vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__rst 
        = vlSelfRef.day48_prime_seq_gen_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday48_prime_seq_gen_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday48_prime_seq_gen_tb___024root___eval_ico(Vday48_prime_seq_gen_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_ico\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday48_prime_seq_gen_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday48_prime_seq_gen_tb___024root___timing_ready(Vday48_prime_seq_gen_tb___024root* vlSelf);
void Vday48_prime_seq_gen_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday48_prime_seq_gen_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday48_prime_seq_gen_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday48_prime_seq_gen_tb___024root___timing_resume(Vday48_prime_seq_gen_tb___024root* vlSelf);

bool Vday48_prime_seq_gen_tb___024root___eval_act(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_act\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day48_prime_seq_gen_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day48_prime_seq_gen_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day48_prime_seq_gen_tb__DOT__clk__0 
            = vlSelfRef.day48_prime_seq_gen_tb__DOT__clk;
    }
    Vday48_prime_seq_gen_tb___024root___timing_ready(vlSelf);
    Vday48_prime_seq_gen_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday48_prime_seq_gen_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday48_prime_seq_gen_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday48_prime_seq_gen_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday48_prime_seq_gen_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday48_prime_seq_gen_tb___024root___eval_inact(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_inact\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day48_prime_seq_gen_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday48_prime_seq_gen_tb___024root___nba_sequent__TOP__0(Vday48_prime_seq_gen_tb___024root* vlSelf);
void Vday48_prime_seq_gen_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday48_prime_seq_gen_tb___024root___eval_nba(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_nba\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday48_prime_seq_gen_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday48_prime_seq_gen_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday48_prime_seq_gen_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday48_prime_seq_gen_tb___024root___eval_obs(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_obs\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday48_prime_seq_gen_tb___024root___eval_react(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_react\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday48_prime_seq_gen_tb___024root___eval_postponed(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_postponed\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday48_prime_seq_gen_tb___024root____VbeforeTrig_h3d9c7854__0(Vday48_prime_seq_gen_tb___024root* vlSelf, const char* __VeventDescription);
void Vday48_prime_seq_gen_tb___024root____VbeforeTrig_h3d9c7913__0(Vday48_prime_seq_gen_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday48_prime_seq_gen_tb___024root___eval_initial__TOP__Vtiming__0(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day48_prime_seq_gen_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day48_prime_seq_gen_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day48_prime_seq_gen_tb__DOT__unnamedblk1__DOT__i;
    day48_prime_seq_gen_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day48_prime_seq_gen_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day48_prime_seq_gen_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday48_prime_seq_gen_tb___024root____VbeforeTrig_h3d9c7854__0(vlSelf, 
                                                                      "@(posedge day48_prime_seq_gen_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h3d9c7854__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day48_prime_seq_gen_tb.clk)", 
                                                             "tb/day48_prime_seq_gen_tb.sv", 
                                                             20);
        day48_prime_seq_gen_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day48_prime_seq_gen_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vday48_prime_seq_gen_tb___024root____VbeforeTrig_h3d9c7913__0(vlSelf, 
                                                                  "@(negedge day48_prime_seq_gen_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h3d9c7913__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day48_prime_seq_gen_tb.clk)", 
                                                         "tb/day48_prime_seq_gen_tb.sv", 
                                                         21);
    vlSelfRef.day48_prime_seq_gen_tb__DOT__rst = 0U;
    day48_prime_seq_gen_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000001eU, day48_prime_seq_gen_tb__DOT__unnamedblk1__DOT__i)) {
        if (VL_UNLIKELY((((0x0000000fU & (0x222b7532U 
                                          >> ((IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                              << 2U))) 
                          != ((4U >= (7U & VL_MODDIVS_III(32, day48_prime_seq_gen_tb__DOT__unnamedblk1__DOT__i, (IData)(5U))))
                               ? vlSelfRef.day48_prime_seq_gen_tb__DOT__PR
                              [(7U & VL_MODDIVS_III(32, day48_prime_seq_gen_tb__DOT__unnamedblk1__DOT__i, (IData)(5U)))]
                               : 0U))))) {
            vlSelfRef.day48_prime_seq_gen_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day48_prime_seq_gen_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] prime sequence (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        VL_WRITEF_NX("  seq_out = %0d\n",1, '#',4,(0x0000000fU 
                                                   & (0x222b7532U 
                                                      >> 
                                                      ((IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                       << 2U))));
        Vday48_prime_seq_gen_tb___024root____VbeforeTrig_h3d9c7913__0(vlSelf, 
                                                                      "@(negedge day48_prime_seq_gen_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h3d9c7913__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day48_prime_seq_gen_tb.clk)", 
                                                             "tb/day48_prime_seq_gen_tb.sv", 
                                                             25);
        day48_prime_seq_gen_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day48_prime_seq_gen_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day48_prime_seq_gen_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day48_prime_seq_gen\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day48_prime_seq_gen : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day48_prime_seq_gen_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day48_prime_seq_gen_tb.sv", 27, "");
    co_return;
}

VlCoroutine Vday48_prime_seq_gen_tb___024root___eval_initial__TOP__Vtiming__1(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day48_prime_seq_gen_tb.sv", 
                                             9);
        vlSelfRef.day48_prime_seq_gen_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__clk)));
    }
    co_return;
}

bool Vday48_prime_seq_gen_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday48_prime_seq_gen_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___trigger_anySet__act\n"); );
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

void Vday48_prime_seq_gen_tb___024root___nba_sequent__TOP__0(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___nba_sequent__TOP__0\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ (((((2U == 
                                               (0x0000000fU 
                                                & (0x222b7532U 
                                                   >> 
                                                   ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                    << 2U)))) 
                                              | (3U 
                                                 == 
                                                 (0x0000000fU 
                                                  & (0x222b7532U 
                                                     >> 
                                                     ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                      << 2U))))) 
                                             | (5U 
                                                == 
                                                (0x0000000fU 
                                                 & (0x222b7532U 
                                                    >> 
                                                    ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                     << 2U))))) 
                                            | (7U == 
                                               (0x0000000fU 
                                                & (0x222b7532U 
                                                   >> 
                                                   ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                    << 2U))))) 
                                           | (0x0bU 
                                              == (0x0000000fU 
                                                  & (0x222b7532U 
                                                     >> 
                                                     ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                      << 2U)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day48_prime_seq_gen_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_legal\n",3, 'M',vlSymsp->name(),"day48_prime_seq_gen_tb.a_legal", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day48_prime_seq_gen_tb.sv", 12, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT___Vpast_2_1)) 
                                           | (3U == 
                                              (0x0000000fU 
                                               & (0x222b7532U 
                                                  >> 
                                                  ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                   << 2U)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day48_prime_seq_gen_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_2_3\n",3, 'M',vlSymsp->name(),"day48_prime_seq_gen_tb.a_2_3", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day48_prime_seq_gen_tb.sv", 13, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT___Vpast_4_1)) 
                                           | (5U == 
                                              (0x0000000fU 
                                               & (0x222b7532U 
                                                  >> 
                                                  ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                   << 2U)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day48_prime_seq_gen_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_3_5\n",3, 'M',vlSymsp->name(),"day48_prime_seq_gen_tb.a_3_5", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day48_prime_seq_gen_tb.sv", 14, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT___Vpast_6_1)) 
                                           | (7U == 
                                              (0x0000000fU 
                                               & (0x222b7532U 
                                                  >> 
                                                  ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                   << 2U)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day48_prime_seq_gen_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_5_7\n",3, 'M',vlSymsp->name(),"day48_prime_seq_gen_tb.a_5_7", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day48_prime_seq_gen_tb.sv", 15, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT___Vpast_8_1)) 
                                           | (0x0bU 
                                              == (0x0000000fU 
                                                  & (0x222b7532U 
                                                     >> 
                                                     ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                      << 2U)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day48_prime_seq_gen_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_7_11\n",3, 'M',vlSymsp->name(),"day48_prime_seq_gen_tb.a_7_11", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day48_prime_seq_gen_tb.sv", 16, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT___Vpast_10_1)) 
                                           | (2U == 
                                              (0x0000000fU 
                                               & (0x222b7532U 
                                                  >> 
                                                  ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                                   << 2U)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day48_prime_seq_gen_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_11_2\n",3, 'M',vlSymsp->name(),"day48_prime_seq_gen_tb.a_11_2", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day48_prime_seq_gen_tb.sv", 17, "");
                }
            }
        }
    }
    vlSelfRef.day48_prime_seq_gen_tb__DOT__dut__DOT__idx 
        = ((IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__rst)
            ? 0U : ((4U == (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__dut__DOT__idx))
                     ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__dut__DOT__idx)))));
    vlSelfRef.day48_prime_seq_gen_tb__DOT___Vpast_2_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__rst)) 
           & (2U == (0x0000000fU & (0x222b7532U >> 
                                    ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                     << 2U)))));
    vlSelfRef.day48_prime_seq_gen_tb__DOT___Vpast_4_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__rst)) 
           & (3U == (0x0000000fU & (0x222b7532U >> 
                                    ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                     << 2U)))));
    vlSelfRef.day48_prime_seq_gen_tb__DOT___Vpast_6_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__rst)) 
           & (5U == (0x0000000fU & (0x222b7532U >> 
                                    ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                     << 2U)))));
    vlSelfRef.day48_prime_seq_gen_tb__DOT___Vpast_8_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__rst)) 
           & (7U == (0x0000000fU & (0x222b7532U >> 
                                    ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                     << 2U)))));
    vlSelfRef.day48_prime_seq_gen_tb__DOT___Vpast_10_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__rst)) 
           & (0x0bU == (0x0000000fU & (0x222b7532U 
                                       >> ((IData)(vlSelfRef.__Vsampled_TOP__day48_prime_seq_gen_tb__DOT__dut__DOT__idx) 
                                           << 2U)))));
}

void Vday48_prime_seq_gen_tb___024root___timing_ready(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___timing_ready\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3d9c7854__0.ready("@(posedge day48_prime_seq_gen_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3d9c7913__0.ready("@(negedge day48_prime_seq_gen_tb.clk)");
    }
}

void Vday48_prime_seq_gen_tb___024root___timing_resume(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___timing_resume\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h3d9c7854__0.moveToResumeQueue(
                                                          "@(posedge day48_prime_seq_gen_tb.clk)");
    vlSelfRef.__VtrigSched_h3d9c7913__0.moveToResumeQueue(
                                                          "@(negedge day48_prime_seq_gen_tb.clk)");
    vlSelfRef.__VtrigSched_h3d9c7854__0.resume("@(posedge day48_prime_seq_gen_tb.clk)");
    vlSelfRef.__VtrigSched_h3d9c7913__0.resume("@(negedge day48_prime_seq_gen_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday48_prime_seq_gen_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday48_prime_seq_gen_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday48_prime_seq_gen_tb___024root____VbeforeTrig_h3d9c7854__0(Vday48_prime_seq_gen_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root____VbeforeTrig_h3d9c7854__0\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day48_prime_seq_gen_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day48_prime_seq_gen_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day48_prime_seq_gen_tb__DOT__clk__0 
        = vlSelfRef.day48_prime_seq_gen_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3d9c7854__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3d9c7913__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d9c7913__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday48_prime_seq_gen_tb___024root____VbeforeTrig_h3d9c7913__0(Vday48_prime_seq_gen_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root____VbeforeTrig_h3d9c7913__0\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day48_prime_seq_gen_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day48_prime_seq_gen_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day48_prime_seq_gen_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day48_prime_seq_gen_tb__DOT__clk__0 
        = vlSelfRef.day48_prime_seq_gen_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3d9c7854__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3d9c7913__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3d9c7913__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday48_prime_seq_gen_tb___024root___eval_debug_assertions(Vday48_prime_seq_gen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday48_prime_seq_gen_tb___024root___eval_debug_assertions\n"); );
    Vday48_prime_seq_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
