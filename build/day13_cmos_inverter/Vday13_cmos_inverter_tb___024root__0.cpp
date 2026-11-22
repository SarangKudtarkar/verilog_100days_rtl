// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday13_cmos_inverter_tb.h for the primary calling header

#include "Vday13_cmos_inverter_tb__pch.h"

VlCoroutine Vday13_cmos_inverter_tb___024root___eval_initial__TOP__Vtiming__0(Vday13_cmos_inverter_tb___024root* vlSelf);
VlCoroutine Vday13_cmos_inverter_tb___024root___eval_initial__TOP__Vtiming__1(Vday13_cmos_inverter_tb___024root* vlSelf);

void Vday13_cmos_inverter_tb___024root___eval_initial(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_initial\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday13_cmos_inverter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday13_cmos_inverter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday13_cmos_inverter_tb___024root___eval_sample(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_sample\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day13_cmos_inverter_tb__DOT__in 
        = vlSelfRef.day13_cmos_inverter_tb__DOT__in;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday13_cmos_inverter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday13_cmos_inverter_tb___024root___eval_ico(Vday13_cmos_inverter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_ico\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday13_cmos_inverter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday13_cmos_inverter_tb___024root___timing_ready(Vday13_cmos_inverter_tb___024root* vlSelf);
void Vday13_cmos_inverter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday13_cmos_inverter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday13_cmos_inverter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday13_cmos_inverter_tb___024root___timing_resume(Vday13_cmos_inverter_tb___024root* vlSelf);

bool Vday13_cmos_inverter_tb___024root___eval_act(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_act\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day13_cmos_inverter_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day13_cmos_inverter_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day13_cmos_inverter_tb__DOT__clk__0 
            = vlSelfRef.day13_cmos_inverter_tb__DOT__clk;
    }
    Vday13_cmos_inverter_tb___024root___timing_ready(vlSelf);
    Vday13_cmos_inverter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday13_cmos_inverter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday13_cmos_inverter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday13_cmos_inverter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday13_cmos_inverter_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day13_cmos_inverter_tb__DOT__out 
                        = (1U & (~ (IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__in)));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday13_cmos_inverter_tb___024root___eval_inact(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_inact\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day13_cmos_inverter_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday13_cmos_inverter_tb___024root___nba_sequent__TOP__0(Vday13_cmos_inverter_tb___024root* vlSelf);
void Vday13_cmos_inverter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday13_cmos_inverter_tb___024root___eval_nba(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_nba\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday13_cmos_inverter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday13_cmos_inverter_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day13_cmos_inverter_tb__DOT__out 
                        = (1U & (~ (IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__in)));
                }
            }
        }
        Vday13_cmos_inverter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday13_cmos_inverter_tb___024root___eval_obs(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_obs\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday13_cmos_inverter_tb___024root___eval_react(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_react\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday13_cmos_inverter_tb___024root___eval_postponed(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_postponed\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday13_cmos_inverter_tb___024root____VbeforeTrig_hd58e5562__0(Vday13_cmos_inverter_tb___024root* vlSelf, const char* __VeventDescription);
void Vday13_cmos_inverter_tb___024root____VbeforeTrig_hd58e55a1__0(Vday13_cmos_inverter_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday13_cmos_inverter_tb___024root___eval_initial__TOP__Vtiming__0(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day13_cmos_inverter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day13_cmos_inverter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    VL_WRITEF_NX("  in out\n",0);
    day13_cmos_inverter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 8U;
    while (VL_LTS_III(32, 0U, day13_cmos_inverter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday13_cmos_inverter_tb___024root____VbeforeTrig_hd58e5562__0(vlSelf, 
                                                                      "@(negedge day13_cmos_inverter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd58e5562__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day13_cmos_inverter_tb.clk)", 
                                                             "tb/day13_cmos_inverter_tb.sv", 
                                                             17);
        vlSelfRef.day13_cmos_inverter_tb__DOT__in = 
            (1U & (~ (IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__in)));
        Vday13_cmos_inverter_tb___024root____VbeforeTrig_hd58e55a1__0(vlSelf, 
                                                                      "@(posedge day13_cmos_inverter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd58e55a1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day13_cmos_inverter_tb.clk)", 
                                                             "tb/day13_cmos_inverter_tb.sv", 
                                                             18);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__out) 
                          != (1U & (~ (IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__in))))))) {
            vlSelfRef.day13_cmos_inverter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day13_cmos_inverter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] out must be the complement of in (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        VL_WRITEF_NX("   %b   %b\n",2, '#',1,vlSelfRef.day13_cmos_inverter_tb__DOT__in
                     , '#',1,(IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__out));
        day13_cmos_inverter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day13_cmos_inverter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if ((0U == vlSelfRef.day13_cmos_inverter_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day13_cmos_inverter\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day13_cmos_inverter : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day13_cmos_inverter_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day13_cmos_inverter_tb.sv", 22, "");
    co_return;
}

VlCoroutine Vday13_cmos_inverter_tb___024root___eval_initial__TOP__Vtiming__1(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day13_cmos_inverter_tb.sv", 
                                             9);
        vlSelfRef.day13_cmos_inverter_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__clk)));
    }
    co_return;
}

bool Vday13_cmos_inverter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday13_cmos_inverter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___trigger_anySet__act\n"); );
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

void Vday13_cmos_inverter_tb___024root___nba_sequent__TOP__0(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___nba_sequent__TOP__0\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY((((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__day13_cmos_inverter_tb__DOT__in))) 
                              != (1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__day13_cmos_inverter_tb__DOT__in))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day13_cmos_inverter_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_invert\n",3, 'M',vlSymsp->name(),"day13_cmos_inverter_tb.a_invert", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day13_cmos_inverter_tb.sv", 12, "");
            }
        }
    }
}

void Vday13_cmos_inverter_tb___024root___timing_ready(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___timing_ready\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd58e5562__0.ready("@(negedge day13_cmos_inverter_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd58e55a1__0.ready("@(posedge day13_cmos_inverter_tb.clk)");
    }
}

void Vday13_cmos_inverter_tb___024root___timing_resume(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___timing_resume\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hd58e5562__0.moveToResumeQueue(
                                                          "@(negedge day13_cmos_inverter_tb.clk)");
    vlSelfRef.__VtrigSched_hd58e55a1__0.moveToResumeQueue(
                                                          "@(posedge day13_cmos_inverter_tb.clk)");
    vlSelfRef.__VtrigSched_hd58e5562__0.resume("@(negedge day13_cmos_inverter_tb.clk)");
    vlSelfRef.__VtrigSched_hd58e55a1__0.resume("@(posedge day13_cmos_inverter_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday13_cmos_inverter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday13_cmos_inverter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday13_cmos_inverter_tb___024root____VbeforeTrig_hd58e5562__0(Vday13_cmos_inverter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root____VbeforeTrig_hd58e5562__0\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day13_cmos_inverter_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day13_cmos_inverter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day13_cmos_inverter_tb__DOT__clk__0 
        = vlSelfRef.day13_cmos_inverter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd58e55a1__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd58e5562__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday13_cmos_inverter_tb___024root____VbeforeTrig_hd58e55a1__0(Vday13_cmos_inverter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root____VbeforeTrig_hd58e55a1__0\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day13_cmos_inverter_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day13_cmos_inverter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day13_cmos_inverter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day13_cmos_inverter_tb__DOT__clk__0 
        = vlSelfRef.day13_cmos_inverter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd58e55a1__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd58e5562__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday13_cmos_inverter_tb___024root___eval_debug_assertions(Vday13_cmos_inverter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday13_cmos_inverter_tb___024root___eval_debug_assertions\n"); );
    Vday13_cmos_inverter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
