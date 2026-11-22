// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday11_mult_4bit_tb.h for the primary calling header

#include "Vday11_mult_4bit_tb__pch.h"

VlCoroutine Vday11_mult_4bit_tb___024root___eval_initial__TOP__Vtiming__0(Vday11_mult_4bit_tb___024root* vlSelf);
VlCoroutine Vday11_mult_4bit_tb___024root___eval_initial__TOP__Vtiming__1(Vday11_mult_4bit_tb___024root* vlSelf);

void Vday11_mult_4bit_tb___024root___eval_initial(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_initial\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday11_mult_4bit_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday11_mult_4bit_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday11_mult_4bit_tb___024root___eval_sample(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_sample\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day11_mult_4bit_tb__DOT__p 
        = vlSelfRef.day11_mult_4bit_tb__DOT__p;
    vlSelfRef.__Vsampled_TOP__day11_mult_4bit_tb__DOT__a 
        = vlSelfRef.day11_mult_4bit_tb__DOT__a;
    vlSelfRef.__Vsampled_TOP__day11_mult_4bit_tb__DOT__b 
        = vlSelfRef.day11_mult_4bit_tb__DOT__b;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday11_mult_4bit_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday11_mult_4bit_tb___024root___eval_ico(Vday11_mult_4bit_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_ico\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday11_mult_4bit_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday11_mult_4bit_tb___024root___timing_ready(Vday11_mult_4bit_tb___024root* vlSelf);
void Vday11_mult_4bit_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday11_mult_4bit_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday11_mult_4bit_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday11_mult_4bit_tb___024root___timing_resume(Vday11_mult_4bit_tb___024root* vlSelf);
void Vday11_mult_4bit_tb___024root___act_comb__TOP__0(Vday11_mult_4bit_tb___024root* vlSelf);

bool Vday11_mult_4bit_tb___024root___eval_act(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_act\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day11_mult_4bit_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day11_mult_4bit_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day11_mult_4bit_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day11_mult_4bit_tb__DOT__clk__0 
            = vlSelfRef.day11_mult_4bit_tb__DOT__clk;
    }
    Vday11_mult_4bit_tb___024root___timing_ready(vlSelf);
    Vday11_mult_4bit_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday11_mult_4bit_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday11_mult_4bit_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday11_mult_4bit_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday11_mult_4bit_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vday11_mult_4bit_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vday11_mult_4bit_tb___024root___eval_inact(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_inact\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day11_mult_4bit_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday11_mult_4bit_tb___024root___nba_sequent__TOP__0(Vday11_mult_4bit_tb___024root* vlSelf);
void Vday11_mult_4bit_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday11_mult_4bit_tb___024root___eval_nba(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_nba\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday11_mult_4bit_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday11_mult_4bit_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday11_mult_4bit_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
        Vday11_mult_4bit_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday11_mult_4bit_tb___024root___eval_obs(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_obs\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday11_mult_4bit_tb___024root___eval_react(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_react\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday11_mult_4bit_tb___024root___eval_postponed(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_postponed\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday11_mult_4bit_tb___024root____VbeforeTrig_h05fe2129__0(Vday11_mult_4bit_tb___024root* vlSelf, const char* __VeventDescription);
void Vday11_mult_4bit_tb___024root____VbeforeTrig_h05fe206a__0(Vday11_mult_4bit_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday11_mult_4bit_tb___024root___eval_initial__TOP__Vtiming__0(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day11_mult_4bit_tb__DOT__unnamedblk1__DOT__i;
    day11_mult_4bit_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day11_mult_4bit_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, day11_mult_4bit_tb__DOT__unnamedblk1__DOT__i)) {
        Vday11_mult_4bit_tb___024root____VbeforeTrig_h05fe2129__0(vlSelf, 
                                                                  "@(negedge day11_mult_4bit_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h05fe2129__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day11_mult_4bit_tb.clk)", 
                                                             "tb/day11_mult_4bit_tb.sv", 
                                                             17);
        vlSelfRef.day11_mult_4bit_tb__DOT__a = (0x0000000fU 
                                                & (day11_mult_4bit_tb__DOT__unnamedblk1__DOT__i 
                                                   >> 4U));
        vlSelfRef.day11_mult_4bit_tb__DOT__b = (0x0000000fU 
                                                & day11_mult_4bit_tb__DOT__unnamedblk1__DOT__i);
        Vday11_mult_4bit_tb___024root____VbeforeTrig_h05fe206a__0(vlSelf, 
                                                                  "@(posedge day11_mult_4bit_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h05fe206a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day11_mult_4bit_tb.clk)", 
                                                             "tb/day11_mult_4bit_tb.sv", 
                                                             18);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day11_mult_4bit_tb__DOT__p) 
                          != (0x000000ffU & ((IData)(vlSelfRef.day11_mult_4bit_tb__DOT__a) 
                                             * (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__b))))))) {
            vlSelfRef.day11_mult_4bit_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day11_mult_4bit_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] product (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY(((0U == VL_MODDIVS_III(32, day11_mult_4bit_tb__DOT__unnamedblk1__DOT__i, (IData)(0x0000001dU)))))) {
            VL_WRITEF_NX("  %2d x %2d = %3d\n",3, '#',4,vlSelfRef.day11_mult_4bit_tb__DOT__a
                         , '#',4,(IData)(vlSelfRef.day11_mult_4bit_tb__DOT__b)
                         , '#',8,vlSelfRef.day11_mult_4bit_tb__DOT__p);
        }
        day11_mult_4bit_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day11_mult_4bit_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day11_mult_4bit_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day11_mult_4bit\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day11_mult_4bit : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day11_mult_4bit_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day11_mult_4bit_tb.sv", 22, "");
    co_return;
}

VlCoroutine Vday11_mult_4bit_tb___024root___eval_initial__TOP__Vtiming__1(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day11_mult_4bit_tb.sv", 
                                             9);
        vlSelfRef.day11_mult_4bit_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__clk)));
    }
    co_return;
}

bool Vday11_mult_4bit_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday11_mult_4bit_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___trigger_anySet__act\n"); );
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

void Vday11_mult_4bit_tb___024root___act_comb__TOP__0(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___act_comb__TOP__0\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.day11_mult_4bit_tb__DOT__dut__DOT__pp[0U] 
        = ((1U & (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__b))
            ? (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__a)
            : 0U);
    vlSelfRef.day11_mult_4bit_tb__DOT__dut__DOT__pp[1U] 
        = ((2U & (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__b))
            ? (0x000000ffU & ((IData)(vlSelfRef.day11_mult_4bit_tb__DOT__a) 
                              << 1U)) : 0U);
    vlSelfRef.day11_mult_4bit_tb__DOT__dut__DOT__pp[2U] 
        = ((4U & (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__b))
            ? (0x000000ffU & ((IData)(vlSelfRef.day11_mult_4bit_tb__DOT__a) 
                              << 2U)) : 0U);
    vlSelfRef.day11_mult_4bit_tb__DOT__dut__DOT__pp[3U] 
        = ((8U & (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__b))
            ? (0x000000ffU & ((IData)(vlSelfRef.day11_mult_4bit_tb__DOT__a) 
                              << 3U)) : 0U);
    vlSelfRef.day11_mult_4bit_tb__DOT__p = (0x000000ffU 
                                            & ((((IData)(vlSelfRef.day11_mult_4bit_tb__DOT__dut__DOT__pp[0U]) 
                                                 + (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__dut__DOT__pp[1U])) 
                                                + (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__dut__DOT__pp[2U])) 
                                               + (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__dut__DOT__pp[3U])));
}

void Vday11_mult_4bit_tb___024root___nba_sequent__TOP__0(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___nba_sequent__TOP__0\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__day11_mult_4bit_tb__DOT__p) 
                              != (0x000000ffU & ((IData)(vlSelfRef.__Vsampled_TOP__day11_mult_4bit_tb__DOT__a) 
                                                 * (IData)(vlSelfRef.__Vsampled_TOP__day11_mult_4bit_tb__DOT__b))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day11_mult_4bit_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_mul\n",3, 'M',vlSymsp->name(),"day11_mult_4bit_tb.a_mul", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day11_mult_4bit_tb.sv", 12, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((0U == (IData)(vlSelfRef.__Vsampled_TOP__day11_mult_4bit_tb__DOT__a)) 
                                           | (0U == (IData)(vlSelfRef.__Vsampled_TOP__day11_mult_4bit_tb__DOT__b)))) 
                                       | (0U == (IData)(vlSelfRef.__Vsampled_TOP__day11_mult_4bit_tb__DOT__p)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day11_mult_4bit_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_zero\n",3, 'M',vlSymsp->name(),"day11_mult_4bit_tb.a_zero", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day11_mult_4bit_tb.sv", 13, "");
            }
        }
    }
}

void Vday11_mult_4bit_tb___024root___timing_ready(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___timing_ready\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h05fe2129__0.ready("@(negedge day11_mult_4bit_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h05fe206a__0.ready("@(posedge day11_mult_4bit_tb.clk)");
    }
}

void Vday11_mult_4bit_tb___024root___timing_resume(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___timing_resume\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h05fe2129__0.moveToResumeQueue(
                                                          "@(negedge day11_mult_4bit_tb.clk)");
    vlSelfRef.__VtrigSched_h05fe206a__0.moveToResumeQueue(
                                                          "@(posedge day11_mult_4bit_tb.clk)");
    vlSelfRef.__VtrigSched_h05fe2129__0.resume("@(negedge day11_mult_4bit_tb.clk)");
    vlSelfRef.__VtrigSched_h05fe206a__0.resume("@(posedge day11_mult_4bit_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday11_mult_4bit_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday11_mult_4bit_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday11_mult_4bit_tb___024root____VbeforeTrig_h05fe2129__0(Vday11_mult_4bit_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root____VbeforeTrig_h05fe2129__0\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day11_mult_4bit_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day11_mult_4bit_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day11_mult_4bit_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day11_mult_4bit_tb__DOT__clk__0 
        = vlSelfRef.day11_mult_4bit_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h05fe206a__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h05fe2129__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday11_mult_4bit_tb___024root____VbeforeTrig_h05fe206a__0(Vday11_mult_4bit_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root____VbeforeTrig_h05fe206a__0\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day11_mult_4bit_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day11_mult_4bit_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day11_mult_4bit_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day11_mult_4bit_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day11_mult_4bit_tb__DOT__clk__0 
        = vlSelfRef.day11_mult_4bit_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h05fe206a__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h05fe2129__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday11_mult_4bit_tb___024root___eval_debug_assertions(Vday11_mult_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday11_mult_4bit_tb___024root___eval_debug_assertions\n"); );
    Vday11_mult_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
