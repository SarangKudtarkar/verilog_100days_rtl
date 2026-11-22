// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday21_mux_piso_tb.h for the primary calling header

#include "Vday21_mux_piso_tb__pch.h"

VlCoroutine Vday21_mux_piso_tb___024root___eval_initial__TOP__Vtiming__0(Vday21_mux_piso_tb___024root* vlSelf);
VlCoroutine Vday21_mux_piso_tb___024root___eval_initial__TOP__Vtiming__1(Vday21_mux_piso_tb___024root* vlSelf);

void Vday21_mux_piso_tb___024root___eval_initial(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_initial\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday21_mux_piso_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday21_mux_piso_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday21_mux_piso_tb___024root___eval_sample(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_sample\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day21_mux_piso_tb__DOT__d 
        = vlSelfRef.day21_mux_piso_tb__DOT__d;
    vlSelfRef.__Vsampled_TOP__day21_mux_piso_tb__DOT__sel 
        = vlSelfRef.day21_mux_piso_tb__DOT__sel;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday21_mux_piso_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday21_mux_piso_tb___024root___eval_ico(Vday21_mux_piso_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_ico\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday21_mux_piso_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday21_mux_piso_tb___024root___timing_ready(Vday21_mux_piso_tb___024root* vlSelf);
void Vday21_mux_piso_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday21_mux_piso_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday21_mux_piso_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday21_mux_piso_tb___024root___timing_resume(Vday21_mux_piso_tb___024root* vlSelf);

bool Vday21_mux_piso_tb___024root___eval_act(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_act\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day21_mux_piso_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day21_mux_piso_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0 
            = vlSelfRef.day21_mux_piso_tb__DOT__clk;
    }
    Vday21_mux_piso_tb___024root___timing_ready(vlSelf);
    Vday21_mux_piso_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday21_mux_piso_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday21_mux_piso_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday21_mux_piso_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday21_mux_piso_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day21_mux_piso_tb__DOT__y 
                        = (1U & ((IData)(vlSelfRef.day21_mux_piso_tb__DOT__d) 
                                 >> (IData)(vlSelfRef.day21_mux_piso_tb__DOT__sel)));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday21_mux_piso_tb___024root___eval_inact(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_inact\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day21_mux_piso_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday21_mux_piso_tb___024root___nba_sequent__TOP__0(Vday21_mux_piso_tb___024root* vlSelf);
void Vday21_mux_piso_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday21_mux_piso_tb___024root___eval_nba(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_nba\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday21_mux_piso_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday21_mux_piso_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day21_mux_piso_tb__DOT__y 
                        = (1U & ((IData)(vlSelfRef.day21_mux_piso_tb__DOT__d) 
                                 >> (IData)(vlSelfRef.day21_mux_piso_tb__DOT__sel)));
                }
            }
        }
        Vday21_mux_piso_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday21_mux_piso_tb___024root___eval_obs(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_obs\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday21_mux_piso_tb___024root___eval_react(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_react\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday21_mux_piso_tb___024root___eval_postponed(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_postponed\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday21_mux_piso_tb___024root____VbeforeTrig_hc6c63a53__0(Vday21_mux_piso_tb___024root* vlSelf, const char* __VeventDescription);
void Vday21_mux_piso_tb___024root____VbeforeTrig_hc6c63a94__0(Vday21_mux_piso_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday21_mux_piso_tb___024root___eval_initial__TOP__Vtiming__0(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day21_mux_piso_tb__DOT__unnamedblk1__DOT__n;
    day21_mux_piso_tb__DOT__unnamedblk1__DOT__n = 0;
    // Body
    day21_mux_piso_tb__DOT__unnamedblk1__DOT__n = 0U;
    while (VL_GTS_III(32, 0x00000014U, day21_mux_piso_tb__DOT__unnamedblk1__DOT__n)) {
        Vday21_mux_piso_tb___024root____VbeforeTrig_hc6c63a53__0(vlSelf, 
                                                                 "@(negedge day21_mux_piso_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc6c63a53__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day21_mux_piso_tb.clk)", 
                                                             "tb/day21_mux_piso_tb.sv", 
                                                             17);
        vlSelfRef.day21_mux_piso_tb__DOT__d = ((0U 
                                                == day21_mux_piso_tb__DOT__unnamedblk1__DOT__n)
                                                ? 0x000000a5U
                                                : (0x000000ffU 
                                                   & VL_RANDOM_I()));
        vlSelfRef.day21_mux_piso_tb__DOT__rx = 0U;
        vlSelfRef.day21_mux_piso_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 8U, vlSelfRef.day21_mux_piso_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
            Vday21_mux_piso_tb___024root____VbeforeTrig_hc6c63a53__0(vlSelf, 
                                                                     "@(negedge day21_mux_piso_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hc6c63a53__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge day21_mux_piso_tb.clk)", 
                                                                 "tb/day21_mux_piso_tb.sv", 
                                                                 20);
            vlSelfRef.day21_mux_piso_tb__DOT__sel = 
                (7U & vlSelfRef.day21_mux_piso_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
            Vday21_mux_piso_tb___024root____VbeforeTrig_hc6c63a94__0(vlSelf, 
                                                                     "@(posedge day21_mux_piso_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hc6c63a94__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge day21_mux_piso_tb.clk)", 
                                                                 "tb/day21_mux_piso_tb.sv", 
                                                                 21);
            vlSelfRef.day21_mux_piso_tb__DOT__rx = 
                (((~ ((IData)(1U) << (7U & vlSelfRef.day21_mux_piso_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))) 
                  & (IData)(vlSelfRef.day21_mux_piso_tb__DOT__rx)) 
                 | (0x00ffU & ((IData)(vlSelfRef.day21_mux_piso_tb__DOT__y) 
                               << (7U & vlSelfRef.day21_mux_piso_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))));
            vlSelfRef.day21_mux_piso_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.day21_mux_piso_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day21_mux_piso_tb__DOT__rx) 
                          != (IData)(vlSelfRef.day21_mux_piso_tb__DOT__d))))) {
            vlSelfRef.day21_mux_piso_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day21_mux_piso_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] serial stream must rebuild parallel word (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 3U, day21_mux_piso_tb__DOT__unnamedblk1__DOT__n)))) {
            VL_WRITEF_NX("  parallel %08b  -> serial (LSB first) rebuilt %08b\n",2
                         , '#',8,vlSelfRef.day21_mux_piso_tb__DOT__d
                         , '#',8,(IData)(vlSelfRef.day21_mux_piso_tb__DOT__rx));
        }
        day21_mux_piso_tb__DOT__unnamedblk1__DOT__n 
            = ((IData)(1U) + day21_mux_piso_tb__DOT__unnamedblk1__DOT__n);
    }
    if ((0U == vlSelfRef.day21_mux_piso_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day21_mux_piso\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day21_mux_piso : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day21_mux_piso_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day21_mux_piso_tb.sv", 27, "");
    co_return;
}

VlCoroutine Vday21_mux_piso_tb___024root___eval_initial__TOP__Vtiming__1(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day21_mux_piso_tb.sv", 
                                             10);
        vlSelfRef.day21_mux_piso_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.day21_mux_piso_tb__DOT__clk)));
    }
    co_return;
}

bool Vday21_mux_piso_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday21_mux_piso_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___trigger_anySet__act\n"); );
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

void Vday21_mux_piso_tb___024root___nba_sequent__TOP__0(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___nba_sequent__TOP__0\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.__Vsampled_TOP__day21_mux_piso_tb__DOT__d) 
                                     >> (IData)(vlSelfRef.__Vsampled_TOP__day21_mux_piso_tb__DOT__sel))) 
                              != (1U & ((IData)(vlSelfRef.__Vsampled_TOP__day21_mux_piso_tb__DOT__d) 
                                        >> (IData)(vlSelfRef.__Vsampled_TOP__day21_mux_piso_tb__DOT__sel))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day21_mux_piso_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_mux\n",3, 'M',vlSymsp->name(),"day21_mux_piso_tb.a_mux", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day21_mux_piso_tb.sv", 13, "");
            }
        }
    }
}

void Vday21_mux_piso_tb___024root___timing_ready(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___timing_ready\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc6c63a53__0.ready("@(negedge day21_mux_piso_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc6c63a94__0.ready("@(posedge day21_mux_piso_tb.clk)");
    }
}

void Vday21_mux_piso_tb___024root___timing_resume(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___timing_resume\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc6c63a53__0.moveToResumeQueue(
                                                          "@(negedge day21_mux_piso_tb.clk)");
    vlSelfRef.__VtrigSched_hc6c63a94__0.moveToResumeQueue(
                                                          "@(posedge day21_mux_piso_tb.clk)");
    vlSelfRef.__VtrigSched_hc6c63a53__0.resume("@(negedge day21_mux_piso_tb.clk)");
    vlSelfRef.__VtrigSched_hc6c63a94__0.resume("@(posedge day21_mux_piso_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday21_mux_piso_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday21_mux_piso_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday21_mux_piso_tb___024root____VbeforeTrig_hc6c63a53__0(Vday21_mux_piso_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root____VbeforeTrig_hc6c63a53__0\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day21_mux_piso_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day21_mux_piso_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0 
        = vlSelfRef.day21_mux_piso_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc6c63a94__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc6c63a53__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc6c63a53__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday21_mux_piso_tb___024root____VbeforeTrig_hc6c63a94__0(Vday21_mux_piso_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root____VbeforeTrig_hc6c63a94__0\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day21_mux_piso_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day21_mux_piso_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0 
        = vlSelfRef.day21_mux_piso_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc6c63a94__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc6c63a53__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc6c63a53__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday21_mux_piso_tb___024root___eval_debug_assertions(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_debug_assertions\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
