// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday15_encoders_tb.h for the primary calling header

#include "Vday15_encoders_tb__pch.h"

VlCoroutine Vday15_encoders_tb___024root___eval_initial__TOP__Vtiming__0(Vday15_encoders_tb___024root* vlSelf);
VlCoroutine Vday15_encoders_tb___024root___eval_initial__TOP__Vtiming__1(Vday15_encoders_tb___024root* vlSelf);

void Vday15_encoders_tb___024root___eval_initial(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_initial\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday15_encoders_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday15_encoders_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

extern const VlUnpacked<CData/*0:0*/, 256> Vday15_encoders_tb__ConstPool__TABLE_he2a5b38f_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vday15_encoders_tb__ConstPool__TABLE_h0a26a470_0;

void Vday15_encoders_tb___024root___eval_sample(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_sample\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__TABLE_he2a5b38f_0 = Vday15_encoders_tb__ConstPool__TABLE_he2a5b38f_0;
    vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__oct_i 
        = vlSelfRef.day15_encoders_tb__DOT__oct_i;
    vlSelfRef.__Vsampled_TOP__TABLE_h0a26a470_0 = Vday15_encoders_tb__ConstPool__TABLE_h0a26a470_0;
    vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__dec_i 
        = vlSelfRef.day15_encoders_tb__DOT__dec_i;
    vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__dec_b 
        = vlSelfRef.day15_encoders_tb__DOT__dec_b;
    vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i 
        = vlSelfRef.day15_encoders_tb__DOT__hex_i;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday15_encoders_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday15_encoders_tb___024root___eval_ico(Vday15_encoders_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_ico\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday15_encoders_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday15_encoders_tb___024root___timing_ready(Vday15_encoders_tb___024root* vlSelf);
void Vday15_encoders_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday15_encoders_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday15_encoders_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday15_encoders_tb___024root___timing_resume(Vday15_encoders_tb___024root* vlSelf);
void Vday15_encoders_tb___024root___act_comb__TOP__0(Vday15_encoders_tb___024root* vlSelf);

bool Vday15_encoders_tb___024root___eval_act(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_act\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day15_encoders_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day15_encoders_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day15_encoders_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day15_encoders_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day15_encoders_tb__DOT__clk__0 
            = vlSelfRef.day15_encoders_tb__DOT__clk;
    }
    Vday15_encoders_tb___024root___timing_ready(vlSelf);
    Vday15_encoders_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday15_encoders_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday15_encoders_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday15_encoders_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday15_encoders_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vday15_encoders_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vday15_encoders_tb___024root___eval_inact(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_inact\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day15_encoders_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday15_encoders_tb___024root___nba_sequent__TOP__0(Vday15_encoders_tb___024root* vlSelf);
void Vday15_encoders_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday15_encoders_tb___024root___eval_nba(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_nba\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday15_encoders_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday15_encoders_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday15_encoders_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
        Vday15_encoders_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday15_encoders_tb___024root___eval_obs(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_obs\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday15_encoders_tb___024root___eval_react(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_react\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday15_encoders_tb___024root___eval_postponed(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_postponed\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday15_encoders_tb___024root____VbeforeTrig_h118fbdcf__0(Vday15_encoders_tb___024root* vlSelf, const char* __VeventDescription);
void Vday15_encoders_tb___024root____VbeforeTrig_h118fbe10__0(Vday15_encoders_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday15_encoders_tb___024root___eval_initial__TOP__Vtiming__0(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day15_encoders_tb__DOT__unnamedblk1__DOT__i;
    day15_encoders_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ day15_encoders_tb__DOT__unnamedblk2__DOT__n;
    day15_encoders_tb__DOT__unnamedblk2__DOT__n = 0;
    // Body
    day15_encoders_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, day15_encoders_tb__DOT__unnamedblk1__DOT__i)) {
        Vday15_encoders_tb___024root____VbeforeTrig_h118fbdcf__0(vlSelf, 
                                                                 "@(negedge day15_encoders_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h118fbdcf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day15_encoders_tb.clk)", 
                                                             "tb/day15_encoders_tb.sv", 
                                                             23);
        vlSelfRef.day15_encoders_tb__DOT__oct_i = (0x000000ffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(1U), 
                                                                   VL_MODDIVS_III(32, day15_encoders_tb__DOT__unnamedblk1__DOT__i, (IData)(8U))));
        vlSelfRef.day15_encoders_tb__DOT__dec_i = (0x000003ffU 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(1U), 
                                                                   VL_MODDIVS_III(32, day15_encoders_tb__DOT__unnamedblk1__DOT__i, (IData)(0x0000000aU))));
        vlSelfRef.day15_encoders_tb__DOT__hex_i = (0x0000ffffU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(1U), day15_encoders_tb__DOT__unnamedblk1__DOT__i));
        Vday15_encoders_tb___024root____VbeforeTrig_h118fbe10__0(vlSelf, 
                                                                 "@(posedge day15_encoders_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h118fbe10__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day15_encoders_tb.clk)", 
                                                             "tb/day15_encoders_tb.sv", 
                                                             24);
        if (VL_UNLIKELY(((1U & (~ ((Vday15_encoders_tb__ConstPool__TABLE_h0a26a470_0
                                    [vlSelfRef.day15_encoders_tb__DOT__oct_i] 
                                    == (7U & VL_MODDIVS_III(32, day15_encoders_tb__DOT__unnamedblk1__DOT__i, (IData)(8U)))) 
                                   & Vday15_encoders_tb__ConstPool__TABLE_he2a5b38f_0
                                   [vlSelfRef.day15_encoders_tb__DOT__oct_i])))))) {
            vlSelfRef.day15_encoders_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day15_encoders_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] octal -> binary (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY(((1U & (~ (((IData)(vlSelfRef.day15_encoders_tb__DOT__dec_b) 
                                    == (0x0000000fU 
                                        & VL_MODDIVS_III(32, day15_encoders_tb__DOT__unnamedblk1__DOT__i, (IData)(0x0000000aU)))) 
                                   & (0U != (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i)))))))) {
            vlSelfRef.day15_encoders_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day15_encoders_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] decimal -> binary (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY(((1U & (~ (((IData)(vlSelfRef.day15_encoders_tb__DOT__hex_b) 
                                    == (0x0000000fU 
                                        & day15_encoders_tb__DOT__unnamedblk1__DOT__i)) 
                                   & (0U != (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i)))))))) {
            vlSelfRef.day15_encoders_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day15_encoders_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] hex -> binary (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        VL_WRITEF_NX("  one-hot idx %2d : oct->%03b dec->%04b hex->%04b\n",4
                     , '~',32,day15_encoders_tb__DOT__unnamedblk1__DOT__i
                     , '#',3,Vday15_encoders_tb__ConstPool__TABLE_h0a26a470_0
                     [vlSelfRef.day15_encoders_tb__DOT__oct_i]
                     , '#',4,vlSelfRef.day15_encoders_tb__DOT__dec_b
                     , '#',4,(IData)(vlSelfRef.day15_encoders_tb__DOT__hex_b));
        day15_encoders_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day15_encoders_tb__DOT__unnamedblk1__DOT__i);
    }
    Vday15_encoders_tb___024root____VbeforeTrig_h118fbdcf__0(vlSelf, 
                                                             "@(negedge day15_encoders_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h118fbdcf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day15_encoders_tb.clk)", 
                                                         "tb/day15_encoders_tb.sv", 
                                                         31);
    vlSelfRef.day15_encoders_tb__DOT__oct_i = 0U;
    vlSelfRef.day15_encoders_tb__DOT__dec_i = 0U;
    vlSelfRef.day15_encoders_tb__DOT__hex_i = 0U;
    Vday15_encoders_tb___024root____VbeforeTrig_h118fbe10__0(vlSelf, 
                                                             "@(posedge day15_encoders_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h118fbe10__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge day15_encoders_tb.clk)", 
                                                         "tb/day15_encoders_tb.sv", 
                                                         32);
    if (VL_UNLIKELY(((1U & (~ (((~ (IData)(Vday15_encoders_tb__ConstPool__TABLE_he2a5b38f_0
                                           [vlSelfRef.day15_encoders_tb__DOT__oct_i])) 
                                & (~ (0U != (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i)))) 
                               & (~ (0U != (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))))))))) {
        vlSelfRef.day15_encoders_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day15_encoders_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] valid low for zero input (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    day15_encoders_tb__DOT__unnamedblk2__DOT__n = 0U;
    while (VL_GTS_III(32, 0x000000c8U, day15_encoders_tb__DOT__unnamedblk2__DOT__n)) {
        Vday15_encoders_tb___024root____VbeforeTrig_h118fbdcf__0(vlSelf, 
                                                                 "@(negedge day15_encoders_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h118fbdcf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day15_encoders_tb.clk)", 
                                                             "tb/day15_encoders_tb.sv", 
                                                             36);
        vlSelfRef.day15_encoders_tb__DOT__oct_i = (0x000000ffU 
                                                   & VL_RANDOM_I());
        vlSelfRef.day15_encoders_tb__DOT____VlemExpr_0 
            = VL_URANDOM_RANGE_I(0U, 0x000003ffU);
        vlSelfRef.day15_encoders_tb__DOT__dec_i = (0x000003ffU 
                                                   & vlSelfRef.day15_encoders_tb__DOT____VlemExpr_0);
        vlSelfRef.day15_encoders_tb__DOT__hex_i = (0x0000ffffU 
                                                   & VL_RANDOM_I());
        Vday15_encoders_tb___024root____VbeforeTrig_h118fbe10__0(vlSelf, 
                                                                 "@(posedge day15_encoders_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h118fbe10__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day15_encoders_tb.clk)", 
                                                             "tb/day15_encoders_tb.sv", 
                                                             37);
        vlSelfRef.day15_encoders_tb__DOT__hi = 0xffffffffU;
        if ((1U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 0U;
        }
        if ((2U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 1U;
        }
        if ((4U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 2U;
        }
        if ((8U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 3U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 4U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 5U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 6U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 7U;
        }
        if ((0x00000100U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 8U;
        }
        if ((0x00000200U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 9U;
        }
        if ((0x00000400U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 0x0000000aU;
        }
        if ((0x00000800U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 0x0000000bU;
        }
        if ((0x00001000U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 0x0000000cU;
        }
        if ((0x00002000U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 0x0000000dU;
        }
        if ((0x00004000U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 0x0000000eU;
        }
        if ((0x00008000U & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 0x0000000fU;
        }
        if (VL_UNLIKELY(((1U & (~ (VL_GTS_III(32, 0U, vlSelfRef.day15_encoders_tb__DOT__hi)
                                    ? (~ (0U != (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i)))
                                    : ((0U != (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i)) 
                                       & ((IData)(vlSelfRef.day15_encoders_tb__DOT__hex_b) 
                                          == (0x0000000fU 
                                              & vlSelfRef.day15_encoders_tb__DOT__hi))))))))) {
            vlSelfRef.day15_encoders_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day15_encoders_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] hex priority (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day15_encoders_tb__DOT__hi = 0xffffffffU;
        if ((1U & (IData)(vlSelfRef.day15_encoders_tb__DOT__oct_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 0U;
        }
        if ((2U & (IData)(vlSelfRef.day15_encoders_tb__DOT__oct_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 1U;
        }
        if ((4U & (IData)(vlSelfRef.day15_encoders_tb__DOT__oct_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 2U;
        }
        if ((8U & (IData)(vlSelfRef.day15_encoders_tb__DOT__oct_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 3U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.day15_encoders_tb__DOT__oct_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 4U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.day15_encoders_tb__DOT__oct_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 5U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.day15_encoders_tb__DOT__oct_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 6U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.day15_encoders_tb__DOT__oct_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 7U;
        }
        if (VL_UNLIKELY(((1U & (~ (VL_GTS_III(32, 0U, vlSelfRef.day15_encoders_tb__DOT__hi)
                                    ? (~ (IData)(Vday15_encoders_tb__ConstPool__TABLE_he2a5b38f_0
                                                 [vlSelfRef.day15_encoders_tb__DOT__oct_i]))
                                    : (Vday15_encoders_tb__ConstPool__TABLE_he2a5b38f_0
                                       [vlSelfRef.day15_encoders_tb__DOT__oct_i] 
                                       & (Vday15_encoders_tb__ConstPool__TABLE_h0a26a470_0
                                          [vlSelfRef.day15_encoders_tb__DOT__oct_i] 
                                          == (7U & vlSelfRef.day15_encoders_tb__DOT__hi))))))))) {
            vlSelfRef.day15_encoders_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day15_encoders_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] octal priority (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day15_encoders_tb__DOT__hi = 0xffffffffU;
        if ((1U & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 0U;
        }
        if ((2U & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 1U;
        }
        if ((4U & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 2U;
        }
        if ((8U & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 3U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 4U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 5U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 6U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 7U;
        }
        if ((0x00000100U & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 8U;
        }
        if ((0x00000200U & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))) {
            vlSelfRef.day15_encoders_tb__DOT__hi = 9U;
        }
        if (VL_UNLIKELY(((1U & (~ (VL_GTS_III(32, 0U, vlSelfRef.day15_encoders_tb__DOT__hi)
                                    ? (~ (0U != (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i)))
                                    : ((0U != (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i)) 
                                       & ((IData)(vlSelfRef.day15_encoders_tb__DOT__dec_b) 
                                          == (0x0000000fU 
                                              & vlSelfRef.day15_encoders_tb__DOT__hi))))))))) {
            vlSelfRef.day15_encoders_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day15_encoders_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] decimal priority (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        day15_encoders_tb__DOT__unnamedblk2__DOT__n 
            = ((IData)(1U) + day15_encoders_tb__DOT__unnamedblk2__DOT__n);
    }
    if ((0U == vlSelfRef.day15_encoders_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day15_encoders\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day15_encoders : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day15_encoders_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day15_encoders_tb.sv", 45, "");
    co_return;
}

VlCoroutine Vday15_encoders_tb___024root___eval_initial__TOP__Vtiming__1(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day15_encoders_tb.sv", 
                                             12);
        vlSelfRef.day15_encoders_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.day15_encoders_tb__DOT__clk)));
    }
    co_return;
}

bool Vday15_encoders_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday15_encoders_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___trigger_anySet__act\n"); );
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

void Vday15_encoders_tb___024root___act_comb__TOP__0(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___act_comb__TOP__0\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.day15_encoders_tb__DOT__hex_b = (0x0000000fU 
                                               & (((0x00004000U 
                                                    & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                    ? 0x0eU
                                                    : 
                                                   ((0x00002000U 
                                                     & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                     ? 0x0dU
                                                     : 
                                                    ((0x00001000U 
                                                      & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                      ? 0x0cU
                                                      : 
                                                     ((0x00000800U 
                                                       & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                       ? 0x0bU
                                                       : 
                                                      ((0x00000400U 
                                                        & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                        ? 0x0aU
                                                        : 
                                                       ((0x00000200U 
                                                         & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                         ? 9U
                                                         : 
                                                        ((0x00000100U 
                                                          & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                          ? 8U
                                                          : 
                                                         ((0x00000080U 
                                                           & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                           ? 7U
                                                           : 
                                                          ((0x00000040U 
                                                            & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                            ? 6U
                                                            : 
                                                           ((0x00000020U 
                                                             & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                             ? 5U
                                                             : 
                                                            ((0x00000010U 
                                                              & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                              ? 4U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                               ? 3U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i))
                                                                ? 2U
                                                                : 
                                                               (1U 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i) 
                                                                                >> 1U)))))))))))))))))) 
                                                  | (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.day15_encoders_tb__DOT__hex_i) 
                                                                   >> 0x0000000fU))))));
    vlSelfRef.day15_encoders_tb__DOT__dec_b = ((0x00000200U 
                                                & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))
                                                ? 9U
                                                : (
                                                   (0x00000100U 
                                                    & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))
                                                    ? 8U
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))
                                                     ? 7U
                                                     : 
                                                    ((0x00000040U 
                                                      & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))
                                                      ? 6U
                                                      : 
                                                     ((0x00000020U 
                                                       & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))
                                                       ? 5U
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))
                                                        ? 4U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))
                                                         ? 3U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i))
                                                          ? 2U
                                                          : 
                                                         (1U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.day15_encoders_tb__DOT__dec_i) 
                                                                           >> 1U)))))))))))));
}

void Vday15_encoders_tb___024root___nba_sequent__TOP__0(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___nba_sequent__TOP__0\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (0U != (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i) 
                                          >> (0x0000000fU 
                                              & (((0x00004000U 
                                                   & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                   ? 0x0eU
                                                   : 
                                                  ((0x00002000U 
                                                    & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                    ? 0x0dU
                                                    : 
                                                   ((0x00001000U 
                                                     & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                     ? 0x0cU
                                                     : 
                                                    ((0x00000800U 
                                                      & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                      ? 0x0bU
                                                      : 
                                                     ((0x00000400U 
                                                       & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                       ? 0x0aU
                                                       : 
                                                      ((0x00000200U 
                                                        & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                        ? 9U
                                                        : 
                                                       ((0x00000100U 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                         ? 8U
                                                         : 
                                                        ((0x00000080U 
                                                          & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                          ? 7U
                                                          : 
                                                         ((0x00000040U 
                                                           & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                           ? 6U
                                                           : 
                                                          ((0x00000020U 
                                                            & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                            ? 5U
                                                            : 
                                                           ((0x00000010U 
                                                             & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                             ? 4U
                                                             : 
                                                            ((8U 
                                                              & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                              ? 3U
                                                              : 
                                                             ((4U 
                                                               & (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i))
                                                               ? 2U
                                                               : 
                                                              (1U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i) 
                                                                                >> 1U)))))))))))))))))) 
                                                 | (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__hex_i) 
                                                                  >> 0x0000000fU))))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day15_encoders_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_hex\n",3, 'M',vlSymsp->name(),"day15_encoders_tb.a_hex", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day15_encoders_tb.sv", 17, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (0U != (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__dec_i))) 
                                       | ((9U >= (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__dec_b)) 
                                          && (1U & 
                                              ((IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__dec_i) 
                                               >> (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__dec_b)))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day15_encoders_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_dec\n",3, 'M',vlSymsp->name(),"day15_encoders_tb.a_dec", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day15_encoders_tb.sv", 16, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((0U != (IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__oct_i)) 
                                       | (~ (IData)(vlSelfRef.__Vsampled_TOP__TABLE_he2a5b38f_0
                                                    [vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__oct_i])))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day15_encoders_tb.sv:18: Assertion failed in %m: [SVA FAIL] a_inv\n",3, 'M',vlSymsp->name(),"day15_encoders_tb.a_inv", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day15_encoders_tb.sv", 18, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__TABLE_he2a5b38f_0
                                                  [vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__oct_i])) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__oct_i) 
                                          >> vlSelfRef.__Vsampled_TOP__TABLE_h0a26a470_0
                                          [vlSelfRef.__Vsampled_TOP__day15_encoders_tb__DOT__oct_i]))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day15_encoders_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_oct\n",3, 'M',vlSymsp->name(),"day15_encoders_tb.a_oct", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day15_encoders_tb.sv", 15, "");
            }
        }
    }
}

void Vday15_encoders_tb___024root___timing_ready(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___timing_ready\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h118fbdcf__0.ready("@(negedge day15_encoders_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h118fbe10__0.ready("@(posedge day15_encoders_tb.clk)");
    }
}

void Vday15_encoders_tb___024root___timing_resume(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___timing_resume\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h118fbdcf__0.moveToResumeQueue(
                                                          "@(negedge day15_encoders_tb.clk)");
    vlSelfRef.__VtrigSched_h118fbe10__0.moveToResumeQueue(
                                                          "@(posedge day15_encoders_tb.clk)");
    vlSelfRef.__VtrigSched_h118fbdcf__0.resume("@(negedge day15_encoders_tb.clk)");
    vlSelfRef.__VtrigSched_h118fbe10__0.resume("@(posedge day15_encoders_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday15_encoders_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday15_encoders_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday15_encoders_tb___024root____VbeforeTrig_h118fbdcf__0(Vday15_encoders_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root____VbeforeTrig_h118fbdcf__0\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day15_encoders_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day15_encoders_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day15_encoders_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day15_encoders_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day15_encoders_tb__DOT__clk__0 
        = vlSelfRef.day15_encoders_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h118fbe10__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h118fbe10__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h118fbe10__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h118fbdcf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h118fbdcf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h118fbdcf__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday15_encoders_tb___024root____VbeforeTrig_h118fbe10__0(Vday15_encoders_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root____VbeforeTrig_h118fbe10__0\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day15_encoders_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day15_encoders_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day15_encoders_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day15_encoders_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day15_encoders_tb__DOT__clk__0 
        = vlSelfRef.day15_encoders_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h118fbe10__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h118fbe10__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h118fbe10__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h118fbdcf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h118fbdcf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h118fbdcf__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday15_encoders_tb___024root___eval_debug_assertions(Vday15_encoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday15_encoders_tb___024root___eval_debug_assertions\n"); );
    Vday15_encoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
