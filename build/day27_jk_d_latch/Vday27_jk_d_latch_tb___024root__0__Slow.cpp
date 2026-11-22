// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday27_jk_d_latch_tb.h for the primary calling header

#include "Vday27_jk_d_latch_tb__pch.h"

void Vday27_jk_d_latch_tb___024root___timing_ready(Vday27_jk_d_latch_tb___024root* vlSelf);

VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_static(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_static\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day27_jk_d_latch_tb__DOT__clk = 0U;
        vlSelfRef.day27_jk_d_latch_tb__DOT__ready = 0U;
        vlSelfRef.day27_jk_d_latch_tb__DOT__errors = 0U;
        vlSelfRef.day27_jk_d_latch_tb__DOT___Vpast_2_1 = 0U;
        vlSelfRef.day27_jk_d_latch_tb__DOT___Vpast_6_1 = 0U;
        vlSelfRef.day27_jk_d_latch_tb__DOT___Vpast_7_1 = 0U;
    }
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__en_j__0 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__en_j;
    vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__j__0 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__j;
    vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__k__0 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__k;
    Vday27_jk_d_latch_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday27_jk_d_latch_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vday27_jk_d_latch_tb___024root___eval_stl(Vday27_jk_d_latch_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_stl\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday27_jk_d_latch_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday27_jk_d_latch_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    if (vlSelfRef.day27_jk_d_latch_tb__DOT__en_d) {
                        vlSelfRef.day27_jk_d_latch_tb__DOT__q_d 
                            = vlSelfRef.day27_jk_d_latch_tb__DOT__d;
                    }
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__stl(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__stl\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday27_jk_d_latch_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__ico(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__ico\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday27_jk_d_latch_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__act(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__act\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday27_jk_d_latch_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__nba(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__nba\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday27_jk_d_latch_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__obs(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__obs\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__react(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__react\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_final(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_final\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday27_jk_d_latch_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday27_jk_d_latch_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday27_jk_d_latch_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday27_jk_d_latch_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday27_jk_d_latch_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday27_jk_d_latch_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day27_jk_d_latch_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( day27_jk_d_latch_tb.en_j)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( day27_jk_d_latch_tb.j)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( day27_jk_d_latch_tb.k)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge day27_jk_d_latch_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___ctor_var_reset(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___ctor_var_reset\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day27_jk_d_latch_tb__DOT__en_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13514439400023168286ull);
    vlSelf->day27_jk_d_latch_tb__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10549781507313946989ull);
    vlSelf->day27_jk_d_latch_tb__DOT__q_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16365914325130255089ull);
    vlSelf->day27_jk_d_latch_tb__DOT__en_j = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7621002569995495934ull);
    vlSelf->day27_jk_d_latch_tb__DOT__j = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10879771982641778083ull);
    vlSelf->day27_jk_d_latch_tb__DOT__k = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4005528272663360487ull);
    vlSelf->day27_jk_d_latch_tb__DOT__q_j = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9452714832496041086ull);
    vlSelf->day27_jk_d_latch_tb__DOT___Vpast_2_1 = 0;
    vlSelf->day27_jk_d_latch_tb__DOT___Vpast_6_1 = 0;
    vlSelf->day27_jk_d_latch_tb__DOT___Vpast_7_1 = 0;
    vlSelf->__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_d = 0;
    vlSelf->__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_d = 0;
    vlSelf->__Vsampled_TOP__day27_jk_d_latch_tb__DOT__d = 0;
    vlSelf->__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_j = 0;
    vlSelf->__Vsampled_TOP__day27_jk_d_latch_tb__DOT__j = 0;
    vlSelf->__Vsampled_TOP__day27_jk_d_latch_tb__DOT__k = 0;
    vlSelf->__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_j = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__en_j__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__j__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__k__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
