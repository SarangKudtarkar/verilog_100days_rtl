// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday46_mealy_seq_detector_tb.h for the primary calling header

#include "Vday46_mealy_seq_detector_tb__pch.h"

VlCoroutine Vday46_mealy_seq_detector_tb___024root___eval_initial__TOP__Vtiming__0(Vday46_mealy_seq_detector_tb___024root* vlSelf);
VlCoroutine Vday46_mealy_seq_detector_tb___024root___eval_initial__TOP__Vtiming__1(Vday46_mealy_seq_detector_tb___024root* vlSelf);

void Vday46_mealy_seq_detector_tb___024root___eval_initial(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_initial\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday46_mealy_seq_detector_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday46_mealy_seq_detector_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

extern const VlUnpacked<CData/*0:0*/, 8> Vday46_mealy_seq_detector_tb__ConstPool__TABLE_h07827a76_0;

void Vday46_mealy_seq_detector_tb___024root___eval_sample(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_sample\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__TABLE_h07827a76_0 = Vday46_mealy_seq_detector_tb__ConstPool__TABLE_h07827a76_0;
    vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.__Vsampled_TOP__day46_mealy_seq_detector_tb__DOT__in 
        = vlSelfRef.day46_mealy_seq_detector_tb__DOT__in;
    vlSelfRef.__Vsampled_TOP__day46_mealy_seq_detector_tb__DOT__rst 
        = vlSelfRef.day46_mealy_seq_detector_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday46_mealy_seq_detector_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday46_mealy_seq_detector_tb___024root___eval_ico(Vday46_mealy_seq_detector_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_ico\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday46_mealy_seq_detector_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday46_mealy_seq_detector_tb___024root___timing_ready(Vday46_mealy_seq_detector_tb___024root* vlSelf);
void Vday46_mealy_seq_detector_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday46_mealy_seq_detector_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday46_mealy_seq_detector_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday46_mealy_seq_detector_tb___024root___timing_resume(Vday46_mealy_seq_detector_tb___024root* vlSelf);

bool Vday46_mealy_seq_detector_tb___024root___eval_act(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_act\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day46_mealy_seq_detector_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day46_mealy_seq_detector_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day46_mealy_seq_detector_tb__DOT__clk__0 
            = vlSelfRef.day46_mealy_seq_detector_tb__DOT__clk;
    }
    Vday46_mealy_seq_detector_tb___024root___timing_ready(vlSelf);
    Vday46_mealy_seq_detector_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday46_mealy_seq_detector_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday46_mealy_seq_detector_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday46_mealy_seq_detector_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday46_mealy_seq_detector_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                        = (((IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__in) 
                            << 2U) | (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__dut__DOT__state));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday46_mealy_seq_detector_tb___024root___eval_inact(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_inact\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day46_mealy_seq_detector_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday46_mealy_seq_detector_tb___024root___nba_sequent__TOP__0(Vday46_mealy_seq_detector_tb___024root* vlSelf);
void Vday46_mealy_seq_detector_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday46_mealy_seq_detector_tb___024root___eval_nba(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_nba\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday46_mealy_seq_detector_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday46_mealy_seq_detector_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                        = (((IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__in) 
                            << 2U) | (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__dut__DOT__state));
                }
            }
        }
        Vday46_mealy_seq_detector_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday46_mealy_seq_detector_tb___024root___eval_obs(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_obs\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday46_mealy_seq_detector_tb___024root___eval_react(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_react\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday46_mealy_seq_detector_tb___024root___eval_postponed(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_postponed\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday46_mealy_seq_detector_tb___024root____VbeforeTrig_h4e098367__0(Vday46_mealy_seq_detector_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday46_mealy_seq_detector_tb___024root___eval_initial__TOP__Vtiming__0(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day46_mealy_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day46_mealy_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day46_mealy_seq_detector_tb__DOT__unnamedblk1__DOT__i;
    day46_mealy_seq_detector_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ day46_mealy_seq_detector_tb__DOT__unnamedblk2__DOT__i;
    day46_mealy_seq_detector_tb__DOT__unnamedblk2__DOT__i = 0;
    // Body
    day46_mealy_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day46_mealy_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday46_mealy_seq_detector_tb___024root____VbeforeTrig_h4e098367__0(vlSelf, 
                                                                           "@(negedge day46_mealy_seq_detector_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h4e098367__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day46_mealy_seq_detector_tb.clk)", 
                                                             "tb/day46_mealy_seq_detector_tb.sv", 
                                                             27);
        day46_mealy_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day46_mealy_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day46_mealy_seq_detector_tb__DOT__rst = 0U;
    day46_mealy_seq_detector_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000018U, day46_mealy_seq_detector_tb__DOT__unnamedblk1__DOT__i)) {
        Vday46_mealy_seq_detector_tb___024root____VbeforeTrig_h4e098367__0(vlSelf, 
                                                                           "@(negedge day46_mealy_seq_detector_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h4e098367__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day46_mealy_seq_detector_tb.clk)", 
                                                             "tb/day46_mealy_seq_detector_tb.sv", 
                                                             29);
        vlSelfRef.day46_mealy_seq_detector_tb__DOT__in 
            = ((0x17U >= (0x0000001fU & ((IData)(0x17U) 
                                         - day46_mealy_seq_detector_tb__DOT__unnamedblk1__DOT__i))) 
               && (1U & (0x00cbc538U >> (0x0000001fU 
                                         & ((IData)(0x17U) 
                                            - day46_mealy_seq_detector_tb__DOT__unnamedblk1__DOT__i)))));
        day46_mealy_seq_detector_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day46_mealy_seq_detector_tb__DOT__unnamedblk1__DOT__i);
    }
    day46_mealy_seq_detector_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000190U, day46_mealy_seq_detector_tb__DOT__unnamedblk2__DOT__i)) {
        Vday46_mealy_seq_detector_tb___024root____VbeforeTrig_h4e098367__0(vlSelf, 
                                                                           "@(negedge day46_mealy_seq_detector_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h4e098367__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day46_mealy_seq_detector_tb.clk)", 
                                                             "tb/day46_mealy_seq_detector_tb.sv", 
                                                             30);
        vlSelfRef.day46_mealy_seq_detector_tb__DOT__in 
            = (1U & VL_RANDOM_I());
        day46_mealy_seq_detector_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + day46_mealy_seq_detector_tb__DOT__unnamedblk2__DOT__i);
    }
    Vday46_mealy_seq_detector_tb___024root____VbeforeTrig_h4e098367__0(vlSelf, 
                                                                       "@(negedge day46_mealy_seq_detector_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4e098367__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day46_mealy_seq_detector_tb.clk)", 
                                                         "tb/day46_mealy_seq_detector_tb.sv", 
                                                         31);
    VL_WRITEF_NX("  detections = %0d\n",1, '~',32,vlSelfRef.day46_mealy_seq_detector_tb__DOT__n_det);
    if (VL_UNLIKELY((VL_GTES_III(32, 0x00000014U, vlSelfRef.day46_mealy_seq_detector_tb__DOT__n_det)))) {
        vlSelfRef.day46_mealy_seq_detector_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day46_mealy_seq_detector_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] sequence detected several times (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if ((0U == vlSelfRef.day46_mealy_seq_detector_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day46_mealy_seq_detector\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day46_mealy_seq_detector : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day46_mealy_seq_detector_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day46_mealy_seq_detector_tb.sv", 34, "");
    co_return;
}

VlCoroutine Vday46_mealy_seq_detector_tb___024root___eval_initial__TOP__Vtiming__1(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day46_mealy_seq_detector_tb.sv", 
                                             9);
        vlSelfRef.day46_mealy_seq_detector_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__clk)));
    }
    co_return;
}

bool Vday46_mealy_seq_detector_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday46_mealy_seq_detector_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 8> Vday46_mealy_seq_detector_tb__ConstPool__TABLE_he2e60461_0;

void Vday46_mealy_seq_detector_tb___024root___nba_sequent__TOP__0(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___nba_sequent__TOP__0\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__TABLE_h07827a76_0
                                                      [vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0])) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day46_mealy_seq_detector_tb__DOT__in) 
                                              == (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT___Vpast_1_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day46_mealy_seq_detector_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_equal_bits\n",3, 'M',vlSymsp->name(),"day46_mealy_seq_detector_tb.a_equal_bits", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day46_mealy_seq_detector_tb.sv", 13, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT___Vpast_3_1)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__TABLE_h07827a76_0
                                                        [vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0])))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day46_mealy_seq_detector_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_non_overlap\n",3, 'M',vlSymsp->name(),"day46_mealy_seq_detector_tb.a_non_overlap", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day46_mealy_seq_detector_tb.sv", 14, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__rst)))) {
        vlSelfRef.day46_mealy_seq_detector_tb__DOT__exp_y 
            = ((IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__pv) 
               & ((IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__prev) 
                  == (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__in)));
        if (Vday46_mealy_seq_detector_tb__ConstPool__TABLE_h07827a76_0
            [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0]) {
            vlSelfRef.day46_mealy_seq_detector_tb__DOT__n_det 
                = ((IData)(1U) + vlSelfRef.day46_mealy_seq_detector_tb__DOT__n_det);
        }
        if (VL_UNLIKELY(((Vday46_mealy_seq_detector_tb__ConstPool__TABLE_h07827a76_0
                          [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                          != (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__exp_y))))) {
            vlSelfRef.day46_mealy_seq_detector_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day46_mealy_seq_detector_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] Mealy output (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 0x00000018U, vlSelfRef.day46_mealy_seq_detector_tb__DOT__cyc)))) {
            VL_WRITEF_NX("  in=%b  y=%b\n",2, '#',1,vlSelfRef.day46_mealy_seq_detector_tb__DOT__in
                         , '#',1,Vday46_mealy_seq_detector_tb__ConstPool__TABLE_h07827a76_0
                         [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0]);
        }
        vlSelfRef.day46_mealy_seq_detector_tb__DOT__cyc 
            = ((IData)(1U) + vlSelfRef.day46_mealy_seq_detector_tb__DOT__cyc);
        if (vlSelfRef.day46_mealy_seq_detector_tb__DOT__exp_y) {
            vlSelfRef.day46_mealy_seq_detector_tb__DOT__pv = 0U;
        } else {
            vlSelfRef.day46_mealy_seq_detector_tb__DOT__pv = 1U;
            vlSelfRef.day46_mealy_seq_detector_tb__DOT__prev 
                = vlSelfRef.day46_mealy_seq_detector_tb__DOT__in;
        }
    }
    vlSelfRef.day46_mealy_seq_detector_tb__DOT__dut__DOT__state 
        = ((IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__rst)
            ? 0U : Vday46_mealy_seq_detector_tb__ConstPool__TABLE_he2e60461_0
           [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0]);
    vlSelfRef.day46_mealy_seq_detector_tb__DOT___Vpast_1_1 
        = vlSelfRef.__Vsampled_TOP__day46_mealy_seq_detector_tb__DOT__in;
    vlSelfRef.day46_mealy_seq_detector_tb__DOT___Vpast_3_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day46_mealy_seq_detector_tb__DOT__rst)) 
           & vlSelfRef.__Vsampled_TOP__TABLE_h07827a76_0
           [vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0]);
}

void Vday46_mealy_seq_detector_tb___024root___timing_ready(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___timing_ready\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4e098367__0.ready("@(negedge day46_mealy_seq_detector_tb.clk)");
    }
}

void Vday46_mealy_seq_detector_tb___024root___timing_resume(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___timing_resume\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h4e098367__0.moveToResumeQueue(
                                                          "@(negedge day46_mealy_seq_detector_tb.clk)");
    vlSelfRef.__VtrigSched_h4e098367__0.resume("@(negedge day46_mealy_seq_detector_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday46_mealy_seq_detector_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday46_mealy_seq_detector_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday46_mealy_seq_detector_tb___024root____VbeforeTrig_h4e098367__0(Vday46_mealy_seq_detector_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root____VbeforeTrig_h4e098367__0\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day46_mealy_seq_detector_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day46_mealy_seq_detector_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day46_mealy_seq_detector_tb__DOT__clk__0 
        = vlSelfRef.day46_mealy_seq_detector_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4e098367__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4e098367__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4e098367__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4e098367__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday46_mealy_seq_detector_tb___024root___eval_debug_assertions(Vday46_mealy_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday46_mealy_seq_detector_tb___024root___eval_debug_assertions\n"); );
    Vday46_mealy_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
