// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday20_alu_tb.h for the primary calling header

#include "Vday20_alu_tb__pch.h"

VlCoroutine Vday20_alu_tb___024root___eval_initial__TOP__Vtiming__0(Vday20_alu_tb___024root* vlSelf);
VlCoroutine Vday20_alu_tb___024root___eval_initial__TOP__Vtiming__1(Vday20_alu_tb___024root* vlSelf);

void Vday20_alu_tb___024root___eval_initial(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_initial\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday20_alu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday20_alu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday20_alu_tb___024root___eval_sample(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_sample\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__dut__DOT__r 
        = vlSelfRef.day20_alu_tb__DOT__dut__DOT__r;
    vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__op 
        = vlSelfRef.day20_alu_tb__DOT__op;
    vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__a 
        = vlSelfRef.day20_alu_tb__DOT__a;
    vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__b 
        = vlSelfRef.day20_alu_tb__DOT__b;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday20_alu_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday20_alu_tb___024root___eval_ico(Vday20_alu_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_ico\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday20_alu_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday20_alu_tb___024root___timing_ready(Vday20_alu_tb___024root* vlSelf);
void Vday20_alu_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday20_alu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday20_alu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday20_alu_tb___024root___timing_resume(Vday20_alu_tb___024root* vlSelf);
void Vday20_alu_tb___024root___act_comb__TOP__0(Vday20_alu_tb___024root* vlSelf);

bool Vday20_alu_tb___024root___eval_act(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_act\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day20_alu_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day20_alu_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day20_alu_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day20_alu_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day20_alu_tb__DOT__clk__0 
            = vlSelfRef.day20_alu_tb__DOT__clk;
    }
    Vday20_alu_tb___024root___timing_ready(vlSelf);
    Vday20_alu_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday20_alu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday20_alu_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday20_alu_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday20_alu_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vday20_alu_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vday20_alu_tb___024root___eval_inact(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_inact\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day20_alu_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday20_alu_tb___024root___nba_sequent__TOP__0(Vday20_alu_tb___024root* vlSelf);
void Vday20_alu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday20_alu_tb___024root___eval_nba(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_nba\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday20_alu_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday20_alu_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday20_alu_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
        Vday20_alu_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday20_alu_tb___024root___eval_obs(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_obs\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday20_alu_tb___024root___eval_react(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_react\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday20_alu_tb___024root___eval_postponed(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_postponed\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday20_alu_tb___024root____VbeforeTrig_hc801c9c1__0(Vday20_alu_tb___024root* vlSelf, const char* __VeventDescription);
void Vday20_alu_tb___024root____VbeforeTrig_hc801ca02__0(Vday20_alu_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday20_alu_tb___024root___eval_initial__TOP__Vtiming__0(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day20_alu_tb__DOT__unnamedblk1__DOT__o;
    day20_alu_tb__DOT__unnamedblk1__DOT__o = 0;
    IData/*31:0*/ day20_alu_tb__DOT__unnamedblk2__DOT__i;
    day20_alu_tb__DOT__unnamedblk2__DOT__i = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__0__ta;
    __Vtask_day20_alu_tb__DOT__apply__0__ta = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__0__tb_;
    __Vtask_day20_alu_tb__DOT__apply__0__tb_ = 0;
    CData/*3:0*/ __Vtask_day20_alu_tb__DOT__apply__0__to;
    __Vtask_day20_alu_tb__DOT__apply__0__to = 0;
    IData/*31:0*/ __Vtask_day20_alu_tb__DOT__apply__0__r;
    __Vtask_day20_alu_tb__DOT__apply__0__r = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__1__Vfuncout;
    __Vfunc_day20_alu_tb__DOT__ref_alu__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__1__x;
    __Vfunc_day20_alu_tb__DOT__ref_alu__1__x = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__1__z;
    __Vfunc_day20_alu_tb__DOT__ref_alu__1__z = 0;
    CData/*3:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__1__o;
    __Vfunc_day20_alu_tb__DOT__ref_alu__1__o = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__1__xi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__1__xi = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__2__ta;
    __Vtask_day20_alu_tb__DOT__apply__2__ta = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__2__tb_;
    __Vtask_day20_alu_tb__DOT__apply__2__tb_ = 0;
    CData/*3:0*/ __Vtask_day20_alu_tb__DOT__apply__2__to;
    __Vtask_day20_alu_tb__DOT__apply__2__to = 0;
    IData/*31:0*/ __Vtask_day20_alu_tb__DOT__apply__2__r;
    __Vtask_day20_alu_tb__DOT__apply__2__r = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__3__Vfuncout;
    __Vfunc_day20_alu_tb__DOT__ref_alu__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__3__x;
    __Vfunc_day20_alu_tb__DOT__ref_alu__3__x = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__3__z;
    __Vfunc_day20_alu_tb__DOT__ref_alu__3__z = 0;
    CData/*3:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__3__o;
    __Vfunc_day20_alu_tb__DOT__ref_alu__3__o = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__3__xi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__3__xi = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__4__ta;
    __Vtask_day20_alu_tb__DOT__apply__4__ta = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__4__tb_;
    __Vtask_day20_alu_tb__DOT__apply__4__tb_ = 0;
    CData/*3:0*/ __Vtask_day20_alu_tb__DOT__apply__4__to;
    __Vtask_day20_alu_tb__DOT__apply__4__to = 0;
    IData/*31:0*/ __Vtask_day20_alu_tb__DOT__apply__4__r;
    __Vtask_day20_alu_tb__DOT__apply__4__r = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__5__Vfuncout;
    __Vfunc_day20_alu_tb__DOT__ref_alu__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__5__x;
    __Vfunc_day20_alu_tb__DOT__ref_alu__5__x = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__5__z;
    __Vfunc_day20_alu_tb__DOT__ref_alu__5__z = 0;
    CData/*3:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__5__o;
    __Vfunc_day20_alu_tb__DOT__ref_alu__5__o = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__5__xi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__5__xi = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__6__ta;
    __Vtask_day20_alu_tb__DOT__apply__6__ta = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__6__tb_;
    __Vtask_day20_alu_tb__DOT__apply__6__tb_ = 0;
    CData/*3:0*/ __Vtask_day20_alu_tb__DOT__apply__6__to;
    __Vtask_day20_alu_tb__DOT__apply__6__to = 0;
    IData/*31:0*/ __Vtask_day20_alu_tb__DOT__apply__6__r;
    __Vtask_day20_alu_tb__DOT__apply__6__r = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__7__Vfuncout;
    __Vfunc_day20_alu_tb__DOT__ref_alu__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__7__x;
    __Vfunc_day20_alu_tb__DOT__ref_alu__7__x = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__7__z;
    __Vfunc_day20_alu_tb__DOT__ref_alu__7__z = 0;
    CData/*3:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__7__o;
    __Vfunc_day20_alu_tb__DOT__ref_alu__7__o = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__7__xi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__7__xi = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__8__ta;
    __Vtask_day20_alu_tb__DOT__apply__8__ta = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__8__tb_;
    __Vtask_day20_alu_tb__DOT__apply__8__tb_ = 0;
    CData/*3:0*/ __Vtask_day20_alu_tb__DOT__apply__8__to;
    __Vtask_day20_alu_tb__DOT__apply__8__to = 0;
    IData/*31:0*/ __Vtask_day20_alu_tb__DOT__apply__8__r;
    __Vtask_day20_alu_tb__DOT__apply__8__r = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__9__Vfuncout;
    __Vfunc_day20_alu_tb__DOT__ref_alu__9__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__9__x;
    __Vfunc_day20_alu_tb__DOT__ref_alu__9__x = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__9__z;
    __Vfunc_day20_alu_tb__DOT__ref_alu__9__z = 0;
    CData/*3:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__9__o;
    __Vfunc_day20_alu_tb__DOT__ref_alu__9__o = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__9__xi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__9__xi = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__10__ta;
    __Vtask_day20_alu_tb__DOT__apply__10__ta = 0;
    CData/*7:0*/ __Vtask_day20_alu_tb__DOT__apply__10__tb_;
    __Vtask_day20_alu_tb__DOT__apply__10__tb_ = 0;
    CData/*3:0*/ __Vtask_day20_alu_tb__DOT__apply__10__to;
    __Vtask_day20_alu_tb__DOT__apply__10__to = 0;
    IData/*31:0*/ __Vtask_day20_alu_tb__DOT__apply__10__r;
    __Vtask_day20_alu_tb__DOT__apply__10__r = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__11__Vfuncout;
    __Vfunc_day20_alu_tb__DOT__ref_alu__11__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__11__x;
    __Vfunc_day20_alu_tb__DOT__ref_alu__11__x = 0;
    CData/*7:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__11__z;
    __Vfunc_day20_alu_tb__DOT__ref_alu__11__z = 0;
    CData/*3:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__11__o;
    __Vfunc_day20_alu_tb__DOT__ref_alu__11__o = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__11__xi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__11__xi = 0;
    IData/*31:0*/ __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi;
    __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi = 0;
    // Body
    day20_alu_tb__DOT__unnamedblk1__DOT__o = 0U;
    while (VL_GTS_III(32, 0x00000010U, day20_alu_tb__DOT__unnamedblk1__DOT__o)) {
        __Vtask_day20_alu_tb__DOT__apply__0__to = (0x0000000fU 
                                                   & day20_alu_tb__DOT__unnamedblk1__DOT__o);
        __Vtask_day20_alu_tb__DOT__apply__0__tb_ = 0U;
        __Vtask_day20_alu_tb__DOT__apply__0__ta = 0U;
        __Vtask_day20_alu_tb__DOT__apply__0__r = 0U;
        Vday20_alu_tb___024root____VbeforeTrig_hc801c9c1__0(vlSelf, 
                                                            "@(negedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801c9c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             46);
        vlSelfRef.day20_alu_tb__DOT__a = __Vtask_day20_alu_tb__DOT__apply__0__ta;
        vlSelfRef.day20_alu_tb__DOT__b = __Vtask_day20_alu_tb__DOT__apply__0__tb_;
        vlSelfRef.day20_alu_tb__DOT__op = __Vtask_day20_alu_tb__DOT__apply__0__to;
        Vday20_alu_tb___024root____VbeforeTrig_hc801ca02__0(vlSelf, 
                                                            "@(posedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801ca02__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             47);
        __Vfunc_day20_alu_tb__DOT__ref_alu__1__o = __Vtask_day20_alu_tb__DOT__apply__0__to;
        __Vfunc_day20_alu_tb__DOT__ref_alu__1__z = __Vtask_day20_alu_tb__DOT__apply__0__tb_;
        __Vfunc_day20_alu_tb__DOT__ref_alu__1__x = __Vtask_day20_alu_tb__DOT__apply__0__ta;
        __Vfunc_day20_alu_tb__DOT__ref_alu__1__Vfuncout = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__1__xi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__1__xi = __Vfunc_day20_alu_tb__DOT__ref_alu__1__x;
        __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi = __Vfunc_day20_alu_tb__DOT__ref_alu__1__z;
        __Vfunc_day20_alu_tb__DOT__ref_alu__1__Vfuncout 
            = (((((((((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o)) 
                      | (1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))) 
                     | (2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))) 
                    | (3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))) 
                   | (4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))) 
                  | (5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))) 
                 | (6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))) 
                | (7U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o)))
                ? ((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                    ? (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                       + __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi)
                    : ((1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                        ? (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                           - __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi)
                        : ((2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                            ? ((IData)(1U) + __Vfunc_day20_alu_tb__DOT__ref_alu__1__xi)
                            : ((3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                   - (IData)(1U)) : 
                               ((4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                                 ? (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                    & __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi)
                                 : ((5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                                     ? (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                        | __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi)
                                     : ((6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                                         ? (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                            ^ __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi)
                                         : (0x000000ffU 
                                            & (~ __Vfunc_day20_alu_tb__DOT__ref_alu__1__xi)))))))))
                : ((8U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                    ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                         & __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi)))
                    : ((9U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                        ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                             | __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi)))
                        : ((0x0aU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                            ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                                 ^ __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi)))
                            : ((0x0bU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                   << 1U) : ((0x0cU 
                                              == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                                              ? ((__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                                  >> 1U) 
                                                 | (0x00000100U 
                                                    & (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                                       << 8U)))
                                              : ((0x0dU 
                                                  == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                                                  ? 
                                                 ((0x000000ffU 
                                                   & (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                                      << 1U)) 
                                                  | (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                                     >> 7U))
                                                  : 
                                                 ((0x0eU 
                                                   == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__1__o))
                                                   ? 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                                    >> 1U) 
                                                   | (0x00000080U 
                                                      & (__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                                         << 7U)))
                                                   : 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__1__xi 
                                                    == __Vfunc_day20_alu_tb__DOT__ref_alu__1__zi)
                                                    ? 1U
                                                    : 0U)))))))));
        __Vtask_day20_alu_tb__DOT__apply__0__r = __Vfunc_day20_alu_tb__DOT__ref_alu__1__Vfuncout;
        if (VL_UNLIKELY((((0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r)) 
                          != (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__0__r))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU result (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r) 
                                 >> 8U)) != (1U & (__Vtask_day20_alu_tb__DOT__apply__0__r 
                                                   >> 8U)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU carry (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0U == (0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r))) 
                          != (0U == (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__0__r)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU zero (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        __Vtask_day20_alu_tb__DOT__apply__2__to = (0x0000000fU 
                                                   & day20_alu_tb__DOT__unnamedblk1__DOT__o);
        __Vtask_day20_alu_tb__DOT__apply__2__tb_ = 0xffU;
        __Vtask_day20_alu_tb__DOT__apply__2__ta = 0xffU;
        __Vtask_day20_alu_tb__DOT__apply__2__r = 0U;
        Vday20_alu_tb___024root____VbeforeTrig_hc801c9c1__0(vlSelf, 
                                                            "@(negedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801c9c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             46);
        vlSelfRef.day20_alu_tb__DOT__a = __Vtask_day20_alu_tb__DOT__apply__2__ta;
        vlSelfRef.day20_alu_tb__DOT__b = __Vtask_day20_alu_tb__DOT__apply__2__tb_;
        vlSelfRef.day20_alu_tb__DOT__op = __Vtask_day20_alu_tb__DOT__apply__2__to;
        Vday20_alu_tb___024root____VbeforeTrig_hc801ca02__0(vlSelf, 
                                                            "@(posedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801ca02__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             47);
        __Vfunc_day20_alu_tb__DOT__ref_alu__3__o = __Vtask_day20_alu_tb__DOT__apply__2__to;
        __Vfunc_day20_alu_tb__DOT__ref_alu__3__z = __Vtask_day20_alu_tb__DOT__apply__2__tb_;
        __Vfunc_day20_alu_tb__DOT__ref_alu__3__x = __Vtask_day20_alu_tb__DOT__apply__2__ta;
        __Vfunc_day20_alu_tb__DOT__ref_alu__3__Vfuncout = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__3__xi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__3__xi = __Vfunc_day20_alu_tb__DOT__ref_alu__3__x;
        __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi = __Vfunc_day20_alu_tb__DOT__ref_alu__3__z;
        __Vfunc_day20_alu_tb__DOT__ref_alu__3__Vfuncout 
            = (((((((((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o)) 
                      | (1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))) 
                     | (2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))) 
                    | (3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))) 
                   | (4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))) 
                  | (5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))) 
                 | (6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))) 
                | (7U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o)))
                ? ((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                    ? (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                       + __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi)
                    : ((1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                        ? (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                           - __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi)
                        : ((2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                            ? ((IData)(1U) + __Vfunc_day20_alu_tb__DOT__ref_alu__3__xi)
                            : ((3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                   - (IData)(1U)) : 
                               ((4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                                 ? (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                    & __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi)
                                 : ((5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                                     ? (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                        | __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi)
                                     : ((6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                                         ? (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                            ^ __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi)
                                         : (0x000000ffU 
                                            & (~ __Vfunc_day20_alu_tb__DOT__ref_alu__3__xi)))))))))
                : ((8U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                    ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                         & __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi)))
                    : ((9U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                        ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                             | __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi)))
                        : ((0x0aU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                            ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                                 ^ __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi)))
                            : ((0x0bU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                   << 1U) : ((0x0cU 
                                              == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                                              ? ((__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                                  >> 1U) 
                                                 | (0x00000100U 
                                                    & (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                                       << 8U)))
                                              : ((0x0dU 
                                                  == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                                                  ? 
                                                 ((0x000000ffU 
                                                   & (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                                      << 1U)) 
                                                  | (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                                     >> 7U))
                                                  : 
                                                 ((0x0eU 
                                                   == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__3__o))
                                                   ? 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                                    >> 1U) 
                                                   | (0x00000080U 
                                                      & (__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                                         << 7U)))
                                                   : 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__3__xi 
                                                    == __Vfunc_day20_alu_tb__DOT__ref_alu__3__zi)
                                                    ? 1U
                                                    : 0U)))))))));
        __Vtask_day20_alu_tb__DOT__apply__2__r = __Vfunc_day20_alu_tb__DOT__ref_alu__3__Vfuncout;
        if (VL_UNLIKELY((((0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r)) 
                          != (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__2__r))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU result (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r) 
                                 >> 8U)) != (1U & (__Vtask_day20_alu_tb__DOT__apply__2__r 
                                                   >> 8U)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU carry (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0U == (0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r))) 
                          != (0U == (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__2__r)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU zero (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        __Vtask_day20_alu_tb__DOT__apply__4__to = (0x0000000fU 
                                                   & day20_alu_tb__DOT__unnamedblk1__DOT__o);
        __Vtask_day20_alu_tb__DOT__apply__4__tb_ = 1U;
        __Vtask_day20_alu_tb__DOT__apply__4__ta = 0xffU;
        __Vtask_day20_alu_tb__DOT__apply__4__r = 0U;
        Vday20_alu_tb___024root____VbeforeTrig_hc801c9c1__0(vlSelf, 
                                                            "@(negedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801c9c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             46);
        vlSelfRef.day20_alu_tb__DOT__a = __Vtask_day20_alu_tb__DOT__apply__4__ta;
        vlSelfRef.day20_alu_tb__DOT__b = __Vtask_day20_alu_tb__DOT__apply__4__tb_;
        vlSelfRef.day20_alu_tb__DOT__op = __Vtask_day20_alu_tb__DOT__apply__4__to;
        Vday20_alu_tb___024root____VbeforeTrig_hc801ca02__0(vlSelf, 
                                                            "@(posedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801ca02__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             47);
        __Vfunc_day20_alu_tb__DOT__ref_alu__5__o = __Vtask_day20_alu_tb__DOT__apply__4__to;
        __Vfunc_day20_alu_tb__DOT__ref_alu__5__z = __Vtask_day20_alu_tb__DOT__apply__4__tb_;
        __Vfunc_day20_alu_tb__DOT__ref_alu__5__x = __Vtask_day20_alu_tb__DOT__apply__4__ta;
        __Vfunc_day20_alu_tb__DOT__ref_alu__5__Vfuncout = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__5__xi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__5__xi = __Vfunc_day20_alu_tb__DOT__ref_alu__5__x;
        __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi = __Vfunc_day20_alu_tb__DOT__ref_alu__5__z;
        __Vfunc_day20_alu_tb__DOT__ref_alu__5__Vfuncout 
            = (((((((((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o)) 
                      | (1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))) 
                     | (2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))) 
                    | (3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))) 
                   | (4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))) 
                  | (5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))) 
                 | (6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))) 
                | (7U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o)))
                ? ((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                    ? (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                       + __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi)
                    : ((1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                        ? (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                           - __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi)
                        : ((2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                            ? ((IData)(1U) + __Vfunc_day20_alu_tb__DOT__ref_alu__5__xi)
                            : ((3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                   - (IData)(1U)) : 
                               ((4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                                 ? (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                    & __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi)
                                 : ((5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                                     ? (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                        | __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi)
                                     : ((6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                                         ? (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                            ^ __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi)
                                         : (0x000000ffU 
                                            & (~ __Vfunc_day20_alu_tb__DOT__ref_alu__5__xi)))))))))
                : ((8U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                    ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                         & __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi)))
                    : ((9U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                        ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                             | __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi)))
                        : ((0x0aU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                            ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                                 ^ __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi)))
                            : ((0x0bU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                   << 1U) : ((0x0cU 
                                              == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                                              ? ((__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                                  >> 1U) 
                                                 | (0x00000100U 
                                                    & (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                                       << 8U)))
                                              : ((0x0dU 
                                                  == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                                                  ? 
                                                 ((0x000000ffU 
                                                   & (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                                      << 1U)) 
                                                  | (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                                     >> 7U))
                                                  : 
                                                 ((0x0eU 
                                                   == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__5__o))
                                                   ? 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                                    >> 1U) 
                                                   | (0x00000080U 
                                                      & (__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                                         << 7U)))
                                                   : 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__5__xi 
                                                    == __Vfunc_day20_alu_tb__DOT__ref_alu__5__zi)
                                                    ? 1U
                                                    : 0U)))))))));
        __Vtask_day20_alu_tb__DOT__apply__4__r = __Vfunc_day20_alu_tb__DOT__ref_alu__5__Vfuncout;
        if (VL_UNLIKELY((((0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r)) 
                          != (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__4__r))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU result (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r) 
                                 >> 8U)) != (1U & (__Vtask_day20_alu_tb__DOT__apply__4__r 
                                                   >> 8U)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU carry (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0U == (0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r))) 
                          != (0U == (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__4__r)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU zero (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        __Vtask_day20_alu_tb__DOT__apply__6__to = (0x0000000fU 
                                                   & day20_alu_tb__DOT__unnamedblk1__DOT__o);
        __Vtask_day20_alu_tb__DOT__apply__6__tb_ = 0x7fU;
        __Vtask_day20_alu_tb__DOT__apply__6__ta = 0x80U;
        __Vtask_day20_alu_tb__DOT__apply__6__r = 0U;
        Vday20_alu_tb___024root____VbeforeTrig_hc801c9c1__0(vlSelf, 
                                                            "@(negedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801c9c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             46);
        vlSelfRef.day20_alu_tb__DOT__a = __Vtask_day20_alu_tb__DOT__apply__6__ta;
        vlSelfRef.day20_alu_tb__DOT__b = __Vtask_day20_alu_tb__DOT__apply__6__tb_;
        vlSelfRef.day20_alu_tb__DOT__op = __Vtask_day20_alu_tb__DOT__apply__6__to;
        Vday20_alu_tb___024root____VbeforeTrig_hc801ca02__0(vlSelf, 
                                                            "@(posedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801ca02__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             47);
        __Vfunc_day20_alu_tb__DOT__ref_alu__7__o = __Vtask_day20_alu_tb__DOT__apply__6__to;
        __Vfunc_day20_alu_tb__DOT__ref_alu__7__z = __Vtask_day20_alu_tb__DOT__apply__6__tb_;
        __Vfunc_day20_alu_tb__DOT__ref_alu__7__x = __Vtask_day20_alu_tb__DOT__apply__6__ta;
        __Vfunc_day20_alu_tb__DOT__ref_alu__7__Vfuncout = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__7__xi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__7__xi = __Vfunc_day20_alu_tb__DOT__ref_alu__7__x;
        __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi = __Vfunc_day20_alu_tb__DOT__ref_alu__7__z;
        __Vfunc_day20_alu_tb__DOT__ref_alu__7__Vfuncout 
            = (((((((((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o)) 
                      | (1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))) 
                     | (2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))) 
                    | (3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))) 
                   | (4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))) 
                  | (5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))) 
                 | (6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))) 
                | (7U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o)))
                ? ((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                    ? (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                       + __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi)
                    : ((1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                        ? (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                           - __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi)
                        : ((2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                            ? ((IData)(1U) + __Vfunc_day20_alu_tb__DOT__ref_alu__7__xi)
                            : ((3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                   - (IData)(1U)) : 
                               ((4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                                 ? (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                    & __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi)
                                 : ((5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                                     ? (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                        | __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi)
                                     : ((6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                                         ? (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                            ^ __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi)
                                         : (0x000000ffU 
                                            & (~ __Vfunc_day20_alu_tb__DOT__ref_alu__7__xi)))))))))
                : ((8U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                    ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                         & __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi)))
                    : ((9U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                        ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                             | __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi)))
                        : ((0x0aU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                            ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                                 ^ __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi)))
                            : ((0x0bU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                   << 1U) : ((0x0cU 
                                              == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                                              ? ((__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                                  >> 1U) 
                                                 | (0x00000100U 
                                                    & (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                                       << 8U)))
                                              : ((0x0dU 
                                                  == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                                                  ? 
                                                 ((0x000000ffU 
                                                   & (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                                      << 1U)) 
                                                  | (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                                     >> 7U))
                                                  : 
                                                 ((0x0eU 
                                                   == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__7__o))
                                                   ? 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                                    >> 1U) 
                                                   | (0x00000080U 
                                                      & (__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                                         << 7U)))
                                                   : 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__7__xi 
                                                    == __Vfunc_day20_alu_tb__DOT__ref_alu__7__zi)
                                                    ? 1U
                                                    : 0U)))))))));
        __Vtask_day20_alu_tb__DOT__apply__6__r = __Vfunc_day20_alu_tb__DOT__ref_alu__7__Vfuncout;
        if (VL_UNLIKELY((((0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r)) 
                          != (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__6__r))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU result (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r) 
                                 >> 8U)) != (1U & (__Vtask_day20_alu_tb__DOT__apply__6__r 
                                                   >> 8U)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU carry (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0U == (0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r))) 
                          != (0U == (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__6__r)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU zero (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        __Vtask_day20_alu_tb__DOT__apply__8__to = (0x0000000fU 
                                                   & day20_alu_tb__DOT__unnamedblk1__DOT__o);
        __Vtask_day20_alu_tb__DOT__apply__8__tb_ = 0x5aU;
        __Vtask_day20_alu_tb__DOT__apply__8__ta = 0xa5U;
        __Vtask_day20_alu_tb__DOT__apply__8__r = 0U;
        Vday20_alu_tb___024root____VbeforeTrig_hc801c9c1__0(vlSelf, 
                                                            "@(negedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801c9c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             46);
        vlSelfRef.day20_alu_tb__DOT__a = __Vtask_day20_alu_tb__DOT__apply__8__ta;
        vlSelfRef.day20_alu_tb__DOT__b = __Vtask_day20_alu_tb__DOT__apply__8__tb_;
        vlSelfRef.day20_alu_tb__DOT__op = __Vtask_day20_alu_tb__DOT__apply__8__to;
        Vday20_alu_tb___024root____VbeforeTrig_hc801ca02__0(vlSelf, 
                                                            "@(posedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801ca02__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             47);
        __Vfunc_day20_alu_tb__DOT__ref_alu__9__o = __Vtask_day20_alu_tb__DOT__apply__8__to;
        __Vfunc_day20_alu_tb__DOT__ref_alu__9__z = __Vtask_day20_alu_tb__DOT__apply__8__tb_;
        __Vfunc_day20_alu_tb__DOT__ref_alu__9__x = __Vtask_day20_alu_tb__DOT__apply__8__ta;
        __Vfunc_day20_alu_tb__DOT__ref_alu__9__Vfuncout = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__9__xi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__9__xi = __Vfunc_day20_alu_tb__DOT__ref_alu__9__x;
        __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi = __Vfunc_day20_alu_tb__DOT__ref_alu__9__z;
        __Vfunc_day20_alu_tb__DOT__ref_alu__9__Vfuncout 
            = (((((((((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o)) 
                      | (1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))) 
                     | (2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))) 
                    | (3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))) 
                   | (4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))) 
                  | (5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))) 
                 | (6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))) 
                | (7U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o)))
                ? ((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                    ? (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                       + __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi)
                    : ((1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                        ? (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                           - __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi)
                        : ((2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                            ? ((IData)(1U) + __Vfunc_day20_alu_tb__DOT__ref_alu__9__xi)
                            : ((3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                   - (IData)(1U)) : 
                               ((4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                                 ? (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                    & __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi)
                                 : ((5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                                     ? (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                        | __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi)
                                     : ((6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                                         ? (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                            ^ __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi)
                                         : (0x000000ffU 
                                            & (~ __Vfunc_day20_alu_tb__DOT__ref_alu__9__xi)))))))))
                : ((8U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                    ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                         & __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi)))
                    : ((9U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                        ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                             | __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi)))
                        : ((0x0aU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                            ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                                 ^ __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi)))
                            : ((0x0bU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                   << 1U) : ((0x0cU 
                                              == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                                              ? ((__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                                  >> 1U) 
                                                 | (0x00000100U 
                                                    & (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                                       << 8U)))
                                              : ((0x0dU 
                                                  == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                                                  ? 
                                                 ((0x000000ffU 
                                                   & (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                                      << 1U)) 
                                                  | (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                                     >> 7U))
                                                  : 
                                                 ((0x0eU 
                                                   == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__9__o))
                                                   ? 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                                    >> 1U) 
                                                   | (0x00000080U 
                                                      & (__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                                         << 7U)))
                                                   : 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__9__xi 
                                                    == __Vfunc_day20_alu_tb__DOT__ref_alu__9__zi)
                                                    ? 1U
                                                    : 0U)))))))));
        __Vtask_day20_alu_tb__DOT__apply__8__r = __Vfunc_day20_alu_tb__DOT__ref_alu__9__Vfuncout;
        if (VL_UNLIKELY((((0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r)) 
                          != (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__8__r))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU result (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r) 
                                 >> 8U)) != (1U & (__Vtask_day20_alu_tb__DOT__apply__8__r 
                                                   >> 8U)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU carry (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0U == (0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r))) 
                          != (0U == (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__8__r)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU zero (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        VL_WRITEF_NX("  op=%2d  a=A5 b=5A -> y=%02h carry=%b zero=%b\n",4
                     , '~',32,day20_alu_tb__DOT__unnamedblk1__DOT__o
                     , '#',8,(0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r))
                     , '#',1,(1U & ((IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r) 
                                    >> 8U)), '#',1,
                     (0U == (0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r))));
        day20_alu_tb__DOT__unnamedblk1__DOT__o = ((IData)(1U) 
                                                  + day20_alu_tb__DOT__unnamedblk1__DOT__o);
    }
    day20_alu_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000fa0U, day20_alu_tb__DOT__unnamedblk2__DOT__i)) {
        __Vtask_day20_alu_tb__DOT__apply__10__to = 
            (0x0000000fU & VL_RANDOM_I());
        __Vtask_day20_alu_tb__DOT__apply__10__tb_ = 
            (0x000000ffU & VL_RANDOM_I());
        __Vtask_day20_alu_tb__DOT__apply__10__ta = 
            (0x000000ffU & VL_RANDOM_I());
        __Vtask_day20_alu_tb__DOT__apply__10__r = 0U;
        Vday20_alu_tb___024root____VbeforeTrig_hc801c9c1__0(vlSelf, 
                                                            "@(negedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801c9c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             46);
        vlSelfRef.day20_alu_tb__DOT__a = __Vtask_day20_alu_tb__DOT__apply__10__ta;
        vlSelfRef.day20_alu_tb__DOT__b = __Vtask_day20_alu_tb__DOT__apply__10__tb_;
        vlSelfRef.day20_alu_tb__DOT__op = __Vtask_day20_alu_tb__DOT__apply__10__to;
        Vday20_alu_tb___024root____VbeforeTrig_hc801ca02__0(vlSelf, 
                                                            "@(posedge day20_alu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc801ca02__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day20_alu_tb.clk)", 
                                                             "tb/day20_alu_tb.sv", 
                                                             47);
        __Vfunc_day20_alu_tb__DOT__ref_alu__11__o = __Vtask_day20_alu_tb__DOT__apply__10__to;
        __Vfunc_day20_alu_tb__DOT__ref_alu__11__z = __Vtask_day20_alu_tb__DOT__apply__10__tb_;
        __Vfunc_day20_alu_tb__DOT__ref_alu__11__x = __Vtask_day20_alu_tb__DOT__apply__10__ta;
        __Vfunc_day20_alu_tb__DOT__ref_alu__11__Vfuncout = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__11__xi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi = 0U;
        __Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
            = __Vfunc_day20_alu_tb__DOT__ref_alu__11__x;
        __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi 
            = __Vfunc_day20_alu_tb__DOT__ref_alu__11__z;
        __Vfunc_day20_alu_tb__DOT__ref_alu__11__Vfuncout 
            = (((((((((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o)) 
                      | (1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))) 
                     | (2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))) 
                    | (3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))) 
                   | (4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))) 
                  | (5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))) 
                 | (6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))) 
                | (7U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o)))
                ? ((0U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                    ? (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                       + __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi)
                    : ((1U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                        ? (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                           - __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi)
                        : ((2U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                            ? ((IData)(1U) + __Vfunc_day20_alu_tb__DOT__ref_alu__11__xi)
                            : ((3U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                   - (IData)(1U)) : 
                               ((4U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                                 ? (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                    & __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi)
                                 : ((5U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                                     ? (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                        | __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi)
                                     : ((6U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                                         ? (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                            ^ __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi)
                                         : (0x000000ffU 
                                            & (~ __Vfunc_day20_alu_tb__DOT__ref_alu__11__xi)))))))))
                : ((8U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                    ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                         & __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi)))
                    : ((9U == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                        ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                             | __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi)))
                        : ((0x0aU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                            ? (0x000000ffU & (~ (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                                 ^ __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi)))
                            : ((0x0bU == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                                ? (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                   << 1U) : ((0x0cU 
                                              == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                                              ? ((__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                                  >> 1U) 
                                                 | (0x00000100U 
                                                    & (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                                       << 8U)))
                                              : ((0x0dU 
                                                  == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                                                  ? 
                                                 ((0x000000ffU 
                                                   & (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                                      << 1U)) 
                                                  | (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                                     >> 7U))
                                                  : 
                                                 ((0x0eU 
                                                   == (IData)(__Vfunc_day20_alu_tb__DOT__ref_alu__11__o))
                                                   ? 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                                    >> 1U) 
                                                   | (0x00000080U 
                                                      & (__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                                         << 7U)))
                                                   : 
                                                  ((__Vfunc_day20_alu_tb__DOT__ref_alu__11__xi 
                                                    == __Vfunc_day20_alu_tb__DOT__ref_alu__11__zi)
                                                    ? 1U
                                                    : 0U)))))))));
        __Vtask_day20_alu_tb__DOT__apply__10__r = __Vfunc_day20_alu_tb__DOT__ref_alu__11__Vfuncout;
        if (VL_UNLIKELY((((0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r)) 
                          != (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__10__r))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU result (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r) 
                                 >> 8U)) != (1U & (__Vtask_day20_alu_tb__DOT__apply__10__r 
                                                   >> 8U)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU carry (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((0U == (0x000000ffU & (IData)(vlSelfRef.day20_alu_tb__DOT__dut__DOT__r))) 
                          != (0U == (0x000000ffU & __Vtask_day20_alu_tb__DOT__apply__10__r)))))) {
            vlSelfRef.day20_alu_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day20_alu_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] ALU zero (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        day20_alu_tb__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                                  + day20_alu_tb__DOT__unnamedblk2__DOT__i);
    }
    if ((0U == vlSelfRef.day20_alu_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day20_alu\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day20_alu : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day20_alu_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day20_alu_tb.sv", 66, "");
    co_return;
}

VlCoroutine Vday20_alu_tb___024root___eval_initial__TOP__Vtiming__1(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day20_alu_tb.sv", 
                                             10);
        vlSelfRef.day20_alu_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.day20_alu_tb__DOT__clk)));
    }
    co_return;
}

bool Vday20_alu_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday20_alu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___trigger_anySet__act\n"); );
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

void Vday20_alu_tb___024root___act_comb__TOP__0(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___act_comb__TOP__0\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                      ^ (IData)(vlSelfRef.day20_alu_tb__DOT__b));
    __VdfgRegularize_h6e95ff9d_0_1 = ((1U & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                       ? ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                          | (IData)(vlSelfRef.day20_alu_tb__DOT__b))
                                       : ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                          & (IData)(vlSelfRef.day20_alu_tb__DOT__b)));
    vlSelfRef.day20_alu_tb__DOT__dut__DOT__r = (0x000001ffU 
                                                & ((8U 
                                                    & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                       ? 
                                                      ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                                       == (IData)(vlSelfRef.day20_alu_tb__DOT__b))
                                                       : 
                                                      ((0x00000080U 
                                                        & ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                                           << 7U)) 
                                                       | (0x0000007fU 
                                                          & ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                                             >> 1U))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                       ? 
                                                      ((0x000000feU 
                                                        & ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                                             >> 7U)))
                                                       : 
                                                      ((0x00000100U 
                                                        & ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                                           << 8U)) 
                                                       | ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                                          >> 1U))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                       ? 
                                                      ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                                       << 1U)
                                                       : 
                                                      (0x000000ffU 
                                                       & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_0))))
                                                      : 
                                                     (0x000000ffU 
                                                      & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_1)))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                     ? 
                                                    (0x000000ffU 
                                                     & ((2U 
                                                         & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.day20_alu_tb__DOT__a))
                                                          : (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_1)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                       ? 
                                                      ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                                       - (IData)(1U))
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.day20_alu_tb__DOT__a)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.day20_alu_tb__DOT__op))
                                                       ? 
                                                      ((IData)(vlSelfRef.day20_alu_tb__DOT__a) 
                                                       - (IData)(vlSelfRef.day20_alu_tb__DOT__b))
                                                       : 
                                                      ((IData)(vlSelfRef.day20_alu_tb__DOT__b) 
                                                       + (IData)(vlSelfRef.day20_alu_tb__DOT__a)))))));
}

void Vday20_alu_tb___024root___nba_sequent__TOP__0(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___nba_sequent__TOP__0\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY((((0U == (0x000000ffU & (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__dut__DOT__r))) 
                              != (0U == (0x000000ffU 
                                         & (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__dut__DOT__r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day20_alu_tb.sv:38: Assertion failed in %m: [SVA FAIL] a_zero\n",3, 'M',vlSymsp->name(),"day20_alu_tb.a_zero", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day20_alu_tb.sv", 38, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((0U != (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__op)) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__dut__DOT__r) 
                                          == (0x000001ffU 
                                              & ((IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__a) 
                                                 + (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__b)))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day20_alu_tb.sv:39: Assertion failed in %m: [SVA FAIL] a_add\n",3, 'M',vlSymsp->name(),"day20_alu_tb.a_add", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day20_alu_tb.sv", 39, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((4U != (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__op)) 
                                       | ((0x000000ffU 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__dut__DOT__r)) 
                                          == ((IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__a) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__b))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day20_alu_tb.sv:40: Assertion failed in %m: [SVA FAIL] a_and\n",3, 'M',vlSymsp->name(),"day20_alu_tb.a_and", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day20_alu_tb.sv", 40, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((6U != (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__op)) 
                                       | ((0x000000ffU 
                                           & (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__dut__DOT__r)) 
                                          == ((IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__a) 
                                              ^ (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__b))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day20_alu_tb.sv:41: Assertion failed in %m: [SVA FAIL] a_xor\n",3, 'M',vlSymsp->name(),"day20_alu_tb.a_xor", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day20_alu_tb.sv", 41, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((0x0fU != (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__op)) 
                                       | ((1U & (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__dut__DOT__r)) 
                                          == ((IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__a) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day20_alu_tb__DOT__b))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day20_alu_tb.sv:42: Assertion failed in %m: [SVA FAIL] a_cmp\n",3, 'M',vlSymsp->name(),"day20_alu_tb.a_cmp", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day20_alu_tb.sv", 42, "");
            }
        }
    }
}

void Vday20_alu_tb___024root___timing_ready(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___timing_ready\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready("@(negedge day20_alu_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc801ca02__0.ready("@(posedge day20_alu_tb.clk)");
    }
}

void Vday20_alu_tb___024root___timing_resume(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___timing_resume\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc801c9c1__0.moveToResumeQueue(
                                                          "@(negedge day20_alu_tb.clk)");
    vlSelfRef.__VtrigSched_hc801ca02__0.moveToResumeQueue(
                                                          "@(posedge day20_alu_tb.clk)");
    vlSelfRef.__VtrigSched_hc801c9c1__0.resume("@(negedge day20_alu_tb.clk)");
    vlSelfRef.__VtrigSched_hc801ca02__0.resume("@(posedge day20_alu_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday20_alu_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday20_alu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday20_alu_tb___024root____VbeforeTrig_hc801c9c1__0(Vday20_alu_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root____VbeforeTrig_hc801c9c1__0\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day20_alu_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day20_alu_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day20_alu_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day20_alu_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day20_alu_tb__DOT__clk__0 
        = vlSelfRef.day20_alu_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday20_alu_tb___024root____VbeforeTrig_hc801ca02__0(Vday20_alu_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root____VbeforeTrig_hc801ca02__0\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day20_alu_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day20_alu_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day20_alu_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day20_alu_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day20_alu_tb__DOT__clk__0 
        = vlSelfRef.day20_alu_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801ca02__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc801c9c1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday20_alu_tb___024root___eval_debug_assertions(Vday20_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday20_alu_tb___024root___eval_debug_assertions\n"); );
    Vday20_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
