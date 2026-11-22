// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday45_async_fifo_tb.h for the primary calling header

#include "Vday45_async_fifo_tb__pch.h"

void Vday45_async_fifo_tb___024root___timing_ready(Vday45_async_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_static(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_static\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.day45_async_fifo_tb__DOT__wclk = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__rclk = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__wrst_n = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__rrst_n = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__winc = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__rinc = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__wdata = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__wr_prob = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__rd_prob = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__errors = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__n_wr = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT__n_rd = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT___Vpast_1_1 = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT___Vpast_3_1 = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT___Vpast_6_1 = 0U;
        vlSelfRef.day45_async_fifo_tb__DOT___Vpast_9_1 = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wclk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rclk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wrst_n__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rrst_n__0 = 0U;
    Vday45_async_fifo_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday45_async_fifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vday45_async_fifo_tb___024root___eval_stl(Vday45_async_fifo_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_stl\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday45_async_fifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vday45_async_fifo_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin_n 
                        = (0x0000001fU & ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin) 
                                          + ((~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__wfull)) 
                                             & (IData)(vlSelfRef.day45_async_fifo_tb__DOT__winc))));
                    vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin_n 
                        = (0x0000001fU & ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin) 
                                          + ((~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rempty)) 
                                             & (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rinc))));
                    vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wgray_n 
                        = ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin_n) 
                           ^ ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin_n) 
                              >> 1U));
                    vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rgray_n 
                        = ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin_n) 
                           ^ ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin_n) 
                              >> 1U));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__stl(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_dump_triggers__stl\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday45_async_fifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__ico(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_dump_triggers__ico\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday45_async_fifo_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__act(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_dump_triggers__act\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday45_async_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__nba(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_dump_triggers__nba\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vday45_async_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__obs(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_dump_triggers__obs\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__react(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_dump_triggers__react\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_final(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_final\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vday45_async_fifo_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vday45_async_fifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___trigger_anySet__stl\n"); );
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

bool Vday45_async_fifo_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vday45_async_fifo_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vday45_async_fifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vday45_async_fifo_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge day45_async_fifo_tb.wclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge day45_async_fifo_tb.rclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge day45_async_fifo_tb.wclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge day45_async_fifo_tb.rclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge day45_async_fifo_tb.wrst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge day45_async_fifo_tb.rrst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday45_async_fifo_tb___024root___ctor_var_reset(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___ctor_var_reset\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->day45_async_fifo_tb__DOT__wfull = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6752835722909786800ull);
    vlSelf->day45_async_fifo_tb__DOT__rempty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14948946057256588710ull);
    vlSelf->day45_async_fifo_tb__DOT__model.atDefault() = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10869598294526280306ull);
    vlSelf->day45_async_fifo_tb__DOT___Vpast_1_1 = 0;
    vlSelf->day45_async_fifo_tb__DOT___Vpast_3_1 = 0;
    vlSelf->day45_async_fifo_tb__DOT___Vpast_5_1 = 0;
    vlSelf->day45_async_fifo_tb__DOT___Vpast_6_1 = 0;
    vlSelf->day45_async_fifo_tb__DOT___Vpast_8_1 = 0;
    vlSelf->day45_async_fifo_tb__DOT___Vpast_9_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->day45_async_fifo_tb__DOT__dut__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8179849798466686841ull);
    }
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__wbin = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8968331129819200481ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__wgray = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18388018437960844540ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__wbin_n = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8404317222735207542ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__wgray_n = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1044647170251301675ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__wq2_rgray = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10686528298452549269ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__rbin = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8577836015593011054ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__rgray = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5179029273083834198ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__rbin_n = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17680316587687325609ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__rgray_n = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11992211293449209663ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__rq2_wgray = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4449724518044043926ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__u_sync_w2r__DOT__m = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7043299223899814126ull);
    vlSelf->day45_async_fifo_tb__DOT__dut__DOT__u_sync_r2w__DOT__m = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11657547964353311774ull);
    vlSelf->__VdlyVal__day45_async_fifo_tb__DOT__dut__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__day45_async_fifo_tb__DOT__dut__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__day45_async_fifo_tb__DOT__dut__DOT__mem__v0 = 0;
    vlSelf->__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wgray = 0;
    vlSelf->__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wbin = 0;
    vlSelf->__Vsampled_TOP__day45_async_fifo_tb__DOT__wrst_n = 0;
    vlSelf->__Vsampled_TOP__day45_async_fifo_tb__DOT__wfull = 0;
    vlSelf->__Vsampled_TOP__day45_async_fifo_tb__DOT__winc = 0;
    vlSelf->__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__rgray = 0;
    vlSelf->__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__rbin = 0;
    vlSelf->__Vsampled_TOP__day45_async_fifo_tb__DOT__rrst_n = 0;
    vlSelf->__Vsampled_TOP__day45_async_fifo_tb__DOT__rempty = 0;
    vlSelf->__Vsampled_TOP__day45_async_fifo_tb__DOT__rinc = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wrst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rrst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
