// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday32_universal_shift_reg_tb.h for the primary calling header

#include "Vday32_universal_shift_reg_tb__pch.h"

VlCoroutine Vday32_universal_shift_reg_tb___024root___eval_initial__TOP__Vtiming__0(Vday32_universal_shift_reg_tb___024root* vlSelf);
VlCoroutine Vday32_universal_shift_reg_tb___024root___eval_initial__TOP__Vtiming__1(Vday32_universal_shift_reg_tb___024root* vlSelf);

void Vday32_universal_shift_reg_tb___024root___eval_initial(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_initial\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday32_universal_shift_reg_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday32_universal_shift_reg_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday32_universal_shift_reg_tb___024root___eval_sample(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_sample\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q 
        = vlSelfRef.day32_universal_shift_reg_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__rst 
        = vlSelfRef.day32_universal_shift_reg_tb__DOT__rst;
    vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode 
        = vlSelfRef.day32_universal_shift_reg_tb__DOT__mode;
    vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__pin 
        = vlSelfRef.day32_universal_shift_reg_tb__DOT__pin;
    vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__si 
        = vlSelfRef.day32_universal_shift_reg_tb__DOT__si;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday32_universal_shift_reg_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday32_universal_shift_reg_tb___024root___eval_ico(Vday32_universal_shift_reg_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_ico\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday32_universal_shift_reg_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday32_universal_shift_reg_tb___024root___timing_ready(Vday32_universal_shift_reg_tb___024root* vlSelf);
void Vday32_universal_shift_reg_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday32_universal_shift_reg_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday32_universal_shift_reg_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday32_universal_shift_reg_tb___024root___timing_resume(Vday32_universal_shift_reg_tb___024root* vlSelf);

bool Vday32_universal_shift_reg_tb___024root___eval_act(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_act\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day32_universal_shift_reg_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day32_universal_shift_reg_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day32_universal_shift_reg_tb__DOT__clk__0 
            = vlSelfRef.day32_universal_shift_reg_tb__DOT__clk;
    }
    Vday32_universal_shift_reg_tb___024root___timing_ready(vlSelf);
    Vday32_universal_shift_reg_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday32_universal_shift_reg_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday32_universal_shift_reg_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday32_universal_shift_reg_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday32_universal_shift_reg_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday32_universal_shift_reg_tb___024root___eval_inact(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_inact\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day32_universal_shift_reg_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday32_universal_shift_reg_tb___024root___nba_sequent__TOP__0(Vday32_universal_shift_reg_tb___024root* vlSelf);
void Vday32_universal_shift_reg_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday32_universal_shift_reg_tb___024root___eval_nba(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_nba\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday32_universal_shift_reg_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday32_universal_shift_reg_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday32_universal_shift_reg_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday32_universal_shift_reg_tb___024root___eval_obs(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_obs\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday32_universal_shift_reg_tb___024root___eval_react(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_react\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday32_universal_shift_reg_tb___024root___eval_postponed(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_postponed\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday32_universal_shift_reg_tb___024root____VbeforeTrig_habadc65e__0(Vday32_universal_shift_reg_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday32_universal_shift_reg_tb___024root___eval_initial__TOP__Vtiming__0(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ day32_universal_shift_reg_tb__DOT__exp;
    day32_universal_shift_reg_tb__DOT__exp = 0;
    IData/*31:0*/ day32_universal_shift_reg_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day32_universal_shift_reg_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day32_universal_shift_reg_tb__DOT__unnamedblk1__DOT__i;
    day32_universal_shift_reg_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day32_universal_shift_reg_tb__DOT__exp = 0U;
    day32_universal_shift_reg_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, day32_universal_shift_reg_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday32_universal_shift_reg_tb___024root____VbeforeTrig_habadc65e__0(vlSelf, 
                                                                            "@(negedge day32_universal_shift_reg_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habadc65e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day32_universal_shift_reg_tb.clk)", 
                                                             "tb/day32_universal_shift_reg_tb.sv", 
                                                             23);
        day32_universal_shift_reg_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day32_universal_shift_reg_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day32_universal_shift_reg_tb__DOT__rst = 0U;
    day32_universal_shift_reg_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000258U, day32_universal_shift_reg_tb__DOT__unnamedblk1__DOT__i)) {
        Vday32_universal_shift_reg_tb___024root____VbeforeTrig_habadc65e__0(vlSelf, 
                                                                            "@(negedge day32_universal_shift_reg_tb.clk)");
        co_await vlSelfRef.__VtrigSched_habadc65e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day32_universal_shift_reg_tb.clk)", 
                                                             "tb/day32_universal_shift_reg_tb.sv", 
                                                             26);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__q) 
                          != (IData)(day32_universal_shift_reg_tb__DOT__exp))))) {
            vlSelfRef.day32_universal_shift_reg_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day32_universal_shift_reg_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] shift register contents (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 0x0000000eU, day32_universal_shift_reg_tb__DOT__unnamedblk1__DOT__i)))) {
            VL_WRITEF_NX("  mode=%0d  q=%08b\n",2, '#',3,vlSelfRef.day32_universal_shift_reg_tb__DOT__mode
                         , '#',8,(IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__q));
        }
        if (VL_GTS_III(32, 2U, day32_universal_shift_reg_tb__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.day32_universal_shift_reg_tb__DOT____VlemCond_1 = 1U;
        } else {
            vlSelfRef.day32_universal_shift_reg_tb__DOT____VlemExpr_0 
                = VL_URANDOM_RANGE_I(0U, 7U);
            vlSelfRef.day32_universal_shift_reg_tb__DOT____VlemCond_1 
                = (7U & vlSelfRef.day32_universal_shift_reg_tb__DOT____VlemExpr_0);
        }
        vlSelfRef.day32_universal_shift_reg_tb__DOT__pin 
            = (VL_GTS_III(32, 2U, day32_universal_shift_reg_tb__DOT__unnamedblk1__DOT__i)
                ? 0x000000a5U : (0x000000ffU & VL_RANDOM_I()));
        vlSelfRef.day32_universal_shift_reg_tb__DOT__mode 
            = vlSelfRef.day32_universal_shift_reg_tb__DOT____VlemCond_1;
        vlSelfRef.day32_universal_shift_reg_tb__DOT__si 
            = (1U & VL_RANDOM_I());
        if ((4U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))) {
            if ((1U & (~ ((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode) 
                          >> 1U)))) {
                day32_universal_shift_reg_tb__DOT__exp 
                    = ((1U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))
                        ? ((0x00000080U & ((IData)(day32_universal_shift_reg_tb__DOT__exp) 
                                           << 7U)) 
                           | (0x0000007fU & ((IData)(day32_universal_shift_reg_tb__DOT__exp) 
                                             >> 1U)))
                        : ((0x000000feU & ((IData)(day32_universal_shift_reg_tb__DOT__exp) 
                                           << 1U)) 
                           | (1U & ((IData)(day32_universal_shift_reg_tb__DOT__exp) 
                                    >> 7U))));
            }
        } else if ((2U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))) {
            day32_universal_shift_reg_tb__DOT__exp 
                = ((1U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))
                    ? (((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__si) 
                        << 7U) | (0x0000007fU & ((IData)(day32_universal_shift_reg_tb__DOT__exp) 
                                                 >> 1U)))
                    : ((0x000000feU & ((IData)(day32_universal_shift_reg_tb__DOT__exp) 
                                       << 1U)) | (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__si)));
        } else if ((1U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))) {
            day32_universal_shift_reg_tb__DOT__exp 
                = vlSelfRef.day32_universal_shift_reg_tb__DOT__pin;
        }
        day32_universal_shift_reg_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day32_universal_shift_reg_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day32_universal_shift_reg_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day32_universal_shift_reg\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day32_universal_shift_reg : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day32_universal_shift_reg_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day32_universal_shift_reg_tb.sv", 41, "");
    co_return;
}

VlCoroutine Vday32_universal_shift_reg_tb___024root___eval_initial__TOP__Vtiming__1(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day32_universal_shift_reg_tb.sv", 
                                             9);
        vlSelfRef.day32_universal_shift_reg_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__clk)));
    }
    co_return;
}

bool Vday32_universal_shift_reg_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday32_universal_shift_reg_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___trigger_anySet__act\n"); );
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

void Vday32_universal_shift_reg_tb___024root___nba_sequent__TOP__0(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___nba_sequent__TOP__0\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_1_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q) 
                                              == (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_2_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day32_universal_shift_reg_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_load\n",3, 'M',vlSymsp->name(),"day32_universal_shift_reg_tb.a_load", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day32_universal_shift_reg_tb.sv", 13, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_17_1)) 
                                           | ((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_18_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day32_universal_shift_reg_tb.sv:18: Assertion failed in %m: [SVA FAIL] a_hold\n",3, 'M',vlSymsp->name(),"day32_universal_shift_reg_tb.a_hold", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day32_universal_shift_reg_tb.sv", 18, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_20_1)) 
                                           | (VL_COUNTONES_I((IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q)) 
                                              == VL_COUNTONES_I((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_18_1))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day32_universal_shift_reg_tb.sv:19: Assertion failed in %m: [SVA FAIL] a_rot_pop\n",3, 'M',vlSymsp->name(),"day32_universal_shift_reg_tb.a_rot_pop", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day32_universal_shift_reg_tb.sv", 19, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_4_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q) 
                                              == (((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_5_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_6_1))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day32_universal_shift_reg_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_shl\n",3, 'M',vlSymsp->name(),"day32_universal_shift_reg_tb.a_shl", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day32_universal_shift_reg_tb.sv", 14, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_8_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q) 
                                              == (((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_6_1) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_9_1))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day32_universal_shift_reg_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_shr\n",3, 'M',vlSymsp->name(),"day32_universal_shift_reg_tb.a_shr", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day32_universal_shift_reg_tb.sv", 15, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_11_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q) 
                                              == (((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_5_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_12_1))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day32_universal_shift_reg_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_rol\n",3, 'M',vlSymsp->name(),"day32_universal_shift_reg_tb.a_rol", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day32_universal_shift_reg_tb.sv", 16, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_14_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q) 
                                              == (((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_15_1) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_9_1))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day32_universal_shift_reg_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_ror\n",3, 'M',vlSymsp->name(),"day32_universal_shift_reg_tb.a_ror", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day32_universal_shift_reg_tb.sv", 17, "");
                }
            }
        }
    }
    vlSelfRef.day32_universal_shift_reg_tb__DOT__q 
        = ((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__rst)
            ? 0U : ((4U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))
                     ? ((2U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))
                         ? (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__q)
                         : ((1U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))
                             ? ((0x00000080U & ((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__q) 
                                                << 7U)) 
                                | (0x0000007fU & ((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__q) 
                                                  >> 1U)))
                             : ((0x000000feU & ((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__q) 
                                                << 1U)) 
                                | (1U & ((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__q) 
                                         >> 7U)))))
                     : ((2U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))
                         ? ((1U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))
                             ? (((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__si) 
                                 << 7U) | (0x0000007fU 
                                           & ((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__q) 
                                              >> 1U)))
                             : ((0x000000feU & ((IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__q) 
                                                << 1U)) 
                                | (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__si)))
                         : ((1U & (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__mode))
                             ? (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__pin)
                             : (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__q)))));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__pin;
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_1_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__rst)) 
           & (1U == (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode)));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_17_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__rst)) 
           & ((0U == (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode)) 
              | (5U < (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode))));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_18_1 
        = vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q;
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_20_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__rst)) 
           & ((4U == (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode)) 
              | (5U == (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode))));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_4_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__rst)) 
           & (2U == (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode)));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_6_1 
        = vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__si;
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_8_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__rst)) 
           & (3U == (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode)));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_12_1 
        = (1U & ((IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q) 
                 >> 7U));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_5_1 
        = (0x0000007fU & (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_11_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__rst)) 
           & (4U == (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode)));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_15_1 
        = (1U & (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_9_1 
        = (0x0000007fU & ((IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__q) 
                          >> 1U));
    vlSelfRef.day32_universal_shift_reg_tb__DOT___Vpast_14_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__rst)) 
           & (5U == (IData)(vlSelfRef.__Vsampled_TOP__day32_universal_shift_reg_tb__DOT__mode)));
}

void Vday32_universal_shift_reg_tb___024root___timing_ready(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___timing_ready\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_habadc65e__0.ready("@(negedge day32_universal_shift_reg_tb.clk)");
    }
}

void Vday32_universal_shift_reg_tb___024root___timing_resume(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___timing_resume\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_habadc65e__0.moveToResumeQueue(
                                                          "@(negedge day32_universal_shift_reg_tb.clk)");
    vlSelfRef.__VtrigSched_habadc65e__0.resume("@(negedge day32_universal_shift_reg_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday32_universal_shift_reg_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday32_universal_shift_reg_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday32_universal_shift_reg_tb___024root____VbeforeTrig_habadc65e__0(Vday32_universal_shift_reg_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root____VbeforeTrig_habadc65e__0\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day32_universal_shift_reg_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day32_universal_shift_reg_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day32_universal_shift_reg_tb__DOT__clk__0 
        = vlSelfRef.day32_universal_shift_reg_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_habadc65e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_habadc65e__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday32_universal_shift_reg_tb___024root___eval_debug_assertions(Vday32_universal_shift_reg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday32_universal_shift_reg_tb___024root___eval_debug_assertions\n"); );
    Vday32_universal_shift_reg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
