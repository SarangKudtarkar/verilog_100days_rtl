// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday05_rca_4bit_tb.h for the primary calling header

#include "Vday05_rca_4bit_tb__pch.h"

VlCoroutine Vday05_rca_4bit_tb___024root___eval_initial__TOP__Vtiming__0(Vday05_rca_4bit_tb___024root* vlSelf);
VlCoroutine Vday05_rca_4bit_tb___024root___eval_initial__TOP__Vtiming__1(Vday05_rca_4bit_tb___024root* vlSelf);

void Vday05_rca_4bit_tb___024root___eval_initial(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_initial\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday05_rca_4bit_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday05_rca_4bit_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday05_rca_4bit_tb___024root___eval_sample(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_sample\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__ 
        = vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__;
    vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_1 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__2__KET__ 
        = vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__2__KET__;
    vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__1__KET__ 
        = vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__1__KET__;
    vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__cin 
        = vlSelfRef.day05_rca_4bit_tb__DOT__cin;
    vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__a 
        = vlSelfRef.day05_rca_4bit_tb__DOT__a;
    vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__b 
        = vlSelfRef.day05_rca_4bit_tb__DOT__b;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday05_rca_4bit_tb___024root___eval_ico(Vday05_rca_4bit_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_ico\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday05_rca_4bit_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday05_rca_4bit_tb___024root___timing_ready(Vday05_rca_4bit_tb___024root* vlSelf);
void Vday05_rca_4bit_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday05_rca_4bit_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday05_rca_4bit_tb___024root___timing_resume(Vday05_rca_4bit_tb___024root* vlSelf);
void Vday05_rca_4bit_tb___024root___act_comb__TOP__0(Vday05_rca_4bit_tb___024root* vlSelf);

bool Vday05_rca_4bit_tb___024root___eval_act(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_act\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day05_rca_4bit_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0 
            = vlSelfRef.day05_rca_4bit_tb__DOT__clk;
    }
    Vday05_rca_4bit_tb___024root___timing_ready(vlSelf);
    Vday05_rca_4bit_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday05_rca_4bit_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday05_rca_4bit_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday05_rca_4bit_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday05_rca_4bit_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vday05_rca_4bit_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vday05_rca_4bit_tb___024root___eval_inact(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_inact\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day05_rca_4bit_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday05_rca_4bit_tb___024root___nba_sequent__TOP__0(Vday05_rca_4bit_tb___024root* vlSelf);
void Vday05_rca_4bit_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday05_rca_4bit_tb___024root___eval_nba(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_nba\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday05_rca_4bit_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday05_rca_4bit_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday05_rca_4bit_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
        Vday05_rca_4bit_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday05_rca_4bit_tb___024root___eval_obs(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_obs\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday05_rca_4bit_tb___024root___eval_react(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_react\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday05_rca_4bit_tb___024root___eval_postponed(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_postponed\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday05_rca_4bit_tb___024root____VbeforeTrig_hd11c2305__0(Vday05_rca_4bit_tb___024root* vlSelf, const char* __VeventDescription);
void Vday05_rca_4bit_tb___024root____VbeforeTrig_hd11c2246__0(Vday05_rca_4bit_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday05_rca_4bit_tb___024root___eval_initial__TOP__Vtiming__0(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day05_rca_4bit_tb__DOT__unnamedblk1__DOT__i;
    day05_rca_4bit_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    VL_WRITEF_NX("Console results (every 37th vector):\n",0);
    day05_rca_4bit_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000200U, day05_rca_4bit_tb__DOT__unnamedblk1__DOT__i)) {
        Vday05_rca_4bit_tb___024root____VbeforeTrig_hd11c2305__0(vlSelf, 
                                                                 "@(negedge day05_rca_4bit_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd11c2305__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day05_rca_4bit_tb.clk)", 
                                                             "tb/day05_rca_4bit_tb.sv", 
                                                             17);
        vlSelfRef.day05_rca_4bit_tb__DOT__cin = (1U 
                                                 & (day05_rca_4bit_tb__DOT__unnamedblk1__DOT__i 
                                                    >> 8U));
        vlSelfRef.day05_rca_4bit_tb__DOT__a = (0x0000000fU 
                                               & (day05_rca_4bit_tb__DOT__unnamedblk1__DOT__i 
                                                  >> 4U));
        vlSelfRef.day05_rca_4bit_tb__DOT__b = (0x0000000fU 
                                               & day05_rca_4bit_tb__DOT__unnamedblk1__DOT__i);
        Vday05_rca_4bit_tb___024root____VbeforeTrig_hd11c2246__0(vlSelf, 
                                                                 "@(posedge day05_rca_4bit_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd11c2246__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day05_rca_4bit_tb.clk)", 
                                                             "tb/day05_rca_4bit_tb.sv", 
                                                             18);
        if (VL_UNLIKELY(((((0x00000010U & ((((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 3U)) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                               >> 3U)) 
                                           << 4U)) 
                           | (IData)(vlSelfRef.day05_rca_4bit_tb__DOT__sum)) 
                          != (0x0000001fU & (((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__a) 
                                              + (IData)(vlSelfRef.day05_rca_4bit_tb__DOT__b)) 
                                             + (IData)(vlSelfRef.day05_rca_4bit_tb__DOT__cin))))))) {
            vlSelfRef.day05_rca_4bit_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day05_rca_4bit_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ripple-carry sum (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY(((0U == VL_MODDIVS_III(32, day05_rca_4bit_tb__DOT__unnamedblk1__DOT__i, (IData)(0x00000025U)))))) {
            VL_WRITEF_NX("  %2d + %2d + %0d = %2d  (cout=%b)\n",5
                         , '#',4,vlSelfRef.day05_rca_4bit_tb__DOT__a
                         , '#',4,(IData)(vlSelfRef.day05_rca_4bit_tb__DOT__b)
                         , '#',1,vlSelfRef.day05_rca_4bit_tb__DOT__cin
                         , '#',4,(IData)(vlSelfRef.day05_rca_4bit_tb__DOT__sum)
                         , '#',1,(1U & (((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__) 
                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                            >> 3U)) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                           >> 3U))));
        }
        day05_rca_4bit_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day05_rca_4bit_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day05_rca_4bit_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day05_rca_4bit\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day05_rca_4bit : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day05_rca_4bit_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day05_rca_4bit_tb.sv", 23, "");
    co_return;
}

VlCoroutine Vday05_rca_4bit_tb___024root___eval_initial__TOP__Vtiming__1(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day05_rca_4bit_tb.sv", 
                                             9);
        vlSelfRef.day05_rca_4bit_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.day05_rca_4bit_tb__DOT__clk)));
    }
    co_return;
}

bool Vday05_rca_4bit_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday05_rca_4bit_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___trigger_anySet__act\n"); );
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

void Vday05_rca_4bit_tb___024root___act_comb__TOP__0(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___act_comb__TOP__0\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__a) 
                                                ^ (IData)(vlSelfRef.day05_rca_4bit_tb__DOT__b));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__a) 
                                                | (IData)(vlSelfRef.day05_rca_4bit_tb__DOT__b));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__a) 
                                                & (IData)(vlSelfRef.day05_rca_4bit_tb__DOT__b));
    vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__1__KET__ 
        = (1U & (((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__cin) 
                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)));
    vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__2__KET__ 
        = (1U & (((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__1__KET__) 
                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                     >> 1U)) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                >> 1U)));
    vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__ 
        = (1U & (((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__2__KET__) 
                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                     >> 2U)) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                >> 2U)));
    vlSelfRef.day05_rca_4bit_tb__DOT__sum = (((((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__) 
                                                ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                   >> 3U)) 
                                               << 3U) 
                                              | (4U 
                                                 & (((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__2__KET__) 
                                                     << 2U) 
                                                    ^ 
                                                    (0xfffffffcU 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))))) 
                                             | ((2U 
                                                 & (((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__1__KET__) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__cin) 
                                                      ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))));
}

void Vday05_rca_4bit_tb___024root___nba_sequent__TOP__0(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___nba_sequent__TOP__0\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((((((4U & ((((IData)(vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__) 
                                          & ((IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0) 
                                             >> 3U)) 
                                         | ((IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_1) 
                                            >> 3U)) 
                                        << 2U)) | (
                                                   (((IData)(vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2) 
                                                      >> 3U)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__2__KET__) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2) 
                                                          >> 2U))))) 
                                << 2U) | ((2U & (((IData)(vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__1__KET__) 
                                                  << 1U) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2)))) 
                                          | (1U & ((IData)(vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__cin) 
                                                   ^ (IData)(vlSelfRef.__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2))))) 
                              != (0x0000001fU & (((IData)(vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__a) 
                                                  + (IData)(vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__b)) 
                                                 + (IData)(vlSelfRef.__Vsampled_TOP__day05_rca_4bit_tb__DOT__cin))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day05_rca_4bit_tb.sv:12: Assertion failed in %m: [SVA FAIL] a_add\n",3, 'M',vlSymsp->name(),"day05_rca_4bit_tb.a_add", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day05_rca_4bit_tb.sv", 12, "");
            }
        }
    }
}

void Vday05_rca_4bit_tb___024root___timing_ready(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___timing_ready\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd11c2305__0.ready("@(negedge day05_rca_4bit_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd11c2246__0.ready("@(posedge day05_rca_4bit_tb.clk)");
    }
}

void Vday05_rca_4bit_tb___024root___timing_resume(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___timing_resume\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hd11c2305__0.moveToResumeQueue(
                                                          "@(negedge day05_rca_4bit_tb.clk)");
    vlSelfRef.__VtrigSched_hd11c2246__0.moveToResumeQueue(
                                                          "@(posedge day05_rca_4bit_tb.clk)");
    vlSelfRef.__VtrigSched_hd11c2305__0.resume("@(negedge day05_rca_4bit_tb.clk)");
    vlSelfRef.__VtrigSched_hd11c2246__0.resume("@(posedge day05_rca_4bit_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday05_rca_4bit_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday05_rca_4bit_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday05_rca_4bit_tb___024root____VbeforeTrig_hd11c2305__0(Vday05_rca_4bit_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root____VbeforeTrig_hd11c2305__0\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day05_rca_4bit_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0 
        = vlSelfRef.day05_rca_4bit_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd11c2246__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd11c2305__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday05_rca_4bit_tb___024root____VbeforeTrig_hd11c2246__0(Vday05_rca_4bit_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root____VbeforeTrig_hd11c2246__0\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day05_rca_4bit_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day05_rca_4bit_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0 
        = vlSelfRef.day05_rca_4bit_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd11c2246__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd11c2305__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday05_rca_4bit_tb___024root___eval_debug_assertions(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_debug_assertions\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
