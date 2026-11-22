// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday31_piso_pipo_tb.h for the primary calling header

#include "Vday31_piso_pipo_tb__pch.h"

void Vday31_piso_pipo_tb___024root___timing_ready(Vday31_piso_pipo_tb___024root* vlSelf);

VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___eval_static(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_static\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day31_piso_pipo_tb__DOT__clk = 0U;
        vlSelfRef.day31_piso_pipo_tb__DOT__rst = 1U;
        vlSelfRef.day31_piso_pipo_tb__DOT__load = 0U;
        vlSelfRef.day31_piso_pipo_tb__DOT__en = 0U;
        vlSelfRef.day31_piso_pipo_tb__DOT__errors = 0U;
        vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_2_1 = 0U;
        vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_5_1 = 0U;
        vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_8_1 = 0U;
        vlSelfRef.day31_piso_pipo_tb__DOT___Vpast_11_1 = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day31_piso_pipo_tb__DOT__clk__0 = 0U;
    Vday31_piso_pipo_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday31_piso_pipo_tb___024root___eval_stl(Vday31_piso_pipo_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_stl\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday31_piso_pipo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___eval_dump_triggers__stl(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_dump_triggers__stl\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday31_piso_pipo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___eval_dump_triggers__ico(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_dump_triggers__ico\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday31_piso_pipo_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___eval_dump_triggers__act(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_dump_triggers__act\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday31_piso_pipo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___eval_dump_triggers__nba(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_dump_triggers__nba\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday31_piso_pipo_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___eval_dump_triggers__obs(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_dump_triggers__obs\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___eval_dump_triggers__react(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_dump_triggers__react\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___eval_final(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___eval_final\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool Vday31_piso_pipo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday31_piso_pipo_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday31_piso_pipo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday31_piso_pipo_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday31_piso_pipo_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday31_piso_pipo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday31_piso_pipo_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day31_piso_pipo_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day31_piso_pipo_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday31_piso_pipo_tb___024root___ctor_var_reset(Vday31_piso_pipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday31_piso_pipo_tb___024root___ctor_var_reset\n"); );
    Vday31_piso_pipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day31_piso_pipo_tb__DOT__d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2615658562538360636ull);
    vlSelf->day31_piso_pipo_tb__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4582820917942010035ull);
    vlSelf->day31_piso_pipo_tb__DOT___Vpast_1_1 = 0;
    vlSelf->day31_piso_pipo_tb__DOT___Vpast_2_1 = 0;
    vlSelf->day31_piso_pipo_tb__DOT___Vpast_4_1 = 0;
    vlSelf->day31_piso_pipo_tb__DOT___Vpast_5_1 = 0;
    vlSelf->day31_piso_pipo_tb__DOT___Vpast_7_1 = 0;
    vlSelf->day31_piso_pipo_tb__DOT___Vpast_8_1 = 0;
    vlSelf->day31_piso_pipo_tb__DOT___Vpast_10_1 = 0;
    vlSelf->day31_piso_pipo_tb__DOT___Vpast_11_1 = 0;
    vlSelf->day31_piso_pipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->day31_piso_pipo_tb__DOT__u_piso__DOT__sr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17364290781966824499ull);
    vlSelf->__Vsampled_TOP__day31_piso_pipo_tb__DOT__u_piso__DOT__sr = 0;
    vlSelf->__Vsampled_TOP__day31_piso_pipo_tb__DOT__q = 0;
    vlSelf->__Vsampled_TOP__day31_piso_pipo_tb__DOT__rst = 0;
    vlSelf->__Vsampled_TOP__day31_piso_pipo_tb__DOT__load = 0;
    vlSelf->__Vsampled_TOP__day31_piso_pipo_tb__DOT__d = 0;
    vlSelf->__Vsampled_TOP__day31_piso_pipo_tb__DOT__en = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day31_piso_pipo_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
