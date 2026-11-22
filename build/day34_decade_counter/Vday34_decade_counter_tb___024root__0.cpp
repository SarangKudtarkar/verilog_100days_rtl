// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday34_decade_counter_tb.h for the primary calling header

#include "Vday34_decade_counter_tb__pch.h"

VlCoroutine Vday34_decade_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday34_decade_counter_tb___024root* vlSelf);
VlCoroutine Vday34_decade_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday34_decade_counter_tb___024root* vlSelf);

void Vday34_decade_counter_tb___024root___eval_initial(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_initial\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday34_decade_counter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday34_decade_counter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday34_decade_counter_tb___024root___eval_sample(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_sample\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day34_decade_counter_tb__DOT__q 
        = vlSelfRef.day34_decade_counter_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__day34_decade_counter_tb__DOT__rst 
        = vlSelfRef.day34_decade_counter_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday34_decade_counter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday34_decade_counter_tb___024root___eval_ico(Vday34_decade_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_ico\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday34_decade_counter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday34_decade_counter_tb___024root___timing_ready(Vday34_decade_counter_tb___024root* vlSelf);
void Vday34_decade_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday34_decade_counter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday34_decade_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday34_decade_counter_tb___024root___timing_resume(Vday34_decade_counter_tb___024root* vlSelf);

bool Vday34_decade_counter_tb___024root___eval_act(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_act\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 5U) 
                                                          | (((~ 
                                                               ((IData)(vlSelfRef.day34_decade_counter_tb__DOT__q) 
                                                                >> 1U)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr_hc55aa1a8__0)) 
                                                             << 4U)) 
                                                         | (((((~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__q)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr_hc55ab210__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.day34_decade_counter_tb__DOT__rst) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__rst__0))) 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__clk)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__clk__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.day34_decade_counter_tb__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__clk__0 
            = vlSelfRef.day34_decade_counter_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__rst__0 
            = vlSelfRef.day34_decade_counter_tb__DOT__rst;
        vlSelfRef.__Vtrigprevexpr_hc55ab210__0 = (1U 
                                                  & (IData)(vlSelfRef.day34_decade_counter_tb__DOT__q));
        vlSelfRef.__Vtrigprevexpr_hc55aa1a8__0 = (1U 
                                                  & ((IData)(vlSelfRef.day34_decade_counter_tb__DOT__q) 
                                                     >> 1U));
    }
    Vday34_decade_counter_tb___024root___timing_ready(vlSelf);
    Vday34_decade_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday34_decade_counter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday34_decade_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday34_decade_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday34_decade_counter_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday34_decade_counter_tb___024root___eval_inact(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_inact\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day34_decade_counter_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday34_decade_counter_tb___024root___nba_sequent__TOP__0(Vday34_decade_counter_tb___024root* vlSelf);
void Vday34_decade_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday34_decade_counter_tb___024root___eval_nba(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_nba\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday34_decade_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday34_decade_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((0x000000000000001eULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    vlSelfRef.__Vdly__day34_decade_counter_tb__DOT__q 
                        = vlSelfRef.day34_decade_counter_tb__DOT__q;
                }
            }
            if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__2
                    vlSelfRef.__Vdly__day34_decade_counter_tb__DOT__q 
                        = ((0x0eU & (IData)(vlSelfRef.__Vdly__day34_decade_counter_tb__DOT__q)) 
                           | (1U & ((~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__rst)) 
                                    & (~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__q)))));
                }
            }
            if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__3
                    vlSelfRef.__Vdly__day34_decade_counter_tb__DOT__q 
                        = ((0x0dU & (IData)(vlSelfRef.__Vdly__day34_decade_counter_tb__DOT__q)) 
                           | (((~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__rst)) 
                               & (0U == (0x0aU & (IData)(vlSelfRef.day34_decade_counter_tb__DOT__q)))) 
                              << 1U));
                    vlSelfRef.__Vdly__day34_decade_counter_tb__DOT__q 
                        = ((7U & (IData)(vlSelfRef.__Vdly__day34_decade_counter_tb__DOT__q)) 
                           | (((~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__rst)) 
                               & (6U == (0x0eU & (IData)(vlSelfRef.day34_decade_counter_tb__DOT__q)))) 
                              << 3U));
                }
            }
            if ((0x0000000000000014ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__4
                    vlSelfRef.__Vdly__day34_decade_counter_tb__DOT__q 
                        = ((0x0bU & (IData)(vlSelfRef.__Vdly__day34_decade_counter_tb__DOT__q)) 
                           | (4U & (((~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__rst)) 
                                     & (~ ((IData)(vlSelfRef.day34_decade_counter_tb__DOT__q) 
                                           >> 2U))) 
                                    << 2U)));
                }
            }
            if ((0x000000000000001eULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__5
                    vlSelfRef.day34_decade_counter_tb__DOT__q 
                        = vlSelfRef.__Vdly__day34_decade_counter_tb__DOT__q;
                }
            }
        }
        Vday34_decade_counter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday34_decade_counter_tb___024root___eval_obs(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_obs\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday34_decade_counter_tb___024root___eval_react(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_react\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday34_decade_counter_tb___024root___eval_postponed(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_postponed\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday34_decade_counter_tb___024root____VbeforeTrig_h0d12b46b__0(Vday34_decade_counter_tb___024root* vlSelf, const char* __VeventDescription);
void Vday34_decade_counter_tb___024root____VbeforeTrig_h0d12b42c__0(Vday34_decade_counter_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday34_decade_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day34_decade_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day34_decade_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day34_decade_counter_tb__DOT__unnamedblk1__DOT__i;
    day34_decade_counter_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day34_decade_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day34_decade_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday34_decade_counter_tb___024root____VbeforeTrig_h0d12b46b__0(vlSelf, 
                                                                       "@(posedge day34_decade_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h0d12b46b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day34_decade_counter_tb.clk)", 
                                                             "tb/day34_decade_counter_tb.sv", 
                                                             16);
        day34_decade_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day34_decade_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb/day34_decade_counter_tb.sv", 
                                         17);
    vlSelfRef.day34_decade_counter_tb__DOT__rst = 0U;
    day34_decade_counter_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000023U, day34_decade_counter_tb__DOT__unnamedblk1__DOT__i)) {
        Vday34_decade_counter_tb___024root____VbeforeTrig_h0d12b42c__0(vlSelf, 
                                                                       "@(negedge day34_decade_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h0d12b42c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day34_decade_counter_tb.clk)", 
                                                             "tb/day34_decade_counter_tb.sv", 
                                                             19);
        vlSelfRef.day34_decade_counter_tb__DOT__exp 
            = VL_MODDIVS_III(32, ((IData)(1U) + vlSelfRef.day34_decade_counter_tb__DOT__exp), (IData)(0x0000000aU));
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/day34_decade_counter_tb.sv", 
                                             21);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day34_decade_counter_tb__DOT__q) 
                          != (0x0000000fU & vlSelfRef.day34_decade_counter_tb__DOT__exp))))) {
            vlSelfRef.day34_decade_counter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day34_decade_counter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] decade count (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        VL_WRITEF_NX("  count = %0d\n",1, '#',4,vlSelfRef.day34_decade_counter_tb__DOT__q);
        day34_decade_counter_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day34_decade_counter_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day34_decade_counter_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day34_decade_counter\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day34_decade_counter : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day34_decade_counter_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day34_decade_counter_tb.sv", 25, "");
    co_return;
}

VlCoroutine Vday34_decade_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day34_decade_counter_tb.sv", 
                                             8);
        vlSelfRef.day34_decade_counter_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__clk)));
    }
    co_return;
}

bool Vday34_decade_counter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday34_decade_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___trigger_anySet__act\n"); );
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

void Vday34_decade_counter_tb___024root___nba_sequent__TOP__0(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___nba_sequent__TOP__0\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((9U < (IData)(vlSelfRef.__Vsampled_TOP__day34_decade_counter_tb__DOT__q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day34_decade_counter_tb.sv:11: Assertion failed in %m: [SVA FAIL] a_range\n",3, 'M',vlSymsp->name(),"day34_decade_counter_tb.a_range", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day34_decade_counter_tb.sv", 11, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT___Vpast_2_1)) 
                                           | (0U == (IData)(vlSelfRef.__Vsampled_TOP__day34_decade_counter_tb__DOT__q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day34_decade_counter_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_wrap\n",3, 'M',vlSymsp->name(),"day34_decade_counter_tb.a_wrap", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day34_decade_counter_tb.sv", 12, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT___Vpast_4_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day34_decade_counter_tb__DOT__q) 
                                              == (0x0000000fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.day34_decade_counter_tb__DOT___Vpast_5_1)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day34_decade_counter_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_inc\n",3, 'M',vlSymsp->name(),"day34_decade_counter_tb.a_inc", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day34_decade_counter_tb.sv", 13, "");
                }
            }
        }
    }
    vlSelfRef.day34_decade_counter_tb__DOT___Vpast_2_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day34_decade_counter_tb__DOT__rst)) 
           & (9U == (IData)(vlSelfRef.__Vsampled_TOP__day34_decade_counter_tb__DOT__q)));
    vlSelfRef.day34_decade_counter_tb__DOT___Vpast_5_1 
        = vlSelfRef.__Vsampled_TOP__day34_decade_counter_tb__DOT__q;
    vlSelfRef.day34_decade_counter_tb__DOT___Vpast_4_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day34_decade_counter_tb__DOT__rst)) 
           & (9U != (IData)(vlSelfRef.__Vsampled_TOP__day34_decade_counter_tb__DOT__q)));
}

void Vday34_decade_counter_tb___024root___timing_ready(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___timing_ready\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0d12b46b__0.ready("@(posedge day34_decade_counter_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0d12b42c__0.ready("@(negedge day34_decade_counter_tb.clk)");
    }
}

void Vday34_decade_counter_tb___024root___timing_resume(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___timing_resume\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h0d12b46b__0.moveToResumeQueue(
                                                          "@(posedge day34_decade_counter_tb.clk)");
    vlSelfRef.__VtrigSched_h0d12b42c__0.moveToResumeQueue(
                                                          "@(negedge day34_decade_counter_tb.clk)");
    vlSelfRef.__VtrigSched_h0d12b46b__0.resume("@(posedge day34_decade_counter_tb.clk)");
    vlSelfRef.__VtrigSched_h0d12b42c__0.resume("@(negedge day34_decade_counter_tb.clk)");
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday34_decade_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday34_decade_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday34_decade_counter_tb___024root____VbeforeTrig_h0d12b46b__0(Vday34_decade_counter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root____VbeforeTrig_h0d12b46b__0\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day34_decade_counter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__clk__0 
        = vlSelfRef.day34_decade_counter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0d12b46b__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0d12b42c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday34_decade_counter_tb___024root____VbeforeTrig_h0d12b42c__0(Vday34_decade_counter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root____VbeforeTrig_h0d12b42c__0\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day34_decade_counter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day34_decade_counter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day34_decade_counter_tb__DOT__clk__0 
        = vlSelfRef.day34_decade_counter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0d12b46b__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0d12b42c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday34_decade_counter_tb___024root___eval_debug_assertions(Vday34_decade_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday34_decade_counter_tb___024root___eval_debug_assertions\n"); );
    Vday34_decade_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
