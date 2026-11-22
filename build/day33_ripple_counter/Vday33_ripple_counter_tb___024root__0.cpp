// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday33_ripple_counter_tb.h for the primary calling header

#include "Vday33_ripple_counter_tb__pch.h"

VlCoroutine Vday33_ripple_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday33_ripple_counter_tb___024root* vlSelf);
VlCoroutine Vday33_ripple_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday33_ripple_counter_tb___024root* vlSelf);

void Vday33_ripple_counter_tb___024root___eval_initial(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_initial\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday33_ripple_counter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday33_ripple_counter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday33_ripple_counter_tb___024root___eval_sample(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_sample\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day33_ripple_counter_tb__DOT__q 
        = vlSelfRef.day33_ripple_counter_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__day33_ripple_counter_tb__DOT__rst 
        = vlSelfRef.day33_ripple_counter_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday33_ripple_counter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday33_ripple_counter_tb___024root___eval_ico(Vday33_ripple_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_ico\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday33_ripple_counter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday33_ripple_counter_tb___024root___timing_ready(Vday33_ripple_counter_tb___024root* vlSelf);
void Vday33_ripple_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday33_ripple_counter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday33_ripple_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday33_ripple_counter_tb___024root___timing_resume(Vday33_ripple_counter_tb___024root* vlSelf);

bool Vday33_ripple_counter_tb___024root___eval_act(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_act\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 6U) 
                                                          | ((((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__clk)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__clk__0)) 
                                                              << 5U) 
                                                             | (((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t0__q)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t0__q__0)) 
                                                                << 4U))) 
                                                         | (((((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t1__q)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t1__q__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.day33_ripple_counter_tb__DOT__rst) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__rst__0))) 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t2__q)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t2__q__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.day33_ripple_counter_tb__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__clk__0 
            = vlSelfRef.day33_ripple_counter_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t2__q__0 
            = vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t2__q;
        vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__rst__0 
            = vlSelfRef.day33_ripple_counter_tb__DOT__rst;
        vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t1__q__0 
            = vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t1__q;
        vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t0__q__0 
            = vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t0__q;
    }
    Vday33_ripple_counter_tb___024root___timing_ready(vlSelf);
    Vday33_ripple_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday33_ripple_counter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday33_ripple_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday33_ripple_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday33_ripple_counter_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday33_ripple_counter_tb___024root___eval_inact(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_inact\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day33_ripple_counter_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday33_ripple_counter_tb___024root___nba_sequent__TOP__4(Vday33_ripple_counter_tb___024root* vlSelf);
void Vday33_ripple_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday33_ripple_counter_tb___024root___eval_nba(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_nba\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday33_ripple_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t3__q 
                        = (1U & ((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__rst)) 
                                 & (~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t3__q))));
                }
            }
            if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t2__q 
                        = (1U & ((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__rst)) 
                                 & (~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t2__q))));
                }
            }
            if ((0x0000000000000014ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__2
                    vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t1__q 
                        = (1U & ((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__rst)) 
                                 & (~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t1__q))));
                }
            }
            if ((0x0000000000000024ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__3
                    vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t0__q 
                        = (1U & ((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__rst)) 
                                 & (~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t0__q))));
                }
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday33_ripple_counter_tb___024root___nba_sequent__TOP__4(vlSelf);
            }
            if ((0x000000000000003eULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_comb__TOP__0
                    vlSelfRef.day33_ripple_counter_tb__DOT__q 
                        = ((((IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t3__q) 
                             << 3U) | ((IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t2__q) 
                                       << 2U)) | (((IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t1__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__dut__DOT____Vcellout__t0__q)));
                }
            }
        }
        Vday33_ripple_counter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday33_ripple_counter_tb___024root___eval_obs(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_obs\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday33_ripple_counter_tb___024root___eval_react(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_react\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday33_ripple_counter_tb___024root___eval_postponed(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_postponed\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday33_ripple_counter_tb___024root____VbeforeTrig_hd55a22e2__0(Vday33_ripple_counter_tb___024root* vlSelf, const char* __VeventDescription);
void Vday33_ripple_counter_tb___024root____VbeforeTrig_hd55a21a1__0(Vday33_ripple_counter_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday33_ripple_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ day33_ripple_counter_tb__DOT__exp;
    day33_ripple_counter_tb__DOT__exp = 0;
    IData/*31:0*/ day33_ripple_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day33_ripple_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day33_ripple_counter_tb__DOT__unnamedblk1__DOT__i;
    day33_ripple_counter_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day33_ripple_counter_tb__DOT__exp = 0U;
    day33_ripple_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day33_ripple_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday33_ripple_counter_tb___024root____VbeforeTrig_hd55a22e2__0(vlSelf, 
                                                                       "@(posedge day33_ripple_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd55a22e2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day33_ripple_counter_tb.clk)", 
                                                             "tb/day33_ripple_counter_tb.sv", 
                                                             16);
        day33_ripple_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day33_ripple_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "tb/day33_ripple_counter_tb.sv", 
                                         17);
    vlSelfRef.day33_ripple_counter_tb__DOT__rst = 0U;
    day33_ripple_counter_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000028U, day33_ripple_counter_tb__DOT__unnamedblk1__DOT__i)) {
        Vday33_ripple_counter_tb___024root____VbeforeTrig_hd55a21a1__0(vlSelf, 
                                                                       "@(negedge day33_ripple_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd55a21a1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day33_ripple_counter_tb.clk)", 
                                                             "tb/day33_ripple_counter_tb.sv", 
                                                             19);
        day33_ripple_counter_tb__DOT__exp = (0x0000000fU 
                                             & ((IData)(1U) 
                                                + (IData)(day33_ripple_counter_tb__DOT__exp)));
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/day33_ripple_counter_tb.sv", 
                                             21);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day33_ripple_counter_tb__DOT__q) 
                          != (IData)(day33_ripple_counter_tb__DOT__exp))))) {
            vlSelfRef.day33_ripple_counter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day33_ripple_counter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ripple count (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 0x00000014U, day33_ripple_counter_tb__DOT__unnamedblk1__DOT__i)))) {
            VL_WRITEF_NX("  count = %2d (%04b)\n",2
                         , '#',4,vlSelfRef.day33_ripple_counter_tb__DOT__q
                         , '#',4,(IData)(vlSelfRef.day33_ripple_counter_tb__DOT__q));
        }
        day33_ripple_counter_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day33_ripple_counter_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day33_ripple_counter_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day33_ripple_counter\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day33_ripple_counter : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day33_ripple_counter_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day33_ripple_counter_tb.sv", 25, "");
    co_return;
}

VlCoroutine Vday33_ripple_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day33_ripple_counter_tb.sv", 
                                             8);
        vlSelfRef.day33_ripple_counter_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__clk)));
    }
    co_return;
}

bool Vday33_ripple_counter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday33_ripple_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___trigger_anySet__act\n"); );
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

void Vday33_ripple_counter_tb___024root___nba_sequent__TOP__4(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___nba_sequent__TOP__4\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT___Vpast_1_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day33_ripple_counter_tb__DOT__q) 
                                              == (0x0000000fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.day33_ripple_counter_tb__DOT___Vpast_2_1)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day33_ripple_counter_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_count\n",3, 'M',vlSymsp->name(),"day33_ripple_counter_tb.a_count", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day33_ripple_counter_tb.sv", 12, "");
                }
            }
        }
    }
    vlSelfRef.day33_ripple_counter_tb__DOT___Vpast_1_1 
        = (1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__day33_ripple_counter_tb__DOT__rst)));
    vlSelfRef.day33_ripple_counter_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day33_ripple_counter_tb__DOT__q;
}

void Vday33_ripple_counter_tb___024root___timing_ready(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___timing_ready\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd55a22e2__0.ready("@(posedge day33_ripple_counter_tb.clk)");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd55a21a1__0.ready("@(negedge day33_ripple_counter_tb.clk)");
    }
}

void Vday33_ripple_counter_tb___024root___timing_resume(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___timing_resume\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hd55a22e2__0.moveToResumeQueue(
                                                          "@(posedge day33_ripple_counter_tb.clk)");
    vlSelfRef.__VtrigSched_hd55a21a1__0.moveToResumeQueue(
                                                          "@(negedge day33_ripple_counter_tb.clk)");
    vlSelfRef.__VtrigSched_hd55a22e2__0.resume("@(posedge day33_ripple_counter_tb.clk)");
    vlSelfRef.__VtrigSched_hd55a21a1__0.resume("@(negedge day33_ripple_counter_tb.clk)");
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday33_ripple_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday33_ripple_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday33_ripple_counter_tb___024root____VbeforeTrig_hd55a22e2__0(Vday33_ripple_counter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root____VbeforeTrig_hd55a22e2__0\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__clk__0)) 
                                   << 5U) | ((IData)(vlSelfRef.day33_ripple_counter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__clk__0 
        = vlSelfRef.day33_ripple_counter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd55a22e2__0.ready(__VeventDescription);
    }
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd55a21a1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday33_ripple_counter_tb___024root____VbeforeTrig_hd55a21a1__0(Vday33_ripple_counter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root____VbeforeTrig_hd55a21a1__0\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day33_ripple_counter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__clk__0)) 
                                   << 5U) | ((IData)(vlSelfRef.day33_ripple_counter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day33_ripple_counter_tb__DOT__clk__0 
        = vlSelfRef.day33_ripple_counter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd55a22e2__0.ready(__VeventDescription);
    }
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd55a21a1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday33_ripple_counter_tb___024root___eval_debug_assertions(Vday33_ripple_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday33_ripple_counter_tb___024root___eval_debug_assertions\n"); );
    Vday33_ripple_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
