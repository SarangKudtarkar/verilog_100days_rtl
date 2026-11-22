// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday30_siso_sipo_tb.h for the primary calling header

#include "Vday30_siso_sipo_tb__pch.h"

VlCoroutine Vday30_siso_sipo_tb___024root___eval_initial__TOP__Vtiming__0(Vday30_siso_sipo_tb___024root* vlSelf);
VlCoroutine Vday30_siso_sipo_tb___024root___eval_initial__TOP__Vtiming__1(Vday30_siso_sipo_tb___024root* vlSelf);

void Vday30_siso_sipo_tb___024root___eval_initial(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_initial\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday30_siso_sipo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday30_siso_sipo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday30_siso_sipo_tb___024root___eval_sample(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_sample\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day30_siso_sipo_tb__DOT__u_siso__DOT__sr 
        = vlSelfRef.day30_siso_sipo_tb__DOT__u_siso__DOT__sr;
    vlSelfRef.__Vsampled_TOP__day30_siso_sipo_tb__DOT__q 
        = vlSelfRef.day30_siso_sipo_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__day30_siso_sipo_tb__DOT__sin 
        = vlSelfRef.day30_siso_sipo_tb__DOT__sin;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday30_siso_sipo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday30_siso_sipo_tb___024root___eval_ico(Vday30_siso_sipo_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_ico\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday30_siso_sipo_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday30_siso_sipo_tb___024root___timing_ready(Vday30_siso_sipo_tb___024root* vlSelf);
void Vday30_siso_sipo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday30_siso_sipo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday30_siso_sipo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday30_siso_sipo_tb___024root___timing_resume(Vday30_siso_sipo_tb___024root* vlSelf);

bool Vday30_siso_sipo_tb___024root___eval_act(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_act\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day30_siso_sipo_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day30_siso_sipo_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day30_siso_sipo_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day30_siso_sipo_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day30_siso_sipo_tb__DOT__clk__0 
            = vlSelfRef.day30_siso_sipo_tb__DOT__clk;
    }
    Vday30_siso_sipo_tb___024root___timing_ready(vlSelf);
    Vday30_siso_sipo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday30_siso_sipo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday30_siso_sipo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday30_siso_sipo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday30_siso_sipo_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday30_siso_sipo_tb___024root___eval_inact(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_inact\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day30_siso_sipo_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday30_siso_sipo_tb___024root___nba_sequent__TOP__0(Vday30_siso_sipo_tb___024root* vlSelf);
void Vday30_siso_sipo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday30_siso_sipo_tb___024root___eval_nba(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_nba\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday30_siso_sipo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday30_siso_sipo_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday30_siso_sipo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday30_siso_sipo_tb___024root___eval_obs(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_obs\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday30_siso_sipo_tb___024root___eval_react(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_react\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday30_siso_sipo_tb___024root___eval_postponed(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_postponed\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday30_siso_sipo_tb___024root____VbeforeTrig_h6fc3e553__0(Vday30_siso_sipo_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday30_siso_sipo_tb___024root___eval_initial__TOP__Vtiming__0(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ day30_siso_sipo_tb__DOT__m;
    day30_siso_sipo_tb__DOT__m = 0;
    IData/*31:0*/ day30_siso_sipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day30_siso_sipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day30_siso_sipo_tb__DOT__unnamedblk1__DOT__i;
    day30_siso_sipo_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day30_siso_sipo_tb__DOT__m = 0U;
    day30_siso_sipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, day30_siso_sipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday30_siso_sipo_tb___024root____VbeforeTrig_h6fc3e553__0(vlSelf, 
                                                                  "@(negedge day30_siso_sipo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h6fc3e553__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day30_siso_sipo_tb.clk)", 
                                                             "tb/day30_siso_sipo_tb.sv", 
                                                             18);
        day30_siso_sipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day30_siso_sipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day30_siso_sipo_tb__DOT__rst = 0U;
    day30_siso_sipo_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000003cU, day30_siso_sipo_tb__DOT__unnamedblk1__DOT__i)) {
        Vday30_siso_sipo_tb___024root____VbeforeTrig_h6fc3e553__0(vlSelf, 
                                                                  "@(negedge day30_siso_sipo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h6fc3e553__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day30_siso_sipo_tb.clk)", 
                                                             "tb/day30_siso_sipo_tb.sv", 
                                                             21);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day30_siso_sipo_tb__DOT__q) 
                          != (IData)(day30_siso_sipo_tb__DOT__m))))) {
            vlSelfRef.day30_siso_sipo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day30_siso_sipo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] SIPO parallel word (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.day30_siso_sipo_tb__DOT__u_siso__DOT__sr) 
                                 >> 3U)) != (1U & ((IData)(day30_siso_sipo_tb__DOT__m) 
                                                   >> 3U)))))) {
            vlSelfRef.day30_siso_sipo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day30_siso_sipo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] SISO serial output (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day30_siso_sipo_tb__DOT__sin = (1U 
                                                  & VL_RANDOM_I());
        day30_siso_sipo_tb__DOT__m = ((0x0000000eU 
                                       & ((IData)(day30_siso_sipo_tb__DOT__m) 
                                          << 1U)) | (IData)(vlSelfRef.day30_siso_sipo_tb__DOT__sin));
        day30_siso_sipo_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day30_siso_sipo_tb__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("  last SIPO word = %04b, SISO out = %b\n",2
                 , '#',4,vlSelfRef.day30_siso_sipo_tb__DOT__q
                 , '#',1,(1U & ((IData)(vlSelfRef.day30_siso_sipo_tb__DOT__u_siso__DOT__sr) 
                                >> 3U)));
    if ((0U == vlSelfRef.day30_siso_sipo_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day30_siso_sipo\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day30_siso_sipo : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day30_siso_sipo_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day30_siso_sipo_tb.sv", 28, "");
    co_return;
}

VlCoroutine Vday30_siso_sipo_tb___024root___eval_initial__TOP__Vtiming__1(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day30_siso_sipo_tb.sv", 
                                             9);
        vlSelfRef.day30_siso_sipo_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.day30_siso_sipo_tb__DOT__clk)));
    }
    co_return;
}

bool Vday30_siso_sipo_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday30_siso_sipo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___trigger_anySet__act\n"); );
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

void Vday30_siso_sipo_tb___024root___nba_sequent__TOP__0(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___nba_sequent__TOP__0\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day30_siso_sipo_tb__DOT__rst)))) {
                if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.__Vsampled_TOP__day30_siso_sipo_tb__DOT__u_siso__DOT__sr) 
                                         >> 3U)) != (IData)(vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_4))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day30_siso_sipo_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_siso\n",3, 'M',vlSymsp->name(),"day30_siso_sipo_tb.a_siso", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day30_siso_sipo_tb.sv", 13, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__day30_siso_sipo_tb__DOT__q) 
                                  != ((((IData)(vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_4) 
                                        << 3U) | ((IData)(vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_3) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_2) 
                                          << 1U) | (IData)(vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_1))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day30_siso_sipo_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_sipo\n",3, 'M',vlSymsp->name(),"day30_siso_sipo_tb.a_sipo", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day30_siso_sipo_tb.sv", 14, "");
                }
            }
        }
    }
    if (vlSelfRef.day30_siso_sipo_tb__DOT__rst) {
        vlSelfRef.day30_siso_sipo_tb__DOT__q = 0U;
        vlSelfRef.day30_siso_sipo_tb__DOT__u_siso__DOT__sr = 0U;
    } else {
        vlSelfRef.day30_siso_sipo_tb__DOT__q = ((0x0000000eU 
                                                 & ((IData)(vlSelfRef.day30_siso_sipo_tb__DOT__q) 
                                                    << 1U)) 
                                                | (IData)(vlSelfRef.day30_siso_sipo_tb__DOT__sin));
        vlSelfRef.day30_siso_sipo_tb__DOT__u_siso__DOT__sr 
            = ((0x0000000eU & ((IData)(vlSelfRef.day30_siso_sipo_tb__DOT__u_siso__DOT__sr) 
                               << 1U)) | (IData)(vlSelfRef.day30_siso_sipo_tb__DOT__sin));
    }
    vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_4 = vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_3;
    vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_3 = vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_2;
    vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_2 = vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_1;
    vlSelfRef.day30_siso_sipo_tb__DOT___Vpast_1_1 = vlSelfRef.__Vsampled_TOP__day30_siso_sipo_tb__DOT__sin;
}

void Vday30_siso_sipo_tb___024root___timing_ready(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___timing_ready\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h6fc3e553__0.ready("@(negedge day30_siso_sipo_tb.clk)");
    }
}

void Vday30_siso_sipo_tb___024root___timing_resume(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___timing_resume\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h6fc3e553__0.moveToResumeQueue(
                                                          "@(negedge day30_siso_sipo_tb.clk)");
    vlSelfRef.__VtrigSched_h6fc3e553__0.resume("@(negedge day30_siso_sipo_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday30_siso_sipo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday30_siso_sipo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday30_siso_sipo_tb___024root____VbeforeTrig_h6fc3e553__0(Vday30_siso_sipo_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root____VbeforeTrig_h6fc3e553__0\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day30_siso_sipo_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day30_siso_sipo_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day30_siso_sipo_tb__DOT__clk__0 
        = vlSelfRef.day30_siso_sipo_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h6fc3e553__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6fc3e553__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday30_siso_sipo_tb___024root___eval_debug_assertions(Vday30_siso_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday30_siso_sipo_tb___024root___eval_debug_assertions\n"); );
    Vday30_siso_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
