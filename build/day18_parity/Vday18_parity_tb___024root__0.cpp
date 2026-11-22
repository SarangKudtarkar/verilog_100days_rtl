// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday18_parity_tb.h for the primary calling header

#include "Vday18_parity_tb__pch.h"

VlCoroutine Vday18_parity_tb___024root___eval_initial__TOP__Vtiming__0(Vday18_parity_tb___024root* vlSelf);
VlCoroutine Vday18_parity_tb___024root___eval_initial__TOP__Vtiming__1(Vday18_parity_tb___024root* vlSelf);

void Vday18_parity_tb___024root___eval_initial(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_initial\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday18_parity_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday18_parity_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday18_parity_tb___024root___eval_sample(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_sample\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day18_parity_tb__DOT__data 
        = vlSelfRef.day18_parity_tb__DOT__data;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday18_parity_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday18_parity_tb___024root___eval_ico(Vday18_parity_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_ico\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday18_parity_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday18_parity_tb___024root___timing_ready(Vday18_parity_tb___024root* vlSelf);
void Vday18_parity_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday18_parity_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday18_parity_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday18_parity_tb___024root___timing_resume(Vday18_parity_tb___024root* vlSelf);

bool Vday18_parity_tb___024root___eval_act(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_act\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day18_parity_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day18_parity_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day18_parity_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day18_parity_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day18_parity_tb__DOT__clk__0 
            = vlSelfRef.day18_parity_tb__DOT__clk;
    }
    Vday18_parity_tb___024root___timing_ready(vlSelf);
    Vday18_parity_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday18_parity_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday18_parity_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday18_parity_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday18_parity_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day18_parity_tb__DOT__error 
                        = (1U & ((IData)(vlSelfRef.day18_parity_tb__DOT__rx_p) 
                                 ^ VL_REDXOR_8(vlSelfRef.day18_parity_tb__DOT__rx_data)));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday18_parity_tb___024root___eval_inact(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_inact\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day18_parity_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday18_parity_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday18_parity_tb___024root___eval_nba(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_nba\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday18_parity_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day18_parity_tb__DOT__error 
                        = (1U & ((IData)(vlSelfRef.day18_parity_tb__DOT__rx_p) 
                                 ^ VL_REDXOR_8(vlSelfRef.day18_parity_tb__DOT__rx_data)));
                }
            }
        }
        Vday18_parity_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday18_parity_tb___024root___eval_obs(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_obs\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday18_parity_tb___024root___eval_react(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_react\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday18_parity_tb___024root___eval_postponed(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_postponed\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday18_parity_tb___024root____VbeforeTrig_h1cf86759__0(Vday18_parity_tb___024root* vlSelf, const char* __VeventDescription);
void Vday18_parity_tb___024root____VbeforeTrig_h1cf8679a__0(Vday18_parity_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday18_parity_tb___024root___eval_initial__TOP__Vtiming__0(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day18_parity_tb__DOT__unnamedblk1__DOT__i;
    day18_parity_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    VL_WRITEF_NX("Console results:\n",0);
    day18_parity_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, day18_parity_tb__DOT__unnamedblk1__DOT__i)) {
        Vday18_parity_tb___024root____VbeforeTrig_h1cf86759__0(vlSelf, 
                                                               "@(negedge day18_parity_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf86759__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day18_parity_tb.clk)", 
                                                             "tb/day18_parity_tb.sv", 
                                                             18);
        vlSelfRef.day18_parity_tb__DOT__data = (0x000000ffU 
                                                & day18_parity_tb__DOT__unnamedblk1__DOT__i);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/day18_parity_tb.sv", 
                                             19);
        vlSelfRef.day18_parity_tb__DOT__rx_data = vlSelfRef.day18_parity_tb__DOT__data;
        vlSelfRef.day18_parity_tb__DOT__rx_p = (1U 
                                                & VL_REDXOR_8(vlSelfRef.day18_parity_tb__DOT__data));
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/day18_parity_tb.sv", 
                                             21);
        vlSelfRef.day18_parity_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0U;
        if (VL_UNLIKELY((vlSelfRef.day18_parity_tb__DOT__error))) {
            vlSelfRef.day18_parity_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day18_parity_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] no error on clean frame (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        while (VL_GTS_III(32, 9U, vlSelfRef.day18_parity_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
            vlSelfRef.day18_parity_tb__DOT__rx_data 
                = vlSelfRef.day18_parity_tb__DOT__data;
            vlSelfRef.day18_parity_tb__DOT__rx_p = 
                (1U & VL_REDXOR_8(vlSelfRef.day18_parity_tb__DOT__data));
            if (VL_GTS_III(32, 8U, vlSelfRef.day18_parity_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
                vlSelfRef.day18_parity_tb__DOT__rx_data 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.day18_parity_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                        & (IData)(vlSelfRef.day18_parity_tb__DOT__rx_data)) 
                       | (0x00ffU & ((1U & (~ ((IData)(vlSelfRef.day18_parity_tb__DOT__rx_data) 
                                               >> (7U 
                                                   & vlSelfRef.day18_parity_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                                     << (7U & vlSelfRef.day18_parity_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
            } else {
                vlSelfRef.day18_parity_tb__DOT__rx_p 
                    = (1U & (~ (IData)(vlSelfRef.day18_parity_tb__DOT__rx_p)));
            }
            co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                                 nullptr, 
                                                 "tb/day18_parity_tb.sv", 
                                                 27);
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.day18_parity_tb__DOT__error)))))) {
                vlSelfRef.day18_parity_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day18_parity_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] single-bit error must be detected (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            vlSelfRef.day18_parity_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                = ((IData)(1U) + vlSelfRef.day18_parity_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b);
        }
        vlSelfRef.day18_parity_tb__DOT__rx_data = (3U 
                                                   ^ (IData)(vlSelfRef.day18_parity_tb__DOT__data));
        vlSelfRef.day18_parity_tb__DOT__rx_p = (1U 
                                                & VL_REDXOR_8(vlSelfRef.day18_parity_tb__DOT__data));
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/day18_parity_tb.sv", 
                                             31);
        if (VL_UNLIKELY((vlSelfRef.day18_parity_tb__DOT__error))) {
            vlSelfRef.day18_parity_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day18_parity_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] double-bit error escapes parity (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        Vday18_parity_tb___024root____VbeforeTrig_h1cf8679a__0(vlSelf, 
                                                               "@(posedge day18_parity_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1cf8679a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day18_parity_tb.clk)", 
                                                             "tb/day18_parity_tb.sv", 
                                                             33);
        if (VL_UNLIKELY(((0U == VL_MODDIVS_III(32, day18_parity_tb__DOT__unnamedblk1__DOT__i, (IData)(0x00000033U)))))) {
            VL_WRITEF_NX("  data=%08b parity=%b\n",2
                         , '#',8,vlSelfRef.day18_parity_tb__DOT__data
                         , '#',1,(1U & VL_REDXOR_8(vlSelfRef.day18_parity_tb__DOT__data)));
        }
        day18_parity_tb__DOT__unnamedblk1__DOT__i = 
            ((IData)(1U) + day18_parity_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day18_parity_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day18_parity\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day18_parity : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day18_parity_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day18_parity_tb.sv", 36, "");
    co_return;
}

VlCoroutine Vday18_parity_tb___024root___eval_initial__TOP__Vtiming__1(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day18_parity_tb.sv", 
                                             10);
        vlSelfRef.day18_parity_tb__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.day18_parity_tb__DOT__clk)));
    }
    co_return;
}

bool Vday18_parity_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday18_parity_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___trigger_anySet__act\n"); );
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

void Vday18_parity_tb___024root___timing_ready(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___timing_ready\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1cf86759__0.ready("@(negedge day18_parity_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1cf8679a__0.ready("@(posedge day18_parity_tb.clk)");
    }
}

void Vday18_parity_tb___024root___timing_resume(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___timing_resume\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1cf86759__0.moveToResumeQueue(
                                                          "@(negedge day18_parity_tb.clk)");
    vlSelfRef.__VtrigSched_h1cf8679a__0.moveToResumeQueue(
                                                          "@(posedge day18_parity_tb.clk)");
    vlSelfRef.__VtrigSched_h1cf86759__0.resume("@(negedge day18_parity_tb.clk)");
    vlSelfRef.__VtrigSched_h1cf8679a__0.resume("@(posedge day18_parity_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday18_parity_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday18_parity_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday18_parity_tb___024root____VbeforeTrig_h1cf86759__0(Vday18_parity_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root____VbeforeTrig_h1cf86759__0\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day18_parity_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day18_parity_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day18_parity_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day18_parity_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day18_parity_tb__DOT__clk__0 
        = vlSelfRef.day18_parity_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1cf8679a__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1cf86759__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday18_parity_tb___024root____VbeforeTrig_h1cf8679a__0(Vday18_parity_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root____VbeforeTrig_h1cf8679a__0\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day18_parity_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day18_parity_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day18_parity_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day18_parity_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day18_parity_tb__DOT__clk__0 
        = vlSelfRef.day18_parity_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1cf8679a__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1cf86759__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday18_parity_tb___024root___eval_debug_assertions(Vday18_parity_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_parity_tb___024root___eval_debug_assertions\n"); );
    Vday18_parity_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
