// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday37_sync_counter_tb.h for the primary calling header

#include "Vday37_sync_counter_tb__pch.h"

VlCoroutine Vday37_sync_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday37_sync_counter_tb___024root* vlSelf);
VlCoroutine Vday37_sync_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday37_sync_counter_tb___024root* vlSelf);

void Vday37_sync_counter_tb___024root___eval_initial(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_initial\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday37_sync_counter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday37_sync_counter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday37_sync_counter_tb___024root___eval_sample(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_sample\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day37_sync_counter_tb__DOT__q 
        = vlSelfRef.day37_sync_counter_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__day37_sync_counter_tb__DOT__rst 
        = vlSelfRef.day37_sync_counter_tb__DOT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday37_sync_counter_tb___024root___eval_ico(Vday37_sync_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_ico\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday37_sync_counter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday37_sync_counter_tb___024root___timing_ready(Vday37_sync_counter_tb___024root* vlSelf);
void Vday37_sync_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday37_sync_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday37_sync_counter_tb___024root___timing_resume(Vday37_sync_counter_tb___024root* vlSelf);

bool Vday37_sync_counter_tb___024root___eval_act(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_act\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day37_sync_counter_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day37_sync_counter_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day37_sync_counter_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day37_sync_counter_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day37_sync_counter_tb__DOT__clk__0 
            = vlSelfRef.day37_sync_counter_tb__DOT__clk;
    }
    Vday37_sync_counter_tb___024root___timing_ready(vlSelf);
    Vday37_sync_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday37_sync_counter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday37_sync_counter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday37_sync_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday37_sync_counter_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday37_sync_counter_tb___024root___eval_inact(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_inact\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day37_sync_counter_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday37_sync_counter_tb___024root___nba_sequent__TOP__0(Vday37_sync_counter_tb___024root* vlSelf);
void Vday37_sync_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday37_sync_counter_tb___024root___eval_nba(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_nba\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday37_sync_counter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday37_sync_counter_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday37_sync_counter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday37_sync_counter_tb___024root___eval_obs(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_obs\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday37_sync_counter_tb___024root___eval_react(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_react\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday37_sync_counter_tb___024root___eval_postponed(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_postponed\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday37_sync_counter_tb___024root____VbeforeTrig_h223503e7__0(Vday37_sync_counter_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday37_sync_counter_tb___024root___eval_initial__TOP__Vtiming__0(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ day37_sync_counter_tb__DOT__exp;
    day37_sync_counter_tb__DOT__exp = 0;
    IData/*31:0*/ day37_sync_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day37_sync_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day37_sync_counter_tb__DOT__unnamedblk1__DOT__i;
    day37_sync_counter_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day37_sync_counter_tb__DOT__exp = 0U;
    day37_sync_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day37_sync_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday37_sync_counter_tb___024root____VbeforeTrig_h223503e7__0(vlSelf, 
                                                                     "@(negedge day37_sync_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h223503e7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day37_sync_counter_tb.clk)", 
                                                             "tb/day37_sync_counter_tb.sv", 
                                                             15);
        day37_sync_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day37_sync_counter_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day37_sync_counter_tb__DOT__rst = 0U;
    day37_sync_counter_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000028U, day37_sync_counter_tb__DOT__unnamedblk1__DOT__i)) {
        Vday37_sync_counter_tb___024root____VbeforeTrig_h223503e7__0(vlSelf, 
                                                                     "@(negedge day37_sync_counter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h223503e7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day37_sync_counter_tb.clk)", 
                                                             "tb/day37_sync_counter_tb.sv", 
                                                             18);
        day37_sync_counter_tb__DOT__exp = (0x0000000fU 
                                           & ((IData)(1U) 
                                              + (IData)(day37_sync_counter_tb__DOT__exp)));
        if (VL_UNLIKELY((((IData)(vlSelfRef.day37_sync_counter_tb__DOT__q) 
                          != (IData)(day37_sync_counter_tb__DOT__exp))))) {
            vlSelfRef.day37_sync_counter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day37_sync_counter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] synchronous count (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 0x00000012U, day37_sync_counter_tb__DOT__unnamedblk1__DOT__i)))) {
            VL_WRITEF_NX("  count = %2d\n",1, '#',4,vlSelfRef.day37_sync_counter_tb__DOT__q);
        }
        day37_sync_counter_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day37_sync_counter_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day37_sync_counter_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day37_sync_counter\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day37_sync_counter : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day37_sync_counter_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day37_sync_counter_tb.sv", 23, "");
    co_return;
}

VlCoroutine Vday37_sync_counter_tb___024root___eval_initial__TOP__Vtiming__1(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day37_sync_counter_tb.sv", 
                                             8);
        vlSelfRef.day37_sync_counter_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.day37_sync_counter_tb__DOT__clk)));
    }
    co_return;
}

bool Vday37_sync_counter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday37_sync_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___trigger_anySet__act\n"); );
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

void Vday37_sync_counter_tb___024root___nba_sequent__TOP__0(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___nba_sequent__TOP__0\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q;
    __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q = 0;
    CData/*0:0*/ __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q;
    __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q = 0;
    CData/*0:0*/ __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q;
    __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q = 0;
    CData/*0:0*/ __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q;
    __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q = 0;
    // Body
    __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q 
        = vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day37_sync_counter_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day37_sync_counter_tb__DOT___Vpast_1_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day37_sync_counter_tb__DOT__q) 
                                              == (0x0000000fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.day37_sync_counter_tb__DOT___Vpast_2_1)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day37_sync_counter_tb.sv:11: Assertion failed in %m: [SVA FAIL] a_inc\n",3, 'M',vlSymsp->name(),"day37_sync_counter_tb.a_inc", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day37_sync_counter_tb.sv", 11, "");
                }
            }
        }
    }
    __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q 
        = vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q;
    __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q 
        = vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q;
    __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q 
        = vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q;
    if (vlSelfRef.day37_sync_counter_tb__DOT__rst) {
        __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q = 0U;
        __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q = 0U;
        __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q = 0U;
    } else {
        if (vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT__t__BRA__2__KET__) {
            __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q 
                = (1U & (~ (IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q)));
        }
        if (((IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q) 
             & (IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT__t__BRA__2__KET__))) {
            __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q 
                = (1U & (~ (IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q)));
        }
        if (vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q) {
            __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q 
                = (1U & (~ (IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q)));
        }
    }
    __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q 
        = ((1U & (~ (IData)(vlSelfRef.day37_sync_counter_tb__DOT__rst))) 
           && (1U & (~ (IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q))));
    vlSelfRef.day37_sync_counter_tb__DOT___Vpast_1_1 
        = (1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__day37_sync_counter_tb__DOT__rst)));
    vlSelfRef.day37_sync_counter_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day37_sync_counter_tb__DOT__q;
    vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q 
        = __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q;
    vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q 
        = __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q;
    vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q 
        = __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q;
    vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q 
        = __Vdly__day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q;
    vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT__t__BRA__2__KET__ 
        = ((IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q) 
           & (IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q));
    vlSelfRef.day37_sync_counter_tb__DOT__q = ((((IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q)));
}

void Vday37_sync_counter_tb___024root___timing_ready(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___timing_ready\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h223503e7__0.ready("@(negedge day37_sync_counter_tb.clk)");
    }
}

void Vday37_sync_counter_tb___024root___timing_resume(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___timing_resume\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h223503e7__0.moveToResumeQueue(
                                                          "@(negedge day37_sync_counter_tb.clk)");
    vlSelfRef.__VtrigSched_h223503e7__0.resume("@(negedge day37_sync_counter_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday37_sync_counter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday37_sync_counter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday37_sync_counter_tb___024root____VbeforeTrig_h223503e7__0(Vday37_sync_counter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root____VbeforeTrig_h223503e7__0\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day37_sync_counter_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day37_sync_counter_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day37_sync_counter_tb__DOT__clk__0 
        = vlSelfRef.day37_sync_counter_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h223503e7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h223503e7__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday37_sync_counter_tb___024root___eval_debug_assertions(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_debug_assertions\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
