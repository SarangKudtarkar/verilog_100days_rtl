// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday09_add_sub_4bit_tb.h for the primary calling header

#include "Vday09_add_sub_4bit_tb__pch.h"

void Vday09_add_sub_4bit_tb___024root___timing_ready(Vday09_add_sub_4bit_tb___024root* vlSelf);

VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___eval_static(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_static\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day09_add_sub_4bit_tb__DOT__clk = 0U;
        vlSelfRef.day09_add_sub_4bit_tb__DOT__errors = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0 = 0U;
    Vday09_add_sub_4bit_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday09_add_sub_4bit_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vday09_add_sub_4bit_tb___024root___eval_stl(Vday09_add_sub_4bit_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_stl\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday09_add_sub_4bit_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday09_add_sub_4bit_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    CData/*3:0*/ __Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx;
                    __Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx = 0;
                    __Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx 
                        = (0x0000000fU & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__b) 
                                          ^ (- (IData)((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__mode)))));
                    vlSelfRef.day09_add_sub_4bit_tb__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                  + ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__mode) 
                                     + (IData)(__Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx))) 
                                 >> 4U));
                    vlSelfRef.day09_add_sub_4bit_tb__DOT__result 
                        = (0x0000000fU & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                          + ((IData)(__Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx) 
                                             + (IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__mode))));
                    vlSelfRef.day09_add_sub_4bit_tb__DOT__ovf 
                        = (((1U & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                   >> 3U)) == (1U & 
                                               (__Vinline_0__eval_body__stl___Vinline_0__act_comb__TOP__0_day09_add_sub_4bit_tb__DOT__dut__DOT__bx 
                                                >> 3U))) 
                           & ((1U & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__a) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.day09_add_sub_4bit_tb__DOT__result) 
                                                    >> 3U))));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__stl(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__stl\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday09_add_sub_4bit_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__ico(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__ico\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday09_add_sub_4bit_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__act(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__act\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday09_add_sub_4bit_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__nba(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__nba\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday09_add_sub_4bit_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__obs(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__obs\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__react(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_dump_triggers__react\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___eval_final(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___eval_final\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday09_add_sub_4bit_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday09_add_sub_4bit_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday09_add_sub_4bit_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday09_add_sub_4bit_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday09_add_sub_4bit_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday09_add_sub_4bit_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day09_add_sub_4bit_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day09_add_sub_4bit_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday09_add_sub_4bit_tb___024root___ctor_var_reset(Vday09_add_sub_4bit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday09_add_sub_4bit_tb___024root___ctor_var_reset\n"); );
    Vday09_add_sub_4bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day09_add_sub_4bit_tb__DOT__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11804783377044647519ull);
    vlSelf->day09_add_sub_4bit_tb__DOT__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11236598485336373423ull);
    vlSelf->day09_add_sub_4bit_tb__DOT__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16556220421112660226ull);
    vlSelf->day09_add_sub_4bit_tb__DOT__mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11612580921229283869ull);
    vlSelf->day09_add_sub_4bit_tb__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14978834045591564431ull);
    vlSelf->day09_add_sub_4bit_tb__DOT__ovf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6818949595278955991ull);
    vlSelf->day09_add_sub_4bit_tb__DOT__exp = 0;
    vlSelf->__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__mode = 0;
    vlSelf->__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__cout = 0;
    vlSelf->__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__result = 0;
    vlSelf->__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__a = 0;
    vlSelf->__Vsampled_TOP__day09_add_sub_4bit_tb__DOT__b = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day09_add_sub_4bit_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
