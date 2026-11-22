// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday16_bcd_7seg_tb.h for the primary calling header

#include "Vday16_bcd_7seg_tb__pch.h"

VlCoroutine Vday16_bcd_7seg_tb___024root___eval_initial__TOP__Vtiming__0(Vday16_bcd_7seg_tb___024root* vlSelf);
VlCoroutine Vday16_bcd_7seg_tb___024root___eval_initial__TOP__Vtiming__1(Vday16_bcd_7seg_tb___024root* vlSelf);

void Vday16_bcd_7seg_tb___024root___eval_initial(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_initial\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday16_bcd_7seg_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday16_bcd_7seg_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday16_bcd_7seg_tb___024root___eval_sample(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_sample\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day16_bcd_7seg_tb__DOT__bcd 
        = vlSelfRef.day16_bcd_7seg_tb__DOT__bcd;
    vlSelfRef.__Vsampled_TOP__day16_bcd_7seg_tb__DOT__seg 
        = vlSelfRef.day16_bcd_7seg_tb__DOT__seg;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday16_bcd_7seg_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday16_bcd_7seg_tb___024root___eval_ico(Vday16_bcd_7seg_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_ico\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday16_bcd_7seg_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday16_bcd_7seg_tb___024root___timing_ready(Vday16_bcd_7seg_tb___024root* vlSelf);
void Vday16_bcd_7seg_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday16_bcd_7seg_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday16_bcd_7seg_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday16_bcd_7seg_tb___024root___timing_resume(Vday16_bcd_7seg_tb___024root* vlSelf);
extern const VlWide<16>/*511:0*/ Vday16_bcd_7seg_tb__ConstPool__CONST_h7c5a4ac1_0;

bool Vday16_bcd_7seg_tb___024root___eval_act(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_act\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day16_bcd_7seg_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day16_bcd_7seg_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day16_bcd_7seg_tb__DOT__clk__0 
            = vlSelfRef.day16_bcd_7seg_tb__DOT__clk;
    }
    Vday16_bcd_7seg_tb___024root___timing_ready(vlSelf);
    Vday16_bcd_7seg_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday16_bcd_7seg_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday16_bcd_7seg_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday16_bcd_7seg_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday16_bcd_7seg_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day16_bcd_7seg_tb__DOT__seg 
                        = (0x0000007fU & Vday16_bcd_7seg_tb__ConstPool__CONST_h7c5a4ac1_0
                           [(0x07ffffffU & (IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__bcd))]);
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday16_bcd_7seg_tb___024root___eval_inact(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_inact\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day16_bcd_7seg_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday16_bcd_7seg_tb___024root___nba_sequent__TOP__0(Vday16_bcd_7seg_tb___024root* vlSelf);
void Vday16_bcd_7seg_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday16_bcd_7seg_tb___024root___eval_nba(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_nba\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday16_bcd_7seg_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday16_bcd_7seg_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day16_bcd_7seg_tb__DOT__seg 
                        = (0x0000007fU & Vday16_bcd_7seg_tb__ConstPool__CONST_h7c5a4ac1_0
                           [(0x07ffffffU & (IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__bcd))]);
                }
            }
        }
        Vday16_bcd_7seg_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday16_bcd_7seg_tb___024root___eval_obs(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_obs\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday16_bcd_7seg_tb___024root___eval_react(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_react\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday16_bcd_7seg_tb___024root___eval_postponed(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_postponed\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday16_bcd_7seg_tb___024root____VbeforeTrig_hed3cb701__0(Vday16_bcd_7seg_tb___024root* vlSelf, const char* __VeventDescription);
void Vday16_bcd_7seg_tb___024root____VbeforeTrig_hed3cb642__0(Vday16_bcd_7seg_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday16_bcd_7seg_tb___024root___eval_initial__TOP__Vtiming__0(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i;
    day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    VL_WRITEF_NX("Console results: digit -> abcdefg\n",0);
    day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i)) {
        Vday16_bcd_7seg_tb___024root____VbeforeTrig_hed3cb701__0(vlSelf, 
                                                                 "@(negedge day16_bcd_7seg_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hed3cb701__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day16_bcd_7seg_tb.clk)", 
                                                             "tb/day16_bcd_7seg_tb.sv", 
                                                             22);
        vlSelfRef.day16_bcd_7seg_tb__DOT__bcd = (0x0000000fU 
                                                 & day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i);
        Vday16_bcd_7seg_tb___024root____VbeforeTrig_hed3cb642__0(vlSelf, 
                                                                 "@(posedge day16_bcd_7seg_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hed3cb642__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day16_bcd_7seg_tb.clk)", 
                                                             "tb/day16_bcd_7seg_tb.sv", 
                                                             23);
        if (VL_GTS_III(32, 0x0000000aU, day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i)) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__seg) 
                              != ((9U >= (0x0000000fU 
                                          & day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i))
                                   ? vlSelfRef.day16_bcd_7seg_tb__DOT__EXP
                                  [(0x0000000fU & day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i)]
                                   : 0U))))) {
                vlSelfRef.day16_bcd_7seg_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day16_bcd_7seg_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] 7-seg pattern (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        } else if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__seg))))) {
            vlSelfRef.day16_bcd_7seg_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day16_bcd_7seg_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] invalid BCD is blank (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        VL_WRITEF_NX("  %2d -> %07b\n",2, '~',32,day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i
                     , '#',7,(IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__seg));
        day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day16_bcd_7seg_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day16_bcd_7seg_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day16_bcd_7seg\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day16_bcd_7seg : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day16_bcd_7seg_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day16_bcd_7seg_tb.sv", 28, "");
    co_return;
}

VlCoroutine Vday16_bcd_7seg_tb___024root___eval_initial__TOP__Vtiming__1(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day16_bcd_7seg_tb.sv", 
                                             12);
        vlSelfRef.day16_bcd_7seg_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__clk)));
    }
    co_return;
}

bool Vday16_bcd_7seg_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday16_bcd_7seg_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___trigger_anySet__act\n"); );
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

void Vday16_bcd_7seg_tb___024root___nba_sequent__TOP__0(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___nba_sequent__TOP__0\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((9U >= (IData)(vlSelfRef.__Vsampled_TOP__day16_bcd_7seg_tb__DOT__bcd)) 
                                       | (0U == (IData)(vlSelfRef.__Vsampled_TOP__day16_bcd_7seg_tb__DOT__seg)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day16_bcd_7seg_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_blank\n",3, 'M',vlSymsp->name(),"day16_bcd_7seg_tb.a_blank", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day16_bcd_7seg_tb.sv", 15, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((8U != (IData)(vlSelfRef.__Vsampled_TOP__day16_bcd_7seg_tb__DOT__bcd)) 
                                       | (0x7fU == (IData)(vlSelfRef.__Vsampled_TOP__day16_bcd_7seg_tb__DOT__seg)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day16_bcd_7seg_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_eight\n",3, 'M',vlSymsp->name(),"day16_bcd_7seg_tb.a_eight", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day16_bcd_7seg_tb.sv", 16, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((1U != (IData)(vlSelfRef.__Vsampled_TOP__day16_bcd_7seg_tb__DOT__bcd)) 
                                       | (2U == VL_COUNTONES_I((IData)(vlSelfRef.__Vsampled_TOP__day16_bcd_7seg_tb__DOT__seg))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day16_bcd_7seg_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_one\n",3, 'M',vlSymsp->name(),"day16_bcd_7seg_tb.a_one", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day16_bcd_7seg_tb.sv", 17, "");
            }
        }
    }
}

void Vday16_bcd_7seg_tb___024root___timing_ready(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___timing_ready\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hed3cb701__0.ready("@(negedge day16_bcd_7seg_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hed3cb642__0.ready("@(posedge day16_bcd_7seg_tb.clk)");
    }
}

void Vday16_bcd_7seg_tb___024root___timing_resume(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___timing_resume\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hed3cb701__0.moveToResumeQueue(
                                                          "@(negedge day16_bcd_7seg_tb.clk)");
    vlSelfRef.__VtrigSched_hed3cb642__0.moveToResumeQueue(
                                                          "@(posedge day16_bcd_7seg_tb.clk)");
    vlSelfRef.__VtrigSched_hed3cb701__0.resume("@(negedge day16_bcd_7seg_tb.clk)");
    vlSelfRef.__VtrigSched_hed3cb642__0.resume("@(posedge day16_bcd_7seg_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday16_bcd_7seg_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday16_bcd_7seg_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday16_bcd_7seg_tb___024root____VbeforeTrig_hed3cb701__0(Vday16_bcd_7seg_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root____VbeforeTrig_hed3cb701__0\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day16_bcd_7seg_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day16_bcd_7seg_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day16_bcd_7seg_tb__DOT__clk__0 
        = vlSelfRef.day16_bcd_7seg_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hed3cb642__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hed3cb701__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday16_bcd_7seg_tb___024root____VbeforeTrig_hed3cb642__0(Vday16_bcd_7seg_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root____VbeforeTrig_hed3cb642__0\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day16_bcd_7seg_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day16_bcd_7seg_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day16_bcd_7seg_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day16_bcd_7seg_tb__DOT__clk__0 
        = vlSelfRef.day16_bcd_7seg_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hed3cb642__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hed3cb701__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday16_bcd_7seg_tb___024root___eval_debug_assertions(Vday16_bcd_7seg_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday16_bcd_7seg_tb___024root___eval_debug_assertions\n"); );
    Vday16_bcd_7seg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
