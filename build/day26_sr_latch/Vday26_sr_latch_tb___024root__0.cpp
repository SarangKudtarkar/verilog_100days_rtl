// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday26_sr_latch_tb.h for the primary calling header

#include "Vday26_sr_latch_tb__pch.h"

VlCoroutine Vday26_sr_latch_tb___024root___eval_initial__TOP__Vtiming__0(Vday26_sr_latch_tb___024root* vlSelf);
VlCoroutine Vday26_sr_latch_tb___024root___eval_initial__TOP__Vtiming__1(Vday26_sr_latch_tb___024root* vlSelf);

void Vday26_sr_latch_tb___024root___eval_initial(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_initial\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday26_sr_latch_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday26_sr_latch_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday26_sr_latch_tb___024root___eval_sample(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_sample\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__s_n 
        = vlSelfRef.day26_sr_latch_tb__DOT__s_n;
    vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__r_n 
        = vlSelfRef.day26_sr_latch_tb__DOT__r_n;
    vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qa 
        = vlSelfRef.day26_sr_latch_tb__DOT__qa;
    vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qna 
        = vlSelfRef.day26_sr_latch_tb__DOT__qna;
    vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__s 
        = vlSelfRef.day26_sr_latch_tb__DOT__s;
    vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__r 
        = vlSelfRef.day26_sr_latch_tb__DOT__r;
    vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qb 
        = vlSelfRef.day26_sr_latch_tb__DOT__qb;
    vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qnb 
        = vlSelfRef.day26_sr_latch_tb__DOT__qnb;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday26_sr_latch_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday26_sr_latch_tb___024root___eval_ico(Vday26_sr_latch_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_ico\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday26_sr_latch_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday26_sr_latch_tb___024root___timing_ready(Vday26_sr_latch_tb___024root* vlSelf);
void Vday26_sr_latch_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday26_sr_latch_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday26_sr_latch_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday26_sr_latch_tb___024root___timing_resume(Vday26_sr_latch_tb___024root* vlSelf);

bool Vday26_sr_latch_tb___024root___eval_act(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_act\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 4U) 
                                                         | (((((~ (IData)(vlSelfRef.day26_sr_latch_tb__DOT__clk)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.day26_sr_latch_tb__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qa) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qa__1)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qb) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qb__1)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qb__1 
            = vlSelfRef.day26_sr_latch_tb__DOT__qb;
        vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qa__1 
            = vlSelfRef.day26_sr_latch_tb__DOT__qa;
        vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0 
            = vlSelfRef.day26_sr_latch_tb__DOT__clk;
    }
    Vday26_sr_latch_tb___024root___timing_ready(vlSelf);
    Vday26_sr_latch_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday26_sr_latch_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday26_sr_latch_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday26_sr_latch_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday26_sr_latch_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day26_sr_latch_tb__DOT__qnb 
                        = (1U & (~ ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__s) 
                                    | (IData)(vlSelfRef.day26_sr_latch_tb__DOT__qb))));
                    vlSelfRef.day26_sr_latch_tb__DOT__qb 
                        = (1U & (~ ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qnb) 
                                    | (IData)(vlSelfRef.day26_sr_latch_tb__DOT__r))));
                }
            }
            if ((0x000000000000000eULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__1
                    vlSelfRef.day26_sr_latch_tb__DOT__qna 
                        = (1U & (~ ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__r_n) 
                                    & (IData)(vlSelfRef.day26_sr_latch_tb__DOT__qa))));
                    vlSelfRef.day26_sr_latch_tb__DOT__qa 
                        = (1U & (~ ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qna) 
                                    & (IData)(vlSelfRef.day26_sr_latch_tb__DOT__s_n))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday26_sr_latch_tb___024root___eval_inact(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_inact\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day26_sr_latch_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday26_sr_latch_tb___024root___nba_sequent__TOP__0(Vday26_sr_latch_tb___024root* vlSelf);
void Vday26_sr_latch_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday26_sr_latch_tb___024root___eval_nba(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_nba\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday26_sr_latch_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday26_sr_latch_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday26_sr_latch_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday26_sr_latch_tb___024root___eval_obs(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_obs\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday26_sr_latch_tb___024root___eval_react(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_react\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday26_sr_latch_tb___024root___eval_postponed(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_postponed\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday26_sr_latch_tb___024root____VbeforeTrig_hdd1a3e37__0(Vday26_sr_latch_tb___024root* vlSelf, const char* __VeventDescription);
void Vday26_sr_latch_tb___024root____VbeforeTrig_hdd1a3d78__0(Vday26_sr_latch_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday26_sr_latch_tb___024root___eval_initial__TOP__Vtiming__0(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day26_sr_latch_tb__DOT__unnamedblk1__DOT__i;
    day26_sr_latch_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    VL_WRITEF_NX("SR latch (NAND) / (NOR)  -  'Q == Q-bar' means INVALID condition\n",0);
    day26_sr_latch_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, day26_sr_latch_tb__DOT__unnamedblk1__DOT__i)) {
        Vday26_sr_latch_tb___024root____VbeforeTrig_hdd1a3e37__0(vlSelf, 
                                                                 "@(negedge day26_sr_latch_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hdd1a3e37__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day26_sr_latch_tb.clk)", 
                                                             "tb/day26_sr_latch_tb.sv", 
                                                             31);
        vlSelfRef.day26_sr_latch_tb__DOT__s_n = (1U 
                                                 & (vlSelfRef.day26_sr_latch_tb__DOT__NAND_V
                                                    [
                                                    (7U 
                                                     & day26_sr_latch_tb__DOT__unnamedblk1__DOT__i)] 
                                                    >> 1U));
        vlSelfRef.day26_sr_latch_tb__DOT__r_n = (1U 
                                                 & vlSelfRef.day26_sr_latch_tb__DOT__NAND_V
                                                 [(7U 
                                                   & day26_sr_latch_tb__DOT__unnamedblk1__DOT__i)]);
        vlSelfRef.day26_sr_latch_tb__DOT__s = (1U & 
                                               (vlSelfRef.day26_sr_latch_tb__DOT__NOR_V
                                                [(7U 
                                                  & day26_sr_latch_tb__DOT__unnamedblk1__DOT__i)] 
                                                >> 1U));
        vlSelfRef.day26_sr_latch_tb__DOT__r = (1U & vlSelfRef.day26_sr_latch_tb__DOT__NOR_V
                                               [(7U 
                                                 & day26_sr_latch_tb__DOT__unnamedblk1__DOT__i)]);
        Vday26_sr_latch_tb___024root____VbeforeTrig_hdd1a3d78__0(vlSelf, 
                                                                 "@(posedge day26_sr_latch_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hdd1a3d78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day26_sr_latch_tb.clk)", 
                                                             "tb/day26_sr_latch_tb.sv", 
                                                             32);
        if ((2U == vlSelfRef.day26_sr_latch_tb__DOT__EXP
             [(7U & day26_sr_latch_tb__DOT__unnamedblk1__DOT__i)])) {
            if (VL_UNLIKELY(((1U & (~ (((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qa) 
                                        == (IData)(vlSelfRef.day26_sr_latch_tb__DOT__qna)) 
                                       & ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qb) 
                                          == (IData)(vlSelfRef.day26_sr_latch_tb__DOT__qnb)))))))) {
                vlSelfRef.day26_sr_latch_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day26_sr_latch_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] invalid state: Q equals Q-bar (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        } else {
            if (VL_UNLIKELY(((1U & (~ (((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qa) 
                                        == (1U & vlSelfRef.day26_sr_latch_tb__DOT__EXP
                                            [(7U & day26_sr_latch_tb__DOT__unnamedblk1__DOT__i)])) 
                                       & ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qna) 
                                          != (IData)(vlSelfRef.day26_sr_latch_tb__DOT__qa)))))))) {
                vlSelfRef.day26_sr_latch_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day26_sr_latch_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] NAND latch Q (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY(((1U & (~ (((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qb) 
                                        == (1U & vlSelfRef.day26_sr_latch_tb__DOT__EXP
                                            [(7U & day26_sr_latch_tb__DOT__unnamedblk1__DOT__i)])) 
                                       & ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qnb) 
                                          != (IData)(vlSelfRef.day26_sr_latch_tb__DOT__qb)))))))) {
                vlSelfRef.day26_sr_latch_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day26_sr_latch_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] NOR latch Q (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        VL_WRITEF_NX("  NAND s_n,r_n=%b%b q=%b qn=%b %s | NOR s,r=%b%b q=%b qn=%b %s\n",10
                     , '#',1,vlSelfRef.day26_sr_latch_tb__DOT__s_n
                     , '#',1,(IData)(vlSelfRef.day26_sr_latch_tb__DOT__r_n)
                     , '#',1,vlSelfRef.day26_sr_latch_tb__DOT__qa
                     , '#',1,(IData)(vlSelfRef.day26_sr_latch_tb__DOT__qna)
                     , '#',56,(((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qa) 
                                == (IData)(vlSelfRef.day26_sr_latch_tb__DOT__qna))
                                ? 0x00494e56414c4944ULL
                                : 0x0020202020202020ULL)
                     , '#',1,(IData)(vlSelfRef.day26_sr_latch_tb__DOT__s)
                     , '#',1,vlSelfRef.day26_sr_latch_tb__DOT__r
                     , '#',1,(IData)(vlSelfRef.day26_sr_latch_tb__DOT__qb)
                     , '#',1,vlSelfRef.day26_sr_latch_tb__DOT__qnb
                     , '#',56,(((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qb) 
                                == (IData)(vlSelfRef.day26_sr_latch_tb__DOT__qnb))
                                ? 0x00494e56414c4944ULL
                                : 0ULL));
        day26_sr_latch_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day26_sr_latch_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day26_sr_latch_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day26_sr_latch\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day26_sr_latch : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day26_sr_latch_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day26_sr_latch_tb.sv", 43, "");
    co_return;
}

VlCoroutine Vday26_sr_latch_tb___024root___eval_initial__TOP__Vtiming__1(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day26_sr_latch_tb.sv", 
                                             14);
        vlSelfRef.day26_sr_latch_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.day26_sr_latch_tb__DOT__clk)));
    }
    co_return;
}

bool Vday26_sr_latch_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday26_sr_latch_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___trigger_anySet__act\n"); );
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

void Vday26_sr_latch_tb___024root___nba_sequent__TOP__0(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___nba_sequent__TOP__0\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__s_n)) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__r_n))) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qa) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qna))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day26_sr_latch_tb.sv:18: Assertion failed in %m: [SVA FAIL] a_nand_set\n",3, 'M',vlSymsp->name(),"day26_sr_latch_tb.a_nand_set", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day26_sr_latch_tb.sv", 18, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__s_n) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__r_n)))) 
                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qa)) 
                                          & (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qna)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day26_sr_latch_tb.sv:19: Assertion failed in %m: [SVA FAIL] a_nand_rst\n",3, 'M',vlSymsp->name(),"day26_sr_latch_tb.a_nand_rst", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day26_sr_latch_tb.sv", 19, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__s_n)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__r_n)))) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qa) 
                                          == (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qna)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day26_sr_latch_tb.sv:20: Assertion failed in %m: [SVA FAIL] a_nand_inv\n",3, 'M',vlSymsp->name(),"day26_sr_latch_tb.a_nand_inv", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day26_sr_latch_tb.sv", 20, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__s) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__r)))) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qb) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qnb))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day26_sr_latch_tb.sv:23: Assertion failed in %m: [SVA FAIL] a_nor_set\n",3, 'M',vlSymsp->name(),"day26_sr_latch_tb.a_nor_set", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day26_sr_latch_tb.sv", 23, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__s)) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__r))) 
                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qb)) 
                                          & (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qnb)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day26_sr_latch_tb.sv:24: Assertion failed in %m: [SVA FAIL] a_nor_rst\n",3, 'M',vlSymsp->name(),"day26_sr_latch_tb.a_nor_rst", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day26_sr_latch_tb.sv", 24, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__s) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__r))) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qb) 
                                          == (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qnb)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day26_sr_latch_tb.sv:25: Assertion failed in %m: [SVA FAIL] a_nor_inv\n",3, 'M',vlSymsp->name(),"day26_sr_latch_tb.a_nor_inv", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day26_sr_latch_tb.sv", 25, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__s_n) 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__r_n))) 
                                       | ((IData)(vlSelfRef.day26_sr_latch_tb__DOT___Vpast_4_1) 
                                          == (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qa)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day26_sr_latch_tb.sv:21: Assertion failed in %m: [SVA FAIL] a_nand_hold\n",3, 'M',vlSymsp->name(),"day26_sr_latch_tb.a_nand_hold", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day26_sr_latch_tb.sv", 21, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__s)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__r)))) 
                                       | ((IData)(vlSelfRef.day26_sr_latch_tb__DOT___Vpast_9_1) 
                                          == (IData)(vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qb)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day26_sr_latch_tb.sv:26: Assertion failed in %m: [SVA FAIL] a_nor_hold\n",3, 'M',vlSymsp->name(),"day26_sr_latch_tb.a_nor_hold", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day26_sr_latch_tb.sv", 26, "");
            }
        }
    }
    vlSelfRef.day26_sr_latch_tb__DOT___Vpast_4_1 = vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qa;
    vlSelfRef.day26_sr_latch_tb__DOT___Vpast_9_1 = vlSelfRef.__Vsampled_TOP__day26_sr_latch_tb__DOT__qb;
}

void Vday26_sr_latch_tb___024root___timing_ready(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___timing_ready\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hdd1a3e37__0.ready("@(negedge day26_sr_latch_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hdd1a3d78__0.ready("@(posedge day26_sr_latch_tb.clk)");
    }
}

void Vday26_sr_latch_tb___024root___timing_resume(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___timing_resume\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hdd1a3e37__0.moveToResumeQueue(
                                                          "@(negedge day26_sr_latch_tb.clk)");
    vlSelfRef.__VtrigSched_hdd1a3d78__0.moveToResumeQueue(
                                                          "@(posedge day26_sr_latch_tb.clk)");
    vlSelfRef.__VtrigSched_hdd1a3e37__0.resume("@(negedge day26_sr_latch_tb.clk)");
    vlSelfRef.__VtrigSched_hdd1a3d78__0.resume("@(posedge day26_sr_latch_tb.clk)");
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday26_sr_latch_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday26_sr_latch_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday26_sr_latch_tb___024root____VbeforeTrig_hdd1a3e37__0(Vday26_sr_latch_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root____VbeforeTrig_hdd1a3e37__0\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day26_sr_latch_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0)) 
                                   << 3U) | (((IData)(vlSelfRef.day26_sr_latch_tb__DOT__clk) 
                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0))) 
                                             << 2U))));
    vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0 
        = vlSelfRef.day26_sr_latch_tb__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hdd1a3d78__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hdd1a3e37__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday26_sr_latch_tb___024root____VbeforeTrig_hdd1a3d78__0(Vday26_sr_latch_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root____VbeforeTrig_hdd1a3d78__0\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day26_sr_latch_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0)) 
                                   << 3U) | (((IData)(vlSelfRef.day26_sr_latch_tb__DOT__clk) 
                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0))) 
                                             << 2U))));
    vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0 
        = vlSelfRef.day26_sr_latch_tb__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hdd1a3d78__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hdd1a3e37__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday26_sr_latch_tb___024root___eval_debug_assertions(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_debug_assertions\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
