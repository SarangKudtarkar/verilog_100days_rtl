// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday12_gray_bin_tb.h for the primary calling header

#include "Vday12_gray_bin_tb__pch.h"

VlCoroutine Vday12_gray_bin_tb___024root___eval_initial__TOP__Vtiming__0(Vday12_gray_bin_tb___024root* vlSelf);
VlCoroutine Vday12_gray_bin_tb___024root___eval_initial__TOP__Vtiming__1(Vday12_gray_bin_tb___024root* vlSelf);

void Vday12_gray_bin_tb___024root___eval_initial(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_initial\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday12_gray_bin_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday12_gray_bin_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday12_gray_bin_tb___024root___eval_sample(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_sample\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day12_gray_bin_tb__DOT__gray 
        = vlSelfRef.day12_gray_bin_tb__DOT__gray;
    vlSelfRef.__Vsampled_TOP__day12_gray_bin_tb__DOT__bin_in 
        = vlSelfRef.day12_gray_bin_tb__DOT__bin_in;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday12_gray_bin_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday12_gray_bin_tb___024root___eval_ico(Vday12_gray_bin_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_ico\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday12_gray_bin_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday12_gray_bin_tb___024root___timing_ready(Vday12_gray_bin_tb___024root* vlSelf);
void Vday12_gray_bin_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday12_gray_bin_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday12_gray_bin_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday12_gray_bin_tb___024root___timing_resume(Vday12_gray_bin_tb___024root* vlSelf);

bool Vday12_gray_bin_tb___024root___eval_act(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_act\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day12_gray_bin_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day12_gray_bin_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day12_gray_bin_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day12_gray_bin_tb__DOT__clk__0 
            = vlSelfRef.day12_gray_bin_tb__DOT__clk;
    }
    Vday12_gray_bin_tb___024root___timing_ready(vlSelf);
    Vday12_gray_bin_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday12_gray_bin_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday12_gray_bin_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday12_gray_bin_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday12_gray_bin_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day12_gray_bin_tb__DOT__gray 
                        = ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__bin_in) 
                           ^ ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__bin_in) 
                              >> 1U));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday12_gray_bin_tb___024root___eval_inact(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_inact\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day12_gray_bin_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday12_gray_bin_tb___024root___nba_sequent__TOP__0(Vday12_gray_bin_tb___024root* vlSelf);
void Vday12_gray_bin_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday12_gray_bin_tb___024root___eval_nba(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_nba\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday12_gray_bin_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday12_gray_bin_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day12_gray_bin_tb__DOT__gray 
                        = ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__bin_in) 
                           ^ ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__bin_in) 
                              >> 1U));
                }
            }
        }
        Vday12_gray_bin_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday12_gray_bin_tb___024root___eval_obs(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_obs\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday12_gray_bin_tb___024root___eval_react(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_react\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday12_gray_bin_tb___024root___eval_postponed(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_postponed\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday12_gray_bin_tb___024root____VbeforeTrig_he42f41d7__0(Vday12_gray_bin_tb___024root* vlSelf, const char* __VeventDescription);
void Vday12_gray_bin_tb___024root____VbeforeTrig_he42f4218__0(Vday12_gray_bin_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday12_gray_bin_tb___024root___eval_initial__TOP__Vtiming__0(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day12_gray_bin_tb__DOT__unnamedblk1__DOT__i;
    day12_gray_bin_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    VL_WRITEF_NX("  BIN   GRAY\n",0);
    day12_gray_bin_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, day12_gray_bin_tb__DOT__unnamedblk1__DOT__i)) {
        Vday12_gray_bin_tb___024root____VbeforeTrig_he42f41d7__0(vlSelf, 
                                                                 "@(negedge day12_gray_bin_tb.clk)");
        co_await vlSelfRef.__VtrigSched_he42f41d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day12_gray_bin_tb.clk)", 
                                                             "tb/day12_gray_bin_tb.sv", 
                                                             18);
        vlSelfRef.day12_gray_bin_tb__DOT__bin_in = 
            (0x0000000fU & day12_gray_bin_tb__DOT__unnamedblk1__DOT__i);
        Vday12_gray_bin_tb___024root____VbeforeTrig_he42f4218__0(vlSelf, 
                                                                 "@(posedge day12_gray_bin_tb.clk)");
        co_await vlSelfRef.__VtrigSched_he42f4218__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day12_gray_bin_tb.clk)", 
                                                             "tb/day12_gray_bin_tb.sv", 
                                                             19);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day12_gray_bin_tb__DOT__gray) 
                          != ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__bin_in) 
                              ^ ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__bin_in) 
                                 >> 1U)))))) {
            vlSelfRef.day12_gray_bin_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day12_gray_bin_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] binary -> gray (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY(((((((2U & ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__gray) 
                                    >> 2U)) | (1U & 
                                               VL_REDXOR_32(
                                                            (3U 
                                                             & ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__gray) 
                                                                >> 2U))))) 
                            << 2U) | ((2U & (VL_REDXOR_32(
                                                          (7U 
                                                           & ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__gray) 
                                                              >> 1U))) 
                                             << 1U)) 
                                      | (1U & VL_REDXOR_4(vlSelfRef.day12_gray_bin_tb__DOT__gray)))) 
                          != (IData)(vlSelfRef.day12_gray_bin_tb__DOT__bin_in))))) {
            vlSelfRef.day12_gray_bin_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day12_gray_bin_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] gray -> binary round trip (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_LTS_III(32, 0U, day12_gray_bin_tb__DOT__unnamedblk1__DOT__i)) {
            if (VL_UNLIKELY(((1U != VL_COUNTONES_I(
                                                   ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__gray) 
                                                    ^ (IData)(vlSelfRef.day12_gray_bin_tb__DOT__gray_prev))))))) {
                vlSelfRef.day12_gray_bin_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day12_gray_bin_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] adjacent gray codes differ in 1 bit (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        vlSelfRef.day12_gray_bin_tb__DOT__gray_prev 
            = vlSelfRef.day12_gray_bin_tb__DOT__gray;
        VL_WRITEF_NX("  %04b  %04b\n",2, '#',4,vlSelfRef.day12_gray_bin_tb__DOT__bin_in
                     , '#',4,(IData)(vlSelfRef.day12_gray_bin_tb__DOT__gray));
        day12_gray_bin_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day12_gray_bin_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day12_gray_bin_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day12_gray_bin\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day12_gray_bin : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day12_gray_bin_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day12_gray_bin_tb.sv", 26, "");
    co_return;
}

VlCoroutine Vday12_gray_bin_tb___024root___eval_initial__TOP__Vtiming__1(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day12_gray_bin_tb.sv", 
                                             9);
        vlSelfRef.day12_gray_bin_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.day12_gray_bin_tb__DOT__clk)));
    }
    co_return;
}

bool Vday12_gray_bin_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday12_gray_bin_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___trigger_anySet__act\n"); );
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

void Vday12_gray_bin_tb___024root___nba_sequent__TOP__0(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___nba_sequent__TOP__0\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((((((2U & ((IData)(vlSelfRef.__Vsampled_TOP__day12_gray_bin_tb__DOT__gray) 
                                        >> 2U)) | (1U 
                                                   & VL_REDXOR_32(
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.__Vsampled_TOP__day12_gray_bin_tb__DOT__gray) 
                                                                      >> 2U))))) 
                                << 2U) | ((2U & (VL_REDXOR_32(
                                                              (7U 
                                                               & ((IData)(vlSelfRef.__Vsampled_TOP__day12_gray_bin_tb__DOT__gray) 
                                                                  >> 1U))) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(vlSelfRef.__Vsampled_TOP__day12_gray_bin_tb__DOT__gray)))) 
                              != (IData)(vlSelfRef.__Vsampled_TOP__day12_gray_bin_tb__DOT__bin_in))))) {
                VL_WRITEF_NX("[%0t] %%Error: day12_gray_bin_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_roundtrip\n",3, 'M',vlSymsp->name(),"day12_gray_bin_tb.a_roundtrip", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day12_gray_bin_tb.sv", 12, "");
            }
            if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.__Vsampled_TOP__day12_gray_bin_tb__DOT__gray) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.__Vsampled_TOP__day12_gray_bin_tb__DOT__bin_in) 
                                                    >> 3U)))))) {
                VL_WRITEF_NX("[%0t] %%Error: day12_gray_bin_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_msb\n",3, 'M',vlSymsp->name(),"day12_gray_bin_tb.a_msb", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day12_gray_bin_tb.sv", 13, "");
            }
        }
    }
}

void Vday12_gray_bin_tb___024root___timing_ready(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___timing_ready\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he42f41d7__0.ready("@(negedge day12_gray_bin_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he42f4218__0.ready("@(posedge day12_gray_bin_tb.clk)");
    }
}

void Vday12_gray_bin_tb___024root___timing_resume(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___timing_resume\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_he42f41d7__0.moveToResumeQueue(
                                                          "@(negedge day12_gray_bin_tb.clk)");
    vlSelfRef.__VtrigSched_he42f4218__0.moveToResumeQueue(
                                                          "@(posedge day12_gray_bin_tb.clk)");
    vlSelfRef.__VtrigSched_he42f41d7__0.resume("@(negedge day12_gray_bin_tb.clk)");
    vlSelfRef.__VtrigSched_he42f4218__0.resume("@(posedge day12_gray_bin_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday12_gray_bin_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday12_gray_bin_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday12_gray_bin_tb___024root____VbeforeTrig_he42f41d7__0(Vday12_gray_bin_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root____VbeforeTrig_he42f41d7__0\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day12_gray_bin_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day12_gray_bin_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day12_gray_bin_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day12_gray_bin_tb__DOT__clk__0 
        = vlSelfRef.day12_gray_bin_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he42f4218__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he42f41d7__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday12_gray_bin_tb___024root____VbeforeTrig_he42f4218__0(Vday12_gray_bin_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root____VbeforeTrig_he42f4218__0\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day12_gray_bin_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day12_gray_bin_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day12_gray_bin_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day12_gray_bin_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day12_gray_bin_tb__DOT__clk__0 
        = vlSelfRef.day12_gray_bin_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he42f4218__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he42f41d7__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday12_gray_bin_tb___024root___eval_debug_assertions(Vday12_gray_bin_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday12_gray_bin_tb___024root___eval_debug_assertions\n"); );
    Vday12_gray_bin_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
