// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday26_sr_latch_tb.h for the primary calling header

#include "Vday26_sr_latch_tb__pch.h"

void Vday26_sr_latch_tb___024root___timing_ready(Vday26_sr_latch_tb___024root* vlSelf);

VL_ATTR_COLD void Vday26_sr_latch_tb___024root___eval_static(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_static\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day26_sr_latch_tb__DOT__clk = 0U;
        vlSelfRef.day26_sr_latch_tb__DOT__errors = 0U;
        vlSelfRef.day26_sr_latch_tb__DOT___Vpast_4_1 = 0U;
        vlSelfRef.day26_sr_latch_tb__DOT___Vpast_9_1 = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qb__0 
        = vlSelfRef.day26_sr_latch_tb__DOT__qb;
    vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qa__0 
        = vlSelfRef.day26_sr_latch_tb__DOT__qa;
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qb__1 
        = vlSelfRef.day26_sr_latch_tb__DOT__qb;
    vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qa__1 
        = vlSelfRef.day26_sr_latch_tb__DOT__qa;
    vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0 = 0U;
    Vday26_sr_latch_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday26_sr_latch_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday26_sr_latch_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

VL_ATTR_COLD bool Vday26_sr_latch_tb___024root___eval_stl(Vday26_sr_latch_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_stl\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qa) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qa__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qb) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qb__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qb__0 
            = vlSelfRef.day26_sr_latch_tb__DOT__qb;
        vlSelfRef.__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qa__0 
            = vlSelfRef.day26_sr_latch_tb__DOT__qa;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
            vlSelfRef.__VstlDidInit = 1U;
            vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
            vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday26_sr_latch_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday26_sr_latch_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & (vlSelfRef.__VstlTriggered[1U] 
                         | vlSelfRef.__VstlTriggered[0U]))) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day26_sr_latch_tb__DOT__qnb 
                        = (1U & (~ ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__s) 
                                    | (IData)(vlSelfRef.day26_sr_latch_tb__DOT__qb))));
                    vlSelfRef.day26_sr_latch_tb__DOT__qb 
                        = (1U & (~ ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qnb) 
                                    | (IData)(vlSelfRef.day26_sr_latch_tb__DOT__r))));
                }
            }
            if (((1ULL & vlSelfRef.__VstlTriggered[1U]) 
                 | (2ULL & vlSelfRef.__VstlTriggered[0U]))) {
                {
                    // Inlined CFunc: _act_comb__TOP__1
                    vlSelfRef.day26_sr_latch_tb__DOT__qna 
                        = (1U & (~ ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__r_n) 
                                    & (IData)(vlSelfRef.day26_sr_latch_tb__DOT__qa))));
                    vlSelfRef.day26_sr_latch_tb__DOT__qa 
                        = (1U & (~ ((IData)(vlSelfRef.day26_sr_latch_tb__DOT__qna) 
                                    & (IData)(vlSelfRef.day26_sr_latch_tb__DOT__s_n))));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday26_sr_latch_tb___024root___eval_dump_triggers__stl(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_dump_triggers__stl\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday26_sr_latch_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday26_sr_latch_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday26_sr_latch_tb___024root___eval_dump_triggers__ico(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_dump_triggers__ico\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday26_sr_latch_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday26_sr_latch_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday26_sr_latch_tb___024root___eval_dump_triggers__act(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_dump_triggers__act\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday26_sr_latch_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday26_sr_latch_tb___024root___eval_dump_triggers__nba(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_dump_triggers__nba\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday26_sr_latch_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday26_sr_latch_tb___024root___eval_dump_triggers__obs(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_dump_triggers__obs\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday26_sr_latch_tb___024root___eval_dump_triggers__react(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_dump_triggers__react\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday26_sr_latch_tb___024root___eval_final(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___eval_final\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday26_sr_latch_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday26_sr_latch_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] day26_sr_latch_tb.qb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] day26_sr_latch_tb.qa)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday26_sr_latch_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

bool Vday26_sr_latch_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday26_sr_latch_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday26_sr_latch_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday26_sr_latch_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday26_sr_latch_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday26_sr_latch_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] day26_sr_latch_tb.qb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] day26_sr_latch_tb.qa)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge day26_sr_latch_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge day26_sr_latch_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday26_sr_latch_tb___024root___ctor_var_reset(Vday26_sr_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday26_sr_latch_tb___024root___ctor_var_reset\n"); );
    Vday26_sr_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day26_sr_latch_tb__DOT__s_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17165438070260744359ull);
    vlSelf->day26_sr_latch_tb__DOT__r_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2428132371351378167ull);
    vlSelf->day26_sr_latch_tb__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10208129053212506608ull);
    vlSelf->day26_sr_latch_tb__DOT__r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4971858256527906615ull);
    vlSelf->day26_sr_latch_tb__DOT__qa = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12082965140200247235ull);
    vlSelf->day26_sr_latch_tb__DOT__qna = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3229360827383753887ull);
    vlSelf->day26_sr_latch_tb__DOT__qb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18191175045791951725ull);
    vlSelf->day26_sr_latch_tb__DOT__qnb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12624409045388629463ull);
    vlSelf->day26_sr_latch_tb__DOT___Vpast_4_1 = 0;
    vlSelf->day26_sr_latch_tb__DOT___Vpast_9_1 = 0;
    vlSelf->__Vsampled_TOP__day26_sr_latch_tb__DOT__s_n = 0;
    vlSelf->__Vsampled_TOP__day26_sr_latch_tb__DOT__r_n = 0;
    vlSelf->__Vsampled_TOP__day26_sr_latch_tb__DOT__qa = 0;
    vlSelf->__Vsampled_TOP__day26_sr_latch_tb__DOT__qna = 0;
    vlSelf->__Vsampled_TOP__day26_sr_latch_tb__DOT__s = 0;
    vlSelf->__Vsampled_TOP__day26_sr_latch_tb__DOT__r = 0;
    vlSelf->__Vsampled_TOP__day26_sr_latch_tb__DOT__qb = 0;
    vlSelf->__Vsampled_TOP__day26_sr_latch_tb__DOT__qnb = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qb__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qa__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qb__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__qa__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day26_sr_latch_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
