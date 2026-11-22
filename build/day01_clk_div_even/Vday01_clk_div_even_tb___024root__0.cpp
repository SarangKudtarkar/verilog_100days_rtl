// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday01_clk_div_even_tb.h for the primary calling header

#include "Vday01_clk_div_even_tb__pch.h"

VlCoroutine Vday01_clk_div_even_tb___024root___eval_initial__TOP__Vtiming__0(Vday01_clk_div_even_tb___024root* vlSelf);
VlCoroutine Vday01_clk_div_even_tb___024root___eval_initial__TOP__Vtiming__1(Vday01_clk_div_even_tb___024root* vlSelf);

void Vday01_clk_div_even_tb___024root___eval_initial(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_initial\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday01_clk_div_even_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday01_clk_div_even_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday01_clk_div_even_tb___024root___eval_sample(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_sample\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day01_clk_div_even_tb__DOT__clk_out 
        = vlSelfRef.day01_clk_div_even_tb__DOT__clk_out;
    vlSelfRef.__Vsampled_TOP__day01_clk_div_even_tb__DOT__rst 
        = vlSelfRef.day01_clk_div_even_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday01_clk_div_even_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday01_clk_div_even_tb___024root___eval_ico(Vday01_clk_div_even_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_ico\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday01_clk_div_even_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday01_clk_div_even_tb___024root___timing_ready(Vday01_clk_div_even_tb___024root* vlSelf);
void Vday01_clk_div_even_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday01_clk_div_even_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday01_clk_div_even_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday01_clk_div_even_tb___024root___timing_resume(Vday01_clk_div_even_tb___024root* vlSelf);

bool Vday01_clk_div_even_tb___024root___eval_act(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_act\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.day01_clk_div_even_tb__DOT__clk_out) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day01_clk_div_even_tb__DOT__clk_out__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day01_clk_div_even_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day01_clk_div_even_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day01_clk_div_even_tb__DOT__clk__0 
            = vlSelfRef.day01_clk_div_even_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__day01_clk_div_even_tb__DOT__clk_out__0 
            = vlSelfRef.day01_clk_div_even_tb__DOT__clk_out;
    }
    Vday01_clk_div_even_tb___024root___timing_ready(vlSelf);
    Vday01_clk_div_even_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday01_clk_div_even_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday01_clk_div_even_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday01_clk_div_even_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday01_clk_div_even_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday01_clk_div_even_tb___024root___eval_inact(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_inact\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day01_clk_div_even_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday01_clk_div_even_tb___024root___nba_sequent__TOP__0(Vday01_clk_div_even_tb___024root* vlSelf);
void Vday01_clk_div_even_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday01_clk_div_even_tb___024root___eval_nba(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_nba\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday01_clk_div_even_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday01_clk_div_even_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    if (VL_UNLIKELY(((0ULL != vlSelfRef.day01_clk_div_even_tb__DOT__t_prev)))) {
                        vlSelfRef.day01_clk_div_even_tb__DOT__periods 
                            = ((IData)(1U) + vlSelfRef.day01_clk_div_even_tb__DOT__periods);
                        if (VL_UNLIKELY(((0x000000000000003cULL 
                                          != ((QData)(VL_TIME_UNITED_Q(1)) 
                                              - vlSelfRef.day01_clk_div_even_tb__DOT__t_prev))))) {
                            vlSelfRef.day01_clk_div_even_tb__DOT__errors 
                                = ((IData)(1U) + vlSelfRef.day01_clk_div_even_tb__DOT__errors);
                            VL_WRITEF_NX("  [FAIL] clk_out period must be 2N clk cycles (t=%0t)\n",2, 'T',-12
                                         , '#',64,VL_TIME_UNITED_Q(1));
                        }
                        VL_WRITEF_NX("  clk_out period = %0t (expected 60)\n",2, 'T',-12
                                     , '#',64,((QData)(VL_TIME_UNITED_Q(1)) 
                                               - vlSelfRef.day01_clk_div_even_tb__DOT__t_prev));
                    }
                    vlSelfRef.day01_clk_div_even_tb__DOT__t_prev 
                        = VL_TIME_UNITED_Q(1);
                }
            }
        }
        Vday01_clk_div_even_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday01_clk_div_even_tb___024root___eval_obs(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_obs\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday01_clk_div_even_tb___024root___eval_react(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_react\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday01_clk_div_even_tb___024root___eval_postponed(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_postponed\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday01_clk_div_even_tb___024root____VbeforeTrig_h2a3e0e34__0(Vday01_clk_div_even_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday01_clk_div_even_tb___024root___eval_initial__TOP__Vtiming__0(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day01_clk_div_even_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day01_clk_div_even_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day01_clk_div_even_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    day01_clk_div_even_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    day01_clk_div_even_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day01_clk_div_even_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday01_clk_div_even_tb___024root____VbeforeTrig_h2a3e0e34__0(vlSelf, 
                                                                     "@(posedge day01_clk_div_even_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h2a3e0e34__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day01_clk_div_even_tb.clk)", 
                                                             "tb/day01_clk_div_even_tb.sv", 
                                                             28);
        day01_clk_div_even_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day01_clk_div_even_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/day01_clk_div_even_tb.sv", 
                                         29);
    vlSelfRef.day01_clk_div_even_tb__DOT__rst = 0U;
    day01_clk_div_even_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000048U;
    while (VL_LTS_III(32, 0U, day01_clk_div_even_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vday01_clk_div_even_tb___024root____VbeforeTrig_h2a3e0e34__0(vlSelf, 
                                                                     "@(posedge day01_clk_div_even_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h2a3e0e34__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day01_clk_div_even_tb.clk)", 
                                                             "tb/day01_clk_div_even_tb.sv", 
                                                             30);
        day01_clk_div_even_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (day01_clk_div_even_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((VL_GTS_III(32, 0x0000000aU, vlSelfRef.day01_clk_div_even_tb__DOT__periods)))) {
        vlSelfRef.day01_clk_div_even_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day01_clk_div_even_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] enough output periods observed (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if ((0U == vlSelfRef.day01_clk_div_even_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day01_clk_div_even\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day01_clk_div_even : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day01_clk_div_even_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day01_clk_div_even_tb.sv", 32, "");
    co_return;
}

VlCoroutine Vday01_clk_div_even_tb___024root___eval_initial__TOP__Vtiming__1(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day01_clk_div_even_tb.sv", 
                                             10);
        vlSelfRef.day01_clk_div_even_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.day01_clk_div_even_tb__DOT__clk)));
    }
    co_return;
}

bool Vday01_clk_div_even_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday01_clk_div_even_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___trigger_anySet__act\n"); );
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

void Vday01_clk_div_even_tb___024root___nba_sequent__TOP__0(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___nba_sequent__TOP__0\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__day01_clk_div_even_tb__DOT__dut__DOT__cnt;
    __Vdly__day01_clk_div_even_tb__DOT__dut__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__day01_clk_div_even_tb__DOT__clk_out;
    __Vdly__day01_clk_div_even_tb__DOT__clk_out = 0;
    // Body
    __Vdly__day01_clk_div_even_tb__DOT__dut__DOT__cnt 
        = vlSelfRef.day01_clk_div_even_tb__DOT__dut__DOT__cnt;
    __Vdly__day01_clk_div_even_tb__DOT__clk_out = vlSelfRef.day01_clk_div_even_tb__DOT__clk_out;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day01_clk_div_even_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_1) 
                                               & (~ (IData)(vlSelfRef.__Vsampled_TOP__day01_clk_div_even_tb__DOT__clk_out)))) 
                                           | ((IData)(vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_3) 
                                              & (~ (IData)(vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_4))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day01_clk_div_even_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_high_time\n",3, 'M',vlSymsp->name(),"day01_clk_div_even_tb.a_high_time", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day01_clk_div_even_tb.sv", 15, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (((~ (IData)(vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_1)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__day01_clk_div_even_tb__DOT__clk_out)) 
                                               & (~ (IData)(vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_6)))) 
                                           | ((IData)(vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_6) 
                                              & (~ (IData)(vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_7))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day01_clk_div_even_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_period\n",3, 'M',vlSymsp->name(),"day01_clk_div_even_tb.a_period", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day01_clk_div_even_tb.sv", 14, "");
                }
            }
        }
    }
    if (vlSelfRef.day01_clk_div_even_tb__DOT__rst) {
        __Vdly__day01_clk_div_even_tb__DOT__dut__DOT__cnt = 0U;
        __Vdly__day01_clk_div_even_tb__DOT__clk_out = 0U;
    } else if ((2U == (IData)(vlSelfRef.day01_clk_div_even_tb__DOT__dut__DOT__cnt))) {
        __Vdly__day01_clk_div_even_tb__DOT__clk_out 
            = (1U & (~ (IData)(vlSelfRef.day01_clk_div_even_tb__DOT__clk_out)));
        __Vdly__day01_clk_div_even_tb__DOT__dut__DOT__cnt = 0U;
    } else {
        __Vdly__day01_clk_div_even_tb__DOT__dut__DOT__cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.day01_clk_div_even_tb__DOT__dut__DOT__cnt)));
    }
    vlSelfRef.day01_clk_div_even_tb__DOT__dut__DOT__cnt 
        = __Vdly__day01_clk_div_even_tb__DOT__dut__DOT__cnt;
    vlSelfRef.day01_clk_div_even_tb__DOT__clk_out = __Vdly__day01_clk_div_even_tb__DOT__clk_out;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_6 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_5;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_7 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_6;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_5 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_4;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_6 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_5;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_4 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_3;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_5 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_4;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_3 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_2;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_4 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_3;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_2 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_1;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_3 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_2;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day01_clk_div_even_tb__DOT__rst;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_2 
        = vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_1;
    vlSelfRef.day01_clk_div_even_tb__DOT___Vpast_1_1 
        = vlSelfRef.__Vsampled_TOP__day01_clk_div_even_tb__DOT__clk_out;
}

void Vday01_clk_div_even_tb___024root___timing_ready(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___timing_ready\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h2a3e0e34__0.ready("@(posedge day01_clk_div_even_tb.clk)");
    }
}

void Vday01_clk_div_even_tb___024root___timing_resume(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___timing_resume\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h2a3e0e34__0.moveToResumeQueue(
                                                          "@(posedge day01_clk_div_even_tb.clk)");
    vlSelfRef.__VtrigSched_h2a3e0e34__0.resume("@(posedge day01_clk_div_even_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday01_clk_div_even_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday01_clk_div_even_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday01_clk_div_even_tb___024root____VbeforeTrig_h2a3e0e34__0(Vday01_clk_div_even_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root____VbeforeTrig_h2a3e0e34__0\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.day01_clk_div_even_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day01_clk_div_even_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__day01_clk_div_even_tb__DOT__clk__0 
        = vlSelfRef.day01_clk_div_even_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h2a3e0e34__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2a3e0e34__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday01_clk_div_even_tb___024root___eval_debug_assertions(Vday01_clk_div_even_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday01_clk_div_even_tb___024root___eval_debug_assertions\n"); );
    Vday01_clk_div_even_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
