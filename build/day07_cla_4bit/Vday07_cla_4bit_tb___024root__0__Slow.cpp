// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday07_cla_4bit_tb.h for the primary calling header

#include "Vday07_cla_4bit_tb__pch.h"

void Vday07_cla_4bit_tb___024root___timing_ready(Vday07_cla_4bit_tb___024root* vlSelf);

VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___eval_static(Vday07_cla_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___eval_static\n"); );
    Vday07_cla_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day07_cla_4bit_tb__DOT__clk = 0U;
        vlSelfRef.day07_cla_4bit_tb__DOT__errors = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day07_cla_4bit_tb__DOT__clk__0 = 0U;
    Vday07_cla_4bit_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday07_cla_4bit_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday07_cla_4bit_tb___024root___act_comb__TOP__0(Vday07_cla_4bit_tb___024root* vlSelf);

VL_ATTR_COLD bool Vday07_cla_4bit_tb___024root___eval_stl(Vday07_cla_4bit_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___eval_stl\n"); );
    Vday07_cla_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday07_cla_4bit_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday07_cla_4bit_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vday07_cla_4bit_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___eval_dump_triggers__stl(Vday07_cla_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___eval_dump_triggers__stl\n"); );
    Vday07_cla_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday07_cla_4bit_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___eval_dump_triggers__ico(Vday07_cla_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___eval_dump_triggers__ico\n"); );
    Vday07_cla_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday07_cla_4bit_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___eval_dump_triggers__act(Vday07_cla_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___eval_dump_triggers__act\n"); );
    Vday07_cla_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday07_cla_4bit_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___eval_dump_triggers__nba(Vday07_cla_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___eval_dump_triggers__nba\n"); );
    Vday07_cla_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday07_cla_4bit_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___eval_dump_triggers__obs(Vday07_cla_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___eval_dump_triggers__obs\n"); );
    Vday07_cla_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___eval_dump_triggers__react(Vday07_cla_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___eval_dump_triggers__react\n"); );
    Vday07_cla_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___eval_final(Vday07_cla_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___eval_final\n"); );
    Vday07_cla_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday07_cla_4bit_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday07_cla_4bit_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday07_cla_4bit_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday07_cla_4bit_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday07_cla_4bit_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday07_cla_4bit_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day07_cla_4bit_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day07_cla_4bit_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday07_cla_4bit_tb___024root___ctor_var_reset(Vday07_cla_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday07_cla_4bit_tb___024root___ctor_var_reset\n"); );
    Vday07_cla_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day07_cla_4bit_tb__DOT__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15651614314817059639ull);
    vlSelf->day07_cla_4bit_tb__DOT__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 952427910053585606ull);
    vlSelf->day07_cla_4bit_tb__DOT__sum = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3997513797434600594ull);
    vlSelf->day07_cla_4bit_tb__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7571132482405319743ull);
    vlSelf->day07_cla_4bit_tb__DOT__a16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5795456439675115147ull);
    vlSelf->day07_cla_4bit_tb__DOT__b16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 824385181909364021ull);
    vlSelf->day07_cla_4bit_tb__DOT__sum16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17801380731852515828ull);
    vlSelf->day07_cla_4bit_tb__DOT__cin16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9231483955527784087ull);
    vlSelf->day07_cla_4bit_tb__DOT__dut16__DOT__c__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16979692958911445876ull);
    vlSelf->day07_cla_4bit_tb__DOT__dut16__DOT__c__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13125927955538394759ull);
    vlSelf->day07_cla_4bit_tb__DOT__dut16__DOT__c__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16270864553102021929ull);
    vlSelf->day07_cla_4bit_tb__DOT__dut4__DOT__g = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13159535424692493616ull);
    vlSelf->day07_cla_4bit_tb__DOT__dut4__DOT__p = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1150903414820066885ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_10 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_13 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_14 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_16 = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__dut4__DOT__g = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__dut4__DOT__p = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_16 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_15 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_14 = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__cin = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__a = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__b = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_13 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__dut16__DOT__c__BRA__3__KET__ = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_10 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__dut16__DOT__c__BRA__2__KET__ = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__dut16__DOT__c__BRA__1__KET__ = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__Vsampled_TOP____VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__cin16 = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__a16 = 0;
    vlSelf->__Vsampled_TOP__day07_cla_4bit_tb__DOT__b16 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day07_cla_4bit_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
