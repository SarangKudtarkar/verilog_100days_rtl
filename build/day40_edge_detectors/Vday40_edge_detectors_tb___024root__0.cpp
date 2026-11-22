// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday40_edge_detectors_tb.h for the primary calling header

#include "Vday40_edge_detectors_tb__pch.h"

VlCoroutine Vday40_edge_detectors_tb___024root___eval_initial__TOP__Vtiming__0(Vday40_edge_detectors_tb___024root* vlSelf);
VlCoroutine Vday40_edge_detectors_tb___024root___eval_initial__TOP__Vtiming__1(Vday40_edge_detectors_tb___024root* vlSelf);

void Vday40_edge_detectors_tb___024root___eval_initial(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_initial\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday40_edge_detectors_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday40_edge_detectors_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday40_edge_detectors_tb___024root___eval_sample(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_sample\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day40_edge_detectors_tb__DOT__pos_edge 
        = vlSelfRef.day40_edge_detectors_tb__DOT__pos_edge;
    vlSelfRef.__Vsampled_TOP__day40_edge_detectors_tb__DOT__sig 
        = vlSelfRef.day40_edge_detectors_tb__DOT__sig;
    vlSelfRef.__Vsampled_TOP__day40_edge_detectors_tb__DOT__neg_edge 
        = vlSelfRef.day40_edge_detectors_tb__DOT__neg_edge;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday40_edge_detectors_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday40_edge_detectors_tb___024root___eval_ico(Vday40_edge_detectors_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_ico\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday40_edge_detectors_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday40_edge_detectors_tb___024root___timing_ready(Vday40_edge_detectors_tb___024root* vlSelf);
void Vday40_edge_detectors_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday40_edge_detectors_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday40_edge_detectors_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday40_edge_detectors_tb___024root___timing_resume(Vday40_edge_detectors_tb___024root* vlSelf);

bool Vday40_edge_detectors_tb___024root___eval_act(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_act\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day40_edge_detectors_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day40_edge_detectors_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day40_edge_detectors_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day40_edge_detectors_tb__DOT__clk__0 
            = vlSelfRef.day40_edge_detectors_tb__DOT__clk;
    }
    Vday40_edge_detectors_tb___024root___timing_ready(vlSelf);
    Vday40_edge_detectors_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday40_edge_detectors_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday40_edge_detectors_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday40_edge_detectors_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday40_edge_detectors_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSelfRef.day40_edge_detectors_tb__DOT__neg_edge 
                        = ((~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__sig)) 
                           & (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__u_neg__DOT__prev));
                    vlSelfRef.day40_edge_detectors_tb__DOT__pos_edge 
                        = ((~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__u_pos__DOT__prev)) 
                           & (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__sig));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday40_edge_detectors_tb___024root___eval_inact(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_inact\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day40_edge_detectors_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday40_edge_detectors_tb___024root___nba_sequent__TOP__0(Vday40_edge_detectors_tb___024root* vlSelf);
void Vday40_edge_detectors_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday40_edge_detectors_tb___024root___eval_nba(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_nba\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday40_edge_detectors_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday40_edge_detectors_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSelfRef.day40_edge_detectors_tb__DOT__neg_edge 
                        = ((~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__sig)) 
                           & (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__u_neg__DOT__prev));
                    vlSelfRef.day40_edge_detectors_tb__DOT__pos_edge 
                        = ((~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__u_pos__DOT__prev)) 
                           & (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__sig));
                }
            }
        }
        Vday40_edge_detectors_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday40_edge_detectors_tb___024root___eval_obs(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_obs\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday40_edge_detectors_tb___024root___eval_react(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_react\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday40_edge_detectors_tb___024root___eval_postponed(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_postponed\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday40_edge_detectors_tb___024root____VbeforeTrig_hdd57652b__0(Vday40_edge_detectors_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday40_edge_detectors_tb___024root___eval_initial__TOP__Vtiming__0(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day40_edge_detectors_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day40_edge_detectors_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day40_edge_detectors_tb__DOT__unnamedblk1__DOT__i;
    day40_edge_detectors_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day40_edge_detectors_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day40_edge_detectors_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday40_edge_detectors_tb___024root____VbeforeTrig_hdd57652b__0(vlSelf, 
                                                                       "@(negedge day40_edge_detectors_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hdd57652b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day40_edge_detectors_tb.clk)", 
                                                             "tb/day40_edge_detectors_tb.sv", 
                                                             26);
        day40_edge_detectors_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day40_edge_detectors_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day40_edge_detectors_tb__DOT__rst = 0U;
    day40_edge_detectors_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x000000c8U, day40_edge_detectors_tb__DOT__unnamedblk1__DOT__i)) {
        Vday40_edge_detectors_tb___024root____VbeforeTrig_hdd57652b__0(vlSelf, 
                                                                       "@(negedge day40_edge_detectors_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hdd57652b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day40_edge_detectors_tb.clk)", 
                                                             "tb/day40_edge_detectors_tb.sv", 
                                                             29);
        vlSelfRef.day40_edge_detectors_tb__DOT____VlemExpr_0 
            = VL_URANDOM_RANGE_I(0U, 0x00000063U);
        if ((0x00000028U > vlSelfRef.day40_edge_detectors_tb__DOT____VlemExpr_0)) {
            vlSelfRef.day40_edge_detectors_tb__DOT__sig 
                = (1U & (~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__sig)));
        }
        day40_edge_detectors_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day40_edge_detectors_tb__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("  detected %0d rising and %0d falling edges\n",2
                 , '~',32,vlSelfRef.day40_edge_detectors_tb__DOT__n_pos
                 , '~',32,vlSelfRef.day40_edge_detectors_tb__DOT__n_neg);
    if (VL_UNLIKELY(((1U & (~ (VL_LTS_III(32, 0x0000000aU, vlSelfRef.day40_edge_detectors_tb__DOT__n_pos) 
                               & (((0xffffffffU == 
                                    (vlSelfRef.day40_edge_detectors_tb__DOT__n_pos 
                                     - vlSelfRef.day40_edge_detectors_tb__DOT__n_neg)) 
                                   | (0U == (vlSelfRef.day40_edge_detectors_tb__DOT__n_pos 
                                             - vlSelfRef.day40_edge_detectors_tb__DOT__n_neg))) 
                                  | (1U == (vlSelfRef.day40_edge_detectors_tb__DOT__n_pos 
                                            - vlSelfRef.day40_edge_detectors_tb__DOT__n_neg))))))))) {
        vlSelfRef.day40_edge_detectors_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day40_edge_detectors_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] edge counts are consistent (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if ((0U == vlSelfRef.day40_edge_detectors_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day40_edge_detectors\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day40_edge_detectors : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day40_edge_detectors_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day40_edge_detectors_tb.sv", 34, "");
    co_return;
}

VlCoroutine Vday40_edge_detectors_tb___024root___eval_initial__TOP__Vtiming__1(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day40_edge_detectors_tb.sv", 
                                             9);
        vlSelfRef.day40_edge_detectors_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__clk)));
    }
    co_return;
}

bool Vday40_edge_detectors_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday40_edge_detectors_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___trigger_anySet__act\n"); );
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

void Vday40_edge_detectors_tb___024root___nba_sequent__TOP__0(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___nba_sequent__TOP__0\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__rst)))) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__day40_edge_detectors_tb__DOT__pos_edge) 
                                  & (IData)(vlSelfRef.__Vsampled_TOP__day40_edge_detectors_tb__DOT__neg_edge))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day40_edge_detectors_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_excl\n",3, 'M',vlSymsp->name(),"day40_edge_detectors_tb.a_excl", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day40_edge_detectors_tb.sv", 15, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__day40_edge_detectors_tb__DOT__pos_edge) 
                                  != ((IData)(vlSelfRef.__Vsampled_TOP__day40_edge_detectors_tb__DOT__sig) 
                                      & (~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT___Vpast_1_1))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day40_edge_detectors_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_pos\n",3, 'M',vlSymsp->name(),"day40_edge_detectors_tb.a_pos", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day40_edge_detectors_tb.sv", 13, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__day40_edge_detectors_tb__DOT__neg_edge) 
                                  != ((~ (IData)(vlSelfRef.__Vsampled_TOP__day40_edge_detectors_tb__DOT__sig)) 
                                      & (IData)(vlSelfRef.day40_edge_detectors_tb__DOT___Vpast_1_1)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day40_edge_detectors_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_neg\n",3, 'M',vlSymsp->name(),"day40_edge_detectors_tb.a_neg", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day40_edge_detectors_tb.sv", 14, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__rst)))) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.day40_edge_detectors_tb__DOT__pos_edge) 
                          != ((IData)(vlSelfRef.day40_edge_detectors_tb__DOT__sig) 
                              & (~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__pv))))))) {
            vlSelfRef.day40_edge_detectors_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day40_edge_detectors_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] positive edge pulse (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (vlSelfRef.day40_edge_detectors_tb__DOT__pos_edge) {
            vlSelfRef.day40_edge_detectors_tb__DOT__n_pos 
                = ((IData)(1U) + vlSelfRef.day40_edge_detectors_tb__DOT__n_pos);
        }
        if (vlSelfRef.day40_edge_detectors_tb__DOT__neg_edge) {
            vlSelfRef.day40_edge_detectors_tb__DOT__n_neg 
                = ((IData)(1U) + vlSelfRef.day40_edge_detectors_tb__DOT__n_neg);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day40_edge_detectors_tb__DOT__neg_edge) 
                          != ((~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__sig)) 
                              & (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__pv)))))) {
            vlSelfRef.day40_edge_detectors_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day40_edge_detectors_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] negative edge pulse (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day40_edge_detectors_tb__DOT__pv 
            = vlSelfRef.day40_edge_detectors_tb__DOT__sig;
    }
    vlSelfRef.day40_edge_detectors_tb__DOT__u_neg__DOT__prev 
        = ((~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__rst)) 
           & (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__sig));
    vlSelfRef.day40_edge_detectors_tb__DOT__u_pos__DOT__prev 
        = ((~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__rst)) 
           & (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__sig));
    vlSelfRef.day40_edge_detectors_tb__DOT___Vpast_1_1 
        = vlSelfRef.__Vsampled_TOP__day40_edge_detectors_tb__DOT__sig;
}

void Vday40_edge_detectors_tb___024root___timing_ready(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___timing_ready\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hdd57652b__0.ready("@(negedge day40_edge_detectors_tb.clk)");
    }
}

void Vday40_edge_detectors_tb___024root___timing_resume(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___timing_resume\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hdd57652b__0.moveToResumeQueue(
                                                          "@(negedge day40_edge_detectors_tb.clk)");
    vlSelfRef.__VtrigSched_hdd57652b__0.resume("@(negedge day40_edge_detectors_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday40_edge_detectors_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday40_edge_detectors_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday40_edge_detectors_tb___024root____VbeforeTrig_hdd57652b__0(Vday40_edge_detectors_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root____VbeforeTrig_hdd57652b__0\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day40_edge_detectors_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day40_edge_detectors_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day40_edge_detectors_tb__DOT__clk__0 
        = vlSelfRef.day40_edge_detectors_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hdd57652b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hdd57652b__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday40_edge_detectors_tb___024root___eval_debug_assertions(Vday40_edge_detectors_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday40_edge_detectors_tb___024root___eval_debug_assertions\n"); );
    Vday40_edge_detectors_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
