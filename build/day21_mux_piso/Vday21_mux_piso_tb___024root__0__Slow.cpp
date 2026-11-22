// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday21_mux_piso_tb.h for the primary calling header

#include "Vday21_mux_piso_tb__pch.h"

void Vday21_mux_piso_tb___024root___timing_ready(Vday21_mux_piso_tb___024root* vlSelf);

VL_ATTR_COLD void Vday21_mux_piso_tb___024root___eval_static(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_static\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day21_mux_piso_tb__DOT__clk = 0U;
        vlSelfRef.day21_mux_piso_tb__DOT__errors = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0 = 0U;
    Vday21_mux_piso_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday21_mux_piso_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday21_mux_piso_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vday21_mux_piso_tb___024root___eval_stl(Vday21_mux_piso_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_stl\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday21_mux_piso_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday21_mux_piso_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day21_mux_piso_tb__DOT__y 
                        = (1U & ((IData)(vlSelfRef.day21_mux_piso_tb__DOT__d) 
                                 >> (IData)(vlSelfRef.day21_mux_piso_tb__DOT__sel)));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday21_mux_piso_tb___024root___eval_dump_triggers__stl(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_dump_triggers__stl\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday21_mux_piso_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday21_mux_piso_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday21_mux_piso_tb___024root___eval_dump_triggers__ico(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_dump_triggers__ico\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday21_mux_piso_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday21_mux_piso_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday21_mux_piso_tb___024root___eval_dump_triggers__act(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_dump_triggers__act\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday21_mux_piso_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday21_mux_piso_tb___024root___eval_dump_triggers__nba(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_dump_triggers__nba\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday21_mux_piso_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday21_mux_piso_tb___024root___eval_dump_triggers__obs(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_dump_triggers__obs\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday21_mux_piso_tb___024root___eval_dump_triggers__react(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_dump_triggers__react\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday21_mux_piso_tb___024root___eval_final(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___eval_final\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday21_mux_piso_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday21_mux_piso_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday21_mux_piso_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday21_mux_piso_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday21_mux_piso_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday21_mux_piso_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday21_mux_piso_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday21_mux_piso_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday21_mux_piso_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day21_mux_piso_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day21_mux_piso_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday21_mux_piso_tb___024root___ctor_var_reset(Vday21_mux_piso_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday21_mux_piso_tb___024root___ctor_var_reset\n"); );
    Vday21_mux_piso_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day21_mux_piso_tb__DOT__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13919875027757546728ull);
    vlSelf->day21_mux_piso_tb__DOT__rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14071286158856884790ull);
    vlSelf->day21_mux_piso_tb__DOT__sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13533259617936513268ull);
    vlSelf->day21_mux_piso_tb__DOT__y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9285649718440581535ull);
    vlSelf->day21_mux_piso_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__Vsampled_TOP__day21_mux_piso_tb__DOT__d = 0;
    vlSelf->__Vsampled_TOP__day21_mux_piso_tb__DOT__sel = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day21_mux_piso_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
