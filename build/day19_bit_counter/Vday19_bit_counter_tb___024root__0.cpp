// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday19_bit_counter_tb.h for the primary calling header

#include "Vday19_bit_counter_tb__pch.h"

VlCoroutine Vday19_bit_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday19_bit_counter_tb___024root* vlSelf);
VlCoroutine Vday19_bit_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday19_bit_counter_tb___024root* vlSelf);

void Vday19_bit_counter_tb___024root___eval_initial(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_initial\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday19_bit_counter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday19_bit_counter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday19_bit_counter_tb___024root___eval_sample(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_sample\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day19_bit_counter_tb__DOT__data 
        = vlSelfRef.day19_bit_counter_tb__DOT__data;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday19_bit_counter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday19_bit_counter_tb___024root___eval_ico(Vday19_bit_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_ico\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday19_bit_counter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday19_bit_counter_tb___024root___timing_ready(Vday19_bit_counter_tb___024root* vlSelf);
void Vday19_bit_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday19_bit_counter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday19_bit_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday19_bit_counter_tb___024root___timing_resume(Vday19_bit_counter_tb___024root* vlSelf);

bool Vday19_bit_counter_tb___024root___eval_act(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_act\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day19_bit_counter_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day19_bit_counter_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day19_bit_counter_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day19_bit_counter_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day19_bit_counter_tb__DOT__clk__0 
            = vlSelfRef.day19_bit_counter_tb__DOT__clk;
    }
    Vday19_bit_counter_tb___024root___timing_ready(vlSelf);
    Vday19_bit_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday19_bit_counter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday19_bit_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday19_bit_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday19_bit_counter_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day19_bit_counter_tb__DOT__ones 
                        = (0x0000000fU & VL_COUNTONES_I((IData)(vlSelfRef.day19_bit_counter_tb__DOT__data)));
                    vlSelfRef.day19_bit_counter_tb__DOT__zeros 
                        = (0x0000000fU & ((IData)(8U) 
                                          - VL_COUNTONES_I((IData)(vlSelfRef.day19_bit_counter_tb__DOT__data))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday19_bit_counter_tb___024root___eval_inact(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_inact\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day19_bit_counter_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday19_bit_counter_tb___024root___nba_sequent__TOP__0(Vday19_bit_counter_tb___024root* vlSelf);
void Vday19_bit_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday19_bit_counter_tb___024root___eval_nba(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_nba\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday19_bit_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday19_bit_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day19_bit_counter_tb__DOT__ones 
                        = (0x0000000fU & VL_COUNTONES_I((IData)(vlSelfRef.day19_bit_counter_tb__DOT__data)));
                    vlSelfRef.day19_bit_counter_tb__DOT__zeros 
                        = (0x0000000fU & ((IData)(8U) 
                                          - VL_COUNTONES_I((IData)(vlSelfRef.day19_bit_counter_tb__DOT__data))));
                }
            }
        }
        Vday19_bit_counter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday19_bit_counter_tb___024root___eval_obs(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_obs\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday19_bit_counter_tb___024root___eval_react(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_react\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday19_bit_counter_tb___024root___eval_postponed(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_postponed\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday19_bit_counter_tb___024root____VbeforeTrig_h406f66fc__0(Vday19_bit_counter_tb___024root* vlSelf, const char* __VeventDescription);
void Vday19_bit_counter_tb___024root____VbeforeTrig_h406f663b__0(Vday19_bit_counter_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday19_bit_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day19_bit_counter_tb__DOT__unnamedblk1__DOT__i;
    day19_bit_counter_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day19_bit_counter_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, day19_bit_counter_tb__DOT__unnamedblk1__DOT__i)) {
        Vday19_bit_counter_tb___024root____VbeforeTrig_h406f66fc__0(vlSelf, 
                                                                    "@(negedge day19_bit_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h406f66fc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day19_bit_counter_tb.clk)", 
                                                             "tb/day19_bit_counter_tb.sv", 
                                                             17);
        vlSelfRef.day19_bit_counter_tb__DOT__data = 
            (0x000000ffU & day19_bit_counter_tb__DOT__unnamedblk1__DOT__i);
        Vday19_bit_counter_tb___024root____VbeforeTrig_h406f663b__0(vlSelf, 
                                                                    "@(posedge day19_bit_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h406f663b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day19_bit_counter_tb.clk)", 
                                                             "tb/day19_bit_counter_tb.sv", 
                                                             18);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day19_bit_counter_tb__DOT__ones) 
                          != VL_COUNTONES_I((IData)(vlSelfRef.day19_bit_counter_tb__DOT__data)))))) {
            vlSelfRef.day19_bit_counter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day19_bit_counter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] number of ones (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day19_bit_counter_tb__DOT__zeros) 
                          != ((IData)(8U) - VL_COUNTONES_I((IData)(vlSelfRef.day19_bit_counter_tb__DOT__data))))))) {
            vlSelfRef.day19_bit_counter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day19_bit_counter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] number of zeros (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY(((0U == VL_MODDIVS_III(32, day19_bit_counter_tb__DOT__unnamedblk1__DOT__i, (IData)(0x0000002bU)))))) {
            VL_WRITEF_NX("  data=%08b ones=%0d zeros=%0d\n",3
                         , '#',8,vlSelfRef.day19_bit_counter_tb__DOT__data
                         , '#',4,(IData)(vlSelfRef.day19_bit_counter_tb__DOT__ones)
                         , '#',4,vlSelfRef.day19_bit_counter_tb__DOT__zeros);
        }
        day19_bit_counter_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day19_bit_counter_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day19_bit_counter_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day19_bit_counter\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day19_bit_counter : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day19_bit_counter_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day19_bit_counter_tb.sv", 23, "");
    co_return;
}

VlCoroutine Vday19_bit_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day19_bit_counter_tb.sv", 
                                             9);
        vlSelfRef.day19_bit_counter_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.day19_bit_counter_tb__DOT__clk)));
    }
    co_return;
}

bool Vday19_bit_counter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday19_bit_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___trigger_anySet__act\n"); );
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

void Vday19_bit_counter_tb___024root___nba_sequent__TOP__0(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___nba_sequent__TOP__0\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((8U != (0x0000000fU & 
                                     (VL_COUNTONES_I((IData)(vlSelfRef.__Vsampled_TOP__day19_bit_counter_tb__DOT__data)) 
                                      + ((IData)(8U) 
                                         - VL_COUNTONES_I((IData)(vlSelfRef.__Vsampled_TOP__day19_bit_counter_tb__DOT__data))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day19_bit_counter_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_sum\n",3, 'M',vlSymsp->name(),"day19_bit_counter_tb.a_sum", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day19_bit_counter_tb.sv", 12, "");
            }
            if (VL_UNLIKELY((((0x0000000fU & VL_COUNTONES_I((IData)(vlSelfRef.__Vsampled_TOP__day19_bit_counter_tb__DOT__data))) 
                              != VL_COUNTONES_I((IData)(vlSelfRef.__Vsampled_TOP__day19_bit_counter_tb__DOT__data)))))) {
                VL_WRITEF_NX("[%0t] %%Error: day19_bit_counter_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_ones\n",3, 'M',vlSymsp->name(),"day19_bit_counter_tb.a_ones", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day19_bit_counter_tb.sv", 13, "");
            }
        }
    }
}

void Vday19_bit_counter_tb___024root___timing_ready(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___timing_ready\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h406f66fc__0.ready("@(negedge day19_bit_counter_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h406f663b__0.ready("@(posedge day19_bit_counter_tb.clk)");
    }
}

void Vday19_bit_counter_tb___024root___timing_resume(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___timing_resume\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h406f66fc__0.moveToResumeQueue(
                                                          "@(negedge day19_bit_counter_tb.clk)");
    vlSelfRef.__VtrigSched_h406f663b__0.moveToResumeQueue(
                                                          "@(posedge day19_bit_counter_tb.clk)");
    vlSelfRef.__VtrigSched_h406f66fc__0.resume("@(negedge day19_bit_counter_tb.clk)");
    vlSelfRef.__VtrigSched_h406f663b__0.resume("@(posedge day19_bit_counter_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday19_bit_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday19_bit_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday19_bit_counter_tb___024root____VbeforeTrig_h406f66fc__0(Vday19_bit_counter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root____VbeforeTrig_h406f66fc__0\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day19_bit_counter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day19_bit_counter_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day19_bit_counter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day19_bit_counter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day19_bit_counter_tb__DOT__clk__0 
        = vlSelfRef.day19_bit_counter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h406f663b__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h406f66fc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday19_bit_counter_tb___024root____VbeforeTrig_h406f663b__0(Vday19_bit_counter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root____VbeforeTrig_h406f663b__0\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day19_bit_counter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day19_bit_counter_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day19_bit_counter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day19_bit_counter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day19_bit_counter_tb__DOT__clk__0 
        = vlSelfRef.day19_bit_counter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h406f663b__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h406f66fc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday19_bit_counter_tb___024root___eval_debug_assertions(Vday19_bit_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday19_bit_counter_tb___024root___eval_debug_assertions\n"); );
    Vday19_bit_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
