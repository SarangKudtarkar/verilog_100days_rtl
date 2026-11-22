// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday28_flipflops_tb.h for the primary calling header

#include "Vday28_flipflops_tb__pch.h"

void Vday28_flipflops_tb___024root___timing_ready(Vday28_flipflops_tb___024root* vlSelf);

VL_ATTR_COLD void Vday28_flipflops_tb___024root___eval_static(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_static\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day28_flipflops_tb__DOT__clk = 0U;
        vlSelfRef.day28_flipflops_tb__DOT__rst_n = 0U;
        vlSelfRef.day28_flipflops_tb__DOT__errors = 0U;
        vlSelfRef.day28_flipflops_tb__DOT___Vpast_2_1 = 0U;
        vlSelfRef.day28_flipflops_tb__DOT___Vpast_5_1 = 0U;
        vlSelfRef.day28_flipflops_tb__DOT___Vpast_14_1 = 0U;
        vlSelfRef.day28_flipflops_tb__DOT___Vpast_23_1 = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__rst_n__0 = 0U;
    Vday28_flipflops_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday28_flipflops_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday28_flipflops_tb___024root___eval_stl(Vday28_flipflops_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_stl\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday28_flipflops_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vday28_flipflops_tb___024root___eval_dump_triggers__stl(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_dump_triggers__stl\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday28_flipflops_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday28_flipflops_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday28_flipflops_tb___024root___eval_dump_triggers__ico(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_dump_triggers__ico\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday28_flipflops_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday28_flipflops_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday28_flipflops_tb___024root___eval_dump_triggers__act(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_dump_triggers__act\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday28_flipflops_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday28_flipflops_tb___024root___eval_dump_triggers__nba(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_dump_triggers__nba\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday28_flipflops_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday28_flipflops_tb___024root___eval_dump_triggers__obs(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_dump_triggers__obs\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday28_flipflops_tb___024root___eval_dump_triggers__react(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_dump_triggers__react\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday28_flipflops_tb___024root___eval_final(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___eval_final\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool Vday28_flipflops_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday28_flipflops_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday28_flipflops_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday28_flipflops_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday28_flipflops_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday28_flipflops_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday28_flipflops_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday28_flipflops_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday28_flipflops_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday28_flipflops_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day28_flipflops_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day28_flipflops_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge day28_flipflops_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday28_flipflops_tb___024root___ctor_var_reset(Vday28_flipflops_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday28_flipflops_tb___024root___ctor_var_reset\n"); );
    Vday28_flipflops_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day28_flipflops_tb__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10821836487784504040ull);
    vlSelf->day28_flipflops_tb__DOT__t = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5911202516068428730ull);
    vlSelf->day28_flipflops_tb__DOT__j = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6496977841047599121ull);
    vlSelf->day28_flipflops_tb__DOT__k = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12072832982722647244ull);
    vlSelf->day28_flipflops_tb__DOT__s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10698453206612521112ull);
    vlSelf->day28_flipflops_tb__DOT__r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2898610425353723298ull);
    vlSelf->day28_flipflops_tb__DOT__q_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17028922986415599334ull);
    vlSelf->day28_flipflops_tb__DOT__q_t = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15585076166770241723ull);
    vlSelf->day28_flipflops_tb__DOT__q_jk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9393082241516889793ull);
    vlSelf->day28_flipflops_tb__DOT__q_sr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12487359977096176045ull);
    vlSelf->day28_flipflops_tb__DOT___Vpast_1_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_2_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_4_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_5_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_7_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_9_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_11_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_13_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_14_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_16_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_18_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_20_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_22_1 = 0;
    vlSelf->day28_flipflops_tb__DOT___Vpast_23_1 = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__q_d = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__q_t = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__q_jk = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__q_sr = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__s = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__r = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__rst_n = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__d = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__t = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__j = 0;
    vlSelf->__Vsampled_TOP__day28_flipflops_tb__DOT__k = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day28_flipflops_tb__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
