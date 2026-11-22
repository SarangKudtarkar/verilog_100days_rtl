// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday35_ring_counter_tb.h for the primary calling header

#include "Vday35_ring_counter_tb__pch.h"

VlCoroutine Vday35_ring_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday35_ring_counter_tb___024root* vlSelf);
VlCoroutine Vday35_ring_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday35_ring_counter_tb___024root* vlSelf);

void Vday35_ring_counter_tb___024root___eval_initial(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_initial\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday35_ring_counter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday35_ring_counter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday35_ring_counter_tb___024root___eval_sample(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_sample\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day35_ring_counter_tb__DOT__q 
        = vlSelfRef.day35_ring_counter_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__day35_ring_counter_tb__DOT__rst 
        = vlSelfRef.day35_ring_counter_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday35_ring_counter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday35_ring_counter_tb___024root___eval_ico(Vday35_ring_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_ico\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday35_ring_counter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday35_ring_counter_tb___024root___timing_ready(Vday35_ring_counter_tb___024root* vlSelf);
void Vday35_ring_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday35_ring_counter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday35_ring_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday35_ring_counter_tb___024root___timing_resume(Vday35_ring_counter_tb___024root* vlSelf);

bool Vday35_ring_counter_tb___024root___eval_act(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_act\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day35_ring_counter_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day35_ring_counter_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day35_ring_counter_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day35_ring_counter_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day35_ring_counter_tb__DOT__clk__0 
            = vlSelfRef.day35_ring_counter_tb__DOT__clk;
    }
    Vday35_ring_counter_tb___024root___timing_ready(vlSelf);
    Vday35_ring_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday35_ring_counter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday35_ring_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday35_ring_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday35_ring_counter_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday35_ring_counter_tb___024root___eval_inact(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_inact\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day35_ring_counter_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday35_ring_counter_tb___024root___nba_sequent__TOP__0(Vday35_ring_counter_tb___024root* vlSelf);
void Vday35_ring_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday35_ring_counter_tb___024root___eval_nba(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_nba\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday35_ring_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday35_ring_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday35_ring_counter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday35_ring_counter_tb___024root___eval_obs(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_obs\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday35_ring_counter_tb___024root___eval_react(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_react\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday35_ring_counter_tb___024root___eval_postponed(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_postponed\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday35_ring_counter_tb___024root____VbeforeTrig_h67ce6920__0(Vday35_ring_counter_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday35_ring_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ day35_ring_counter_tb__DOT__exp;
    day35_ring_counter_tb__DOT__exp = 0;
    IData/*31:0*/ day35_ring_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day35_ring_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day35_ring_counter_tb__DOT__unnamedblk1__DOT__i;
    day35_ring_counter_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day35_ring_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day35_ring_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday35_ring_counter_tb___024root____VbeforeTrig_h67ce6920__0(vlSelf, 
                                                                     "@(negedge day35_ring_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h67ce6920__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day35_ring_counter_tb.clk)", 
                                                             "tb/day35_ring_counter_tb.sv", 
                                                             15);
        day35_ring_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day35_ring_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day35_ring_counter_tb__DOT__rst = 0U;
    day35_ring_counter_tb__DOT__exp = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/day35_ring_counter_tb.sv", 
                                         17);
    if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.day35_ring_counter_tb__DOT__q))))) {
        vlSelfRef.day35_ring_counter_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day35_ring_counter_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] preset state after reset (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    day35_ring_counter_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, day35_ring_counter_tb__DOT__unnamedblk1__DOT__i)) {
        day35_ring_counter_tb__DOT__exp = ((0x0000000eU 
                                            & ((IData)(day35_ring_counter_tb__DOT__exp) 
                                               << 1U)) 
                                           | (1U & 
                                              ((IData)(day35_ring_counter_tb__DOT__exp) 
                                               >> 3U)));
        Vday35_ring_counter_tb___024root____VbeforeTrig_h67ce6920__0(vlSelf, 
                                                                     "@(negedge day35_ring_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h67ce6920__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day35_ring_counter_tb.clk)", 
                                                             "tb/day35_ring_counter_tb.sv", 
                                                             21);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day35_ring_counter_tb__DOT__q) 
                          != (IData)(day35_ring_counter_tb__DOT__exp))))) {
            vlSelfRef.day35_ring_counter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day35_ring_counter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ring rotation (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        VL_WRITEF_NX("  q = %04b\n",1, '#',4,vlSelfRef.day35_ring_counter_tb__DOT__q);
        day35_ring_counter_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day35_ring_counter_tb__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("  (non self-starting: an illegal state such as 0000 would never recover)\n",0);
    if ((0U == vlSelfRef.day35_ring_counter_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day35_ring_counter\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day35_ring_counter : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day35_ring_counter_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day35_ring_counter_tb.sv", 26, "");
    co_return;
}

VlCoroutine Vday35_ring_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day35_ring_counter_tb.sv", 
                                             8);
        vlSelfRef.day35_ring_counter_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.day35_ring_counter_tb__DOT__clk)));
    }
    co_return;
}

bool Vday35_ring_counter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday35_ring_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___trigger_anySet__act\n"); );
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

void Vday35_ring_counter_tb___024root___nba_sequent__TOP__0(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___nba_sequent__TOP__0\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day35_ring_counter_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.__Vsampled_TOP__day35_ring_counter_tb__DOT__q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day35_ring_counter_tb.sv:11: Assertion failed in %m: [SVA FAIL] a_onehot\n",3, 'M',vlSymsp->name(),"day35_ring_counter_tb.a_onehot", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day35_ring_counter_tb.sv", 11, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day35_ring_counter_tb__DOT___Vpast_2_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day35_ring_counter_tb__DOT__q) 
                                              == (((IData)(vlSelfRef.day35_ring_counter_tb__DOT___Vpast_3_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.day35_ring_counter_tb__DOT___Vpast_4_1))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day35_ring_counter_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_rotate\n",3, 'M',vlSymsp->name(),"day35_ring_counter_tb.a_rotate", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day35_ring_counter_tb.sv", 12, "");
                }
            }
        }
    }
    vlSelfRef.day35_ring_counter_tb__DOT__q = ((IData)(vlSelfRef.day35_ring_counter_tb__DOT__rst)
                                                ? 1U
                                                : (
                                                   (0x0000000eU 
                                                    & ((IData)(vlSelfRef.day35_ring_counter_tb__DOT__q) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.day35_ring_counter_tb__DOT__q) 
                                                         >> 3U))));
    vlSelfRef.day35_ring_counter_tb__DOT___Vpast_2_1 
        = (1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__day35_ring_counter_tb__DOT__rst)));
    vlSelfRef.day35_ring_counter_tb__DOT___Vpast_3_1 
        = (7U & (IData)(vlSelfRef.__Vsampled_TOP__day35_ring_counter_tb__DOT__q));
    vlSelfRef.day35_ring_counter_tb__DOT___Vpast_4_1 
        = (1U & ((IData)(vlSelfRef.__Vsampled_TOP__day35_ring_counter_tb__DOT__q) 
                 >> 3U));
}

void Vday35_ring_counter_tb___024root___timing_ready(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___timing_ready\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h67ce6920__0.ready("@(negedge day35_ring_counter_tb.clk)");
    }
}

void Vday35_ring_counter_tb___024root___timing_resume(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___timing_resume\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h67ce6920__0.moveToResumeQueue(
                                                          "@(negedge day35_ring_counter_tb.clk)");
    vlSelfRef.__VtrigSched_h67ce6920__0.resume("@(negedge day35_ring_counter_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday35_ring_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday35_ring_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday35_ring_counter_tb___024root____VbeforeTrig_h67ce6920__0(Vday35_ring_counter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root____VbeforeTrig_h67ce6920__0\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day35_ring_counter_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day35_ring_counter_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day35_ring_counter_tb__DOT__clk__0 
        = vlSelfRef.day35_ring_counter_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h67ce6920__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h67ce6920__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday35_ring_counter_tb___024root___eval_debug_assertions(Vday35_ring_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday35_ring_counter_tb___024root___eval_debug_assertions\n"); );
    Vday35_ring_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
