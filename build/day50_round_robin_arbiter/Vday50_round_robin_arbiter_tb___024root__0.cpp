// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday50_round_robin_arbiter_tb.h for the primary calling header

#include "Vday50_round_robin_arbiter_tb__pch.h"

VlCoroutine Vday50_round_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__0(Vday50_round_robin_arbiter_tb___024root* vlSelf);
VlCoroutine Vday50_round_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__1(Vday50_round_robin_arbiter_tb___024root* vlSelf);

void Vday50_round_robin_arbiter_tb___024root___eval_initial(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_initial\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday50_round_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday50_round_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday50_round_robin_arbiter_tb___024root___eval_sample(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_sample\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c 
        = vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c;
    vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req 
        = vlSelfRef.day50_round_robin_arbiter_tb__DOT__req;
    vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__rst 
        = vlSelfRef.day50_round_robin_arbiter_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday50_round_robin_arbiter_tb___024root___eval_ico(Vday50_round_robin_arbiter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_ico\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday50_round_robin_arbiter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday50_round_robin_arbiter_tb___024root___timing_ready(Vday50_round_robin_arbiter_tb___024root* vlSelf);
void Vday50_round_robin_arbiter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday50_round_robin_arbiter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday50_round_robin_arbiter_tb___024root___timing_resume(Vday50_round_robin_arbiter_tb___024root* vlSelf);
void Vday50_round_robin_arbiter_tb___024root___act_comb__TOP__0(Vday50_round_robin_arbiter_tb___024root* vlSelf);

bool Vday50_round_robin_arbiter_tb___024root___eval_act(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_act\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0 
            = vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk;
    }
    Vday50_round_robin_arbiter_tb___024root___timing_ready(vlSelf);
    Vday50_round_robin_arbiter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday50_round_robin_arbiter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday50_round_robin_arbiter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday50_round_robin_arbiter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday50_round_robin_arbiter_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vday50_round_robin_arbiter_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vday50_round_robin_arbiter_tb___024root___eval_inact(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_inact\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day50_round_robin_arbiter_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday50_round_robin_arbiter_tb___024root___nba_sequent__TOP__0(Vday50_round_robin_arbiter_tb___024root* vlSelf);
void Vday50_round_robin_arbiter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday50_round_robin_arbiter_tb___024root___eval_nba(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_nba\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday50_round_robin_arbiter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday50_round_robin_arbiter_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday50_round_robin_arbiter_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
        Vday50_round_robin_arbiter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday50_round_robin_arbiter_tb___024root___eval_obs(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_obs\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday50_round_robin_arbiter_tb___024root___eval_react(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_react\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday50_round_robin_arbiter_tb___024root___eval_postponed(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_postponed\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387ef1__0(Vday50_round_robin_arbiter_tb___024root* vlSelf, const char* __VeventDescription);
void Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387f32__0(Vday50_round_robin_arbiter_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday50_round_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__0(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day50_round_robin_arbiter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day50_round_robin_arbiter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day50_round_robin_arbiter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    day50_round_robin_arbiter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ day50_round_robin_arbiter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    day50_round_robin_arbiter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ day50_round_robin_arbiter_tb__DOT__unnamedblk3__DOT__i;
    day50_round_robin_arbiter_tb__DOT__unnamedblk3__DOT__i = 0;
    // Body
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[0U] = 0U;
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[0U] = 0U;
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[1U] = 0U;
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[1U] = 0U;
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[2U] = 0U;
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[2U] = 0U;
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[3U] = 0U;
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[3U] = 0U;
    day50_round_robin_arbiter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day50_round_robin_arbiter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387ef1__0(vlSelf, 
                                                                            "@(negedge day50_round_robin_arbiter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h96387ef1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day50_round_robin_arbiter_tb.clk)", 
                                                             "tb/day50_round_robin_arbiter_tb.sv", 
                                                             37);
        day50_round_robin_arbiter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day50_round_robin_arbiter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__rst = 0U;
    VL_WRITEF_NX("  all four requesting -> grant rotates:\n",0);
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__req = 0x0fU;
    day50_round_robin_arbiter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x0000000cU;
    while (VL_LTS_III(32, 0U, day50_round_robin_arbiter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387f32__0(vlSelf, 
                                                                            "@(posedge day50_round_robin_arbiter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h96387f32__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day50_round_robin_arbiter_tb.clk)", 
                                                             "tb/day50_round_robin_arbiter_tb.sv", 
                                                             41);
        VL_WRITEF_NX("    grant = %04b\n",1, '#',4,vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c);
        Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387ef1__0(vlSelf, 
                                                                            "@(negedge day50_round_robin_arbiter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h96387ef1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day50_round_robin_arbiter_tb.clk)", 
                                                             "tb/day50_round_robin_arbiter_tb.sv", 
                                                             41);
        day50_round_robin_arbiter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (day50_round_robin_arbiter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__req = 5U;
    day50_round_robin_arbiter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 8U;
    while (VL_LTS_III(32, 0U, day50_round_robin_arbiter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387f32__0(vlSelf, 
                                                                            "@(posedge day50_round_robin_arbiter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h96387f32__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day50_round_robin_arbiter_tb.clk)", 
                                                             "tb/day50_round_robin_arbiter_tb.sv", 
                                                             44);
        VL_WRITEF_NX("    req=0101 grant = %04b\n",1
                     , '#',4,vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c);
        Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387ef1__0(vlSelf, 
                                                                            "@(negedge day50_round_robin_arbiter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h96387ef1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day50_round_robin_arbiter_tb.clk)", 
                                                             "tb/day50_round_robin_arbiter_tb.sv", 
                                                             44);
        day50_round_robin_arbiter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (day50_round_robin_arbiter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    day50_round_robin_arbiter_tb__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x000007d0U, day50_round_robin_arbiter_tb__DOT__unnamedblk3__DOT__i)) {
        Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387ef1__0(vlSelf, 
                                                                            "@(negedge day50_round_robin_arbiter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h96387ef1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day50_round_robin_arbiter_tb.clk)", 
                                                             "tb/day50_round_robin_arbiter_tb.sv", 
                                                             46);
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__req 
            = (0x0000000fU & VL_RANDOM_I());
        day50_round_robin_arbiter_tb__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + day50_round_robin_arbiter_tb__DOT__unnamedblk3__DOT__i);
    }
    VL_WRITEF_NX("  requester 0 granted %0d times\n",1
                 , '~',32,vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[0U]);
    if (VL_UNLIKELY((VL_GTES_III(32, 0x00000064U, vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[0U])))) {
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] every requester is served (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  requester 1 granted %0d times\n",1
                 , '~',32,vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[1U]);
    if (VL_UNLIKELY((VL_GTES_III(32, 0x00000064U, vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[1U])))) {
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] every requester is served (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  requester 2 granted %0d times\n",1
                 , '~',32,vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[2U]);
    if (VL_UNLIKELY((VL_GTES_III(32, 0x00000064U, vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[2U])))) {
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] every requester is served (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  requester 3 granted %0d times\n",1
                 , '~',32,vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[3U]);
    if (VL_UNLIKELY((VL_GTES_III(32, 0x00000064U, vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[3U])))) {
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] every requester is served (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if ((0U == vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day50_round_robin_arbiter\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day50_round_robin_arbiter : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day50_round_robin_arbiter_tb.sv", 52, "");
    co_return;
}

VlCoroutine Vday50_round_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__1(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day50_round_robin_arbiter_tb.sv", 
                                             11);
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk)));
    }
    co_return;
}

bool Vday50_round_robin_arbiter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday50_round_robin_arbiter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___trigger_anySet__act\n"); );
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

void Vday50_round_robin_arbiter_tb___024root___act_comb__TOP__0(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___act_comb__TOP__0\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx;
    day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx = 0;
    // Body
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c = 0U;
    vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__gidx 
        = vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__ptr;
    day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(1U) + (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__ptr)), (IData)(4U));
    if ((1U & ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__req) 
               >> (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx)))) {
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c 
            = ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
               | (0x0fU & ((IData)(1U) << (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx))));
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__gidx 
            = (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx);
    }
    day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(2U) + (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__ptr)), (IData)(4U));
    if (((0U == (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c)) 
         & ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__req) 
            >> (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx)))) {
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c 
            = ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
               | (0x0fU & ((IData)(1U) << (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx))));
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__gidx 
            = (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx);
    }
    day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(3U) + (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__ptr)), (IData)(4U));
    if (((0U == (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c)) 
         & ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__req) 
            >> (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx)))) {
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c 
            = ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
               | (0x0fU & ((IData)(1U) << (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx))));
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__gidx 
            = (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx);
    }
    day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(4U) + (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__ptr)), (IData)(4U));
    if (((0U == (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c)) 
         & ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__req) 
            >> (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx)))) {
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c 
            = ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
               | (0x0fU & ((IData)(1U) << (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx))));
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__gidx 
            = (3U & day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx);
    }
}

void Vday50_round_robin_arbiter_tb___024root___nba_sequent__TOP__0(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___nba_sequent__TOP__0\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day50_round_robin_arbiter_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_onehot0\n",3, 'M',vlSymsp->name(),"day50_round_robin_arbiter_tb.a_onehot0", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day50_round_robin_arbiter_tb.sv", 15, "");
                }
                if (VL_UNLIKELY(((0U != ((IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
                                         & (~ (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day50_round_robin_arbiter_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_subset\n",3, 'M',vlSymsp->name(),"day50_round_robin_arbiter_tb.a_subset", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day50_round_robin_arbiter_tb.sv", 16, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (0U != (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req))) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day50_round_robin_arbiter_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_live\n",3, 'M',vlSymsp->name(),"day50_round_robin_arbiter_tb.a_live", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day50_round_robin_arbiter_tb.sv", 17, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((0U != (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req)) 
                                           | (0U == (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day50_round_robin_arbiter_tb.sv:18: Assertion failed in %m: [SVA FAIL] a_idle\n",3, 'M',vlSymsp->name(),"day50_round_robin_arbiter_tb.a_idle", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day50_round_robin_arbiter_tb.sv", 18, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT___Vpast_5_1)) 
                                           | ((~ (0x0000000fU 
                                                  == (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req))) 
                                              | ((IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
                                                 >> 1U)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day50_round_robin_arbiter_tb.sv:21: Assertion failed in %m: [SVA FAIL] a_rotate\n",3, 'M',vlSymsp->name(),"day50_round_robin_arbiter_tb.g_rot[0].a_rotate", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day50_round_robin_arbiter_tb.sv", 21, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT___Vpast_7_1)) 
                                           | ((~ (0x0000000fU 
                                                  == (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req))) 
                                              | ((IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
                                                 >> 2U)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day50_round_robin_arbiter_tb.sv:21: Assertion failed in %m: [SVA FAIL] a_rotate\n",3, 'M',vlSymsp->name(),"day50_round_robin_arbiter_tb.g_rot[1].a_rotate", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day50_round_robin_arbiter_tb.sv", 21, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT___Vpast_9_1)) 
                                           | ((~ (0x0000000fU 
                                                  == (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req))) 
                                              | ((IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
                                                 >> 3U)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day50_round_robin_arbiter_tb.sv:21: Assertion failed in %m: [SVA FAIL] a_rotate\n",3, 'M',vlSymsp->name(),"day50_round_robin_arbiter_tb.g_rot[2].a_rotate", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day50_round_robin_arbiter_tb.sv", 21, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT___Vpast_11_1)) 
                                           | ((~ (0x0000000fU 
                                                  == (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req))) 
                                              | (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day50_round_robin_arbiter_tb.sv:21: Assertion failed in %m: [SVA FAIL] a_rotate\n",3, 'M',vlSymsp->name(),"day50_round_robin_arbiter_tb.g_rot[3].a_rotate", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day50_round_robin_arbiter_tb.sv", 21, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__rst)))) {
        if ((1U & (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c))) {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[0U] 
                = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[0U]);
        }
        if ((1U & ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__req) 
                   & (~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c))))) {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[0U] 
                = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[0U]);
            if (VL_UNLIKELY((VL_LTS_III(32, 3U, vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[0U])))) {
                vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] requester must be served within N-1 cycles (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        } else {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[0U] = 0U;
        }
        if ((2U & (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c))) {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[1U] 
                = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[1U]);
        }
        if ((1U & (((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__req) 
                    >> 1U) & (~ ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
                                 >> 1U))))) {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[1U] 
                = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[1U]);
            if (VL_UNLIKELY((VL_LTS_III(32, 3U, vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[1U])))) {
                vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] requester must be served within N-1 cycles (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        } else {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[1U] = 0U;
        }
        if ((4U & (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c))) {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[2U] 
                = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[2U]);
        }
        if ((1U & (((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__req) 
                    >> 2U) & (~ ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
                                 >> 2U))))) {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[2U] 
                = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[2U]);
            if (VL_UNLIKELY((VL_LTS_III(32, 3U, vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[2U])))) {
                vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] requester must be served within N-1 cycles (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        } else {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[2U] = 0U;
        }
        if ((8U & (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c))) {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[3U] 
                = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__gcount[3U]);
        }
        if ((IData)((((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__req) 
                      >> 3U) & (~ ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
                                   >> 3U))))) {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[3U] 
                = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[3U]);
            if (VL_UNLIKELY((VL_LTS_III(32, 3U, vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[3U])))) {
                vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] requester must be served within N-1 cycles (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        } else {
            vlSelfRef.day50_round_robin_arbiter_tb__DOT__waitc[3U] = 0U;
        }
    }
    if (vlSelfRef.day50_round_robin_arbiter_tb__DOT__rst) {
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__ptr = 3U;
    } else if ((0U != (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__req))) {
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__ptr 
            = vlSelfRef.day50_round_robin_arbiter_tb__DOT__dut__DOT__gidx;
    }
    vlSelfRef.day50_round_robin_arbiter_tb__DOT___Vpast_5_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__rst)) 
           & ((0x0000000fU == (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req)) 
              & (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c)));
    vlSelfRef.day50_round_robin_arbiter_tb__DOT___Vpast_7_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__rst)) 
           & ((0x0000000fU == (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req)) 
              & ((IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
                 >> 1U)));
    vlSelfRef.day50_round_robin_arbiter_tb__DOT___Vpast_9_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__rst)) 
           & ((0x0000000fU == (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req)) 
              & ((IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
                 >> 2U)));
    vlSelfRef.day50_round_robin_arbiter_tb__DOT___Vpast_11_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__rst)) 
           & ((0x0000000fU == (IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req)) 
              & ((IData)(vlSelfRef.__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c) 
                 >> 3U)));
}

void Vday50_round_robin_arbiter_tb___024root___timing_ready(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___timing_ready\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h96387ef1__0.ready("@(negedge day50_round_robin_arbiter_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h96387f32__0.ready("@(posedge day50_round_robin_arbiter_tb.clk)");
    }
}

void Vday50_round_robin_arbiter_tb___024root___timing_resume(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___timing_resume\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h96387ef1__0.moveToResumeQueue(
                                                          "@(negedge day50_round_robin_arbiter_tb.clk)");
    vlSelfRef.__VtrigSched_h96387f32__0.moveToResumeQueue(
                                                          "@(posedge day50_round_robin_arbiter_tb.clk)");
    vlSelfRef.__VtrigSched_h96387ef1__0.resume("@(negedge day50_round_robin_arbiter_tb.clk)");
    vlSelfRef.__VtrigSched_h96387f32__0.resume("@(posedge day50_round_robin_arbiter_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday50_round_robin_arbiter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday50_round_robin_arbiter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387ef1__0(Vday50_round_robin_arbiter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387ef1__0\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0 
        = vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h96387f32__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h96387f32__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h96387ef1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h96387ef1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h96387ef1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h96387ef1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387f32__0(Vday50_round_robin_arbiter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root____VbeforeTrig_h96387f32__0\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0 
        = vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h96387f32__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h96387f32__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h96387ef1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h96387ef1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h96387ef1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h96387ef1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday50_round_robin_arbiter_tb___024root___eval_debug_assertions(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_debug_assertions\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
