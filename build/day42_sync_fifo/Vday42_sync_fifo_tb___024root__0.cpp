// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday42_sync_fifo_tb.h for the primary calling header

#include "Vday42_sync_fifo_tb__pch.h"

VlCoroutine Vday42_sync_fifo_tb___024root___eval_initial__TOP__Vtiming__0(Vday42_sync_fifo_tb___024root* vlSelf);
VlCoroutine Vday42_sync_fifo_tb___024root___eval_initial__TOP__Vtiming__1(Vday42_sync_fifo_tb___024root* vlSelf);

void Vday42_sync_fifo_tb___024root___eval_initial(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_initial\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("waves/day42_sync_fifo.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    Vday42_sync_fifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday42_sync_fifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday42_sync_fifo_tb___024root___eval_sample(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_sample\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count 
        = vlSelfRef.day42_sync_fifo_tb__DOT__count;
    vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__rst 
        = vlSelfRef.day42_sync_fifo_tb__DOT__rst;
    vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__wr_en 
        = vlSelfRef.day42_sync_fifo_tb__DOT__wr_en;
    vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__rd_en 
        = vlSelfRef.day42_sync_fifo_tb__DOT__rd_en;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday42_sync_fifo_tb___024root___eval_ico(Vday42_sync_fifo_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_ico\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday42_sync_fifo_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday42_sync_fifo_tb___024root___timing_ready(Vday42_sync_fifo_tb___024root* vlSelf);
void Vday42_sync_fifo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday42_sync_fifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday42_sync_fifo_tb___024root___timing_resume(Vday42_sync_fifo_tb___024root* vlSelf);

bool Vday42_sync_fifo_tb___024root___eval_act(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_act\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day42_sync_fifo_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day42_sync_fifo_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day42_sync_fifo_tb__DOT__clk__0 
            = vlSelfRef.day42_sync_fifo_tb__DOT__clk;
    }
    Vday42_sync_fifo_tb___024root___timing_ready(vlSelf);
    Vday42_sync_fifo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday42_sync_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday42_sync_fifo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday42_sync_fifo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday42_sync_fifo_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
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
    return (__VactExecute);
}

bool Vday42_sync_fifo_tb___024root___eval_inact(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_inact\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day42_sync_fifo_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday42_sync_fifo_tb___024root___nba_sequent__TOP__0(Vday42_sync_fifo_tb___024root* vlSelf);
void Vday42_sync_fifo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday42_sync_fifo_tb___024root___eval_nba(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_nba\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday42_sync_fifo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday42_sync_fifo_tb___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
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
        Vday42_sync_fifo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday42_sync_fifo_tb___024root___eval_obs(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_obs\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday42_sync_fifo_tb___024root___eval_react(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_react\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday42_sync_fifo_tb___024root___eval_postponed(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_postponed\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(Vday42_sync_fifo_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday42_sync_fifo_tb___024root___eval_initial__TOP__Vtiming__0(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day42_sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day42_sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day42_sync_fifo_tb__DOT__unnamedblk1__DOT__i;
    day42_sync_fifo_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ day42_sync_fifo_tb__DOT__unnamedblk2__DOT__i;
    day42_sync_fifo_tb__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ day42_sync_fifo_tb__DOT__unnamedblk3__DOT__i;
    day42_sync_fifo_tb__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ day42_sync_fifo_tb__DOT__unnamedblk4__DOT__i;
    day42_sync_fifo_tb__DOT__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__0__w;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__0__w = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__0__r;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__0__r = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__0__dw;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__0__dw = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__0__dr;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__0__dr = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__1__w;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__1__w = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__1__r;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__1__r = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__1__dw;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__1__dw = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__1__dr;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__1__dr = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__2__w;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__2__w = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__2__r;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__2__r = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__2__dw;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__2__dw = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__2__dr;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__2__dr = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__3__w;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__3__w = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__3__r;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__3__r = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__3__dw;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__3__dw = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__3__dr;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__3__dr = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__4__w;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__4__w = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__4__r;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__4__r = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__4__dw;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__4__dw = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__4__dr;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__4__dr = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__5__w;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__5__w = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__5__r;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__5__r = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__5__dw;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__5__dw = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__5__dr;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__5__dr = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__6__w;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__6__w = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__6__r;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__6__r = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__6__dw;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__6__dw = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__6__dr;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__6__dr = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__7__w;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__7__w = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__7__r;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__7__r = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__7__dw;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__7__dw = 0;
    CData/*0:0*/ __Vtask_day42_sync_fifo_tb__DOT__cyc__7__dr;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__7__dr = 0;
    // Body
    day42_sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day42_sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(vlSelf, 
                                                                  "@(negedge day42_sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h4d1942c9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day42_sync_fifo_tb.clk)", 
                                                             "tb/day42_sync_fifo_tb.sv", 
                                                             44);
        day42_sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day42_sync_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.day42_sync_fifo_tb__DOT__rst = 0U;
    day42_sync_fifo_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000028U, day42_sync_fifo_tb__DOT__unnamedblk1__DOT__i)) {
        __Vtask_day42_sync_fifo_tb__DOT__cyc__0__r = 0U;
        __Vtask_day42_sync_fifo_tb__DOT__cyc__0__w = 1U;
        __Vtask_day42_sync_fifo_tb__DOT__cyc__0__dw = 0U;
        __Vtask_day42_sync_fifo_tb__DOT__cyc__0__dr = 0U;
        Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(vlSelf, 
                                                                  "@(negedge day42_sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h4d1942c9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day42_sync_fifo_tb.clk)", 
                                                             "tb/day42_sync_fifo_tb.sv", 
                                                             30);
        if (vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dout) 
                              != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout))))) {
                vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] FIFO read data (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count) 
                          != vlSelfRef.day42_sync_fifo_tb__DOT__model.size())))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] FIFO occupancy (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                          != (0x00000020U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] full flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                          != (0U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] empty flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day42_sync_fifo_tb__DOT__wr_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__0__w;
        vlSelfRef.day42_sync_fifo_tb__DOT__rd_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__0__r;
        vlSelfRef.day42_sync_fifo_tb__DOT__din = (0x000000ffU 
                                                  & VL_RANDOM_I());
        __Vtask_day42_sync_fifo_tb__DOT__cyc__0__dw 
            = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__0__w) 
               & VL_GTS_III(32, 0x00000020U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
        __Vtask_day42_sync_fifo_tb__DOT__cyc__0__dr 
            = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__0__r) 
               & VL_LTS_III(32, 0U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
        vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid 
            = __Vtask_day42_sync_fifo_tb__DOT__cyc__0__dr;
        if (__Vtask_day42_sync_fifo_tb__DOT__cyc__0__dr) {
            vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout 
                = vlSelfRef.day42_sync_fifo_tb__DOT__model.pop_front();
        }
        if (__Vtask_day42_sync_fifo_tb__DOT__cyc__0__dw) {
            vlSelfRef.day42_sync_fifo_tb__DOT__model.push_back(vlSelfRef.day42_sync_fifo_tb__DOT__din);
        }
        day42_sync_fifo_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day42_sync_fifo_tb__DOT__unnamedblk1__DOT__i);
    }
    __Vtask_day42_sync_fifo_tb__DOT__cyc__1__r = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__1__w = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__1__dw = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__1__dr = 0U;
    Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(vlSelf, 
                                                              "@(negedge day42_sync_fifo_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4d1942c9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day42_sync_fifo_tb.clk)", 
                                                         "tb/day42_sync_fifo_tb.sv", 
                                                         30);
    if (vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dout) 
                          != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] FIFO read data (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
    }
    vlSelfRef.day42_sync_fifo_tb__DOT__wr_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__1__w;
    vlSelfRef.day42_sync_fifo_tb__DOT__rd_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__1__r;
    vlSelfRef.day42_sync_fifo_tb__DOT__din = (0x000000ffU 
                                              & VL_RANDOM_I());
    __Vtask_day42_sync_fifo_tb__DOT__cyc__1__dw = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__1__w) 
                                                   & VL_GTS_III(32, 0x00000020U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
    __Vtask_day42_sync_fifo_tb__DOT__cyc__1__dr = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__1__r) 
                                                   & VL_LTS_III(32, 0U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
    vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid = __Vtask_day42_sync_fifo_tb__DOT__cyc__1__dr;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count) 
                      != vlSelfRef.day42_sync_fifo_tb__DOT__model.size())))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] FIFO occupancy (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (VL_UNLIKELY((((0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                      != (0x00000020U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] full flag (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                      != (0U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] empty flag (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (__Vtask_day42_sync_fifo_tb__DOT__cyc__1__dr) {
        vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout 
            = vlSelfRef.day42_sync_fifo_tb__DOT__model.pop_front();
    }
    if (__Vtask_day42_sync_fifo_tb__DOT__cyc__1__dw) {
        vlSelfRef.day42_sync_fifo_tb__DOT__model.push_back(vlSelfRef.day42_sync_fifo_tb__DOT__din);
    }
    if (VL_UNLIKELY(((0x20U != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count))))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] FIFO must be full (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  after fill : count=%0d full=%b\n",2
                 , '#',6,vlSelfRef.day42_sync_fifo_tb__DOT__count
                 , '#',1,(0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)));
    day42_sync_fifo_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000028U, day42_sync_fifo_tb__DOT__unnamedblk2__DOT__i)) {
        __Vtask_day42_sync_fifo_tb__DOT__cyc__2__r = 1U;
        __Vtask_day42_sync_fifo_tb__DOT__cyc__2__w = 0U;
        __Vtask_day42_sync_fifo_tb__DOT__cyc__2__dw = 0U;
        __Vtask_day42_sync_fifo_tb__DOT__cyc__2__dr = 0U;
        Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(vlSelf, 
                                                                  "@(negedge day42_sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h4d1942c9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day42_sync_fifo_tb.clk)", 
                                                             "tb/day42_sync_fifo_tb.sv", 
                                                             30);
        if (vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dout) 
                              != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout))))) {
                vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] FIFO read data (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count) 
                          != vlSelfRef.day42_sync_fifo_tb__DOT__model.size())))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] FIFO occupancy (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                          != (0x00000020U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] full flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                          != (0U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] empty flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day42_sync_fifo_tb__DOT__wr_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__2__w;
        vlSelfRef.day42_sync_fifo_tb__DOT__rd_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__2__r;
        vlSelfRef.day42_sync_fifo_tb__DOT__din = (0x000000ffU 
                                                  & VL_RANDOM_I());
        __Vtask_day42_sync_fifo_tb__DOT__cyc__2__dw 
            = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__2__w) 
               & VL_GTS_III(32, 0x00000020U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
        __Vtask_day42_sync_fifo_tb__DOT__cyc__2__dr 
            = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__2__r) 
               & VL_LTS_III(32, 0U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
        vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid 
            = __Vtask_day42_sync_fifo_tb__DOT__cyc__2__dr;
        if (__Vtask_day42_sync_fifo_tb__DOT__cyc__2__dr) {
            vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout 
                = vlSelfRef.day42_sync_fifo_tb__DOT__model.pop_front();
        }
        if (__Vtask_day42_sync_fifo_tb__DOT__cyc__2__dw) {
            vlSelfRef.day42_sync_fifo_tb__DOT__model.push_back(vlSelfRef.day42_sync_fifo_tb__DOT__din);
        }
        day42_sync_fifo_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + day42_sync_fifo_tb__DOT__unnamedblk2__DOT__i);
    }
    __Vtask_day42_sync_fifo_tb__DOT__cyc__3__r = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__3__w = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__3__dw = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__3__dr = 0U;
    Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(vlSelf, 
                                                              "@(negedge day42_sync_fifo_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4d1942c9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day42_sync_fifo_tb.clk)", 
                                                         "tb/day42_sync_fifo_tb.sv", 
                                                         30);
    if (vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dout) 
                          != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] FIFO read data (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count) 
                      != vlSelfRef.day42_sync_fifo_tb__DOT__model.size())))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] FIFO occupancy (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    vlSelfRef.day42_sync_fifo_tb__DOT__wr_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__3__w;
    vlSelfRef.day42_sync_fifo_tb__DOT__rd_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__3__r;
    vlSelfRef.day42_sync_fifo_tb__DOT__din = (0x000000ffU 
                                              & VL_RANDOM_I());
    __Vtask_day42_sync_fifo_tb__DOT__cyc__3__dw = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__3__w) 
                                                   & VL_GTS_III(32, 0x00000020U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
    __Vtask_day42_sync_fifo_tb__DOT__cyc__3__dr = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__3__r) 
                                                   & VL_LTS_III(32, 0U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
    vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid = __Vtask_day42_sync_fifo_tb__DOT__cyc__3__dr;
    if (VL_UNLIKELY((((0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                      != (0x00000020U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] full flag (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                      != (0U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] empty flag (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (__Vtask_day42_sync_fifo_tb__DOT__cyc__3__dr) {
        vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout 
            = vlSelfRef.day42_sync_fifo_tb__DOT__model.pop_front();
    }
    if (__Vtask_day42_sync_fifo_tb__DOT__cyc__3__dw) {
        vlSelfRef.day42_sync_fifo_tb__DOT__model.push_back(vlSelfRef.day42_sync_fifo_tb__DOT__din);
    }
    __Vtask_day42_sync_fifo_tb__DOT__cyc__4__r = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__4__w = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__4__dw = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__4__dr = 0U;
    Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(vlSelf, 
                                                              "@(negedge day42_sync_fifo_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4d1942c9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day42_sync_fifo_tb.clk)", 
                                                         "tb/day42_sync_fifo_tb.sv", 
                                                         30);
    if (vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dout) 
                          != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] FIFO read data (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count) 
                      != vlSelfRef.day42_sync_fifo_tb__DOT__model.size())))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] FIFO occupancy (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (VL_UNLIKELY((((0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                      != (0x00000020U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] full flag (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    vlSelfRef.day42_sync_fifo_tb__DOT__wr_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__4__w;
    vlSelfRef.day42_sync_fifo_tb__DOT__rd_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__4__r;
    vlSelfRef.day42_sync_fifo_tb__DOT__din = (0x000000ffU 
                                              & VL_RANDOM_I());
    __Vtask_day42_sync_fifo_tb__DOT__cyc__4__dw = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__4__w) 
                                                   & VL_GTS_III(32, 0x00000020U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
    __Vtask_day42_sync_fifo_tb__DOT__cyc__4__dr = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__4__r) 
                                                   & VL_LTS_III(32, 0U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
    vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid = __Vtask_day42_sync_fifo_tb__DOT__cyc__4__dr;
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                      != (0U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] empty flag (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (__Vtask_day42_sync_fifo_tb__DOT__cyc__4__dr) {
        vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout 
            = vlSelfRef.day42_sync_fifo_tb__DOT__model.pop_front();
    }
    if (__Vtask_day42_sync_fifo_tb__DOT__cyc__4__dw) {
        vlSelfRef.day42_sync_fifo_tb__DOT__model.push_back(vlSelfRef.day42_sync_fifo_tb__DOT__din);
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count))))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] FIFO must be empty (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  after drain: count=%0d empty=%b\n",2
                 , '#',6,vlSelfRef.day42_sync_fifo_tb__DOT__count
                 , '#',1,(0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)));
    day42_sync_fifo_tb__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x000005dcU, day42_sync_fifo_tb__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.day42_sync_fifo_tb__DOT____VlemExpr_0 
            = VL_URANDOM_RANGE_I(0U, 0x00000063U);
        vlSelfRef.day42_sync_fifo_tb__DOT____VlemExpr_1 
            = VL_URANDOM_RANGE_I(0U, 0x00000063U);
        __Vtask_day42_sync_fifo_tb__DOT__cyc__5__r 
            = (0x0000002dU > vlSelfRef.day42_sync_fifo_tb__DOT____VlemExpr_1);
        __Vtask_day42_sync_fifo_tb__DOT__cyc__5__w 
            = (0x00000037U > vlSelfRef.day42_sync_fifo_tb__DOT____VlemExpr_0);
        __Vtask_day42_sync_fifo_tb__DOT__cyc__5__dw = 0U;
        __Vtask_day42_sync_fifo_tb__DOT__cyc__5__dr = 0U;
        Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(vlSelf, 
                                                                  "@(negedge day42_sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h4d1942c9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day42_sync_fifo_tb.clk)", 
                                                             "tb/day42_sync_fifo_tb.sv", 
                                                             30);
        if (vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dout) 
                              != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout))))) {
                vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] FIFO read data (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count) 
                          != vlSelfRef.day42_sync_fifo_tb__DOT__model.size())))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] FIFO occupancy (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                          != (0x00000020U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] full flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                          != (0U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] empty flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day42_sync_fifo_tb__DOT__wr_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__5__w;
        vlSelfRef.day42_sync_fifo_tb__DOT__rd_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__5__r;
        vlSelfRef.day42_sync_fifo_tb__DOT__din = (0x000000ffU 
                                                  & VL_RANDOM_I());
        __Vtask_day42_sync_fifo_tb__DOT__cyc__5__dw 
            = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__5__w) 
               & VL_GTS_III(32, 0x00000020U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
        __Vtask_day42_sync_fifo_tb__DOT__cyc__5__dr 
            = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__5__r) 
               & VL_LTS_III(32, 0U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
        vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid 
            = __Vtask_day42_sync_fifo_tb__DOT__cyc__5__dr;
        if (__Vtask_day42_sync_fifo_tb__DOT__cyc__5__dr) {
            vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout 
                = vlSelfRef.day42_sync_fifo_tb__DOT__model.pop_front();
        }
        if (__Vtask_day42_sync_fifo_tb__DOT__cyc__5__dw) {
            vlSelfRef.day42_sync_fifo_tb__DOT__model.push_back(vlSelfRef.day42_sync_fifo_tb__DOT__din);
        }
        day42_sync_fifo_tb__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + day42_sync_fifo_tb__DOT__unnamedblk3__DOT__i);
    }
    day42_sync_fifo_tb__DOT__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000028U, day42_sync_fifo_tb__DOT__unnamedblk4__DOT__i)) {
        __Vtask_day42_sync_fifo_tb__DOT__cyc__6__r = 1U;
        __Vtask_day42_sync_fifo_tb__DOT__cyc__6__w = 0U;
        __Vtask_day42_sync_fifo_tb__DOT__cyc__6__dw = 0U;
        __Vtask_day42_sync_fifo_tb__DOT__cyc__6__dr = 0U;
        Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(vlSelf, 
                                                                  "@(negedge day42_sync_fifo_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h4d1942c9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day42_sync_fifo_tb.clk)", 
                                                             "tb/day42_sync_fifo_tb.sv", 
                                                             30);
        if (vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dout) 
                              != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout))))) {
                vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] FIFO read data (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count) 
                          != vlSelfRef.day42_sync_fifo_tb__DOT__model.size())))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] FIFO occupancy (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                          != (0x00000020U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] full flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                          != (0U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] empty flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        vlSelfRef.day42_sync_fifo_tb__DOT__wr_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__6__w;
        vlSelfRef.day42_sync_fifo_tb__DOT__rd_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__6__r;
        vlSelfRef.day42_sync_fifo_tb__DOT__din = (0x000000ffU 
                                                  & VL_RANDOM_I());
        __Vtask_day42_sync_fifo_tb__DOT__cyc__6__dw 
            = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__6__w) 
               & VL_GTS_III(32, 0x00000020U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
        __Vtask_day42_sync_fifo_tb__DOT__cyc__6__dr 
            = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__6__r) 
               & VL_LTS_III(32, 0U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
        vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid 
            = __Vtask_day42_sync_fifo_tb__DOT__cyc__6__dr;
        if (__Vtask_day42_sync_fifo_tb__DOT__cyc__6__dr) {
            vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout 
                = vlSelfRef.day42_sync_fifo_tb__DOT__model.pop_front();
        }
        if (__Vtask_day42_sync_fifo_tb__DOT__cyc__6__dw) {
            vlSelfRef.day42_sync_fifo_tb__DOT__model.push_back(vlSelfRef.day42_sync_fifo_tb__DOT__din);
        }
        day42_sync_fifo_tb__DOT__unnamedblk4__DOT__i 
            = ((IData)(1U) + day42_sync_fifo_tb__DOT__unnamedblk4__DOT__i);
    }
    __Vtask_day42_sync_fifo_tb__DOT__cyc__7__r = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__7__w = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__7__dw = 0U;
    __Vtask_day42_sync_fifo_tb__DOT__cyc__7__dr = 0U;
    Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(vlSelf, 
                                                              "@(negedge day42_sync_fifo_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4d1942c9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day42_sync_fifo_tb.clk)", 
                                                         "tb/day42_sync_fifo_tb.sv", 
                                                         30);
    if (vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dout) 
                          != (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout))))) {
            vlSelfRef.day42_sync_fifo_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] FIFO read data (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count) 
                      != vlSelfRef.day42_sync_fifo_tb__DOT__model.size())))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] FIFO occupancy (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (VL_UNLIKELY((((0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                      != (0x00000020U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] full flag (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count)) 
                      != (0U == vlSelfRef.day42_sync_fifo_tb__DOT__model.size()))))) {
        vlSelfRef.day42_sync_fifo_tb__DOT__errors = 
            ((IData)(1U) + vlSelfRef.day42_sync_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] empty flag (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    vlSelfRef.day42_sync_fifo_tb__DOT__wr_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__7__w;
    vlSelfRef.day42_sync_fifo_tb__DOT__rd_en = __Vtask_day42_sync_fifo_tb__DOT__cyc__7__r;
    vlSelfRef.day42_sync_fifo_tb__DOT__din = (0x000000ffU 
                                              & VL_RANDOM_I());
    __Vtask_day42_sync_fifo_tb__DOT__cyc__7__dw = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__7__w) 
                                                   & VL_GTS_III(32, 0x00000020U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
    __Vtask_day42_sync_fifo_tb__DOT__cyc__7__dr = ((IData)(__Vtask_day42_sync_fifo_tb__DOT__cyc__7__r) 
                                                   & VL_LTS_III(32, 0U, vlSelfRef.day42_sync_fifo_tb__DOT__model.size()));
    vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid = __Vtask_day42_sync_fifo_tb__DOT__cyc__7__dr;
    if (__Vtask_day42_sync_fifo_tb__DOT__cyc__7__dr) {
        vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout 
            = vlSelfRef.day42_sync_fifo_tb__DOT__model.pop_front();
    }
    if (__Vtask_day42_sync_fifo_tb__DOT__cyc__7__dw) {
        vlSelfRef.day42_sync_fifo_tb__DOT__model.push_back(vlSelfRef.day42_sync_fifo_tb__DOT__din);
    }
    if ((0U == vlSelfRef.day42_sync_fifo_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day42_sync_fifo\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day42_sync_fifo : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day42_sync_fifo_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day42_sync_fifo_tb.sv", 57, "");
    co_return;
}

VlCoroutine Vday42_sync_fifo_tb___024root___eval_initial__TOP__Vtiming__1(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day42_sync_fifo_tb.sv", 
                                             14);
        vlSelfRef.day42_sync_fifo_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__clk)));
    }
    co_return;
}

bool Vday42_sync_fifo_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday42_sync_fifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___trigger_anySet__act\n"); );
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

void Vday42_sync_fifo_tb___024root___nba_sequent__TOP__0(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___nba_sequent__TOP__0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__wptr;
    __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__wptr = 0;
    CData/*4:0*/ __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__rptr;
    __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__rptr = 0;
    CData/*7:0*/ __VdlyVal__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0;
    __VdlyVal__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0;
    __VdlyDim0__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0;
    __VdlySet__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0 = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((0x20U != (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count)) 
                                           | (0x20U 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day42_sync_fifo_tb.sv:19: Assertion failed in %m: [SVA FAIL] a_full\n",3, 'M',vlSymsp->name(),"day42_sync_fifo_tb.a_full", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day42_sync_fifo_tb.sv", 19, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((0U != (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count)) 
                                           | (0U == (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day42_sync_fifo_tb.sv:20: Assertion failed in %m: [SVA FAIL] a_empty\n",3, 'M',vlSymsp->name(),"day42_sync_fifo_tb.a_empty", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day42_sync_fifo_tb.sv", 20, "");
                }
                if (VL_UNLIKELY(((0x20U < (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day42_sync_fifo_tb.sv:21: Assertion failed in %m: [SVA FAIL] a_range\n",3, 'M',vlSymsp->name(),"day42_sync_fifo_tb.a_range", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day42_sync_fifo_tb.sv", 21, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_5_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count) 
                                              == ((IData)(1U) 
                                                  + (IData)(vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_6_1))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day42_sync_fifo_tb.sv:22: Assertion failed in %m: [SVA FAIL] a_push\n",3, 'M',vlSymsp->name(),"day42_sync_fifo_tb.a_push", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day42_sync_fifo_tb.sv", 22, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_8_1)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count) 
                                              == ((IData)(vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_6_1) 
                                                  - (IData)(1U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day42_sync_fifo_tb.sv:23: Assertion failed in %m: [SVA FAIL] a_pop\n",3, 'M',vlSymsp->name(),"day42_sync_fifo_tb.a_pop", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day42_sync_fifo_tb.sv", 23, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_10_1)) 
                                           | ((IData)(vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_6_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day42_sync_fifo_tb.sv:24: Assertion failed in %m: [SVA FAIL] a_no_ovf\n",3, 'M',vlSymsp->name(),"day42_sync_fifo_tb.a_no_ovf", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day42_sync_fifo_tb.sv", 24, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_12_1)) 
                                           | ((IData)(vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_6_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day42_sync_fifo_tb.sv:25: Assertion failed in %m: [SVA FAIL] a_no_unf\n",3, 'M',vlSymsp->name(),"day42_sync_fifo_tb.a_no_unf", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day42_sync_fifo_tb.sv", 25, "");
                }
            }
        }
    }
    __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__rptr 
        = vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__rptr;
    __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__wptr 
        = vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__wptr;
    __VdlySet__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0 = 0U;
    if (vlSelfRef.day42_sync_fifo_tb__DOT__rst) {
        __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__wptr = 0U;
        vlSelfRef.day42_sync_fifo_tb__DOT__count = 0U;
        __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__rptr = 0U;
        vlSelfRef.day42_sync_fifo_tb__DOT__dout = 0U;
    } else {
        if (vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__do_wr) {
            __VdlyVal__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0 
                = vlSelfRef.day42_sync_fifo_tb__DOT__din;
            __VdlyDim0__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0 
                = vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__wptr;
            __VdlySet__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0 = 1U;
            __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__wptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__wptr)));
        }
        vlSelfRef.day42_sync_fifo_tb__DOT__count = 
            (0x0000003fU & (((IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count) 
                             + (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__do_wr)) 
                            - (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__do_rd)));
        if (vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__do_rd) {
            vlSelfRef.day42_sync_fifo_tb__DOT__dout 
                = vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__mem
                [vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__rptr];
            __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__rptr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__rptr)));
        }
    }
    vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__wptr 
        = __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__wptr;
    vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_5_1 = 
        ((~ (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__rst)) 
         & (((IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__wr_en) 
             & (0x20U != (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count))) 
            & (~ ((IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__rd_en) 
                  & (0U != (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count))))));
    vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_8_1 = 
        ((~ (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__rst)) 
         & (((IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__rd_en) 
             & (0U != (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count))) 
            & (~ ((IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__wr_en) 
                  & (0x20U != (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count))))));
    vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_10_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__rst)) 
           & (((0x20U == (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count)) 
               & (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__wr_en)) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__rd_en))));
    vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_6_1 = vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count;
    vlSelfRef.day42_sync_fifo_tb__DOT___Vpast_12_1 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__rst)) 
           & (((0U == (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__count)) 
               & (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__rd_en)) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__day42_sync_fifo_tb__DOT__wr_en))));
    vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__rptr 
        = __Vdly__day42_sync_fifo_tb__DOT__dut__DOT__rptr;
    if (__VdlySet__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0) {
        vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__mem[__VdlyDim0__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0] 
            = __VdlyVal__day42_sync_fifo_tb__DOT__dut__DOT__mem__v0;
    }
}

void Vday42_sync_fifo_tb___024root___timing_ready(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___timing_ready\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4d1942c9__0.ready("@(negedge day42_sync_fifo_tb.clk)");
    }
}

void Vday42_sync_fifo_tb___024root___timing_resume(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___timing_resume\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h4d1942c9__0.moveToResumeQueue(
                                                          "@(negedge day42_sync_fifo_tb.clk)");
    vlSelfRef.__VtrigSched_h4d1942c9__0.resume("@(negedge day42_sync_fifo_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday42_sync_fifo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday42_sync_fifo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0(Vday42_sync_fifo_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root____VbeforeTrig_h4d1942c9__0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day42_sync_fifo_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day42_sync_fifo_tb__DOT__clk__0 
        = vlSelfRef.day42_sync_fifo_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4d1942c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d1942c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d1942c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d1942c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d1942c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d1942c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d1942c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d1942c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4d1942c9__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday42_sync_fifo_tb___024root___eval_debug_assertions(Vday42_sync_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root___eval_debug_assertions\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
