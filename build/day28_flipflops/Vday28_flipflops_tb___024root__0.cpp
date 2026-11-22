// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday28_flipflops_tb.h for the primary calling header

#include "Vday28_flipflops_tb__pch.h"

VlCoroutine Vday28_flipflops_tb___024root___eval_initial__TOP__Vtiming__0(Vday28_flipflops_tb___024root* vlSelf);
VlCoroutine Vday28_flipflops_tb___024root___eval_initial__TOP__Vtiming__1(Vday28_flipflops_tb___024root* vlSelf);

void Vday28_flipflops_tb___024root___eval_initial(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_initial\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday28_flipflops_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday28_flipflops_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday28_flipflops_tb___024root___eval_sample(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_sample\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_d 
        = vlSelfRef.day28_flipflops_tb__DOT__q_d;
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_t 
        = vlSelfRef.day28_flipflops_tb__DOT__q_t;
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_jk 
        = vlSelfRef.day28_flipflops_tb__DOT__q_jk;
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_sr 
        = vlSelfRef.day28_flipflops_tb__DOT__q_sr;
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__s 
        = vlSelfRef.day28_flipflops_tb__DOT__s;
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__r 
        = vlSelfRef.day28_flipflops_tb__DOT__r;
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n 
        = vlSelfRef.day28_flipflops_tb__DOT__rst_n;
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__d 
        = vlSelfRef.day28_flipflops_tb__DOT__d;
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__t 
        = vlSelfRef.day28_flipflops_tb__DOT__t;
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__j 
        = vlSelfRef.day28_flipflops_tb__DOT__j;
    vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__k 
        = vlSelfRef.day28_flipflops_tb__DOT__k;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday28_flipflops_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday28_flipflops_tb___024root___eval_ico(Vday28_flipflops_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_ico\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday28_flipflops_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday28_flipflops_tb___024root___timing_ready(Vday28_flipflops_tb___024root* vlSelf);
void Vday28_flipflops_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday28_flipflops_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday28_flipflops_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday28_flipflops_tb___024root___timing_resume(Vday28_flipflops_tb___024root* vlSelf);

bool Vday28_flipflops_tb___024root___eval_act(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_act\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 3U) 
                                                          | (((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__clk__0)) 
                                                             << 2U)) 
                                                         | ((((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day28_flipflops_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__clk__0 
            = vlSelfRef.day28_flipflops_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__rst_n__0 
            = vlSelfRef.day28_flipflops_tb__DOT__rst_n;
    }
    Vday28_flipflops_tb___024root___timing_ready(vlSelf);
    Vday28_flipflops_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday28_flipflops_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday28_flipflops_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday28_flipflops_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday28_flipflops_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday28_flipflops_tb___024root___eval_inact(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_inact\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day28_flipflops_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday28_flipflops_tb___024root___nba_sequent__TOP__0(Vday28_flipflops_tb___024root* vlSelf);
void Vday28_flipflops_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday28_flipflops_tb___024root___eval_nba(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_nba\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday28_flipflops_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday28_flipflops_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    if (vlSelfRef.day28_flipflops_tb__DOT__rst_n) {
                        if (vlSelfRef.day28_flipflops_tb__DOT__t) {
                            vlSelfRef.day28_flipflops_tb__DOT__q_t 
                                = (1U & (~ (IData)(vlSelfRef.day28_flipflops_tb__DOT__q_t)));
                        }
                    } else {
                        vlSelfRef.day28_flipflops_tb__DOT__q_t = 0U;
                    }
                    vlSelfRef.day28_flipflops_tb__DOT__q_sr 
                        = ((IData)(vlSelfRef.day28_flipflops_tb__DOT__rst_n) 
                           && ((2U == (((IData)(vlSelfRef.day28_flipflops_tb__DOT__s) 
                                        << 1U) | (IData)(vlSelfRef.day28_flipflops_tb__DOT__r))) 
                               || ((1U != (((IData)(vlSelfRef.day28_flipflops_tb__DOT__s) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.day28_flipflops_tb__DOT__r))) 
                                   && (IData)(vlSelfRef.day28_flipflops_tb__DOT__q_sr))));
                    vlSelfRef.day28_flipflops_tb__DOT__q_jk 
                        = ((IData)(vlSelfRef.day28_flipflops_tb__DOT__rst_n) 
                           && ((IData)(vlSelfRef.day28_flipflops_tb__DOT__j)
                                ? ((1U & (~ (IData)(vlSelfRef.day28_flipflops_tb__DOT__k))) 
                                   || (1U & (~ (IData)(vlSelfRef.day28_flipflops_tb__DOT__q_jk))))
                                : ((1U & (~ (IData)(vlSelfRef.day28_flipflops_tb__DOT__k))) 
                                   && (IData)(vlSelfRef.day28_flipflops_tb__DOT__q_jk))));
                    vlSelfRef.day28_flipflops_tb__DOT__q_d 
                        = ((IData)(vlSelfRef.day28_flipflops_tb__DOT__rst_n) 
                           & (IData)(vlSelfRef.day28_flipflops_tb__DOT__d));
                }
            }
        }
        Vday28_flipflops_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday28_flipflops_tb___024root___eval_obs(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_obs\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday28_flipflops_tb___024root___eval_react(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_react\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday28_flipflops_tb___024root___eval_postponed(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_postponed\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday28_flipflops_tb___024root____VbeforeTrig_h9970be69__0(Vday28_flipflops_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday28_flipflops_tb___024root___eval_initial__TOP__Vtiming__0(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ day28_flipflops_tb__DOT__e_d;
    day28_flipflops_tb__DOT__e_d = 0;
    CData/*0:0*/ day28_flipflops_tb__DOT__e_t;
    day28_flipflops_tb__DOT__e_t = 0;
    CData/*0:0*/ day28_flipflops_tb__DOT__e_jk;
    day28_flipflops_tb__DOT__e_jk = 0;
    CData/*0:0*/ day28_flipflops_tb__DOT__e_sr;
    day28_flipflops_tb__DOT__e_sr = 0;
    IData/*31:0*/ day28_flipflops_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day28_flipflops_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day28_flipflops_tb__DOT__unnamedblk1__DOT__i;
    day28_flipflops_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.day28_flipflops_tb__DOT__d = 0U;
    vlSelfRef.day28_flipflops_tb__DOT__t = 0U;
    vlSelfRef.day28_flipflops_tb__DOT__j = 0U;
    vlSelfRef.day28_flipflops_tb__DOT__k = 0U;
    vlSelfRef.day28_flipflops_tb__DOT__s = 0U;
    vlSelfRef.day28_flipflops_tb__DOT__r = 0U;
    day28_flipflops_tb__DOT__e_d = 0U;
    day28_flipflops_tb__DOT__e_t = 0U;
    day28_flipflops_tb__DOT__e_jk = 0U;
    day28_flipflops_tb__DOT__e_sr = 0U;
    day28_flipflops_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, day28_flipflops_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday28_flipflops_tb___024root____VbeforeTrig_h9970be69__0(vlSelf, 
                                                                  "@(negedge day28_flipflops_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h9970be69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day28_flipflops_tb.clk)", 
                                                             "tb/day28_flipflops_tb.sv", 
                                                             32);
        day28_flipflops_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day28_flipflops_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day28_flipflops_tb__DOT__rst_n = 1U;
    VL_WRITEF_NX("  cycle | D T | J K | S R | qD qT qJK qSR\n",0);
    day28_flipflops_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000012cU, day28_flipflops_tb__DOT__unnamedblk1__DOT__i)) {
        Vday28_flipflops_tb___024root____VbeforeTrig_h9970be69__0(vlSelf, 
                                                                  "@(negedge day28_flipflops_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h9970be69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day28_flipflops_tb.clk)", 
                                                             "tb/day28_flipflops_tb.sv", 
                                                             36);
        if (VL_UNLIKELY(((((((IData)(vlSelfRef.day28_flipflops_tb__DOT__q_d) 
                             << 3U) | ((IData)(vlSelfRef.day28_flipflops_tb__DOT__q_t) 
                                       << 2U)) | (((IData)(vlSelfRef.day28_flipflops_tb__DOT__q_jk) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.day28_flipflops_tb__DOT__q_sr))) 
                          != ((((IData)(day28_flipflops_tb__DOT__e_d) 
                                << 3U) | ((IData)(day28_flipflops_tb__DOT__e_t) 
                                          << 2U)) | 
                              (((IData)(day28_flipflops_tb__DOT__e_jk) 
                                << 1U) | (IData)(day28_flipflops_tb__DOT__e_sr))))))) {
            vlSelfRef.day28_flipflops_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day28_flipflops_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] flip-flop outputs (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 0x0000000cU, day28_flipflops_tb__DOT__unnamedblk1__DOT__i)))) {
            VL_WRITEF_NX("  %5d | %b %b | %b %b | %b %b |  %b  %b  %b   %b\n",11
                         , '~',32,day28_flipflops_tb__DOT__unnamedblk1__DOT__i
                         , '#',1,(IData)(vlSelfRef.day28_flipflops_tb__DOT__d)
                         , '#',1,vlSelfRef.day28_flipflops_tb__DOT__t
                         , '#',1,(IData)(vlSelfRef.day28_flipflops_tb__DOT__j)
                         , '#',1,vlSelfRef.day28_flipflops_tb__DOT__k
                         , '#',1,(IData)(vlSelfRef.day28_flipflops_tb__DOT__s)
                         , '#',1,vlSelfRef.day28_flipflops_tb__DOT__r
                         , '#',1,(IData)(vlSelfRef.day28_flipflops_tb__DOT__q_d)
                         , '#',1,vlSelfRef.day28_flipflops_tb__DOT__q_t
                         , '#',1,(IData)(vlSelfRef.day28_flipflops_tb__DOT__q_jk)
                         , '#',1,vlSelfRef.day28_flipflops_tb__DOT__q_sr);
        }
        vlSelfRef.day28_flipflops_tb__DOT__d = (1U 
                                                & VL_RANDOM_I());
        vlSelfRef.day28_flipflops_tb__DOT__t = (1U 
                                                & VL_RANDOM_I());
        vlSelfRef.day28_flipflops_tb__DOT__j = (1U 
                                                & VL_RANDOM_I());
        vlSelfRef.day28_flipflops_tb__DOT__k = (1U 
                                                & VL_RANDOM_I());
        vlSelfRef.day28_flipflops_tb__DOT__s = (1U 
                                                & VL_RANDOM_I());
        vlSelfRef.day28_flipflops_tb__DOT__r = (1U 
                                                & VL_RANDOM_I());
        day28_flipflops_tb__DOT__e_d = vlSelfRef.day28_flipflops_tb__DOT__d;
        if (vlSelfRef.day28_flipflops_tb__DOT__t) {
            day28_flipflops_tb__DOT__e_t = (1U & (~ (IData)(day28_flipflops_tb__DOT__e_t)));
        }
        if ((1U == (((IData)(vlSelfRef.day28_flipflops_tb__DOT__j) 
                     << 1U) | (IData)(vlSelfRef.day28_flipflops_tb__DOT__k)))) {
            day28_flipflops_tb__DOT__e_jk = 0U;
        } else if ((2U == (((IData)(vlSelfRef.day28_flipflops_tb__DOT__j) 
                            << 1U) | (IData)(vlSelfRef.day28_flipflops_tb__DOT__k)))) {
            day28_flipflops_tb__DOT__e_jk = 1U;
        } else if ((3U == (((IData)(vlSelfRef.day28_flipflops_tb__DOT__j) 
                            << 1U) | (IData)(vlSelfRef.day28_flipflops_tb__DOT__k)))) {
            day28_flipflops_tb__DOT__e_jk = (1U & (~ (IData)(day28_flipflops_tb__DOT__e_jk)));
        }
        if ((1U == (((IData)(vlSelfRef.day28_flipflops_tb__DOT__s) 
                     << 1U) | (IData)(vlSelfRef.day28_flipflops_tb__DOT__r)))) {
            day28_flipflops_tb__DOT__e_sr = 0U;
        } else if ((2U == (((IData)(vlSelfRef.day28_flipflops_tb__DOT__s) 
                            << 1U) | (IData)(vlSelfRef.day28_flipflops_tb__DOT__r)))) {
            day28_flipflops_tb__DOT__e_sr = 1U;
        }
        day28_flipflops_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day28_flipflops_tb__DOT__unnamedblk1__DOT__i);
    }
    Vday28_flipflops_tb___024root____VbeforeTrig_h9970be69__0(vlSelf, 
                                                              "@(negedge day28_flipflops_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h9970be69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day28_flipflops_tb.clk)", 
                                                         "tb/day28_flipflops_tb.sv", 
                                                         48);
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb/day28_flipflops_tb.sv", 
                                         48);
    vlSelfRef.day28_flipflops_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/day28_flipflops_tb.sv", 
                                         49);
    if (VL_UNLIKELY(((0U != ((((IData)(vlSelfRef.day28_flipflops_tb__DOT__q_d) 
                               << 3U) | ((IData)(vlSelfRef.day28_flipflops_tb__DOT__q_t) 
                                         << 2U)) | 
                             (((IData)(vlSelfRef.day28_flipflops_tb__DOT__q_jk) 
                               << 1U) | (IData)(vlSelfRef.day28_flipflops_tb__DOT__q_sr))))))) {
        vlSelfRef.day28_flipflops_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day28_flipflops_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] asynchronous reset clears all flip-flops (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    vlSelfRef.day28_flipflops_tb__DOT__rst_n = 1U;
    if ((0U == vlSelfRef.day28_flipflops_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day28_flipflops\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day28_flipflops : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day28_flipflops_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day28_flipflops_tb.sv", 51, "");
    co_return;
}

VlCoroutine Vday28_flipflops_tb___024root___eval_initial__TOP__Vtiming__1(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day28_flipflops_tb.sv", 
                                             13);
        vlSelfRef.day28_flipflops_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.day28_flipflops_tb__DOT__clk)));
    }
    co_return;
}

bool Vday28_flipflops_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday28_flipflops_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___trigger_anySet__act\n"); );
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

void Vday28_flipflops_tb___024root___nba_sequent__TOP__0(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___nba_sequent__TOP__0\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (vlSelfRef.day28_flipflops_tb__DOT__rst_n) {
                if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__s) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__r))) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__s) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__r)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:27: Assertion failed in %m: [SVA FAIL] a_sr_inv\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_sr_inv", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 27, "");
                }
                if (VL_UNLIKELY(((1U & (~ (((((1U & 
                                               (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_d))) 
                                              == (1U 
                                                  & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_d)))) 
                                             & ((1U 
                                                 & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_t))) 
                                                == 
                                                (1U 
                                                 & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_t))))) 
                                            & ((1U 
                                                & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_jk))) 
                                               == (1U 
                                                   & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_jk))))) 
                                           & ((1U & 
                                               (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_sr))) 
                                              == (1U 
                                                  & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_sr)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:28: Assertion failed in %m: [SVA FAIL] a_qn\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_qn", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 28, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_1_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_d) 
                                              == (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_2_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_d\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_d", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 17, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_18_1)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_sr))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:24: Assertion failed in %m: [SVA FAIL] a_sr_s\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_sr_s", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 24, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_20_1)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_sr)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:25: Assertion failed in %m: [SVA FAIL] a_sr_r\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_sr_r", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 25, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_9_1)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_jk))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:20: Assertion failed in %m: [SVA FAIL] a_jk_s\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_jk_s", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 20, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_11_1)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_jk)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:21: Assertion failed in %m: [SVA FAIL] a_jk_r\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_jk_r", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 21, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_4_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_t) 
                                              != (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_5_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:18: Assertion failed in %m: [SVA FAIL] a_t_tog\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_t_tog", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 18, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_7_1)) 
                                           | ((IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_5_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_t)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:19: Assertion failed in %m: [SVA FAIL] a_t_hold\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_t_hold", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 19, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_22_1)) 
                                           | ((IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_23_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_sr)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:26: Assertion failed in %m: [SVA FAIL] a_sr_h\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_sr_h", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 26, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_13_1)) 
                                           | ((IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_14_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_jk)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:22: Assertion failed in %m: [SVA FAIL] a_jk_h\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_jk_h", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 22, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_16_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_jk) 
                                              != (IData)(vlSelfRef.day28_flipflops_tb__DOT___Vpast_14_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day28_flipflops_tb.sv:23: Assertion failed in %m: [SVA FAIL] a_jk_t\n",3, 'M',vlSymsp->name(),"day28_flipflops_tb.a_jk_t", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day28_flipflops_tb.sv", 23, "");
                }
            }
        }
    }
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_2_1 = vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__d;
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_1_1 = vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n;
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_18_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__s) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__r))));
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_20_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n) 
           & ((~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__s)) 
              & (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__r)));
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_9_1 = 
        ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n) 
         & ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__j) 
            & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__k))));
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_11_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n) 
           & ((~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__j)) 
              & (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__k)));
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_4_1 = 
        ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n) 
         & (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__t));
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_5_1 = vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_t;
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_7_1 = 
        ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n) 
         & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__t)));
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_23_1 
        = vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_sr;
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_22_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n) 
           & ((~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__s)) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__r))));
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_13_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n) 
           & ((~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__j)) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__k))));
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_14_1 
        = vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__q_jk;
    vlSelfRef.day28_flipflops_tb__DOT___Vpast_16_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__j) 
              & (IData)(vlSelfRef.__Vsampled_TOP__day28_flipflops_tb__DOT__k)));
}

void Vday28_flipflops_tb___024root___timing_ready(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___timing_ready\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h9970be69__0.ready("@(negedge day28_flipflops_tb.clk)");
    }
}

void Vday28_flipflops_tb___024root___timing_resume(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___timing_resume\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h9970be69__0.moveToResumeQueue(
                                                          "@(negedge day28_flipflops_tb.clk)");
    vlSelfRef.__VtrigSched_h9970be69__0.resume("@(negedge day28_flipflops_tb.clk)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday28_flipflops_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday28_flipflops_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday28_flipflops_tb___024root____VbeforeTrig_h9970be69__0(Vday28_flipflops_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root____VbeforeTrig_h9970be69__0\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day28_flipflops_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__clk__0 
        = vlSelfRef.day28_flipflops_tb__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9970be69__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9970be69__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9970be69__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday28_flipflops_tb___024root___eval_debug_assertions(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_debug_assertions\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
