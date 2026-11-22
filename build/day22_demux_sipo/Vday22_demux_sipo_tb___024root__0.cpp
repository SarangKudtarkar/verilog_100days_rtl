// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday22_demux_sipo_tb.h for the primary calling header

#include "Vday22_demux_sipo_tb__pch.h"

VlCoroutine Vday22_demux_sipo_tb___024root___eval_initial__TOP__Vtiming__0(Vday22_demux_sipo_tb___024root* vlSelf);
VlCoroutine Vday22_demux_sipo_tb___024root___eval_initial__TOP__Vtiming__1(Vday22_demux_sipo_tb___024root* vlSelf);

void Vday22_demux_sipo_tb___024root___eval_initial(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_initial\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday22_demux_sipo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday22_demux_sipo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday22_demux_sipo_tb___024root___eval_sample(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_sample\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day22_demux_sipo_tb__DOT__q 
        = vlSelfRef.day22_demux_sipo_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__day22_demux_sipo_tb__DOT__din 
        = vlSelfRef.day22_demux_sipo_tb__DOT__din;
    vlSelfRef.__Vsampled_TOP__day22_demux_sipo_tb__DOT__sel 
        = vlSelfRef.day22_demux_sipo_tb__DOT__sel;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday22_demux_sipo_tb___024root___eval_ico(Vday22_demux_sipo_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_ico\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday22_demux_sipo_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday22_demux_sipo_tb___024root___timing_ready(Vday22_demux_sipo_tb___024root* vlSelf);
void Vday22_demux_sipo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday22_demux_sipo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday22_demux_sipo_tb___024root___timing_resume(Vday22_demux_sipo_tb___024root* vlSelf);

bool Vday22_demux_sipo_tb___024root___eval_act(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_act\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day22_demux_sipo_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0 
            = vlSelfRef.day22_demux_sipo_tb__DOT__clk;
    }
    Vday22_demux_sipo_tb___024root___timing_ready(vlSelf);
    Vday22_demux_sipo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday22_demux_sipo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday22_demux_sipo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday22_demux_sipo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday22_demux_sipo_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day22_demux_sipo_tb__DOT__q = 0U;
                    vlSelfRef.day22_demux_sipo_tb__DOT__q 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__sel))) 
                            & (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__q)) 
                           | (0x00ffU & ((IData)(vlSelfRef.day22_demux_sipo_tb__DOT__din) 
                                         << (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__sel))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday22_demux_sipo_tb___024root___eval_inact(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_inact\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day22_demux_sipo_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday22_demux_sipo_tb___024root___nba_sequent__TOP__0(Vday22_demux_sipo_tb___024root* vlSelf);
void Vday22_demux_sipo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday22_demux_sipo_tb___024root___eval_nba(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_nba\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday22_demux_sipo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday22_demux_sipo_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day22_demux_sipo_tb__DOT__q = 0U;
                    vlSelfRef.day22_demux_sipo_tb__DOT__q 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__sel))) 
                            & (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__q)) 
                           | (0x00ffU & ((IData)(vlSelfRef.day22_demux_sipo_tb__DOT__din) 
                                         << (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__sel))));
                }
            }
        }
        Vday22_demux_sipo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday22_demux_sipo_tb___024root___eval_obs(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_obs\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday22_demux_sipo_tb___024root___eval_react(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_react\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday22_demux_sipo_tb___024root___eval_postponed(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_postponed\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday22_demux_sipo_tb___024root____VbeforeTrig_h83f0833f__0(Vday22_demux_sipo_tb___024root* vlSelf, const char* __VeventDescription);
void Vday22_demux_sipo_tb___024root____VbeforeTrig_h83f08380__0(Vday22_demux_sipo_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday22_demux_sipo_tb___024root___eval_initial__TOP__Vtiming__0(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day22_demux_sipo_tb__DOT__unnamedblk1__DOT__n;
    day22_demux_sipo_tb__DOT__unnamedblk1__DOT__n = 0;
    // Body
    day22_demux_sipo_tb__DOT__unnamedblk1__DOT__n = 0U;
    while (VL_GTS_III(32, 0x00000014U, day22_demux_sipo_tb__DOT__unnamedblk1__DOT__n)) {
        vlSelfRef.day22_demux_sipo_tb__DOT__word = 
            ((0U == day22_demux_sipo_tb__DOT__unnamedblk1__DOT__n)
              ? 0x00000096U : (0x000000ffU & VL_RANDOM_I()));
        vlSelfRef.day22_demux_sipo_tb__DOT__rx = 0U;
        vlSelfRef.day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 8U, vlSelfRef.day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
            Vday22_demux_sipo_tb___024root____VbeforeTrig_h83f0833f__0(vlSelf, 
                                                                       "@(negedge day22_demux_sipo_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h83f0833f__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge day22_demux_sipo_tb.clk)", 
                                                                 "tb/day22_demux_sipo_tb.sv", 
                                                                 21);
            vlSelfRef.day22_demux_sipo_tb__DOT__sel 
                = (7U & vlSelfRef.day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
            vlSelfRef.day22_demux_sipo_tb__DOT__din 
                = (1U & ((IData)(vlSelfRef.day22_demux_sipo_tb__DOT__word) 
                         >> (7U & vlSelfRef.day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)));
            Vday22_demux_sipo_tb___024root____VbeforeTrig_h83f08380__0(vlSelf, 
                                                                       "@(posedge day22_demux_sipo_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h83f08380__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge day22_demux_sipo_tb.clk)", 
                                                                 "tb/day22_demux_sipo_tb.sv", 
                                                                 22);
            vlSelfRef.day22_demux_sipo_tb__DOT__rx 
                = (((~ ((IData)(1U) << (7U & vlSelfRef.day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))) 
                    & (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__rx)) 
                   | (0x00ffU & ((1U & ((IData)(vlSelfRef.day22_demux_sipo_tb__DOT__q) 
                                        >> (7U & vlSelfRef.day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))) 
                                 << (7U & vlSelfRef.day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))));
            vlSelfRef.day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day22_demux_sipo_tb__DOT__rx) 
                          != (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__word))))) {
            vlSelfRef.day22_demux_sipo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day22_demux_sipo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] serial stream must be spread onto the parallel outputs (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 3U, day22_demux_sipo_tb__DOT__unnamedblk1__DOT__n)))) {
            VL_WRITEF_NX("  serial word %08b -> parallel %08b\n",2
                         , '#',8,vlSelfRef.day22_demux_sipo_tb__DOT__word
                         , '#',8,(IData)(vlSelfRef.day22_demux_sipo_tb__DOT__rx));
        }
        day22_demux_sipo_tb__DOT__unnamedblk1__DOT__n 
            = ((IData)(1U) + day22_demux_sipo_tb__DOT__unnamedblk1__DOT__n);
    }
    if ((0U == vlSelfRef.day22_demux_sipo_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day22_demux_sipo\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day22_demux_sipo : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day22_demux_sipo_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day22_demux_sipo_tb.sv", 28, "");
    co_return;
}

VlCoroutine Vday22_demux_sipo_tb___024root___eval_initial__TOP__Vtiming__1(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day22_demux_sipo_tb.sv", 
                                             10);
        vlSelfRef.day22_demux_sipo_tb__DOT__clk = (1U 
                                                   & (~ (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__clk)));
    }
    co_return;
}

bool Vday22_demux_sipo_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday22_demux_sipo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___trigger_anySet__act\n"); );
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

void Vday22_demux_sipo_tb___024root___nba_sequent__TOP__0(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___nba_sequent__TOP__0\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((0U != ((IData)(vlSelfRef.__Vsampled_TOP__day22_demux_sipo_tb__DOT__q) 
                                     & (~ ((IData)(1U) 
                                           << (IData)(vlSelfRef.__Vsampled_TOP__day22_demux_sipo_tb__DOT__sel)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day22_demux_sipo_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_others\n",3, 'M',vlSymsp->name(),"day22_demux_sipo_tb.a_others", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day22_demux_sipo_tb.sv", 14, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__day22_demux_sipo_tb__DOT__q) 
                              != (0x000000ffU & ((IData)(vlSelfRef.__Vsampled_TOP__day22_demux_sipo_tb__DOT__din) 
                                                 << (IData)(vlSelfRef.__Vsampled_TOP__day22_demux_sipo_tb__DOT__sel))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day22_demux_sipo_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_route\n",3, 'M',vlSymsp->name(),"day22_demux_sipo_tb.a_route", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day22_demux_sipo_tb.sv", 13, "");
            }
        }
    }
}

void Vday22_demux_sipo_tb___024root___timing_ready(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___timing_ready\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h83f0833f__0.ready("@(negedge day22_demux_sipo_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h83f08380__0.ready("@(posedge day22_demux_sipo_tb.clk)");
    }
}

void Vday22_demux_sipo_tb___024root___timing_resume(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___timing_resume\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h83f0833f__0.moveToResumeQueue(
                                                          "@(negedge day22_demux_sipo_tb.clk)");
    vlSelfRef.__VtrigSched_h83f08380__0.moveToResumeQueue(
                                                          "@(posedge day22_demux_sipo_tb.clk)");
    vlSelfRef.__VtrigSched_h83f0833f__0.resume("@(negedge day22_demux_sipo_tb.clk)");
    vlSelfRef.__VtrigSched_h83f08380__0.resume("@(posedge day22_demux_sipo_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday22_demux_sipo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday22_demux_sipo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday22_demux_sipo_tb___024root____VbeforeTrig_h83f0833f__0(Vday22_demux_sipo_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root____VbeforeTrig_h83f0833f__0\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day22_demux_sipo_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0 
        = vlSelfRef.day22_demux_sipo_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h83f08380__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h83f0833f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday22_demux_sipo_tb___024root____VbeforeTrig_h83f08380__0(Vday22_demux_sipo_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root____VbeforeTrig_h83f08380__0\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day22_demux_sipo_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0 
        = vlSelfRef.day22_demux_sipo_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h83f08380__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h83f0833f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday22_demux_sipo_tb___024root___eval_debug_assertions(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_debug_assertions\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
