// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday29_ff_vs_register_tb.h for the primary calling header

#include "Vday29_ff_vs_register_tb__pch.h"

void Vday29_ff_vs_register_tb___024root___timing_ready(Vday29_ff_vs_register_tb___024root* vlSelf);

VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_static(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_static\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day29_ff_vs_register_tb__DOT__clk = 0U;
        vlSelfRef.day29_ff_vs_register_tb__DOT__rst_n = 0U;
        vlSelfRef.day29_ff_vs_register_tb__DOT__errors = 0U;
        vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_2_1 = 0U;
        vlSelfRef.day29_ff_vs_register_tb__DOT___Vpast_7_1 = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__rst_n__0 = 0U;
    Vday29_ff_vs_register_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday29_ff_vs_register_tb___024root___eval_stl(Vday29_ff_vs_register_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_stl\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday29_ff_vs_register_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__stl(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__stl\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday29_ff_vs_register_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__ico(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__ico\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday29_ff_vs_register_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__act(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__act\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday29_ff_vs_register_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__nba(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__nba\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday29_ff_vs_register_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__obs(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__obs\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__react(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__react\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_final(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___eval_final\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool Vday29_ff_vs_register_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday29_ff_vs_register_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday29_ff_vs_register_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday29_ff_vs_register_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday29_ff_vs_register_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday29_ff_vs_register_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday29_ff_vs_register_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day29_ff_vs_register_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day29_ff_vs_register_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge day29_ff_vs_register_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___ctor_var_reset(Vday29_ff_vs_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday29_ff_vs_register_tb___024root___ctor_var_reset\n"); );
    Vday29_ff_vs_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day29_ff_vs_register_tb__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8037683111413237807ull);
    vlSelf->day29_ff_vs_register_tb__DOT__d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16667692504568141776ull);
    vlSelf->day29_ff_vs_register_tb__DOT__q_ff = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13941653516719060100ull);
    vlSelf->day29_ff_vs_register_tb__DOT__q_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18297476458690847585ull);
    vlSelf->day29_ff_vs_register_tb__DOT__e_ff = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5093524999535675818ull);
    vlSelf->day29_ff_vs_register_tb__DOT___Vpast_1_1 = 0;
    vlSelf->day29_ff_vs_register_tb__DOT___Vpast_2_1 = 0;
    vlSelf->day29_ff_vs_register_tb__DOT___Vpast_4_1 = 0;
    vlSelf->day29_ff_vs_register_tb__DOT___Vpast_6_1 = 0;
    vlSelf->day29_ff_vs_register_tb__DOT___Vpast_7_1 = 0;
    vlSelf->__Vsampled_TOP__day29_ff_vs_register_tb__DOT__q_ff = 0;
    vlSelf->__Vsampled_TOP__day29_ff_vs_register_tb__DOT__q_reg = 0;
    vlSelf->__Vsampled_TOP__day29_ff_vs_register_tb__DOT__d = 0;
    vlSelf->__Vsampled_TOP__day29_ff_vs_register_tb__DOT__rst_n = 0;
    vlSelf->__Vsampled_TOP__day29_ff_vs_register_tb__DOT__en = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day29_ff_vs_register_tb__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
