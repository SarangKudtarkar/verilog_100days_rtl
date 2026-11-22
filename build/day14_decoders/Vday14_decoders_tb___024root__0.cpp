// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday14_decoders_tb.h for the primary calling header

#include "Vday14_decoders_tb__pch.h"

VlCoroutine Vday14_decoders_tb___024root___eval_initial__TOP__Vtiming__0(Vday14_decoders_tb___024root* vlSelf);
VlCoroutine Vday14_decoders_tb___024root___eval_initial__TOP__Vtiming__1(Vday14_decoders_tb___024root* vlSelf);

void Vday14_decoders_tb___024root___eval_initial(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_initial\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday14_decoders_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday14_decoders_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday14_decoders_tb___024root___eval_sample(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_sample\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__oct_o 
        = vlSelfRef.day14_decoders_tb__DOT__oct_o;
    vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__dec_o 
        = vlSelfRef.day14_decoders_tb__DOT__dec_o;
    vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__hex_o 
        = vlSelfRef.day14_decoders_tb__DOT__hex_o;
    vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__en 
        = vlSelfRef.day14_decoders_tb__DOT__en;
    vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__bin 
        = vlSelfRef.day14_decoders_tb__DOT__bin;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday14_decoders_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday14_decoders_tb___024root___eval_ico(Vday14_decoders_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_ico\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday14_decoders_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday14_decoders_tb___024root___timing_ready(Vday14_decoders_tb___024root* vlSelf);
void Vday14_decoders_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday14_decoders_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday14_decoders_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday14_decoders_tb___024root___timing_resume(Vday14_decoders_tb___024root* vlSelf);

bool Vday14_decoders_tb___024root___eval_act(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_act\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day14_decoders_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day14_decoders_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day14_decoders_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day14_decoders_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day14_decoders_tb__DOT__clk__0 
            = vlSelfRef.day14_decoders_tb__DOT__clk;
    }
    Vday14_decoders_tb___024root___timing_ready(vlSelf);
    Vday14_decoders_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday14_decoders_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday14_decoders_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday14_decoders_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday14_decoders_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day14_decoders_tb__DOT__hex_o 
                        = (0x0000ffffU & (((IData)(1U) 
                                           << (IData)(vlSelfRef.day14_decoders_tb__DOT__bin)) 
                                          & (- (IData)((IData)(vlSelfRef.day14_decoders_tb__DOT__en)))));
                    vlSelfRef.day14_decoders_tb__DOT__dec_o 
                        = (0x000003ffU & (((IData)(1U) 
                                           << (IData)(vlSelfRef.day14_decoders_tb__DOT__bin)) 
                                          & (- (IData)(
                                                       ((IData)(vlSelfRef.day14_decoders_tb__DOT__en) 
                                                        & (9U 
                                                           >= (IData)(vlSelfRef.day14_decoders_tb__DOT__bin)))))));
                    vlSelfRef.day14_decoders_tb__DOT__oct_o 
                        = (0x000000ffU & (((IData)(1U) 
                                           << (7U & (IData)(vlSelfRef.day14_decoders_tb__DOT__bin))) 
                                          & (- (IData)((IData)(vlSelfRef.day14_decoders_tb__DOT__en)))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday14_decoders_tb___024root___eval_inact(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_inact\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day14_decoders_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday14_decoders_tb___024root___nba_sequent__TOP__0(Vday14_decoders_tb___024root* vlSelf);
void Vday14_decoders_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday14_decoders_tb___024root___eval_nba(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_nba\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday14_decoders_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday14_decoders_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day14_decoders_tb__DOT__hex_o 
                        = (0x0000ffffU & (((IData)(1U) 
                                           << (IData)(vlSelfRef.day14_decoders_tb__DOT__bin)) 
                                          & (- (IData)((IData)(vlSelfRef.day14_decoders_tb__DOT__en)))));
                    vlSelfRef.day14_decoders_tb__DOT__dec_o 
                        = (0x000003ffU & (((IData)(1U) 
                                           << (IData)(vlSelfRef.day14_decoders_tb__DOT__bin)) 
                                          & (- (IData)(
                                                       ((IData)(vlSelfRef.day14_decoders_tb__DOT__en) 
                                                        & (9U 
                                                           >= (IData)(vlSelfRef.day14_decoders_tb__DOT__bin)))))));
                    vlSelfRef.day14_decoders_tb__DOT__oct_o 
                        = (0x000000ffU & (((IData)(1U) 
                                           << (7U & (IData)(vlSelfRef.day14_decoders_tb__DOT__bin))) 
                                          & (- (IData)((IData)(vlSelfRef.day14_decoders_tb__DOT__en)))));
                }
            }
        }
        Vday14_decoders_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday14_decoders_tb___024root___eval_obs(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_obs\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday14_decoders_tb___024root___eval_react(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_react\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday14_decoders_tb___024root___eval_postponed(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_postponed\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday14_decoders_tb___024root____VbeforeTrig_h9e7a6c1c__0(Vday14_decoders_tb___024root* vlSelf, const char* __VeventDescription);
void Vday14_decoders_tb___024root____VbeforeTrig_h9e7a6b5b__0(Vday14_decoders_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday14_decoders_tb___024root___eval_initial__TOP__Vtiming__0(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day14_decoders_tb__DOT__unnamedblk1__DOT__i;
    day14_decoders_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    day14_decoders_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, day14_decoders_tb__DOT__unnamedblk1__DOT__i)) {
        Vday14_decoders_tb___024root____VbeforeTrig_h9e7a6c1c__0(vlSelf, 
                                                                 "@(negedge day14_decoders_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h9e7a6c1c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day14_decoders_tb.clk)", 
                                                             "tb/day14_decoders_tb.sv", 
                                                             24);
        vlSelfRef.day14_decoders_tb__DOT__en = (1U 
                                                & (day14_decoders_tb__DOT__unnamedblk1__DOT__i 
                                                   >> 4U));
        vlSelfRef.day14_decoders_tb__DOT__bin = (0x0000000fU 
                                                 & day14_decoders_tb__DOT__unnamedblk1__DOT__i);
        Vday14_decoders_tb___024root____VbeforeTrig_h9e7a6b5b__0(vlSelf, 
                                                                 "@(posedge day14_decoders_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h9e7a6b5b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day14_decoders_tb.clk)", 
                                                             "tb/day14_decoders_tb.sv", 
                                                             25);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day14_decoders_tb__DOT__oct_o) 
                          != ((IData)(vlSelfRef.day14_decoders_tb__DOT__en)
                               ? (0x000000ffU & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(vlSelfRef.day14_decoders_tb__DOT__bin))))
                               : 0U))))) {
            vlSelfRef.day14_decoders_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day14_decoders_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] octal decoder (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day14_decoders_tb__DOT__dec_o) 
                          != (((IData)(vlSelfRef.day14_decoders_tb__DOT__en) 
                               & (9U >= (IData)(vlSelfRef.day14_decoders_tb__DOT__bin)))
                               ? (0x000003ffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.day14_decoders_tb__DOT__bin)))
                               : 0U))))) {
            vlSelfRef.day14_decoders_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day14_decoders_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] decimal decoder (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day14_decoders_tb__DOT__hex_o) 
                          != ((IData)(vlSelfRef.day14_decoders_tb__DOT__en)
                               ? (0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.day14_decoders_tb__DOT__bin)))
                               : 0U))))) {
            vlSelfRef.day14_decoders_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day14_decoders_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] hex decoder (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((vlSelfRef.day14_decoders_tb__DOT__en))) {
            VL_WRITEF_NX("  bin=%04b  oct=%08b  dec=%010b  hex=%016b\n",4
                         , '#',4,vlSelfRef.day14_decoders_tb__DOT__bin
                         , '#',8,(IData)(vlSelfRef.day14_decoders_tb__DOT__oct_o)
                         , '#',10,vlSelfRef.day14_decoders_tb__DOT__dec_o
                         , '#',16,(IData)(vlSelfRef.day14_decoders_tb__DOT__hex_o));
        }
        day14_decoders_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day14_decoders_tb__DOT__unnamedblk1__DOT__i);
    }
    if ((0U == vlSelfRef.day14_decoders_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day14_decoders\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day14_decoders : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day14_decoders_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day14_decoders_tb.sv", 31, "");
    co_return;
}

VlCoroutine Vday14_decoders_tb___024root___eval_initial__TOP__Vtiming__1(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day14_decoders_tb.sv", 
                                             13);
        vlSelfRef.day14_decoders_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.day14_decoders_tb__DOT__clk)));
    }
    co_return;
}

bool Vday14_decoders_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday14_decoders_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___trigger_anySet__act\n"); );
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

void Vday14_decoders_tb___024root___nba_sequent__TOP__0(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___nba_sequent__TOP__0\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__oct_o))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day14_decoders_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_oct_1hot\n",3, 'M',vlSymsp->name(),"day14_decoders_tb.a_oct_1hot", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day14_decoders_tb.sv", 16, "");
            }
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__dec_o))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day14_decoders_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_dec_1hot\n",3, 'M',vlSymsp->name(),"day14_decoders_tb.a_dec_1hot", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day14_decoders_tb.sv", 17, "");
            }
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__hex_o))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day14_decoders_tb.sv:18: Assertion failed in %m: [SVA FAIL] a_hex_1hot\n",3, 'M',vlSymsp->name(),"day14_decoders_tb.a_hex_1hot", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day14_decoders_tb.sv", 18, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__en)) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__hex_o) 
                                          >> (IData)(vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__bin)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day14_decoders_tb.sv:20: Assertion failed in %m: [SVA FAIL] a_hex_sel\n",3, 'M',vlSymsp->name(),"day14_decoders_tb.a_hex_sel", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day14_decoders_tb.sv", 20, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__en) 
                                       | (((0U == (IData)(vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__oct_o)) 
                                           & (0U == (IData)(vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__dec_o))) 
                                          & (0U == (IData)(vlSelfRef.__Vsampled_TOP__day14_decoders_tb__DOT__hex_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day14_decoders_tb.sv:19: Assertion failed in %m: [SVA FAIL] a_en_off\n",3, 'M',vlSymsp->name(),"day14_decoders_tb.a_en_off", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day14_decoders_tb.sv", 19, "");
            }
        }
    }
}

void Vday14_decoders_tb___024root___timing_ready(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___timing_ready\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h9e7a6c1c__0.ready("@(negedge day14_decoders_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h9e7a6b5b__0.ready("@(posedge day14_decoders_tb.clk)");
    }
}

void Vday14_decoders_tb___024root___timing_resume(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___timing_resume\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h9e7a6c1c__0.moveToResumeQueue(
                                                          "@(negedge day14_decoders_tb.clk)");
    vlSelfRef.__VtrigSched_h9e7a6b5b__0.moveToResumeQueue(
                                                          "@(posedge day14_decoders_tb.clk)");
    vlSelfRef.__VtrigSched_h9e7a6c1c__0.resume("@(negedge day14_decoders_tb.clk)");
    vlSelfRef.__VtrigSched_h9e7a6b5b__0.resume("@(posedge day14_decoders_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday14_decoders_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday14_decoders_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday14_decoders_tb___024root____VbeforeTrig_h9e7a6c1c__0(Vday14_decoders_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root____VbeforeTrig_h9e7a6c1c__0\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day14_decoders_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day14_decoders_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day14_decoders_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day14_decoders_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day14_decoders_tb__DOT__clk__0 
        = vlSelfRef.day14_decoders_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9e7a6b5b__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9e7a6c1c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday14_decoders_tb___024root____VbeforeTrig_h9e7a6b5b__0(Vday14_decoders_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root____VbeforeTrig_h9e7a6b5b__0\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day14_decoders_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day14_decoders_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day14_decoders_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day14_decoders_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day14_decoders_tb__DOT__clk__0 
        = vlSelfRef.day14_decoders_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9e7a6b5b__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9e7a6c1c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday14_decoders_tb___024root___eval_debug_assertions(Vday14_decoders_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday14_decoders_tb___024root___eval_debug_assertions\n"); );
    Vday14_decoders_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
