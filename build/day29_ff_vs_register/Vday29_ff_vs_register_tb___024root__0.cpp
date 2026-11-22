// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday29_ff_vs_register_tb.h for the primary calling header

#include "Vday29_ff_vs_register_tb__pch.h"

VlCoroutine Vday29_ff_vs_register_tb___024root___eval_initial__TOP__Vtiming__0(Vday29_ff_vs_register_tb___024root* vlSelf);
VlCoroutine Vday29_ff_vs_register_tb___024root___eval_initial__TOP__Vtiming__1(Vday29_ff_vs_register_tb___024root* vlSelf);

void Vday29_ff_vs_register_tb___024root___eval_initial(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_initial\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday29_ff_vs_register_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday29_ff_vs_register_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday29_ff_vs_register_tb___024root___eval_sample(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_sample\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__q_ff 
        = vlSelfRef.day29_ff_vs_register_tb__DOT__q_ff;
    vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__q_reg 
        = vlSelfRef.day29_ff_vs_register_tb__DOT__q_reg;
    vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__d 
        = vlSelfRef.day29_ff_vs_register_tb__DOT__d;
    vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__rst_n 
        = vlSelfRef.day29_ff_vs_register_tb__DOT__rst_n;
    vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__en 
        = vlSelfRef.day29_ff_vs_register_tb__DOT__en;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday29_ff_vs_register_tb___024root___eval_ico(Vday29_ff_vs_register_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_ico\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday29_ff_vs_register_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday29_ff_vs_register_tb___024root___timing_ready(Vday29_ff_vs_register_tb___024root* vlSelf);
void Vday29_ff_vs_register_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday29_ff_vs_register_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday29_ff_vs_register_tb___024root___timing_resume(Vday29_ff_vs_register_tb___024root* vlSelf);

bool Vday29_ff_vs_register_tb___024root___eval_act(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_act\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 3U) 
                                                          | (((~ (IData)(vlSelfRef.day29_ff_vs_register_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__clk__0)) 
                                                             << 2U)) 
                                                         | ((((~ (IData)(vlSelfRef.day29_ff_vs_register_tb__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day29_ff_vs_register_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__clk__0 
            = vlSelfRef.day29_ff_vs_register_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__rst_n__0 
            = vlSelfRef.day29_ff_vs_register_tb__DOT__rst_n;
    }
    Vday29_ff_vs_register_tb___024root___timing_ready(vlSelf);
    Vday29_ff_vs_register_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday29_ff_vs_register_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday29_ff_vs_register_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday29_ff_vs_register_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday29_ff_vs_register_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday29_ff_vs_register_tb___024root___eval_inact(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_inact\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day29_ff_vs_register_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday29_ff_vs_register_tb___024root___nba_sequent__TOP__0(Vday29_ff_vs_register_tb___024root* vlSelf);
void Vday29_ff_vs_register_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday29_ff_vs_register_tb___024root___eval_nba(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_nba\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday29_ff_vs_register_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday29_ff_vs_register_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    if (vlSelfRef.day29_ff_vs_register_tb__DOT__rst_n) {
                        if (vlSelfRef.day29_ff_vs_register_tb__DOT__en) {
                            vlSelfRef.day29_ff_vs_register_tb__DOT__q_reg 
                                = vlSelfRef.day29_ff_vs_register_tb__DOT__d;
                        }
                    } else {
                        vlSelfRef.day29_ff_vs_register_tb__DOT__q_reg = 0U;
                    }
                }
            }
        }
        Vday29_ff_vs_register_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday29_ff_vs_register_tb___024root___eval_obs(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_obs\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday29_ff_vs_register_tb___024root___eval_react(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_react\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday29_ff_vs_register_tb___024root___eval_postponed(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_postponed\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday29_ff_vs_register_tb___024root____VbeforeTrig_hc8596dd5__0(Vday29_ff_vs_register_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday29_ff_vs_register_tb___024root___eval_initial__TOP__Vtiming__0(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ day29_ff_vs_register_tb__DOT__e_reg;
    day29_ff_vs_register_tb__DOT__e_reg = 0;
    IData/*31:0*/ day29_ff_vs_register_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day29_ff_vs_register_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day29_ff_vs_register_tb__DOT__unnamedblk1__DOT__i;
    day29_ff_vs_register_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.day29_ff_vs_register_tb__DOT__en = 0U;
    vlSelfRef.day29_ff_vs_register_tb__DOT__d = 0U;
    day29_ff_vs_register_tb__DOT__e_reg = 0U;
    day29_ff_vs_register_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, day29_ff_vs_register_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday29_ff_vs_register_tb___024root____VbeforeTrig_hc8596dd5__0(vlSelf, 
                                                                       "@(negedge day29_ff_vs_register_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc8596dd5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day29_ff_vs_register_tb.clk)", 
                                                             "tb/day29_ff_vs_register_tb.sv", 
                                                             18);
        day29_ff_vs_register_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day29_ff_vs_register_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day29_ff_vs_register_tb__DOT__rst_n = 1U;
    VL_WRITEF_NX("  d   en | FF(q)  REG(q)   <- register keeps its value when en=0\n",0);
    day29_ff_vs_register_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000064U, day29_ff_vs_register_tb__DOT__unnamedblk1__DOT__i)) {
        Vday29_ff_vs_register_tb___024root____VbeforeTrig_hc8596dd5__0(vlSelf, 
                                                                       "@(negedge day29_ff_vs_register_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc8596dd5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day29_ff_vs_register_tb.clk)", 
                                                             "tb/day29_ff_vs_register_tb.sv", 
                                                             22);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day29_ff_vs_register_tb__DOT__q_reg) 
                          != (IData)(day29_ff_vs_register_tb__DOT__e_reg))))) {
            vlSelfRef.day29_ff_vs_register_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day29_ff_vs_register_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] register output (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_LTS_III(32, 0U, day29_ff_vs_register_tb__DOT__unnamedblk1__DOT__i)) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.day29_ff_vs_register_tb__DOT__q_ff) 
                              != (IData)(vlSelfRef.day29_ff_vs_register_tb__DOT__e_ff))))) {
                vlSelfRef.day29_ff_vs_register_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day29_ff_vs_register_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] flip-flop output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 0x0000000cU, day29_ff_vs_register_tb__DOT__unnamedblk1__DOT__i)))) {
            VL_WRITEF_NX("  %2d   %b |  %2d     %2d\n",4
                         , '#',4,vlSelfRef.day29_ff_vs_register_tb__DOT__d
                         , '#',1,(IData)(vlSelfRef.day29_ff_vs_register_tb__DOT__en)
                         , '#',4,vlSelfRef.day29_ff_vs_register_tb__DOT__q_ff
                         , '#',4,(IData)(vlSelfRef.day29_ff_vs_register_tb__DOT__q_reg));
        }
        vlSelfRef.day29_ff_vs_register_tb__DOT__en 
            = (1U & VL_RANDOM_I());
        vlSelfRef.day29_ff_vs_register_tb__DOT__d = 
            (0x0000000fU & VL_RANDOM_I());
        vlSelfRef.day29_ff_vs_register_tb__DOT__e_ff 
            = vlSelfRef.day29_ff_vs_register_tb__DOT__d;
        if (vlSelfRef.day29_ff_vs_register_tb__DOT__en) {
            day29_ff_vs_register_tb__DOT__e_reg = vlSelfRef.day29_ff_vs_register_tb__DOT__d;
        }
        day29_ff_vs_register_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day29_ff_vs_register_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day29_ff_vs_register_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day29_ff_vs_register\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day29_ff_vs_register : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day29_ff_vs_register_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day29_ff_vs_register_tb.sv", 30, "");
    co_return;
}

VlCoroutine Vday29_ff_vs_register_tb___024root___eval_initial__TOP__Vtiming__1(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day29_ff_vs_register_tb.sv", 
                                             9);
        vlSelfRef.day29_ff_vs_register_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day29_ff_vs_register_tb__DOT__clk)));
    }
    co_return;
}

bool Vday29_ff_vs_register_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday29_ff_vs_register_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___trigger_anySet__act\n"); );
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

void Vday29_ff_vs_register_tb___024root___nba_sequent__TOP__0(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___nba_sequent__TOP__0\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_1_1)) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__q_ff) 
                                          == (IData)(vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_2_1)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day29_ff_vs_register_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_ff_follow\n",3, 'M',vlSymsp->name(),"day29_ff_vs_register_tb.a_ff_follow", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day29_ff_vs_register_tb.sv", 12, "");
            }
            if (vlSelfRef.day29_ff_vs_register_tb__DOT__rst_n) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_4_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__q_reg) 
                                              == (IData)(vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_2_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day29_ff_vs_register_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_reg_load\n",3, 'M',vlSymsp->name(),"day29_ff_vs_register_tb.a_reg_load", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day29_ff_vs_register_tb.sv", 13, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_6_1)) 
                                           | ((IData)(vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_7_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__q_reg)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day29_ff_vs_register_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_reg_hold\n",3, 'M',vlSymsp->name(),"day29_ff_vs_register_tb.a_reg_hold", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day29_ff_vs_register_tb.sv", 14, "");
                }
            }
        }
    }
    vlSelfRef.day29_ff_vs_register_tb__DOT__q_ff = vlSelfRef.day29_ff_vs_register_tb__DOT__d;
    vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_1_1 = 1U;
    vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__d;
    vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_4_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__en));
    vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_7_1 
        = vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__q_reg;
    vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_6_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__rst_n) 
           & (~ (IData)(vlSelfRef.__Vsampled_TOP__day29_ff_vs_register_tb__DOT__en)));
}

void Vday29_ff_vs_register_tb___024root___timing_ready(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___timing_ready\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc8596dd5__0.ready("@(negedge day29_ff_vs_register_tb.clk)");
    }
}

void Vday29_ff_vs_register_tb___024root___timing_resume(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___timing_resume\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc8596dd5__0.moveToResumeQueue(
                                                          "@(negedge day29_ff_vs_register_tb.clk)");
    vlSelfRef.__VtrigSched_hc8596dd5__0.resume("@(negedge day29_ff_vs_register_tb.clk)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday29_ff_vs_register_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday29_ff_vs_register_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday29_ff_vs_register_tb___024root____VbeforeTrig_hc8596dd5__0(Vday29_ff_vs_register_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root____VbeforeTrig_hc8596dd5__0\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day29_ff_vs_register_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__clk__0 
        = vlSelfRef.day29_ff_vs_register_tb__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc8596dd5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc8596dd5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday29_ff_vs_register_tb___024root___eval_debug_assertions(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_debug_assertions\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
