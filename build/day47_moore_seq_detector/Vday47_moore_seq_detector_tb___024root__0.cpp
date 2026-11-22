// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday47_moore_seq_detector_tb.h for the primary calling header

#include "Vday47_moore_seq_detector_tb__pch.h"

VlCoroutine Vday47_moore_seq_detector_tb___024root___eval_initial__TOP__Vtiming__0(Vday47_moore_seq_detector_tb___024root* vlSelf);
VlCoroutine Vday47_moore_seq_detector_tb___024root___eval_initial__TOP__Vtiming__1(Vday47_moore_seq_detector_tb___024root* vlSelf);

void Vday47_moore_seq_detector_tb___024root___eval_initial(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_initial\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday47_moore_seq_detector_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday47_moore_seq_detector_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday47_moore_seq_detector_tb___024root___eval_sample(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_sample\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day47_moore_seq_detector_tb__DOT__dut__DOT__state 
        = vlSelfRef.day47_moore_seq_detector_tb__DOT__dut__DOT__state;
    vlSelfRef.__Vsampled_TOP__day47_moore_seq_detector_tb__DOT__in 
        = vlSelfRef.day47_moore_seq_detector_tb__DOT__in;
    vlSelfRef.__Vsampled_TOP__day47_moore_seq_detector_tb__DOT__rst 
        = vlSelfRef.day47_moore_seq_detector_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday47_moore_seq_detector_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday47_moore_seq_detector_tb___024root___eval_ico(Vday47_moore_seq_detector_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_ico\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday47_moore_seq_detector_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday47_moore_seq_detector_tb___024root___timing_ready(Vday47_moore_seq_detector_tb___024root* vlSelf);
void Vday47_moore_seq_detector_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday47_moore_seq_detector_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday47_moore_seq_detector_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday47_moore_seq_detector_tb___024root___timing_resume(Vday47_moore_seq_detector_tb___024root* vlSelf);

bool Vday47_moore_seq_detector_tb___024root___eval_act(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_act\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day47_moore_seq_detector_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day47_moore_seq_detector_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day47_moore_seq_detector_tb__DOT__clk__0 
            = vlSelfRef.day47_moore_seq_detector_tb__DOT__clk;
    }
    Vday47_moore_seq_detector_tb___024root___timing_ready(vlSelf);
    Vday47_moore_seq_detector_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday47_moore_seq_detector_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday47_moore_seq_detector_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday47_moore_seq_detector_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday47_moore_seq_detector_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday47_moore_seq_detector_tb___024root___eval_inact(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_inact\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day47_moore_seq_detector_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday47_moore_seq_detector_tb___024root___nba_sequent__TOP__0(Vday47_moore_seq_detector_tb___024root* vlSelf);
void Vday47_moore_seq_detector_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday47_moore_seq_detector_tb___024root___eval_nba(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_nba\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday47_moore_seq_detector_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday47_moore_seq_detector_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday47_moore_seq_detector_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday47_moore_seq_detector_tb___024root___eval_obs(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_obs\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday47_moore_seq_detector_tb___024root___eval_react(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_react\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday47_moore_seq_detector_tb___024root___eval_postponed(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_postponed\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday47_moore_seq_detector_tb___024root____VbeforeTrig_hf9bf4da7__0(Vday47_moore_seq_detector_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday47_moore_seq_detector_tb___024root___eval_initial__TOP__Vtiming__0(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day47_moore_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day47_moore_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day47_moore_seq_detector_tb__DOT__unnamedblk1__DOT__i;
    day47_moore_seq_detector_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ day47_moore_seq_detector_tb__DOT__unnamedblk2__DOT__i;
    day47_moore_seq_detector_tb__DOT__unnamedblk2__DOT__i = 0;
    // Body
    day47_moore_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day47_moore_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday47_moore_seq_detector_tb___024root____VbeforeTrig_hf9bf4da7__0(vlSelf, 
                                                                           "@(negedge day47_moore_seq_detector_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hf9bf4da7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day47_moore_seq_detector_tb.clk)", 
                                                             "tb/day47_moore_seq_detector_tb.sv", 
                                                             27);
        day47_moore_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day47_moore_seq_detector_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day47_moore_seq_detector_tb__DOT__rst = 0U;
    day47_moore_seq_detector_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000018U, day47_moore_seq_detector_tb__DOT__unnamedblk1__DOT__i)) {
        Vday47_moore_seq_detector_tb___024root____VbeforeTrig_hf9bf4da7__0(vlSelf, 
                                                                           "@(negedge day47_moore_seq_detector_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hf9bf4da7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day47_moore_seq_detector_tb.clk)", 
                                                             "tb/day47_moore_seq_detector_tb.sv", 
                                                             29);
        vlSelfRef.day47_moore_seq_detector_tb__DOT__in 
            = ((0x17U >= (0x0000001fU & ((IData)(0x17U) 
                                         - day47_moore_seq_detector_tb__DOT__unnamedblk1__DOT__i))) 
               && (1U & (0x00cbc538U >> (0x0000001fU 
                                         & ((IData)(0x17U) 
                                            - day47_moore_seq_detector_tb__DOT__unnamedblk1__DOT__i)))));
        day47_moore_seq_detector_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day47_moore_seq_detector_tb__DOT__unnamedblk1__DOT__i);
    }
    day47_moore_seq_detector_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000190U, day47_moore_seq_detector_tb__DOT__unnamedblk2__DOT__i)) {
        Vday47_moore_seq_detector_tb___024root____VbeforeTrig_hf9bf4da7__0(vlSelf, 
                                                                           "@(negedge day47_moore_seq_detector_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hf9bf4da7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day47_moore_seq_detector_tb.clk)", 
                                                             "tb/day47_moore_seq_detector_tb.sv", 
                                                             30);
        vlSelfRef.day47_moore_seq_detector_tb__DOT__in 
            = (1U & VL_RANDOM_I());
        day47_moore_seq_detector_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + day47_moore_seq_detector_tb__DOT__unnamedblk2__DOT__i);
    }
    Vday47_moore_seq_detector_tb___024root____VbeforeTrig_hf9bf4da7__0(vlSelf, 
                                                                       "@(negedge day47_moore_seq_detector_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hf9bf4da7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day47_moore_seq_detector_tb.clk)", 
                                                         "tb/day47_moore_seq_detector_tb.sv", 
                                                         31);
    VL_WRITEF_NX("  detections = %0d\n",1, '~',32,vlSelfRef.day47_moore_seq_detector_tb__DOT__n_det);
    if (VL_UNLIKELY((VL_GTES_III(32, 0x00000014U, vlSelfRef.day47_moore_seq_detector_tb__DOT__n_det)))) {
        vlSelfRef.day47_moore_seq_detector_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day47_moore_seq_detector_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] sequence detected several times (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if ((0U == vlSelfRef.day47_moore_seq_detector_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day47_moore_seq_detector\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day47_moore_seq_detector : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day47_moore_seq_detector_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day47_moore_seq_detector_tb.sv", 34, "");
    co_return;
}

VlCoroutine Vday47_moore_seq_detector_tb___024root___eval_initial__TOP__Vtiming__1(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day47_moore_seq_detector_tb.sv", 
                                             9);
        vlSelfRef.day47_moore_seq_detector_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__clk)));
    }
    co_return;
}

bool Vday47_moore_seq_detector_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday47_moore_seq_detector_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 8> Vday47_moore_seq_detector_tb__ConstPool__TABLE_h0936aa31_0;

void Vday47_moore_seq_detector_tb___024root___nba_sequent__TOP__0(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___nba_sequent__TOP__0\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT___Vpast_3_1)) 
                                           | (3U != (IData)(vlSelfRef.__Vsampled_TOP__day47_moore_seq_detector_tb__DOT__dut__DOT__state)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day47_moore_seq_detector_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_non_overlap\n",3, 'M',vlSymsp->name(),"day47_moore_seq_detector_tb.a_non_overlap", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day47_moore_seq_detector_tb.sv", 14, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((3U != (IData)(vlSelfRef.__Vsampled_TOP__day47_moore_seq_detector_tb__DOT__dut__DOT__state)) 
                                           | ((IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT___Vpast_1_1) 
                                              == (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT___Vpast_1_2)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day47_moore_seq_detector_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_equal_bits\n",3, 'M',vlSymsp->name(),"day47_moore_seq_detector_tb.a_equal_bits", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day47_moore_seq_detector_tb.sv", 13, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__rst)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__dut__DOT__state)) 
                          != (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__exp_y))))) {
            vlSelfRef.day47_moore_seq_detector_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day47_moore_seq_detector_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] Moore output (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if ((3U == (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__dut__DOT__state))) {
            vlSelfRef.day47_moore_seq_detector_tb__DOT__n_det 
                = ((IData)(1U) + vlSelfRef.day47_moore_seq_detector_tb__DOT__n_det);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 0x00000018U, vlSelfRef.day47_moore_seq_detector_tb__DOT__cyc)))) {
            VL_WRITEF_NX("  in=%b  y=%b\n",2, '#',1,vlSelfRef.day47_moore_seq_detector_tb__DOT__in
                         , '#',1,(3U == (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__dut__DOT__state)));
        }
        vlSelfRef.day47_moore_seq_detector_tb__DOT__cyc 
            = ((IData)(1U) + vlSelfRef.day47_moore_seq_detector_tb__DOT__cyc);
        vlSelfRef.day47_moore_seq_detector_tb__DOT__det 
            = ((IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__pv) 
               & ((IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__prev) 
                  == (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__in)));
        if (vlSelfRef.day47_moore_seq_detector_tb__DOT__det) {
            vlSelfRef.day47_moore_seq_detector_tb__DOT__exp_y = 1U;
            vlSelfRef.day47_moore_seq_detector_tb__DOT__pv = 0U;
        } else {
            vlSelfRef.day47_moore_seq_detector_tb__DOT__exp_y = 0U;
            vlSelfRef.day47_moore_seq_detector_tb__DOT__pv = 1U;
            vlSelfRef.day47_moore_seq_detector_tb__DOT__prev 
                = vlSelfRef.day47_moore_seq_detector_tb__DOT__in;
        }
    }
    vlSelfRef.day47_moore_seq_detector_tb__DOT__dut__DOT__state 
        = ((IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__rst)
            ? 0U : Vday47_moore_seq_detector_tb__ConstPool__TABLE_h0936aa31_0
           [(((IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__in) 
              << 2U) | (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__dut__DOT__state))]);
    vlSelfRef.day47_moore_seq_detector_tb__DOT___Vpast_3_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day47_moore_seq_detector_tb__DOT__rst)) 
           & (3U == (IData)(vlSelfRef.__Vsampled_TOP__day47_moore_seq_detector_tb__DOT__dut__DOT__state)));
    vlSelfRef.day47_moore_seq_detector_tb__DOT___Vpast_1_2 
        = vlSelfRef.day47_moore_seq_detector_tb__DOT___Vpast_1_1;
    vlSelfRef.day47_moore_seq_detector_tb__DOT___Vpast_1_1 
        = vlSelfRef.__Vsampled_TOP__day47_moore_seq_detector_tb__DOT__in;
}

void Vday47_moore_seq_detector_tb___024root___timing_ready(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___timing_ready\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hf9bf4da7__0.ready("@(negedge day47_moore_seq_detector_tb.clk)");
    }
}

void Vday47_moore_seq_detector_tb___024root___timing_resume(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___timing_resume\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hf9bf4da7__0.moveToResumeQueue(
                                                          "@(negedge day47_moore_seq_detector_tb.clk)");
    vlSelfRef.__VtrigSched_hf9bf4da7__0.resume("@(negedge day47_moore_seq_detector_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday47_moore_seq_detector_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday47_moore_seq_detector_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday47_moore_seq_detector_tb___024root____VbeforeTrig_hf9bf4da7__0(Vday47_moore_seq_detector_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root____VbeforeTrig_hf9bf4da7__0\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day47_moore_seq_detector_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day47_moore_seq_detector_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day47_moore_seq_detector_tb__DOT__clk__0 
        = vlSelfRef.day47_moore_seq_detector_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf9bf4da7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf9bf4da7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf9bf4da7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf9bf4da7__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday47_moore_seq_detector_tb___024root___eval_debug_assertions(Vday47_moore_seq_detector_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday47_moore_seq_detector_tb___024root___eval_debug_assertions\n"); );
    Vday47_moore_seq_detector_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
