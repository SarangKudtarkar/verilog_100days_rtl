// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday25_traffic_light_tb.h for the primary calling header

#include "Vday25_traffic_light_tb__pch.h"

VlCoroutine Vday25_traffic_light_tb___024root___eval_initial__TOP__Vtiming__0(Vday25_traffic_light_tb___024root* vlSelf);
VlCoroutine Vday25_traffic_light_tb___024root___eval_initial__TOP__Vtiming__1(Vday25_traffic_light_tb___024root* vlSelf);

void Vday25_traffic_light_tb___024root___eval_initial(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_initial\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday25_traffic_light_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday25_traffic_light_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday25_traffic_light_tb___024root___eval_sample(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_sample\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state 
        = vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state;
    vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__rst 
        = vlSelfRef.day25_traffic_light_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday25_traffic_light_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday25_traffic_light_tb___024root___eval_ico(Vday25_traffic_light_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_ico\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday25_traffic_light_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday25_traffic_light_tb___024root___timing_ready(Vday25_traffic_light_tb___024root* vlSelf);
void Vday25_traffic_light_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday25_traffic_light_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday25_traffic_light_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday25_traffic_light_tb___024root___timing_resume(Vday25_traffic_light_tb___024root* vlSelf);

bool Vday25_traffic_light_tb___024root___eval_act(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_act\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.day25_traffic_light_tb__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day25_traffic_light_tb__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day25_traffic_light_tb__DOT__clk__0 
            = vlSelfRef.day25_traffic_light_tb__DOT__clk;
    }
    Vday25_traffic_light_tb___024root___timing_ready(vlSelf);
    Vday25_traffic_light_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday25_traffic_light_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday25_traffic_light_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday25_traffic_light_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday25_traffic_light_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday25_traffic_light_tb___024root___eval_inact(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_inact\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day25_traffic_light_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday25_traffic_light_tb___024root___nba_sequent__TOP__0(Vday25_traffic_light_tb___024root* vlSelf);
void Vday25_traffic_light_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday25_traffic_light_tb___024root___eval_nba(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_nba\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday25_traffic_light_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday25_traffic_light_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday25_traffic_light_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday25_traffic_light_tb___024root___eval_obs(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_obs\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday25_traffic_light_tb___024root___eval_react(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_react\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday25_traffic_light_tb___024root___eval_postponed(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_postponed\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday25_traffic_light_tb___024root____VbeforeTrig_hc3ba543c__0(Vday25_traffic_light_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday25_traffic_light_tb___024root___eval_initial__TOP__Vtiming__0(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day25_traffic_light_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day25_traffic_light_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day25_traffic_light_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    day25_traffic_light_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    day25_traffic_light_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day25_traffic_light_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday25_traffic_light_tb___024root____VbeforeTrig_hc3ba543c__0(vlSelf, 
                                                                      "@(posedge day25_traffic_light_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc3ba543c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day25_traffic_light_tb.clk)", 
                                                             "tb/day25_traffic_light_tb.sv", 
                                                             37);
        day25_traffic_light_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day25_traffic_light_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/day25_traffic_light_tb.sv", 
                                         38);
    vlSelfRef.day25_traffic_light_tb__DOT__rst = 0U;
    day25_traffic_light_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000027U;
    while (VL_LTS_III(32, 0U, day25_traffic_light_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vday25_traffic_light_tb___024root____VbeforeTrig_hc3ba543c__0(vlSelf, 
                                                                      "@(posedge day25_traffic_light_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc3ba543c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day25_traffic_light_tb.clk)", 
                                                             "tb/day25_traffic_light_tb.sv", 
                                                             39);
        day25_traffic_light_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (day25_traffic_light_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if ((0U == vlSelfRef.day25_traffic_light_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day25_traffic_light\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day25_traffic_light : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day25_traffic_light_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day25_traffic_light_tb.sv", 40, "");
    co_return;
}

VlCoroutine Vday25_traffic_light_tb___024root___eval_initial__TOP__Vtiming__1(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day25_traffic_light_tb.sv", 
                                             10);
        vlSelfRef.day25_traffic_light_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day25_traffic_light_tb__DOT__clk)));
    }
    co_return;
}

bool Vday25_traffic_light_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday25_traffic_light_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___trigger_anySet__act\n"); );
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

void Vday25_traffic_light_tb___024root___nba_sequent__TOP__0(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___nba_sequent__TOP__0\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__day25_traffic_light_tb__DOT__dut__DOT__state;
    __Vdly__day25_traffic_light_tb__DOT__dut__DOT__state = 0;
    CData/*7:0*/ __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer;
    __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day25_traffic_light_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((0U 
                                                         == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)) 
                                                        << 2U) 
                                                       | (((2U 
                                                            == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)) 
                                                           << 1U) 
                                                          | (1U 
                                                             == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day25_traffic_light_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_onehot\n",3, 'M',vlSymsp->name(),"day25_traffic_light_tb.a_onehot", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day25_traffic_light_tb.sv", 14, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day25_traffic_light_tb__DOT___Vpast_2_1)) 
                                           | ((0U == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)) 
                                              | (1U 
                                                 == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day25_traffic_light_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_r_next\n",3, 'M',vlSymsp->name(),"day25_traffic_light_tb.a_r_next", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day25_traffic_light_tb.sv", 15, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day25_traffic_light_tb__DOT___Vpast_4_1)) 
                                           | ((1U == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day25_traffic_light_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_g_next\n",3, 'M',vlSymsp->name(),"day25_traffic_light_tb.a_g_next", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day25_traffic_light_tb.sv", 16, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day25_traffic_light_tb__DOT___Vpast_6_1)) 
                                           | ((2U == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)) 
                                              | (0U 
                                                 == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day25_traffic_light_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_y_next\n",3, 'M',vlSymsp->name(),"day25_traffic_light_tb.a_y_next", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day25_traffic_light_tb.sv", 17, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.day25_traffic_light_tb__DOT___Vpast_10_1) 
                                               & (2U 
                                                  != (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)))) 
                                           | (((0U 
                                                == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)) 
                                               & (IData)(vlSelfRef.day25_traffic_light_tb__DOT___Vpast_10_2)) 
                                              & (~ (IData)(vlSelfRef.day25_traffic_light_tb__DOT___Vpast_10_3))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day25_traffic_light_tb.sv:19: Assertion failed in %m: [SVA FAIL] a_y_len\n",3, 'M',vlSymsp->name(),"day25_traffic_light_tb.a_y_len", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day25_traffic_light_tb.sv", 19, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_1) 
                                               & (1U 
                                                  != (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)))) 
                                           | (((2U 
                                                == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)) 
                                               & (IData)(vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_6)) 
                                              & (~ (IData)(vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_7))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day25_traffic_light_tb.sv:18: Assertion failed in %m: [SVA FAIL] a_g_len\n",3, 'M',vlSymsp->name(),"day25_traffic_light_tb.a_g_len", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day25_traffic_light_tb.sv", 18, "");
                }
            }
        }
    }
    __Vdly__day25_traffic_light_tb__DOT__dut__DOT__state 
        = vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state;
    __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer 
        = vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__timer;
    if ((1U & (~ (IData)(vlSelfRef.day25_traffic_light_tb__DOT__rst)))) {
        vlSelfRef.day25_traffic_light_tb__DOT__cycles 
            = ((IData)(1U) + vlSelfRef.day25_traffic_light_tb__DOT__cycles);
        if (((((0U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state)) 
               << 2U) | (((2U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state)) 
                          << 1U) | (1U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state)))) 
             == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__prev))) {
            vlSelfRef.day25_traffic_light_tb__DOT__run_len 
                = ((IData)(1U) + vlSelfRef.day25_traffic_light_tb__DOT__run_len);
        } else {
            if ((4U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__prev))) {
                if (VL_UNLIKELY(((5U != vlSelfRef.day25_traffic_light_tb__DOT__run_len)))) {
                    vlSelfRef.day25_traffic_light_tb__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.day25_traffic_light_tb__DOT__errors);
                    VL_WRITEF_NX("  [FAIL] red duration (t=%0t)\n",2, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                }
            }
            if ((1U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__prev))) {
                if (VL_UNLIKELY(((6U != vlSelfRef.day25_traffic_light_tb__DOT__run_len)))) {
                    vlSelfRef.day25_traffic_light_tb__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.day25_traffic_light_tb__DOT__errors);
                    VL_WRITEF_NX("  [FAIL] green duration (t=%0t)\n",2, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                }
            }
            if ((2U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__prev))) {
                if (VL_UNLIKELY(((2U != vlSelfRef.day25_traffic_light_tb__DOT__run_len)))) {
                    vlSelfRef.day25_traffic_light_tb__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.day25_traffic_light_tb__DOT__errors);
                    VL_WRITEF_NX("  [FAIL] yellow duration (t=%0t)\n",2, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                }
            }
            if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.day25_traffic_light_tb__DOT__prev))))) {
                VL_WRITEF_NX("  phase %s lasted %0d cycles\n",2
                             , '#',48,((4U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__prev))
                                        ? 0x0000000000524544ULL
                                        : ((1U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__prev))
                                            ? 0x000000475245454eULL
                                            : 0x000059454c4c4f57ULL))
                             , '~',32,vlSelfRef.day25_traffic_light_tb__DOT__run_len);
            }
            vlSelfRef.day25_traffic_light_tb__DOT__run_len = 1U;
            vlSelfRef.day25_traffic_light_tb__DOT__prev 
                = (((0U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state)) 
                    << 2U) | (((2U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state)) 
                               << 1U) | (1U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state))));
        }
    }
    if (vlSelfRef.day25_traffic_light_tb__DOT__rst) {
        __Vdly__day25_traffic_light_tb__DOT__dut__DOT__state = 0U;
        __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer = 0U;
    } else if ((0U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state))) {
        if ((4U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__timer))) {
            __Vdly__day25_traffic_light_tb__DOT__dut__DOT__state = 1U;
            __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer = 0U;
        } else {
            __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__timer)));
        }
    } else if ((1U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state))) {
        if ((5U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__timer))) {
            __Vdly__day25_traffic_light_tb__DOT__dut__DOT__state = 2U;
            __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer = 0U;
        } else {
            __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__timer)));
        }
    } else if ((2U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__timer))) {
            __Vdly__day25_traffic_light_tb__DOT__dut__DOT__state = 0U;
            __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer = 0U;
        } else {
            __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__timer)));
        }
    } else {
        __Vdly__day25_traffic_light_tb__DOT__dut__DOT__state = 0U;
        __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer = 0U;
    }
    vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__timer 
        = __Vdly__day25_traffic_light_tb__DOT__dut__DOT__timer;
    vlSelfRef.day25_traffic_light_tb__DOT__dut__DOT__state 
        = __Vdly__day25_traffic_light_tb__DOT__dut__DOT__state;
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_2_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__rst)) 
           & (0U == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)));
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_4_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__rst)) 
           & (1U == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)));
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_6_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__rst)) 
           & (2U == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state)));
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_10_3 
        = vlSelfRef.day25_traffic_light_tb__DOT___Vpast_10_2;
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_7 
        = vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_6;
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_10_2 
        = vlSelfRef.day25_traffic_light_tb__DOT___Vpast_10_1;
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_6 
        = vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_5;
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_10_1 
        = (2U == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state));
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_5 
        = vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_4;
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_4 
        = vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_3;
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_3 
        = vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_2;
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_2 
        = vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_1;
    vlSelfRef.day25_traffic_light_tb__DOT___Vpast_8_1 
        = (1U == (IData)(vlSelfRef.__Vsampled_TOP__day25_traffic_light_tb__DOT__dut__DOT__state));
}

void Vday25_traffic_light_tb___024root___timing_ready(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___timing_ready\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc3ba543c__0.ready("@(posedge day25_traffic_light_tb.clk)");
    }
}

void Vday25_traffic_light_tb___024root___timing_resume(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___timing_resume\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc3ba543c__0.moveToResumeQueue(
                                                          "@(posedge day25_traffic_light_tb.clk)");
    vlSelfRef.__VtrigSched_hc3ba543c__0.resume("@(posedge day25_traffic_light_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday25_traffic_light_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday25_traffic_light_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday25_traffic_light_tb___024root____VbeforeTrig_hc3ba543c__0(Vday25_traffic_light_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root____VbeforeTrig_hc3ba543c__0\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.day25_traffic_light_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day25_traffic_light_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__day25_traffic_light_tb__DOT__clk__0 
        = vlSelfRef.day25_traffic_light_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc3ba543c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc3ba543c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday25_traffic_light_tb___024root___eval_debug_assertions(Vday25_traffic_light_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday25_traffic_light_tb___024root___eval_debug_assertions\n"); );
    Vday25_traffic_light_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
