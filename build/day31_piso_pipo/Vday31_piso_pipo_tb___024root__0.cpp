// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday31_piso_pipo_tb.h for the primary calling header

#include "Vday31_piso_pipo_tb__pch.h"

VlCoroutine Vday31_piso_pipo_tb___024root___eval_initial__TOP__Vtiming__0(Vday31_piso_pipo_tb___024root* vlSelf);
VlCoroutine Vday31_piso_pipo_tb___024root___eval_initial__TOP__Vtiming__1(Vday31_piso_pipo_tb___024root* vlSelf);

void Vday31_piso_pipo_tb___024root___eval_initial(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_initial\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday31_piso_pipo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday31_piso_pipo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday31_piso_pipo_tb___024root___eval_sample(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_sample\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__u_piso__DOT__sr 
        = vlSelfRef.day31_piso_pipo_tb__DOT__u_piso__DOT__sr;
    vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__q 
        = vlSelfRef.day31_piso_pipo_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__rst 
        = vlSelfRef.day31_piso_pipo_tb__DOT__rst;
    vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__load 
        = vlSelfRef.day31_piso_pipo_tb__DOT__load;
    vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__d 
        = vlSelfRef.day31_piso_pipo_tb__DOT__d;
    vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__en 
        = vlSelfRef.day31_piso_pipo_tb__DOT__en;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday31_piso_pipo_tb___024root___eval_ico(Vday31_piso_pipo_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_ico\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday31_piso_pipo_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday31_piso_pipo_tb___024root___timing_ready(Vday31_piso_pipo_tb___024root* vlSelf);
void Vday31_piso_pipo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday31_piso_pipo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday31_piso_pipo_tb___024root___timing_resume(Vday31_piso_pipo_tb___024root* vlSelf);

bool Vday31_piso_pipo_tb___024root___eval_act(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_act\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day31_piso_pipo_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day31_piso_pipo_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day31_piso_pipo_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day31_piso_pipo_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day31_piso_pipo_tb__DOT__clk__0 
            = vlSelfRef.day31_piso_pipo_tb__DOT__clk;
    }
    Vday31_piso_pipo_tb___024root___timing_ready(vlSelf);
    Vday31_piso_pipo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday31_piso_pipo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday31_piso_pipo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday31_piso_pipo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday31_piso_pipo_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday31_piso_pipo_tb___024root___eval_inact(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_inact\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day31_piso_pipo_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday31_piso_pipo_tb___024root___nba_sequent__TOP__0(Vday31_piso_pipo_tb___024root* vlSelf);
void Vday31_piso_pipo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday31_piso_pipo_tb___024root___eval_nba(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_nba\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday31_piso_pipo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday31_piso_pipo_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday31_piso_pipo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday31_piso_pipo_tb___024root___eval_obs(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_obs\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday31_piso_pipo_tb___024root___eval_react(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_react\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday31_piso_pipo_tb___024root___eval_postponed(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_postponed\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday31_piso_pipo_tb___024root____VbeforeTrig_h14dd458a__0(Vday31_piso_pipo_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday31_piso_pipo_tb___024root___eval_initial__TOP__Vtiming__0(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ day31_piso_pipo_tb__DOT__e_q;
    day31_piso_pipo_tb__DOT__e_q = 0;
    IData/*31:0*/ day31_piso_pipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day31_piso_pipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day31_piso_pipo_tb__DOT__unnamedblk1__DOT__n;
    day31_piso_pipo_tb__DOT__unnamedblk1__DOT__n = 0;
    IData/*31:0*/ day31_piso_pipo_tb__DOT__unnamedblk3__DOT__i;
    day31_piso_pipo_tb__DOT__unnamedblk3__DOT__i = 0;
    // Body
    vlSelfRef.day31_piso_pipo_tb__DOT__d = 0U;
    day31_piso_pipo_tb__DOT__e_q = 0U;
    day31_piso_pipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day31_piso_pipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday31_piso_pipo_tb___024root____VbeforeTrig_h14dd458a__0(vlSelf, 
                                                                  "@(negedge day31_piso_pipo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h14dd458a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day31_piso_pipo_tb.clk)", 
                                                             "tb/day31_piso_pipo_tb.sv", 
                                                             21);
        day31_piso_pipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day31_piso_pipo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day31_piso_pipo_tb__DOT__rst = 0U;
    day31_piso_pipo_tb__DOT__unnamedblk1__DOT__n = 0U;
    while (VL_GTS_III(32, 0x0000000cU, day31_piso_pipo_tb__DOT__unnamedblk1__DOT__n)) {
        Vday31_piso_pipo_tb___024root____VbeforeTrig_h14dd458a__0(vlSelf, 
                                                                  "@(negedge day31_piso_pipo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h14dd458a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day31_piso_pipo_tb.clk)", 
                                                             "tb/day31_piso_pipo_tb.sv", 
                                                             25);
        vlSelfRef.day31_piso_pipo_tb__DOT__load = 1U;
        vlSelfRef.day31_piso_pipo_tb__DOT__d = (0x0000000fU 
                                                & VL_RANDOM_I());
        Vday31_piso_pipo_tb___024root____VbeforeTrig_h14dd458a__0(vlSelf, 
                                                                  "@(negedge day31_piso_pipo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h14dd458a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day31_piso_pipo_tb.clk)", 
                                                             "tb/day31_piso_pipo_tb.sv", 
                                                             26);
        vlSelfRef.day31_piso_pipo_tb__DOT__load = 0U;
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.day31_piso_pipo_tb__DOT__u_piso__DOT__sr) 
                                 >> 3U)) != (1U & ((IData)(vlSelfRef.day31_piso_pipo_tb__DOT__d) 
                                                   >> 3U)))))) {
            vlSelfRef.day31_piso_pipo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day31_piso_pipo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] PISO bit 3 (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day31_piso_pipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
        while (VL_LTES_III(32, 0U, vlSelfRef.day31_piso_pipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
            Vday31_piso_pipo_tb___024root____VbeforeTrig_h14dd458a__0(vlSelf, 
                                                                      "@(negedge day31_piso_pipo_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h14dd458a__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge day31_piso_pipo_tb.clk)", 
                                                                 "tb/day31_piso_pipo_tb.sv", 
                                                                 28);
            if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.day31_piso_pipo_tb__DOT__u_piso__DOT__sr) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.day31_piso_pipo_tb__DOT__d) 
                                                    >> 
                                                    (3U 
                                                     & vlSelfRef.day31_piso_pipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))))))) {
                vlSelfRef.day31_piso_pipo_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day31_piso_pipo_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] PISO shifting (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            vlSelfRef.day31_piso_pipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                = (vlSelfRef.day31_piso_pipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                   - (IData)(1U));
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 4U, day31_piso_pipo_tb__DOT__unnamedblk1__DOT__n)))) {
            VL_WRITEF_NX("  PISO word %04b shifted out MSB first\n",1
                         , '#',4,vlSelfRef.day31_piso_pipo_tb__DOT__d);
        }
        day31_piso_pipo_tb__DOT__unnamedblk1__DOT__n 
            = ((IData)(1U) + day31_piso_pipo_tb__DOT__unnamedblk1__DOT__n);
    }
    day31_piso_pipo_tb__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000003cU, day31_piso_pipo_tb__DOT__unnamedblk3__DOT__i)) {
        Vday31_piso_pipo_tb___024root____VbeforeTrig_h14dd458a__0(vlSelf, 
                                                                  "@(negedge day31_piso_pipo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h14dd458a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day31_piso_pipo_tb.clk)", 
                                                             "tb/day31_piso_pipo_tb.sv", 
                                                             34);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day31_piso_pipo_tb__DOT__q) 
                          != (IData)(day31_piso_pipo_tb__DOT__e_q))))) {
            vlSelfRef.day31_piso_pipo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day31_piso_pipo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] PIPO output (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day31_piso_pipo_tb__DOT__en = (1U 
                                                 & VL_RANDOM_I());
        vlSelfRef.day31_piso_pipo_tb__DOT__d = (0x0000000fU 
                                                & VL_RANDOM_I());
        if (vlSelfRef.day31_piso_pipo_tb__DOT__en) {
            day31_piso_pipo_tb__DOT__e_q = vlSelfRef.day31_piso_pipo_tb__DOT__d;
        }
        day31_piso_pipo_tb__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + day31_piso_pipo_tb__DOT__unnamedblk3__DOT__i);
    }
    if ((0U == vlSelfRef.day31_piso_pipo_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day31_piso_pipo\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day31_piso_pipo : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day31_piso_pipo_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day31_piso_pipo_tb.sv", 39, "");
    co_return;
}

VlCoroutine Vday31_piso_pipo_tb___024root___eval_initial__TOP__Vtiming__1(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day31_piso_pipo_tb.sv", 
                                             10);
        vlSelfRef.day31_piso_pipo_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.day31_piso_pipo_tb__DOT__clk)));
    }
    co_return;
}

bool Vday31_piso_pipo_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday31_piso_pipo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___trigger_anySet__act\n"); );
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

void Vday31_piso_pipo_tb___024root___nba_sequent__TOP__0(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___nba_sequent__TOP__0\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day31_piso_pipo_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_1_1)) 
                                           | ((1U & 
                                               ((IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__u_piso__DOT__sr) 
                                                >> 3U)) 
                                              == (IData)(vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_2_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day31_piso_pipo_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_piso_load\n",3, 'M',vlSymsp->name(),"day31_piso_pipo_tb.a_piso_load", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day31_piso_pipo_tb.sv", 14, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_7_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__q) 
                                              == (IData)(vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_8_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day31_piso_pipo_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_pipo_load\n",3, 'M',vlSymsp->name(),"day31_piso_pipo_tb.a_pipo_load", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day31_piso_pipo_tb.sv", 16, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_4_1)) 
                                           | ((1U & 
                                               ((IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__u_piso__DOT__sr) 
                                                >> 3U)) 
                                              == (IData)(vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_5_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day31_piso_pipo_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_piso_shift\n",3, 'M',vlSymsp->name(),"day31_piso_pipo_tb.a_piso_shift", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day31_piso_pipo_tb.sv", 15, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_10_1)) 
                                           | ((IData)(vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_11_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day31_piso_pipo_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_pipo_hold\n",3, 'M',vlSymsp->name(),"day31_piso_pipo_tb.a_pipo_hold", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day31_piso_pipo_tb.sv", 17, "");
                }
            }
        }
    }
    if (vlSelfRef.day31_piso_pipo_tb__DOT__rst) {
        vlSelfRef.day31_piso_pipo_tb__DOT__u_piso__DOT__sr = 0U;
        vlSelfRef.day31_piso_pipo_tb__DOT__q = 0U;
    } else {
        vlSelfRef.day31_piso_pipo_tb__DOT__u_piso__DOT__sr 
            = ((IData)(vlSelfRef.day31_piso_pipo_tb__DOT__load)
                ? (IData)(vlSelfRef.day31_piso_pipo_tb__DOT__d)
                : (0x0000000eU & ((IData)(vlSelfRef.day31_piso_pipo_tb__DOT__u_piso__DOT__sr) 
                                  << 1U)));
        if (vlSelfRef.day31_piso_pipo_tb__DOT__en) {
            vlSelfRef.day31_piso_pipo_tb__DOT__q = vlSelfRef.day31_piso_pipo_tb__DOT__d;
        }
    }
    vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_2_1 = 
        (1U & ((IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__d) 
               >> 3U));
    vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_1_1 = 
        ((~ (IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__rst)) 
         & (IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__load));
    vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_8_1 = vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__d;
    vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_7_1 = 
        ((~ (IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__rst)) 
         & (IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__en));
    vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_5_1 = 
        (1U & ((IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__u_piso__DOT__sr) 
               >> 2U));
    vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_4_1 = 
        (1U & ((~ (IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__rst)) 
               & (~ (IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__load))));
    vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_11_1 
        = vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__q;
    vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_10_1 
        = (1U & ((~ (IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__rst)) 
                 & (~ (IData)(vlSelfRef.__Vsampled_TOP__day31_piso_pipo_tb__DOT__en))));
}

void Vday31_piso_pipo_tb___024root___timing_ready(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___timing_ready\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h14dd458a__0.ready("@(negedge day31_piso_pipo_tb.clk)");
    }
}

void Vday31_piso_pipo_tb___024root___timing_resume(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___timing_resume\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h14dd458a__0.moveToResumeQueue(
                                                          "@(negedge day31_piso_pipo_tb.clk)");
    vlSelfRef.__VtrigSched_h14dd458a__0.resume("@(negedge day31_piso_pipo_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday31_piso_pipo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday31_piso_pipo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday31_piso_pipo_tb___024root____VbeforeTrig_h14dd458a__0(Vday31_piso_pipo_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root____VbeforeTrig_h14dd458a__0\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day31_piso_pipo_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day31_piso_pipo_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day31_piso_pipo_tb__DOT__clk__0 
        = vlSelfRef.day31_piso_pipo_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h14dd458a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h14dd458a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h14dd458a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h14dd458a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h14dd458a__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday31_piso_pipo_tb___024root___eval_debug_assertions(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_debug_assertions\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
