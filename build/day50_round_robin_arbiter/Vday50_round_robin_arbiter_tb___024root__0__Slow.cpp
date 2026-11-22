// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday50_round_robin_arbiter_tb.h for the primary calling header

#include "Vday50_round_robin_arbiter_tb__pch.h"

void Vday50_round_robin_arbiter_tb___024root___timing_ready(Vday50_round_robin_arbiter_tb___024root* vlSelf);

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_static(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_static\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        IData/*31:0*/ __Vinline_0__eval_static__TOP_day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx;
        __Vinline_0__eval_static__TOP_day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx = 0;
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__clk = 0U;
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__rst = 1U;
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__req = 0U;
        vlSelfRef.day50_round_robin_arbiter_tb__DOT__errors = 0U;
        __Vinline_0__eval_static__TOP_day50_round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__idx = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0 = 0U;
    Vday50_round_robin_arbiter_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday50_round_robin_arbiter_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday50_round_robin_arbiter_tb___024root___act_comb__TOP__0(Vday50_round_robin_arbiter_tb___024root* vlSelf);

VL_ATTR_COLD bool Vday50_round_robin_arbiter_tb___024root___eval_stl(Vday50_round_robin_arbiter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_stl\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday50_round_robin_arbiter_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday50_round_robin_arbiter_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vday50_round_robin_arbiter_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__stl(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__stl\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday50_round_robin_arbiter_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__ico(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__ico\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday50_round_robin_arbiter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__act(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__act\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday50_round_robin_arbiter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__nba(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__nba\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday50_round_robin_arbiter_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__obs(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__obs\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__react(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__react\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_final(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___eval_final\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday50_round_robin_arbiter_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday50_round_robin_arbiter_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday50_round_robin_arbiter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday50_round_robin_arbiter_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday50_round_robin_arbiter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday50_round_robin_arbiter_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day50_round_robin_arbiter_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day50_round_robin_arbiter_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___ctor_var_reset(Vday50_round_robin_arbiter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday50_round_robin_arbiter_tb___024root___ctor_var_reset\n"); );
    Vday50_round_robin_arbiter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->day50_round_robin_arbiter_tb__DOT__waitc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->day50_round_robin_arbiter_tb__DOT__gcount[__Vi0] = 0;
    }
    vlSelf->day50_round_robin_arbiter_tb__DOT___Vpast_5_1 = 0;
    vlSelf->day50_round_robin_arbiter_tb__DOT___Vpast_7_1 = 0;
    vlSelf->day50_round_robin_arbiter_tb__DOT___Vpast_9_1 = 0;
    vlSelf->day50_round_robin_arbiter_tb__DOT___Vpast_11_1 = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day50_round_robin_arbiter_tb__DOT__dut__DOT__ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1017551646202514681ull);
    vlSelf->day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16991874285646981284ull);
    vlSelf->day50_round_robin_arbiter_tb__DOT__dut__DOT__gidx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2220623979705893265ull);
    vlSelf->__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__dut__DOT__grant_c = 0;
    vlSelf->__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__req = 0;
    vlSelf->__Vsampled_TOP__day50_round_robin_arbiter_tb__DOT__rst = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day50_round_robin_arbiter_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
