// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday22_demux_sipo_tb.h for the primary calling header

#include "Vday22_demux_sipo_tb__pch.h"

void Vday22_demux_sipo_tb___024root___timing_ready(Vday22_demux_sipo_tb___024root* vlSelf);

VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_static(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_static\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day22_demux_sipo_tb__DOT__clk = 0U;
        vlSelfRef.day22_demux_sipo_tb__DOT__errors = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0 = 0U;
    Vday22_demux_sipo_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday22_demux_sipo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vday22_demux_sipo_tb___024root___eval_stl(Vday22_demux_sipo_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_stl\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday22_demux_sipo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday22_demux_sipo_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day22_demux_sipo_tb__DOT__q = 0U;
                    vlSelfRef.day22_demux_sipo_tb__DOT__q 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__sel))) 
                            & (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__q)) 
                           | (0x00ffU & ((IData)(vlSelfRef.day22_demux_sipo_tb__DOT__din) 
                                         << (IData)(vlSelfRef.day22_demux_sipo_tb__DOT__sel))));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__stl(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_dump_triggers__stl\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday22_demux_sipo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__ico(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_dump_triggers__ico\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday22_demux_sipo_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__act(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_dump_triggers__act\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday22_demux_sipo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__nba(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_dump_triggers__nba\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday22_demux_sipo_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__obs(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_dump_triggers__obs\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__react(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_dump_triggers__react\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_final(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___eval_final\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday22_demux_sipo_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday22_demux_sipo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday22_demux_sipo_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday22_demux_sipo_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday22_demux_sipo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday22_demux_sipo_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day22_demux_sipo_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day22_demux_sipo_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___ctor_var_reset(Vday22_demux_sipo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday22_demux_sipo_tb___024root___ctor_var_reset\n"); );
    Vday22_demux_sipo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day22_demux_sipo_tb__DOT__din = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2658541606516238491ull);
    vlSelf->day22_demux_sipo_tb__DOT__sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16011652136366421830ull);
    vlSelf->day22_demux_sipo_tb__DOT__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2439187840921688323ull);
    vlSelf->day22_demux_sipo_tb__DOT__word = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9346648175337879617ull);
    vlSelf->day22_demux_sipo_tb__DOT__rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16370363028735529675ull);
    vlSelf->day22_demux_sipo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__Vsampled_TOP__day22_demux_sipo_tb__DOT__q = 0;
    vlSelf->__Vsampled_TOP__day22_demux_sipo_tb__DOT__din = 0;
    vlSelf->__Vsampled_TOP__day22_demux_sipo_tb__DOT__sel = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day22_demux_sipo_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
