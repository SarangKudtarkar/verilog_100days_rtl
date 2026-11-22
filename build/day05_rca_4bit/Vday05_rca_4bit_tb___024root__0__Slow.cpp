// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday05_rca_4bit_tb.h for the primary calling header

#include "Vday05_rca_4bit_tb__pch.h"

void Vday05_rca_4bit_tb___024root___timing_ready(Vday05_rca_4bit_tb___024root* vlSelf);

VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_static(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_static\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day05_rca_4bit_tb__DOT__clk = 0U;
        vlSelfRef.day05_rca_4bit_tb__DOT__errors = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0 = 0U;
    Vday05_rca_4bit_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday05_rca_4bit_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday05_rca_4bit_tb___024root___act_comb__TOP__0(Vday05_rca_4bit_tb___024root* vlSelf);

VL_ATTR_COLD bool Vday05_rca_4bit_tb___024root___eval_stl(Vday05_rca_4bit_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_stl\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday05_rca_4bit_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday05_rca_4bit_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vday05_rca_4bit_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__stl(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_dump_triggers__stl\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday05_rca_4bit_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__ico(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_dump_triggers__ico\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday05_rca_4bit_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__act(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_dump_triggers__act\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday05_rca_4bit_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__nba(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_dump_triggers__nba\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday05_rca_4bit_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__obs(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_dump_triggers__obs\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__react(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_dump_triggers__react\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_final(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___eval_final\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday05_rca_4bit_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday05_rca_4bit_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday05_rca_4bit_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday05_rca_4bit_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday05_rca_4bit_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday05_rca_4bit_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day05_rca_4bit_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day05_rca_4bit_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___ctor_var_reset(Vday05_rca_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday05_rca_4bit_tb___024root___ctor_var_reset\n"); );
    Vday05_rca_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day05_rca_4bit_tb__DOT__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15094223974964402969ull);
    vlSelf->day05_rca_4bit_tb__DOT__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17284426834683806074ull);
    vlSelf->day05_rca_4bit_tb__DOT__sum = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5259286877883537397ull);
    vlSelf->day05_rca_4bit_tb__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5399830650705818095ull);
    vlSelf->day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1490422172252686963ull);
    vlSelf->day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12408358036769260504ull);
    vlSelf->day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 711710882228457327ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__3__KET__ = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__2__KET__ = 0;
    vlSelf->__Vsampled_TOP__day05_rca_4bit_tb__DOT__dut__DOT__c__BRA__1__KET__ = 0;
    vlSelf->__Vsampled_TOP__day05_rca_4bit_tb__DOT__cin = 0;
    vlSelf->__Vsampled_TOP__day05_rca_4bit_tb__DOT__a = 0;
    vlSelf->__Vsampled_TOP__day05_rca_4bit_tb__DOT__b = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__day05_rca_4bit_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
