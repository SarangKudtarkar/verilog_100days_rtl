// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday38_universal_counter_tb.h for the primary calling header

#include "Vday38_universal_counter_tb__pch.h"

VlCoroutine Vday38_universal_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday38_universal_counter_tb___024root* vlSelf);
VlCoroutine Vday38_universal_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday38_universal_counter_tb___024root* vlSelf);

void Vday38_universal_counter_tb___024root___eval_initial(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_initial\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday38_universal_counter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday38_universal_counter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday38_universal_counter_tb___024root___eval_sample(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_sample\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__q 
        = vlSelfRef.day38_universal_counter_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__rst 
        = vlSelfRef.day38_universal_counter_tb__DOT__rst;
    vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__load 
        = vlSelfRef.day38_universal_counter_tb__DOT__load;
    vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__en 
        = vlSelfRef.day38_universal_counter_tb__DOT__en;
    vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__up 
        = vlSelfRef.day38_universal_counter_tb__DOT__up;
    vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__d 
        = vlSelfRef.day38_universal_counter_tb__DOT__d;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday38_universal_counter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday38_universal_counter_tb___024root___eval_ico(Vday38_universal_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_ico\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday38_universal_counter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday38_universal_counter_tb___024root___timing_ready(Vday38_universal_counter_tb___024root* vlSelf);
void Vday38_universal_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday38_universal_counter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday38_universal_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday38_universal_counter_tb___024root___timing_resume(Vday38_universal_counter_tb___024root* vlSelf);

bool Vday38_universal_counter_tb___024root___eval_act(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_act\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day38_universal_counter_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day38_universal_counter_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day38_universal_counter_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day38_universal_counter_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day38_universal_counter_tb__DOT__clk__0 
            = vlSelfRef.day38_universal_counter_tb__DOT__clk;
    }
    Vday38_universal_counter_tb___024root___timing_ready(vlSelf);
    Vday38_universal_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday38_universal_counter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday38_universal_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday38_universal_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday38_universal_counter_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday38_universal_counter_tb___024root___eval_inact(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_inact\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day38_universal_counter_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday38_universal_counter_tb___024root___nba_sequent__TOP__0(Vday38_universal_counter_tb___024root* vlSelf);
void Vday38_universal_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday38_universal_counter_tb___024root___eval_nba(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_nba\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday38_universal_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday38_universal_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday38_universal_counter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday38_universal_counter_tb___024root___eval_obs(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_obs\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday38_universal_counter_tb___024root___eval_react(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_react\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday38_universal_counter_tb___024root___eval_postponed(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_postponed\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday38_universal_counter_tb___024root____VbeforeTrig_hd13c84f0__0(Vday38_universal_counter_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday38_universal_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ day38_universal_counter_tb__DOT__exp;
    day38_universal_counter_tb__DOT__exp = 0;
    IData/*31:0*/ day38_universal_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day38_universal_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day38_universal_counter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    day38_universal_counter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ day38_universal_counter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    day38_universal_counter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ day38_universal_counter_tb__DOT__unnamedblk1__DOT__i;
    day38_universal_counter_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day38_universal_counter_tb__DOT__exp = 0U;
    day38_universal_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day38_universal_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday38_universal_counter_tb___024root____VbeforeTrig_hd13c84f0__0(vlSelf, 
                                                                          "@(negedge day38_universal_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd13c84f0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day38_universal_counter_tb.clk)", 
                                                             "tb/day38_universal_counter_tb.sv", 
                                                             18);
        day38_universal_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day38_universal_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day38_universal_counter_tb__DOT__rst = 0U;
    vlSelfRef.day38_universal_counter_tb__DOT__en = 1U;
    vlSelfRef.day38_universal_counter_tb__DOT__up = 1U;
    day38_universal_counter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000012U;
    while (VL_LTS_III(32, 0U, day38_universal_counter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vday38_universal_counter_tb___024root____VbeforeTrig_hd13c84f0__0(vlSelf, 
                                                                          "@(negedge day38_universal_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd13c84f0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day38_universal_counter_tb.clk)", 
                                                             "tb/day38_universal_counter_tb.sv", 
                                                             22);
        day38_universal_counter_tb__DOT__exp = (0x0000000fU 
                                                & ((IData)(1U) 
                                                   + (IData)(day38_universal_counter_tb__DOT__exp)));
        if (VL_UNLIKELY((((IData)(vlSelfRef.day38_universal_counter_tb__DOT__q) 
                          != (IData)(day38_universal_counter_tb__DOT__exp))))) {
            vlSelfRef.day38_universal_counter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day38_universal_counter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] up count (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        day38_universal_counter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (day38_universal_counter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.day38_universal_counter_tb__DOT__up = 0U;
    day38_universal_counter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000014U;
    while (VL_LTS_III(32, 0U, day38_universal_counter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vday38_universal_counter_tb___024root____VbeforeTrig_hd13c84f0__0(vlSelf, 
                                                                          "@(negedge day38_universal_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd13c84f0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day38_universal_counter_tb.clk)", 
                                                             "tb/day38_universal_counter_tb.sv", 
                                                             24);
        day38_universal_counter_tb__DOT__exp = (0x0000000fU 
                                                & ((IData)(day38_universal_counter_tb__DOT__exp) 
                                                   - (IData)(1U)));
        if (VL_UNLIKELY((((IData)(vlSelfRef.day38_universal_counter_tb__DOT__q) 
                          != (IData)(day38_universal_counter_tb__DOT__exp))))) {
            vlSelfRef.day38_universal_counter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day38_universal_counter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] down count (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        day38_universal_counter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (day38_universal_counter_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.day38_universal_counter_tb__DOT__en = 0U;
    VL_WRITEF_NX("  after directed up/down test q = %0d\n",1
                 , '#',4,vlSelfRef.day38_universal_counter_tb__DOT__q);
    day38_universal_counter_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x000001f4U, day38_universal_counter_tb__DOT__unnamedblk1__DOT__i)) {
        Vday38_universal_counter_tb___024root____VbeforeTrig_hd13c84f0__0(vlSelf, 
                                                                          "@(negedge day38_universal_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd13c84f0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day38_universal_counter_tb.clk)", 
                                                             "tb/day38_universal_counter_tb.sv", 
                                                             29);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day38_universal_counter_tb__DOT__q) 
                          != (IData)(day38_universal_counter_tb__DOT__exp))))) {
            vlSelfRef.day38_universal_counter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day38_universal_counter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] random operation (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day38_universal_counter_tb__DOT__en 
            = (1U & VL_RANDOM_I());
        vlSelfRef.day38_universal_counter_tb__DOT__load 
            = (1U & VL_RANDOM_I());
        vlSelfRef.day38_universal_counter_tb__DOT__up 
            = (1U & VL_RANDOM_I());
        vlSelfRef.day38_universal_counter_tb__DOT__d 
            = (0x0000000fU & VL_RANDOM_I());
        if (vlSelfRef.day38_universal_counter_tb__DOT__load) {
            day38_universal_counter_tb__DOT__exp = vlSelfRef.day38_universal_counter_tb__DOT__d;
        } else if (vlSelfRef.day38_universal_counter_tb__DOT__en) {
            day38_universal_counter_tb__DOT__exp = 
                (0x0000000fU & ((IData)(vlSelfRef.day38_universal_counter_tb__DOT__up)
                                 ? ((IData)(1U) + (IData)(day38_universal_counter_tb__DOT__exp))
                                 : ((IData)(day38_universal_counter_tb__DOT__exp) 
                                    - (IData)(1U))));
        }
        day38_universal_counter_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day38_universal_counter_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day38_universal_counter_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day38_universal_counter\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day38_universal_counter : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day38_universal_counter_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day38_universal_counter_tb.sv", 36, "");
    co_return;
}

VlCoroutine Vday38_universal_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day38_universal_counter_tb.sv", 
                                             8);
        vlSelfRef.day38_universal_counter_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day38_universal_counter_tb__DOT__clk)));
    }
    co_return;
}

bool Vday38_universal_counter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday38_universal_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___trigger_anySet__act\n"); );
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

void Vday38_universal_counter_tb___024root___nba_sequent__TOP__0(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___nba_sequent__TOP__0\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__day38_universal_counter_tb__DOT__q;
    __Vdly__day38_universal_counter_tb__DOT__q = 0;
    // Body
    __Vdly__day38_universal_counter_tb__DOT__q = vlSelfRef.day38_universal_counter_tb__DOT__q;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day38_universal_counter_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day38_universal_counter_tb__DOT___Vpast_8_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__q) 
                                              == (IData)(vlSelfRef.day38_universal_counter_tb__DOT___Vpast_9_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day38_universal_counter_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_load\n",3, 'M',vlSymsp->name(),"day38_universal_counter_tb.a_load", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day38_universal_counter_tb.sv", 14, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day38_universal_counter_tb__DOT___Vpast_6_1)) 
                                           | ((IData)(vlSelfRef.day38_universal_counter_tb__DOT___Vpast_2_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day38_universal_counter_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_hold\n",3, 'M',vlSymsp->name(),"day38_universal_counter_tb.a_hold", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day38_universal_counter_tb.sv", 13, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day38_universal_counter_tb__DOT___Vpast_1_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__q) 
                                              == (0x0000000fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.day38_universal_counter_tb__DOT___Vpast_2_1)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day38_universal_counter_tb.sv:11: Assertion failed in %m: [SVA FAIL] a_up\n",3, 'M',vlSymsp->name(),"day38_universal_counter_tb.a_up", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day38_universal_counter_tb.sv", 11, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day38_universal_counter_tb__DOT___Vpast_4_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__q) 
                                              == (0x0000000fU 
                                                  & ((IData)(vlSelfRef.day38_universal_counter_tb__DOT___Vpast_2_1) 
                                                     - (IData)(1U)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day38_universal_counter_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_down\n",3, 'M',vlSymsp->name(),"day38_universal_counter_tb.a_down", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day38_universal_counter_tb.sv", 12, "");
                }
            }
        }
    }
    if (vlSelfRef.day38_universal_counter_tb__DOT__rst) {
        __Vdly__day38_universal_counter_tb__DOT__q = 0U;
    } else if (vlSelfRef.day38_universal_counter_tb__DOT__load) {
        __Vdly__day38_universal_counter_tb__DOT__q 
            = vlSelfRef.day38_universal_counter_tb__DOT__d;
    } else if (vlSelfRef.day38_universal_counter_tb__DOT__en) {
        __Vdly__day38_universal_counter_tb__DOT__q 
            = (0x0000000fU & ((IData)(vlSelfRef.day38_universal_counter_tb__DOT__up)
                               ? ((IData)(1U) + (IData)(vlSelfRef.day38_universal_counter_tb__DOT__q))
                               : ((IData)(vlSelfRef.day38_universal_counter_tb__DOT__q) 
                                  - (IData)(1U))));
    }
    vlSelfRef.day38_universal_counter_tb__DOT__q = __Vdly__day38_universal_counter_tb__DOT__q;
    vlSelfRef.day38_universal_counter_tb__DOT___Vpast_9_1 
        = vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__d;
    vlSelfRef.day38_universal_counter_tb__DOT___Vpast_8_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__rst)) 
           & (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__load));
    vlSelfRef.day38_universal_counter_tb__DOT___Vpast_6_1 
        = (1U & ((~ (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__rst)) 
                 & ((~ (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__load)) 
                    & (~ (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__en)))));
    vlSelfRef.day38_universal_counter_tb__DOT___Vpast_1_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__rst)) 
           & (((~ (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__load)) 
               & (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__en)) 
              & (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__up)));
    vlSelfRef.day38_universal_counter_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__q;
    vlSelfRef.day38_universal_counter_tb__DOT___Vpast_4_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__rst)) 
           & (((~ (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__load)) 
               & (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__en)) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__day38_universal_counter_tb__DOT__up))));
}

void Vday38_universal_counter_tb___024root___timing_ready(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___timing_ready\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd13c84f0__0.ready("@(negedge day38_universal_counter_tb.clk)");
    }
}

void Vday38_universal_counter_tb___024root___timing_resume(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___timing_resume\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hd13c84f0__0.moveToResumeQueue(
                                                          "@(negedge day38_universal_counter_tb.clk)");
    vlSelfRef.__VtrigSched_hd13c84f0__0.resume("@(negedge day38_universal_counter_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday38_universal_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday38_universal_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday38_universal_counter_tb___024root____VbeforeTrig_hd13c84f0__0(Vday38_universal_counter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root____VbeforeTrig_hd13c84f0__0\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day38_universal_counter_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day38_universal_counter_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day38_universal_counter_tb__DOT__clk__0 
        = vlSelfRef.day38_universal_counter_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd13c84f0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd13c84f0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd13c84f0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd13c84f0__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday38_universal_counter_tb___024root___eval_debug_assertions(Vday38_universal_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday38_universal_counter_tb___024root___eval_debug_assertions\n"); );
    Vday38_universal_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
