// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday23_majority5_tb.h for the primary calling header

#include "Vday23_majority5_tb__pch.h"

VlCoroutine Vday23_majority5_tb___024root___eval_initial__TOP__Vtiming__0(Vday23_majority5_tb___024root* vlSelf);
VlCoroutine Vday23_majority5_tb___024root___eval_initial__TOP__Vtiming__1(Vday23_majority5_tb___024root* vlSelf);

void Vday23_majority5_tb___024root___eval_initial(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_initial\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday23_majority5_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday23_majority5_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday23_majority5_tb___024root___eval_sample(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_sample\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__c 
        = vlSelfRef.day23_majority5_tb__DOT__c;
    vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__d 
        = vlSelfRef.day23_majority5_tb__DOT__d;
    vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__e 
        = vlSelfRef.day23_majority5_tb__DOT__e;
    vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_1 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__a 
        = vlSelfRef.day23_majority5_tb__DOT__a;
    vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_3 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3;
    vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__b 
        = vlSelfRef.day23_majority5_tb__DOT__b;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday23_majority5_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday23_majority5_tb___024root___eval_ico(Vday23_majority5_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_ico\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday23_majority5_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday23_majority5_tb___024root___timing_ready(Vday23_majority5_tb___024root* vlSelf);
void Vday23_majority5_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday23_majority5_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday23_majority5_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday23_majority5_tb___024root___timing_resume(Vday23_majority5_tb___024root* vlSelf);

bool Vday23_majority5_tb___024root___eval_act(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_act\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day23_majority5_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day23_majority5_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day23_majority5_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day23_majority5_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day23_majority5_tb__DOT__clk__0 
            = vlSelfRef.day23_majority5_tb__DOT__clk;
    }
    Vday23_majority5_tb___024root___timing_ready(vlSelf);
    Vday23_majority5_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday23_majority5_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday23_majority5_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday23_majority5_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday23_majority5_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                        = ((IData)(vlSelfRef.day23_majority5_tb__DOT__a) 
                           & (IData)(vlSelfRef.day23_majority5_tb__DOT__b));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                        = ((IData)(vlSelfRef.day23_majority5_tb__DOT__a) 
                           & (IData)(vlSelfRef.day23_majority5_tb__DOT__c));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                        = ((IData)(vlSelfRef.day23_majority5_tb__DOT__b) 
                           & (IData)(vlSelfRef.day23_majority5_tb__DOT__c));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                        = ((IData)(vlSelfRef.day23_majority5_tb__DOT__d) 
                           & (IData)(vlSelfRef.day23_majority5_tb__DOT__e));
                    vlSelfRef.day23_majority5_tb__DOT__y 
                        = (((IData)(vlSelfRef.day23_majority5_tb__DOT__c) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                           | (((IData)(vlSelfRef.day23_majority5_tb__DOT__d) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                              | (((IData)(vlSelfRef.day23_majority5_tb__DOT__e) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                 | (((IData)(vlSelfRef.day23_majority5_tb__DOT__d) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                    | (((IData)(vlSelfRef.day23_majority5_tb__DOT__e) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                       | (((IData)(vlSelfRef.day23_majority5_tb__DOT__a) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)) 
                                          | (((IData)(vlSelfRef.day23_majority5_tb__DOT__d) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                             | (((IData)(vlSelfRef.day23_majority5_tb__DOT__e) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                | (((IData)(vlSelfRef.day23_majority5_tb__DOT__b) 
                                                    | (IData)(vlSelfRef.day23_majority5_tb__DOT__c)) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))))))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday23_majority5_tb___024root___eval_inact(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_inact\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day23_majority5_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday23_majority5_tb___024root___nba_sequent__TOP__0(Vday23_majority5_tb___024root* vlSelf);
void Vday23_majority5_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday23_majority5_tb___024root___eval_nba(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_nba\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday23_majority5_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday23_majority5_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                        = ((IData)(vlSelfRef.day23_majority5_tb__DOT__a) 
                           & (IData)(vlSelfRef.day23_majority5_tb__DOT__b));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                        = ((IData)(vlSelfRef.day23_majority5_tb__DOT__a) 
                           & (IData)(vlSelfRef.day23_majority5_tb__DOT__c));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                        = ((IData)(vlSelfRef.day23_majority5_tb__DOT__b) 
                           & (IData)(vlSelfRef.day23_majority5_tb__DOT__c));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                        = ((IData)(vlSelfRef.day23_majority5_tb__DOT__d) 
                           & (IData)(vlSelfRef.day23_majority5_tb__DOT__e));
                    vlSelfRef.day23_majority5_tb__DOT__y 
                        = (((IData)(vlSelfRef.day23_majority5_tb__DOT__c) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                           | (((IData)(vlSelfRef.day23_majority5_tb__DOT__d) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                              | (((IData)(vlSelfRef.day23_majority5_tb__DOT__e) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                 | (((IData)(vlSelfRef.day23_majority5_tb__DOT__d) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                    | (((IData)(vlSelfRef.day23_majority5_tb__DOT__e) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                       | (((IData)(vlSelfRef.day23_majority5_tb__DOT__a) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)) 
                                          | (((IData)(vlSelfRef.day23_majority5_tb__DOT__d) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                             | (((IData)(vlSelfRef.day23_majority5_tb__DOT__e) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                | (((IData)(vlSelfRef.day23_majority5_tb__DOT__b) 
                                                    | (IData)(vlSelfRef.day23_majority5_tb__DOT__c)) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))))))));
                }
            }
        }
        Vday23_majority5_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday23_majority5_tb___024root___eval_obs(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_obs\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday23_majority5_tb___024root___eval_react(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_react\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday23_majority5_tb___024root___eval_postponed(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_postponed\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday23_majority5_tb___024root____VbeforeTrig_hc2abb722__0(Vday23_majority5_tb___024root* vlSelf, const char* __VeventDescription);
void Vday23_majority5_tb___024root____VbeforeTrig_hc2abb661__0(Vday23_majority5_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday23_majority5_tb___024root___eval_initial__TOP__Vtiming__0(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day23_majority5_tb__DOT__unnamedblk1__DOT__i;
    day23_majority5_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day23_majority5_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, day23_majority5_tb__DOT__unnamedblk1__DOT__i)) {
        Vday23_majority5_tb___024root____VbeforeTrig_hc2abb722__0(vlSelf, 
                                                                  "@(negedge day23_majority5_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc2abb722__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day23_majority5_tb.clk)", 
                                                             "tb/day23_majority5_tb.sv", 
                                                             16);
        vlSelfRef.day23_majority5_tb__DOT__a = (1U 
                                                & (day23_majority5_tb__DOT__unnamedblk1__DOT__i 
                                                   >> 4U));
        vlSelfRef.day23_majority5_tb__DOT__b = (1U 
                                                & (day23_majority5_tb__DOT__unnamedblk1__DOT__i 
                                                   >> 3U));
        vlSelfRef.day23_majority5_tb__DOT__c = (1U 
                                                & (day23_majority5_tb__DOT__unnamedblk1__DOT__i 
                                                   >> 2U));
        vlSelfRef.day23_majority5_tb__DOT__d = (1U 
                                                & (day23_majority5_tb__DOT__unnamedblk1__DOT__i 
                                                   >> 1U));
        vlSelfRef.day23_majority5_tb__DOT__e = (1U 
                                                & day23_majority5_tb__DOT__unnamedblk1__DOT__i);
        Vday23_majority5_tb___024root____VbeforeTrig_hc2abb661__0(vlSelf, 
                                                                  "@(posedge day23_majority5_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc2abb661__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day23_majority5_tb.clk)", 
                                                             "tb/day23_majority5_tb.sv", 
                                                             17);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day23_majority5_tb__DOT__y) 
                          != VL_LTES_III(32, 3U, VL_COUNTONES_I(
                                                                (0x0000001fU 
                                                                 & day23_majority5_tb__DOT__unnamedblk1__DOT__i))))))) {
            vlSelfRef.day23_majority5_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day23_majority5_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] majority function (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (vlSelfRef.day23_majority5_tb__DOT__y) {
            vlSelfRef.day23_majority5_tb__DOT__minterms 
                = VL_CONCATN_NNN(vlSelfRef.day23_majority5_tb__DOT__minterms, VL_SFORMATF_N_NX("%0d ",1
                                                                                , '~',32,day23_majority5_tb__DOT__unnamedblk1__DOT__i) );
        }
        day23_majority5_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day23_majority5_tb__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("  min-terms where y=1 : %s\n",1, 'S',&(vlSelfRef.day23_majority5_tb__DOT__minterms));
    if ((0U == vlSelfRef.day23_majority5_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day23_majority5\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day23_majority5 : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day23_majority5_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day23_majority5_tb.sv", 22, "");
    co_return;
}

VlCoroutine Vday23_majority5_tb___024root___eval_initial__TOP__Vtiming__1(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day23_majority5_tb.sv", 
                                             9);
        vlSelfRef.day23_majority5_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.day23_majority5_tb__DOT__clk)));
    }
    co_return;
}

bool Vday23_majority5_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday23_majority5_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___trigger_anySet__act\n"); );
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

void Vday23_majority5_tb___024root___nba_sequent__TOP__0(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___nba_sequent__TOP__0\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY((((((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__c) 
                                & (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0)) 
                               | (((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__d) 
                                   & (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0)) 
                                  | (((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__e) 
                                      & (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0)) 
                                     | (((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__d) 
                                         & (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_1)) 
                                        | (((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__e) 
                                            & (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_1)) 
                                           | (((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__a) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_3)) 
                                              | (((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__d) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2)) 
                                                 | (((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__e) 
                                                     & (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2)) 
                                                    | (((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__b) 
                                                        | (IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__c)) 
                                                       & (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_3)))))))))) 
                              != VL_LTES_III(32, 3U, 
                                             VL_COUNTONES_I(
                                                            ((((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__a) 
                                                               << 4U) 
                                                              | (((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__b) 
                                                                  << 3U) 
                                                                 | ((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__c) 
                                                                    << 2U))) 
                                                             | (((IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__d) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.__Vsampled_TOP__day23_majority5_tb__DOT__e))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day23_majority5_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_maj\n",3, 'M',vlSymsp->name(),"day23_majority5_tb.a_maj", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day23_majority5_tb.sv", 12, "");
            }
        }
    }
}

void Vday23_majority5_tb___024root___timing_ready(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___timing_ready\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc2abb722__0.ready("@(negedge day23_majority5_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc2abb661__0.ready("@(posedge day23_majority5_tb.clk)");
    }
}

void Vday23_majority5_tb___024root___timing_resume(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___timing_resume\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc2abb722__0.moveToResumeQueue(
                                                          "@(negedge day23_majority5_tb.clk)");
    vlSelfRef.__VtrigSched_hc2abb661__0.moveToResumeQueue(
                                                          "@(posedge day23_majority5_tb.clk)");
    vlSelfRef.__VtrigSched_hc2abb722__0.resume("@(negedge day23_majority5_tb.clk)");
    vlSelfRef.__VtrigSched_hc2abb661__0.resume("@(posedge day23_majority5_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday23_majority5_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday23_majority5_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday23_majority5_tb___024root____VbeforeTrig_hc2abb722__0(Vday23_majority5_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root____VbeforeTrig_hc2abb722__0\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day23_majority5_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day23_majority5_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day23_majority5_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day23_majority5_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day23_majority5_tb__DOT__clk__0 
        = vlSelfRef.day23_majority5_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc2abb661__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc2abb722__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday23_majority5_tb___024root____VbeforeTrig_hc2abb661__0(Vday23_majority5_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root____VbeforeTrig_hc2abb661__0\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day23_majority5_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day23_majority5_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day23_majority5_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day23_majority5_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day23_majority5_tb__DOT__clk__0 
        = vlSelfRef.day23_majority5_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc2abb661__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc2abb722__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday23_majority5_tb___024root___eval_debug_assertions(Vday23_majority5_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday23_majority5_tb___024root___eval_debug_assertions\n"); );
    Vday23_majority5_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
