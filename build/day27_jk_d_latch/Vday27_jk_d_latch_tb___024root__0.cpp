// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday27_jk_d_latch_tb.h for the primary calling header

#include "Vday27_jk_d_latch_tb__pch.h"

VlCoroutine Vday27_jk_d_latch_tb___024root___eval_initial__TOP__Vtiming__0(Vday27_jk_d_latch_tb___024root* vlSelf);
VlCoroutine Vday27_jk_d_latch_tb___024root___eval_initial__TOP__Vtiming__1(Vday27_jk_d_latch_tb___024root* vlSelf);

void Vday27_jk_d_latch_tb___024root___eval_initial(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_initial\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday27_jk_d_latch_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday27_jk_d_latch_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday27_jk_d_latch_tb___024root___eval_sample(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_sample\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_d 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__en_d;
    vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_d 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__q_d;
    vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__d 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__d;
    vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_j 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__en_j;
    vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__j 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__j;
    vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__k 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__k;
    vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_j 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__q_j;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday27_jk_d_latch_tb___024root___eval_ico(Vday27_jk_d_latch_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_ico\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday27_jk_d_latch_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday27_jk_d_latch_tb___024root___timing_ready(Vday27_jk_d_latch_tb___024root* vlSelf);
void Vday27_jk_d_latch_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday27_jk_d_latch_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday27_jk_d_latch_tb___024root___timing_resume(Vday27_jk_d_latch_tb___024root* vlSelf);

bool Vday27_jk_d_latch_tb___024root___eval_act(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_act\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 5U) 
                                                          | (((~ (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0)) 
                                                             << 4U)) 
                                                         | (((((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__k) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__k__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__j) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__j__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__en_j) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__en_j__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0 
            = vlSelfRef.day27_jk_d_latch_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__en_j__0 
            = vlSelfRef.day27_jk_d_latch_tb__DOT__en_j;
        vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__j__0 
            = vlSelfRef.day27_jk_d_latch_tb__DOT__j;
        vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__k__0 
            = vlSelfRef.day27_jk_d_latch_tb__DOT__k;
    }
    Vday27_jk_d_latch_tb___024root___timing_ready(vlSelf);
    Vday27_jk_d_latch_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday27_jk_d_latch_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday27_jk_d_latch_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday27_jk_d_latch_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday27_jk_d_latch_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((0x0000000000000031ULL & vlSelfRef.__VactTriggered[0U])) {
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
    return (__VactExecute);
}

bool Vday27_jk_d_latch_tb___024root___eval_inact(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_inact\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day27_jk_d_latch_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday27_jk_d_latch_tb___024root___nba_sequent__TOP__1(Vday27_jk_d_latch_tb___024root* vlSelf);
void Vday27_jk_d_latch_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday27_jk_d_latch_tb___024root___eval_nba(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_nba\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday27_jk_d_latch_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((0x000000000000000eULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.day27_jk_d_latch_tb__DOT__en_j) {
                        vlSelfRef.day27_jk_d_latch_tb__DOT__q_j 
                            = ((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__j)
                                ? ((1U & (~ (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__k))) 
                                   || (1U & (~ (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__q_j))))
                                : ((1U & (~ (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__k))) 
                                   && (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__q_j)));
                    }
                }
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday27_jk_d_latch_tb___024root___nba_sequent__TOP__1(vlSelf);
            }
            if ((0x0000000000000031ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    if (vlSelfRef.day27_jk_d_latch_tb__DOT__en_d) {
                        vlSelfRef.day27_jk_d_latch_tb__DOT__q_d 
                            = vlSelfRef.day27_jk_d_latch_tb__DOT__d;
                    }
                }
            }
        }
        Vday27_jk_d_latch_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday27_jk_d_latch_tb___024root___eval_obs(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_obs\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday27_jk_d_latch_tb___024root___eval_react(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_react\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday27_jk_d_latch_tb___024root___eval_postponed(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_postponed\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6644a1__0(Vday27_jk_d_latch_tb___024root* vlSelf, const char* __VeventDescription);
void Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6645e2__0(Vday27_jk_d_latch_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday27_jk_d_latch_tb___024root___eval_initial__TOP__Vtiming__0(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__exp_d;
    day27_jk_d_latch_tb__DOT__exp_d = 0;
    CData/*0:0*/ day27_jk_d_latch_tb__DOT__exp_j;
    day27_jk_d_latch_tb__DOT__exp_j = 0;
    IData/*31:0*/ day27_jk_d_latch_tb__DOT__unnamedblk1__DOT__i;
    day27_jk_d_latch_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ day27_jk_d_latch_tb__DOT__unnamedblk2__DOT__i;
    day27_jk_d_latch_tb__DOT__unnamedblk2__DOT__i = 0;
    // Body
    Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6644a1__0(vlSelf, 
                                                               "@(negedge day27_jk_d_latch_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcc6644a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day27_jk_d_latch_tb.clk)", 
                                                         "tb/day27_jk_d_latch_tb.sv", 
                                                         24);
    vlSelfRef.day27_jk_d_latch_tb__DOT__en_d = 1U;
    vlSelfRef.day27_jk_d_latch_tb__DOT__d = 1U;
    day27_jk_d_latch_tb__DOT__exp_d = 1U;
    Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6645e2__0(vlSelf, 
                                                               "@(posedge day27_jk_d_latch_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcc6645e2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge day27_jk_d_latch_tb.clk)", 
                                                         "tb/day27_jk_d_latch_tb.sv", 
                                                         25);
    vlSelfRef.day27_jk_d_latch_tb__DOT__ready = 1U;
    day27_jk_d_latch_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000064U, day27_jk_d_latch_tb__DOT__unnamedblk1__DOT__i)) {
        Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6644a1__0(vlSelf, 
                                                                   "@(negedge day27_jk_d_latch_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hcc6644a1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day27_jk_d_latch_tb.clk)", 
                                                             "tb/day27_jk_d_latch_tb.sv", 
                                                             27);
        vlSelfRef.day27_jk_d_latch_tb__DOT__en_d = 
            (1U & VL_RANDOM_I());
        vlSelfRef.day27_jk_d_latch_tb__DOT__d = (1U 
                                                 & VL_RANDOM_I());
        if (vlSelfRef.day27_jk_d_latch_tb__DOT__en_d) {
            day27_jk_d_latch_tb__DOT__exp_d = vlSelfRef.day27_jk_d_latch_tb__DOT__d;
        }
        Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6645e2__0(vlSelf, 
                                                                   "@(posedge day27_jk_d_latch_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hcc6645e2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day27_jk_d_latch_tb.clk)", 
                                                             "tb/day27_jk_d_latch_tb.sv", 
                                                             29);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__q_d) 
                          != (IData)(day27_jk_d_latch_tb__DOT__exp_d))))) {
            vlSelfRef.day27_jk_d_latch_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day27_jk_d_latch_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] D latch output (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        day27_jk_d_latch_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day27_jk_d_latch_tb__DOT__unnamedblk1__DOT__i);
    }
    Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6644a1__0(vlSelf, 
                                                               "@(negedge day27_jk_d_latch_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcc6644a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day27_jk_d_latch_tb.clk)", 
                                                         "tb/day27_jk_d_latch_tb.sv", 
                                                         33);
    vlSelfRef.day27_jk_d_latch_tb__DOT__en_j = 0U;
    vlSelfRef.day27_jk_d_latch_tb__DOT__j = 0U;
    vlSelfRef.day27_jk_d_latch_tb__DOT__k = 1U;
    day27_jk_d_latch_tb__DOT__exp_j = 0U;
    Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6645e2__0(vlSelf, 
                                                               "@(posedge day27_jk_d_latch_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcc6645e2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge day27_jk_d_latch_tb.clk)", 
                                                         "tb/day27_jk_d_latch_tb.sv", 
                                                         34);
    Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6644a1__0(vlSelf, 
                                                               "@(negedge day27_jk_d_latch_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcc6644a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day27_jk_d_latch_tb.clk)", 
                                                         "tb/day27_jk_d_latch_tb.sv", 
                                                         35);
    vlSelfRef.day27_jk_d_latch_tb__DOT__en_j = 1U;
    vlSelfRef.day27_jk_d_latch_tb__DOT__j = 0U;
    vlSelfRef.day27_jk_d_latch_tb__DOT__k = 1U;
    day27_jk_d_latch_tb__DOT__exp_j = 0U;
    Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6645e2__0(vlSelf, 
                                                               "@(posedge day27_jk_d_latch_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcc6645e2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge day27_jk_d_latch_tb.clk)", 
                                                         "tb/day27_jk_d_latch_tb.sv", 
                                                         36);
    day27_jk_d_latch_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000003cU, day27_jk_d_latch_tb__DOT__unnamedblk2__DOT__i)) {
        Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6644a1__0(vlSelf, 
                                                                   "@(negedge day27_jk_d_latch_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hcc6644a1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day27_jk_d_latch_tb.clk)", 
                                                             "tb/day27_jk_d_latch_tb.sv", 
                                                             38);
        vlSelfRef.day27_jk_d_latch_tb__DOT__en_j = 0U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/day27_jk_d_latch_tb.sv", 
                                             39);
        vlSelfRef.day27_jk_d_latch_tb__DOT__j = (1U 
                                                 & VL_RANDOM_I());
        vlSelfRef.day27_jk_d_latch_tb__DOT__k = (1U 
                                                 & VL_RANDOM_I());
        Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6645e2__0(vlSelf, 
                                                                   "@(posedge day27_jk_d_latch_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hcc6645e2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day27_jk_d_latch_tb.clk)", 
                                                             "tb/day27_jk_d_latch_tb.sv", 
                                                             40);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__q_j) 
                          != (IData)(day27_jk_d_latch_tb__DOT__exp_j))))) {
            vlSelfRef.day27_jk_d_latch_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day27_jk_d_latch_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] JK latch must hold while closed (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6644a1__0(vlSelf, 
                                                                   "@(negedge day27_jk_d_latch_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hcc6644a1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day27_jk_d_latch_tb.clk)", 
                                                             "tb/day27_jk_d_latch_tb.sv", 
                                                             42);
        vlSelfRef.day27_jk_d_latch_tb__DOT__en_j = 1U;
        if ((1U == (((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__j) 
                     << 1U) | (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__k)))) {
            day27_jk_d_latch_tb__DOT__exp_j = 0U;
        } else if ((2U == (((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__j) 
                            << 1U) | (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__k)))) {
            day27_jk_d_latch_tb__DOT__exp_j = 1U;
        } else if ((3U == (((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__j) 
                            << 1U) | (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__k)))) {
            day27_jk_d_latch_tb__DOT__exp_j = (1U & 
                                               (~ (IData)(day27_jk_d_latch_tb__DOT__exp_j)));
        }
        Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6645e2__0(vlSelf, 
                                                                   "@(posedge day27_jk_d_latch_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hcc6645e2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day27_jk_d_latch_tb.clk)", 
                                                             "tb/day27_jk_d_latch_tb.sv", 
                                                             49);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__q_j) 
                          != (IData)(day27_jk_d_latch_tb__DOT__exp_j))))) {
            vlSelfRef.day27_jk_d_latch_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day27_jk_d_latch_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] JK latch output (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 8U, day27_jk_d_latch_tb__DOT__unnamedblk2__DOT__i)))) {
            VL_WRITEF_NX("  J=%b K=%b -> Q=%b\n",3, '#',1,vlSelfRef.day27_jk_d_latch_tb__DOT__j
                         , '#',1,(IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__k)
                         , '#',1,vlSelfRef.day27_jk_d_latch_tb__DOT__q_j);
        }
        day27_jk_d_latch_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + day27_jk_d_latch_tb__DOT__unnamedblk2__DOT__i);
    }
    Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6644a1__0(vlSelf, 
                                                               "@(negedge day27_jk_d_latch_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcc6644a1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day27_jk_d_latch_tb.clk)", 
                                                         "tb/day27_jk_d_latch_tb.sv", 
                                                         53);
    vlSelfRef.day27_jk_d_latch_tb__DOT__en_j = 0U;
    Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6645e2__0(vlSelf, 
                                                               "@(posedge day27_jk_d_latch_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcc6645e2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge day27_jk_d_latch_tb.clk)", 
                                                         "tb/day27_jk_d_latch_tb.sv", 
                                                         54);
    if ((0U == vlSelfRef.day27_jk_d_latch_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day27_jk_d_latch\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day27_jk_d_latch : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day27_jk_d_latch_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day27_jk_d_latch_tb.sv", 55, "");
    co_return;
}

VlCoroutine Vday27_jk_d_latch_tb___024root___eval_initial__TOP__Vtiming__1(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day27_jk_d_latch_tb.sv", 
                                             11);
        vlSelfRef.day27_jk_d_latch_tb__DOT__clk = (1U 
                                                   & (~ (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__clk)));
    }
    co_return;
}

bool Vday27_jk_d_latch_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday27_jk_d_latch_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___trigger_anySet__act\n"); );
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

void Vday27_jk_d_latch_tb___024root___nba_sequent__TOP__1(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___nba_sequent__TOP__1\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (vlSelfRef.day27_jk_d_latch_tb__DOT__ready) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_d)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_d) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__d)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day27_jk_d_latch_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_d_transp\n",3, 'M',vlSymsp->name(),"day27_jk_d_latch_tb.a_d_transp", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day27_jk_d_latch_tb.sv", 15, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (((IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_j) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__j)) 
                                               & (~ (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__k)))) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_j))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day27_jk_d_latch_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_jk_set\n",3, 'M',vlSymsp->name(),"day27_jk_d_latch_tb.a_jk_set", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day27_jk_d_latch_tb.sv", 17, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (((IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_j) 
                                                & (~ (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__j))) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__k))) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_j)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day27_jk_d_latch_tb.sv:18: Assertion failed in %m: [SVA FAIL] a_jk_rst\n",3, 'M',vlSymsp->name(),"day27_jk_d_latch_tb.a_jk_rst", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day27_jk_d_latch_tb.sv", 18, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_d) 
                                           | ((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT___Vpast_2_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_d)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day27_jk_d_latch_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_d_hold\n",3, 'M',vlSymsp->name(),"day27_jk_d_latch_tb.a_d_hold", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day27_jk_d_latch_tb.sv", 16, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_j) 
                                           | ((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT___Vpast_7_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_j)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day27_jk_d_latch_tb.sv:20: Assertion failed in %m: [SVA FAIL] a_jk_hold\n",3, 'M',vlSymsp->name(),"day27_jk_d_latch_tb.a_jk_hold", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day27_jk_d_latch_tb.sv", 20, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ ((((IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_j) 
                                                 & (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__j)) 
                                                & (IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__k)) 
                                               & (~ (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT___Vpast_6_1)))) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_j) 
                                              != (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT___Vpast_7_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day27_jk_d_latch_tb.sv:19: Assertion failed in %m: [SVA FAIL] a_jk_tog\n",3, 'M',vlSymsp->name(),"day27_jk_d_latch_tb.a_jk_tog", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day27_jk_d_latch_tb.sv", 19, "");
                }
            }
        }
    }
    vlSelfRef.day27_jk_d_latch_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_d;
    vlSelfRef.day27_jk_d_latch_tb__DOT___Vpast_6_1 
        = vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__en_j;
    vlSelfRef.day27_jk_d_latch_tb__DOT___Vpast_7_1 
        = vlSelfRef.__Vsampled_TOP__day27_jk_d_latch_tb__DOT__q_j;
}

void Vday27_jk_d_latch_tb___024root___timing_ready(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___timing_ready\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready("@(negedge day27_jk_d_latch_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready("@(posedge day27_jk_d_latch_tb.clk)");
    }
}

void Vday27_jk_d_latch_tb___024root___timing_resume(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___timing_resume\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hcc6644a1__0.moveToResumeQueue(
                                                          "@(negedge day27_jk_d_latch_tb.clk)");
    vlSelfRef.__VtrigSched_hcc6645e2__0.moveToResumeQueue(
                                                          "@(posedge day27_jk_d_latch_tb.clk)");
    vlSelfRef.__VtrigSched_hcc6644a1__0.resume("@(negedge day27_jk_d_latch_tb.clk)");
    vlSelfRef.__VtrigSched_hcc6645e2__0.resume("@(posedge day27_jk_d_latch_tb.clk)");
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday27_jk_d_latch_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday27_jk_d_latch_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6644a1__0(Vday27_jk_d_latch_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6644a1__0\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0)) 
                                   << 4U) | ((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
    }
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6645e2__0(Vday27_jk_d_latch_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root____VbeforeTrig_hcc6645e2__0\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0)) 
                                   << 4U) | ((IData)(vlSelfRef.day27_jk_d_latch_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day27_jk_d_latch_tb__DOT__clk__0 
        = vlSelfRef.day27_jk_d_latch_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6645e2__0.ready(__VeventDescription);
    }
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcc6644a1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday27_jk_d_latch_tb___024root___eval_debug_assertions(Vday27_jk_d_latch_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday27_jk_d_latch_tb___024root___eval_debug_assertions\n"); );
    Vday27_jk_d_latch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
