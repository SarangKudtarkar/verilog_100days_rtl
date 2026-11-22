// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday42_sync_fifo_tb.h for the primary calling header

#include "Vday42_sync_fifo_tb__pch.h"

void Vday42_sync_fifo_tb___024root___timing_ready(Vday42_sync_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_static(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_static\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day42_sync_fifo_tb__DOT__clk = 0U;
        vlSelfRef.day42_sync_fifo_tb__DOT__rst = 1U;
        vlSelfRef.day42_sync_fifo_tb__DOT__wr_en = 0U;
        vlSelfRef.day42_sync_fifo_tb__DOT__rd_en = 0U;
        vlSelfRef.day42_sync_fifo_tb__DOT__din = 0U;
        vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid = 0U;
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 0U;
        vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_6_1 = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day42_sync_fifo_tb__DOT__clk__0 = 0U;
    Vday42_sync_fifo_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday42_sync_fifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vday42_sync_fifo_tb___024root___eval_stl(Vday42_sync_fifo_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_stl\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday42_sync_fifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday42_sync_fifo_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__do_wr 
                        = ((0x20U != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                           & (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__wr_en));
                    vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__do_rd 
                        = ((0U != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                           & (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__rd_en));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__stl(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_dump_triggers__stl\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday42_sync_fifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__ico(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_dump_triggers__ico\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday42_sync_fifo_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__act(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_dump_triggers__act\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday42_sync_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__nba(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_dump_triggers__nba\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday42_sync_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__obs(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_dump_triggers__obs\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__react(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_dump_triggers__react\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_final(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_final\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday42_sync_fifo_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday42_sync_fifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday42_sync_fifo_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday42_sync_fifo_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday42_sync_fifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday42_sync_fifo_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day42_sync_fifo_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge day42_sync_fifo_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___ctor_var_reset(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___ctor_var_reset\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day42_sync_fifo_tb__DOT__dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6912759926728609747ull);
    vlSelf->day42_sync_fifo_tb__DOT__count = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10642164904614501359ull);
    vlSelf->day42_sync_fifo_tb__DOT__model.atDefault() = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4851195724691031258ull);
    vlSelf->day42_sync_fifo_tb__DOT__exp_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5354303725470800592ull);
    vlSelf->day42_sync_fifo_tb__DOT___Vpast_5_1 = 0;
    vlSelf->day42_sync_fifo_tb__DOT___Vpast_6_1 = 0;
    vlSelf->day42_sync_fifo_tb__DOT___Vpast_8_1 = 0;
    vlSelf->day42_sync_fifo_tb__DOT___Vpast_10_1 = 0;
    vlSelf->day42_sync_fifo_tb__DOT___Vpast_12_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->day42_sync_fifo_tb__DOT__dut__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8011719947286354098ull);
    }
    vlSelf->day42_sync_fifo_tb__DOT__dut__DOT__wptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 230716261580969638ull);
    vlSelf->day42_sync_fifo_tb__DOT__dut__DOT__rptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8197884069994153262ull);
    vlSelf->day42_sync_fifo_tb__DOT__dut__DOT__do_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15567940062417507820ull);
    vlSelf->day42_sync_fifo_tb__DOT__dut__DOT__do_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 509289722559003160ull);
    vlSelf->__Vsampled_TOP__day42_sync_fifo_tb__DOT__count = 0;
    vlSelf->__Vsampled_TOP__day42_sync_fifo_tb__DOT__rst = 0;
    vlSelf->__Vsampled_TOP__day42_sync_fifo_tb__DOT__wr_en = 0;
    vlSelf->__Vsampled_TOP__day42_sync_fifo_tb__DOT__rd_en = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day42_sync_fifo_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
