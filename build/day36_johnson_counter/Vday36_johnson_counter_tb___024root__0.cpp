// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday36_johnson_counter_tb.h for the primary calling header

#include "Vday36_johnson_counter_tb__pch.h"

VlCoroutine Vday36_johnson_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday36_johnson_counter_tb___024root* vlSelf);
VlCoroutine Vday36_johnson_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday36_johnson_counter_tb___024root* vlSelf);

void Vday36_johnson_counter_tb___024root___eval_initial(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_initial\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday36_johnson_counter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday36_johnson_counter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday36_johnson_counter_tb___024root___eval_sample(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_sample\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day36_johnson_counter_tb__DOT__q 
        = vlSelfRef.day36_johnson_counter_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__day36_johnson_counter_tb__DOT__rst 
        = vlSelfRef.day36_johnson_counter_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday36_johnson_counter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday36_johnson_counter_tb___024root___eval_ico(Vday36_johnson_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_ico\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday36_johnson_counter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday36_johnson_counter_tb___024root___timing_ready(Vday36_johnson_counter_tb___024root* vlSelf);
void Vday36_johnson_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday36_johnson_counter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday36_johnson_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday36_johnson_counter_tb___024root___timing_resume(Vday36_johnson_counter_tb___024root* vlSelf);

bool Vday36_johnson_counter_tb___024root___eval_act(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_act\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day36_johnson_counter_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day36_johnson_counter_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day36_johnson_counter_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day36_johnson_counter_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day36_johnson_counter_tb__DOT__clk__0 
            = vlSelfRef.day36_johnson_counter_tb__DOT__clk;
    }
    Vday36_johnson_counter_tb___024root___timing_ready(vlSelf);
    Vday36_johnson_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday36_johnson_counter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday36_johnson_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday36_johnson_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday36_johnson_counter_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday36_johnson_counter_tb___024root___eval_inact(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_inact\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day36_johnson_counter_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday36_johnson_counter_tb___024root___nba_sequent__TOP__0(Vday36_johnson_counter_tb___024root* vlSelf);
void Vday36_johnson_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday36_johnson_counter_tb___024root___eval_nba(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_nba\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday36_johnson_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday36_johnson_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday36_johnson_counter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday36_johnson_counter_tb___024root___eval_obs(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_obs\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday36_johnson_counter_tb___024root___eval_react(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_react\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday36_johnson_counter_tb___024root___eval_postponed(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_postponed\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday36_johnson_counter_tb___024root____VbeforeTrig_h0a5469a9__0(Vday36_johnson_counter_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday36_johnson_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day36_johnson_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day36_johnson_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day36_johnson_counter_tb__DOT__unnamedblk1__DOT__i;
    day36_johnson_counter_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day36_johnson_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day36_johnson_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday36_johnson_counter_tb___024root____VbeforeTrig_h0a5469a9__0(vlSelf, 
                                                                        "@(negedge day36_johnson_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h0a5469a9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day36_johnson_counter_tb.clk)", 
                                                             "tb/day36_johnson_counter_tb.sv", 
                                                             18);
        day36_johnson_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day36_johnson_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day36_johnson_counter_tb__DOT__rst = 0U;
    day36_johnson_counter_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000018U, day36_johnson_counter_tb__DOT__unnamedblk1__DOT__i)) {
        Vday36_johnson_counter_tb___024root____VbeforeTrig_h0a5469a9__0(vlSelf, 
                                                                        "@(negedge day36_johnson_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h0a5469a9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day36_johnson_counter_tb.clk)", 
                                                             "tb/day36_johnson_counter_tb.sv", 
                                                             21);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day36_johnson_counter_tb__DOT__q) 
                          != vlSelfRef.day36_johnson_counter_tb__DOT__SEQ
                          [(7U & VL_MODDIVS_III(32, 
                                                ((IData)(1U) 
                                                 + day36_johnson_counter_tb__DOT__unnamedblk1__DOT__i), (IData)(8U)))])))) {
            vlSelfRef.day36_johnson_counter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day36_johnson_counter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] Johnson sequence (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        VL_WRITEF_NX("  q = %04b\n",1, '#',4,vlSelfRef.day36_johnson_counter_tb__DOT__q);
        day36_johnson_counter_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day36_johnson_counter_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day36_johnson_counter_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day36_johnson_counter\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day36_johnson_counter : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day36_johnson_counter_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day36_johnson_counter_tb.sv", 26, "");
    co_return;
}

VlCoroutine Vday36_johnson_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day36_johnson_counter_tb.sv", 
                                             10);
        vlSelfRef.day36_johnson_counter_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day36_johnson_counter_tb__DOT__clk)));
    }
    co_return;
}

bool Vday36_johnson_counter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday36_johnson_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___trigger_anySet__act\n"); );
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

void Vday36_johnson_counter_tb___024root___nba_sequent__TOP__0(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___nba_sequent__TOP__0\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day36_johnson_counter_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_1_1)) 
                                           | (1U == 
                                              VL_COUNTONES_I(
                                                             ((IData)(vlSelfRef.__Vsampled_TOP__day36_johnson_counter_tb__DOT__q) 
                                                              ^ (IData)(vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_1)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day36_johnson_counter_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_onebit\n",3, 'M',vlSymsp->name(),"day36_johnson_counter_tb.a_onebit", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day36_johnson_counter_tb.sv", 14, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_1_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day36_johnson_counter_tb__DOT__q) 
                                              == (((IData)(vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_2_1) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_3_1))))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day36_johnson_counter_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_next\n",3, 'M',vlSymsp->name(),"day36_johnson_counter_tb.a_next", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day36_johnson_counter_tb.sv", 13, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ ((0U 
                                                == (IData)(vlSelfRef.__Vsampled_TOP__day36_johnson_counter_tb__DOT__q)) 
                                               & (~ (IData)(vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_8)))) 
                                           | (0U == (IData)(vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_8)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day36_johnson_counter_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_period\n",3, 'M',vlSymsp->name(),"day36_johnson_counter_tb.a_period", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day36_johnson_counter_tb.sv", 15, "");
                }
            }
        }
    }
    vlSelfRef.day36_johnson_counter_tb__DOT__q = ((IData)(vlSelfRef.day36_johnson_counter_tb__DOT__rst)
                                                   ? 0U
                                                   : 
                                                  ((0x0000000eU 
                                                    & ((IData)(vlSelfRef.day36_johnson_counter_tb__DOT__q) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.day36_johnson_counter_tb__DOT__q) 
                                                          >> 3U)))));
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_1_1 
        = (1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__day36_johnson_counter_tb__DOT__rst)));
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_2_1 
        = (7U & (IData)(vlSelfRef.__Vsampled_TOP__day36_johnson_counter_tb__DOT__q));
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_3_1 
        = (1U & ((IData)(vlSelfRef.__Vsampled_TOP__day36_johnson_counter_tb__DOT__q) 
                 >> 3U));
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_8 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_7;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_8 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_7;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_7 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_6;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_7 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_6;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_6 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_5;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_6 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_5;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_5 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_4;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_5 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_4;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_4 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_3;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_4 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_3;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_3 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_2;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_3 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_2;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_2 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_1;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_2 
        = vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_1;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_7_1 
        = vlSelfRef.__Vsampled_TOP__day36_johnson_counter_tb__DOT__rst;
    vlSelfRef.day36_johnson_counter_tb__DOT___Vpast_5_1 
        = vlSelfRef.__Vsampled_TOP__day36_johnson_counter_tb__DOT__q;
}

void Vday36_johnson_counter_tb___024root___timing_ready(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___timing_ready\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0a5469a9__0.ready("@(negedge day36_johnson_counter_tb.clk)");
    }
}

void Vday36_johnson_counter_tb___024root___timing_resume(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___timing_resume\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h0a5469a9__0.moveToResumeQueue(
                                                          "@(negedge day36_johnson_counter_tb.clk)");
    vlSelfRef.__VtrigSched_h0a5469a9__0.resume("@(negedge day36_johnson_counter_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday36_johnson_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday36_johnson_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday36_johnson_counter_tb___024root____VbeforeTrig_h0a5469a9__0(Vday36_johnson_counter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root____VbeforeTrig_h0a5469a9__0\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day36_johnson_counter_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day36_johnson_counter_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day36_johnson_counter_tb__DOT__clk__0 
        = vlSelfRef.day36_johnson_counter_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0a5469a9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0a5469a9__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday36_johnson_counter_tb___024root___eval_debug_assertions(Vday36_johnson_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday36_johnson_counter_tb___024root___eval_debug_assertions\n"); );
    Vday36_johnson_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
