// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday43_single_port_ram_tb.h for the primary calling header

#include "Vday43_single_port_ram_tb__pch.h"

VlCoroutine Vday43_single_port_ram_tb___024root___eval_initial__TOP__Vtiming__0(Vday43_single_port_ram_tb___024root* vlSelf);
VlCoroutine Vday43_single_port_ram_tb___024root___eval_initial__TOP__Vtiming__1(Vday43_single_port_ram_tb___024root* vlSelf);

void Vday43_single_port_ram_tb___024root___eval_initial(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_initial\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday43_single_port_ram_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday43_single_port_ram_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday43_single_port_ram_tb___024root___eval_sample(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_sample\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__dout 
        = vlSelfRef.day43_single_port_ram_tb__DOT__dout;
    vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__we 
        = vlSelfRef.day43_single_port_ram_tb__DOT__we;
    vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__din 
        = vlSelfRef.day43_single_port_ram_tb__DOT__din;
    vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__addr 
        = vlSelfRef.day43_single_port_ram_tb__DOT__addr;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday43_single_port_ram_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday43_single_port_ram_tb___024root___eval_ico(Vday43_single_port_ram_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_ico\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday43_single_port_ram_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday43_single_port_ram_tb___024root___timing_ready(Vday43_single_port_ram_tb___024root* vlSelf);
void Vday43_single_port_ram_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday43_single_port_ram_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday43_single_port_ram_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday43_single_port_ram_tb___024root___timing_resume(Vday43_single_port_ram_tb___024root* vlSelf);

bool Vday43_single_port_ram_tb___024root___eval_act(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_act\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day43_single_port_ram_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day43_single_port_ram_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day43_single_port_ram_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day43_single_port_ram_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day43_single_port_ram_tb__DOT__clk__0 
            = vlSelfRef.day43_single_port_ram_tb__DOT__clk;
    }
    Vday43_single_port_ram_tb___024root___timing_ready(vlSelf);
    Vday43_single_port_ram_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday43_single_port_ram_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday43_single_port_ram_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday43_single_port_ram_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday43_single_port_ram_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday43_single_port_ram_tb___024root___eval_inact(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_inact\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day43_single_port_ram_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday43_single_port_ram_tb___024root___nba_sequent__TOP__0(Vday43_single_port_ram_tb___024root* vlSelf);
void Vday43_single_port_ram_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday43_single_port_ram_tb___024root___eval_nba(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_nba\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday43_single_port_ram_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday43_single_port_ram_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday43_single_port_ram_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday43_single_port_ram_tb___024root___eval_obs(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_obs\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday43_single_port_ram_tb___024root___eval_react(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_react\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday43_single_port_ram_tb___024root___eval_postponed(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_postponed\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday43_single_port_ram_tb___024root____VbeforeTrig_hf54aa612__0(Vday43_single_port_ram_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday43_single_port_ram_tb___024root___eval_initial__TOP__Vtiming__0(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day43_single_port_ram_tb__DOT__unnamedblk1__DOT__i;
    day43_single_port_ram_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ day43_single_port_ram_tb__DOT__unnamedblk2__DOT__i;
    day43_single_port_ram_tb__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ day43_single_port_ram_tb__DOT__unnamedblk3__DOT__i;
    day43_single_port_ram_tb__DOT__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__0__w;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__0__w = 0;
    CData/*7:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__0__a;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__0__a = 0;
    IData/*31:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__0__v;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__0__v = 0;
    CData/*0:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__1__w;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__1__w = 0;
    CData/*7:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__1__a;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__1__a = 0;
    IData/*31:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__1__v;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__1__v = 0;
    CData/*0:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__2__w;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__2__w = 0;
    CData/*7:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__2__a;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__2__a = 0;
    IData/*31:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__2__v;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__2__v = 0;
    CData/*0:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__3__w;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__3__w = 0;
    CData/*7:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__3__a;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__3__a = 0;
    IData/*31:0*/ __Vtask_day43_single_port_ram_tb__DOT__cyc__3__v;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__3__v = 0;
    // Body
    day43_single_port_ram_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, day43_single_port_ram_tb__DOT__unnamedblk1__DOT__i)) {
        __Vtask_day43_single_port_ram_tb__DOT__cyc__0__v 
            = VL_RANDOM_I();
        __Vtask_day43_single_port_ram_tb__DOT__cyc__0__a 
            = (0x000000ffU & day43_single_port_ram_tb__DOT__unnamedblk1__DOT__i);
        __Vtask_day43_single_port_ram_tb__DOT__cyc__0__w = 1U;
        Vday43_single_port_ram_tb___024root____VbeforeTrig_hf54aa612__0(vlSelf, 
                                                                        "@(negedge day43_single_port_ram_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hf54aa612__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day43_single_port_ram_tb.clk)", 
                                                             "tb/day43_single_port_ram_tb.sv", 
                                                             19);
        if (vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid) {
            if (VL_UNLIKELY(((vlSelfRef.day43_single_port_ram_tb__DOT__dout 
                              != vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout)))) {
                vlSelfRef.day43_single_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day43_single_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] RAM output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        if (__Vtask_day43_single_port_ram_tb__DOT__cyc__0__w) {
            vlSelfRef.day43_single_port_ram_tb__DOT__we = 1U;
            vlSelfRef.day43_single_port_ram_tb__DOT__addr 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__0__a;
            vlSelfRef.day43_single_port_ram_tb__DOT__din 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__0__v;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid = 1U;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__0__v;
        } else {
            vlSelfRef.day43_single_port_ram_tb__DOT__we = 0U;
            vlSelfRef.day43_single_port_ram_tb__DOT__addr 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__0__a;
            vlSelfRef.day43_single_port_ram_tb__DOT__din 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__0__v;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid = 1U;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout 
                = vlSelfRef.day43_single_port_ram_tb__DOT__shadow
                .at((IData)(__Vtask_day43_single_port_ram_tb__DOT__cyc__0__a));
        }
        if (__Vtask_day43_single_port_ram_tb__DOT__cyc__0__w) {
            vlSelfRef.day43_single_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day43_single_port_ram_tb__DOT__cyc__0__a)) 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__0__v;
        }
        day43_single_port_ram_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day43_single_port_ram_tb__DOT__unnamedblk1__DOT__i);
    }
    day43_single_port_ram_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, day43_single_port_ram_tb__DOT__unnamedblk2__DOT__i)) {
        __Vtask_day43_single_port_ram_tb__DOT__cyc__1__v = 0U;
        __Vtask_day43_single_port_ram_tb__DOT__cyc__1__a 
            = (0x000000ffU & day43_single_port_ram_tb__DOT__unnamedblk2__DOT__i);
        __Vtask_day43_single_port_ram_tb__DOT__cyc__1__w = 0U;
        Vday43_single_port_ram_tb___024root____VbeforeTrig_hf54aa612__0(vlSelf, 
                                                                        "@(negedge day43_single_port_ram_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hf54aa612__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day43_single_port_ram_tb.clk)", 
                                                             "tb/day43_single_port_ram_tb.sv", 
                                                             19);
        if (vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid) {
            if (VL_UNLIKELY(((vlSelfRef.day43_single_port_ram_tb__DOT__dout 
                              != vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout)))) {
                vlSelfRef.day43_single_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day43_single_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] RAM output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        if (__Vtask_day43_single_port_ram_tb__DOT__cyc__1__w) {
            vlSelfRef.day43_single_port_ram_tb__DOT__we = 1U;
            vlSelfRef.day43_single_port_ram_tb__DOT__addr 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__1__a;
            vlSelfRef.day43_single_port_ram_tb__DOT__din 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__1__v;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid = 1U;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__1__v;
        } else {
            vlSelfRef.day43_single_port_ram_tb__DOT__we = 0U;
            vlSelfRef.day43_single_port_ram_tb__DOT__addr 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__1__a;
            vlSelfRef.day43_single_port_ram_tb__DOT__din 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__1__v;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid = 1U;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout 
                = vlSelfRef.day43_single_port_ram_tb__DOT__shadow
                .at((IData)(__Vtask_day43_single_port_ram_tb__DOT__cyc__1__a));
        }
        if (__Vtask_day43_single_port_ram_tb__DOT__cyc__1__w) {
            vlSelfRef.day43_single_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day43_single_port_ram_tb__DOT__cyc__1__a)) 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__1__v;
        }
        day43_single_port_ram_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + day43_single_port_ram_tb__DOT__unnamedblk2__DOT__i);
    }
    day43_single_port_ram_tb__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x000003e8U, day43_single_port_ram_tb__DOT__unnamedblk3__DOT__i)) {
        __Vtask_day43_single_port_ram_tb__DOT__cyc__2__v 
            = VL_RANDOM_I();
        __Vtask_day43_single_port_ram_tb__DOT__cyc__2__a 
            = (0x000000ffU & VL_RANDOM_I());
        __Vtask_day43_single_port_ram_tb__DOT__cyc__2__w 
            = (1U & VL_RANDOM_I());
        Vday43_single_port_ram_tb___024root____VbeforeTrig_hf54aa612__0(vlSelf, 
                                                                        "@(negedge day43_single_port_ram_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hf54aa612__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day43_single_port_ram_tb.clk)", 
                                                             "tb/day43_single_port_ram_tb.sv", 
                                                             19);
        if (vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid) {
            if (VL_UNLIKELY(((vlSelfRef.day43_single_port_ram_tb__DOT__dout 
                              != vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout)))) {
                vlSelfRef.day43_single_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day43_single_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] RAM output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        if (__Vtask_day43_single_port_ram_tb__DOT__cyc__2__w) {
            vlSelfRef.day43_single_port_ram_tb__DOT__we = 1U;
            vlSelfRef.day43_single_port_ram_tb__DOT__addr 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__2__a;
            vlSelfRef.day43_single_port_ram_tb__DOT__din 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__2__v;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid = 1U;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__2__v;
        } else {
            vlSelfRef.day43_single_port_ram_tb__DOT__we = 0U;
            vlSelfRef.day43_single_port_ram_tb__DOT__addr 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__2__a;
            vlSelfRef.day43_single_port_ram_tb__DOT__din 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__2__v;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid = 1U;
            vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout 
                = vlSelfRef.day43_single_port_ram_tb__DOT__shadow
                .at((IData)(__Vtask_day43_single_port_ram_tb__DOT__cyc__2__a));
        }
        if (__Vtask_day43_single_port_ram_tb__DOT__cyc__2__w) {
            vlSelfRef.day43_single_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day43_single_port_ram_tb__DOT__cyc__2__a)) 
                = __Vtask_day43_single_port_ram_tb__DOT__cyc__2__v;
        }
        day43_single_port_ram_tb__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + day43_single_port_ram_tb__DOT__unnamedblk3__DOT__i);
    }
    __Vtask_day43_single_port_ram_tb__DOT__cyc__3__v = 0U;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__3__a = 0U;
    __Vtask_day43_single_port_ram_tb__DOT__cyc__3__w = 0U;
    Vday43_single_port_ram_tb___024root____VbeforeTrig_hf54aa612__0(vlSelf, 
                                                                    "@(negedge day43_single_port_ram_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hf54aa612__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day43_single_port_ram_tb.clk)", 
                                                         "tb/day43_single_port_ram_tb.sv", 
                                                         19);
    if (vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid) {
        if (VL_UNLIKELY(((vlSelfRef.day43_single_port_ram_tb__DOT__dout 
                          != vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout)))) {
            vlSelfRef.day43_single_port_ram_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day43_single_port_ram_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] RAM output (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
    }
    if (__Vtask_day43_single_port_ram_tb__DOT__cyc__3__w) {
        vlSelfRef.day43_single_port_ram_tb__DOT__we = 1U;
        vlSelfRef.day43_single_port_ram_tb__DOT__addr 
            = __Vtask_day43_single_port_ram_tb__DOT__cyc__3__a;
        vlSelfRef.day43_single_port_ram_tb__DOT__din 
            = __Vtask_day43_single_port_ram_tb__DOT__cyc__3__v;
        vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid = 1U;
        vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout 
            = __Vtask_day43_single_port_ram_tb__DOT__cyc__3__v;
    } else {
        vlSelfRef.day43_single_port_ram_tb__DOT__we = 0U;
        vlSelfRef.day43_single_port_ram_tb__DOT__addr 
            = __Vtask_day43_single_port_ram_tb__DOT__cyc__3__a;
        vlSelfRef.day43_single_port_ram_tb__DOT__din 
            = __Vtask_day43_single_port_ram_tb__DOT__cyc__3__v;
        vlSelfRef.day43_single_port_ram_tb__DOT__exp_valid = 1U;
        vlSelfRef.day43_single_port_ram_tb__DOT__exp_dout 
            = vlSelfRef.day43_single_port_ram_tb__DOT__shadow
            .at((IData)(__Vtask_day43_single_port_ram_tb__DOT__cyc__3__a));
    }
    if (__Vtask_day43_single_port_ram_tb__DOT__cyc__3__w) {
        vlSelfRef.day43_single_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day43_single_port_ram_tb__DOT__cyc__3__a)) 
            = __Vtask_day43_single_port_ram_tb__DOT__cyc__3__v;
    }
    VL_WRITEF_NX("  mem[0]=%08h  mem[255]=%08h\n",2
                 , '#',32,vlSelfRef.day43_single_port_ram_tb__DOT__shadow
                 .at(0U), '#',32,vlSelfRef.day43_single_port_ram_tb__DOT__shadow
                 .at(0x000000ffU));
    if ((0U == vlSelfRef.day43_single_port_ram_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day43_single_port_ram\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day43_single_port_ram : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day43_single_port_ram_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day43_single_port_ram_tb.sv", 33, "");
    co_return;
}

VlCoroutine Vday43_single_port_ram_tb___024root___eval_initial__TOP__Vtiming__1(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day43_single_port_ram_tb.sv", 
                                             11);
        vlSelfRef.day43_single_port_ram_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day43_single_port_ram_tb__DOT__clk)));
    }
    co_return;
}

bool Vday43_single_port_ram_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday43_single_port_ram_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___trigger_anySet__act\n"); );
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

void Vday43_single_port_ram_tb___024root___nba_sequent__TOP__0(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___nba_sequent__TOP__0\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0;
    __VdlyVal__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0;
    __VdlyDim0__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0;
    __VdlySet__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0 = 0;
    // Body
    __VdlySet__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0 = 0U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_1_1)) 
                                       | (vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__dout 
                                          == vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_2_1))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day43_single_port_ram_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_write_through\n",3, 'M',vlSymsp->name(),"day43_single_port_ram_tb.a_write_through", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day43_single_port_ram_tb.sv", 14, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_6_1)) 
                                       | (vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__dout 
                                          == vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_7_1))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day43_single_port_ram_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_read_stable\n",3, 'M',vlSymsp->name(),"day43_single_port_ram_tb.a_read_stable", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day43_single_port_ram_tb.sv", 16, "");
            }
        }
    }
    if (vlSelfRef.day43_single_port_ram_tb__DOT__we) {
        __VdlyVal__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0 
            = vlSelfRef.day43_single_port_ram_tb__DOT__din;
        __VdlyDim0__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0 
            = vlSelfRef.day43_single_port_ram_tb__DOT__addr;
        __VdlySet__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0 = 1U;
        vlSelfRef.day43_single_port_ram_tb__DOT__dout 
            = vlSelfRef.day43_single_port_ram_tb__DOT__din;
    } else {
        vlSelfRef.day43_single_port_ram_tb__DOT__dout 
            = vlSelfRef.day43_single_port_ram_tb__DOT__dut__DOT__mem
            [vlSelfRef.day43_single_port_ram_tb__DOT__addr];
    }
    vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__din;
    vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_1_1 
        = vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__we;
    vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_7_1 
        = vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__dout;
    vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_6_1 
        = (((~ (IData)(vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__we)) 
            & (~ (IData)(vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_4_1))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__addr) 
              == (IData)(vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_5_1)));
    if (__VdlySet__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0) {
        vlSelfRef.day43_single_port_ram_tb__DOT__dut__DOT__mem[__VdlyDim0__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0] 
            = __VdlyVal__day43_single_port_ram_tb__DOT__dut__DOT__mem__v0;
    }
    vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_5_1 
        = vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__addr;
    vlSelfRef.day43_single_port_ram_tb__DOT___Vpast_4_1 
        = vlSelfRef.__Vsampled_TOP__day43_single_port_ram_tb__DOT__we;
}

void Vday43_single_port_ram_tb___024root___timing_ready(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___timing_ready\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hf54aa612__0.ready("@(negedge day43_single_port_ram_tb.clk)");
    }
}

void Vday43_single_port_ram_tb___024root___timing_resume(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___timing_resume\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hf54aa612__0.moveToResumeQueue(
                                                          "@(negedge day43_single_port_ram_tb.clk)");
    vlSelfRef.__VtrigSched_hf54aa612__0.resume("@(negedge day43_single_port_ram_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday43_single_port_ram_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday43_single_port_ram_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday43_single_port_ram_tb___024root____VbeforeTrig_hf54aa612__0(Vday43_single_port_ram_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root____VbeforeTrig_hf54aa612__0\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day43_single_port_ram_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day43_single_port_ram_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day43_single_port_ram_tb__DOT__clk__0 
        = vlSelfRef.day43_single_port_ram_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf54aa612__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf54aa612__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf54aa612__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf54aa612__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday43_single_port_ram_tb___024root___eval_debug_assertions(Vday43_single_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday43_single_port_ram_tb___024root___eval_debug_assertions\n"); );
    Vday43_single_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
