// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday37_sync_counter_tb.h for the primary calling header

#include "Vday37_sync_counter_tb__pch.h"

void Vday37_sync_counter_tb___024root___timing_ready(Vday37_sync_counter_tb___024root* vlSelf);

VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_static(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_static\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day37_sync_counter_tb__DOT__clk = 0U;
        vlSelfRef.day37_sync_counter_tb__DOT__rst = 1U;
        vlSelfRef.day37_sync_counter_tb__DOT__errors = 0U;
        vlSelfRef.day37_sync_counter_tb__DOT___Vpast_2_1 = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day37_sync_counter_tb__DOT__clk__0 = 0U;
    Vday37_sync_counter_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday37_sync_counter_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vday37_sync_counter_tb___024root___eval_stl(Vday37_sync_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_stl\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday37_sync_counter_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday37_sync_counter_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT__t__BRA__2__KET__ 
                        = ((IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q) 
                           & (IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q));
                    vlSelfRef.day37_sync_counter_tb__DOT__q 
                        = ((((IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q) 
                             << 3U) | ((IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q) 
                                       << 2U)) | (((IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q)));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__stl(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_dump_triggers__stl\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday37_sync_counter_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__ico(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_dump_triggers__ico\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday37_sync_counter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__act(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_dump_triggers__act\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday37_sync_counter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__nba(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_dump_triggers__nba\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday37_sync_counter_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__obs(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_dump_triggers__obs\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__react(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_dump_triggers__react\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_final(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___eval_final\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday37_sync_counter_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday37_sync_counter_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday37_sync_counter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday37_sync_counter_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday37_sync_counter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday37_sync_counter_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day37_sync_counter_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day37_sync_counter_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday37_sync_counter_tb___024root___ctor_var_reset(Vday37_sync_counter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday37_sync_counter_tb___024root___ctor_var_reset\n"); );
    Vday37_sync_counter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day37_sync_counter_tb__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5006253225278979290ull);
    vlSelf->day37_sync_counter_tb__DOT___Vpast_1_1 = 0;
    vlSelf->day37_sync_counter_tb__DOT___Vpast_2_1 = 0;
    vlSelf->day37_sync_counter_tb__DOT__dut__DOT__t__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11849701987878375147ull);
    vlSelf->day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__0__KET____DOT__u__q = 0;
    vlSelf->day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__1__KET____DOT__u__q = 0;
    vlSelf->day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__2__KET____DOT__u__q = 0;
    vlSelf->day37_sync_counter_tb__DOT__dut__DOT____Vcellout__g_ff__BRA__3__KET____DOT__u__q = 0;
    vlSelf->__Vsampled_TOP__day37_sync_counter_tb__DOT__q = 0;
    vlSelf->__Vsampled_TOP__day37_sync_counter_tb__DOT__rst = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day37_sync_counter_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
