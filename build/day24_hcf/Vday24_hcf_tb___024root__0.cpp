// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday24_hcf_tb.h for the primary calling header

#include "Vday24_hcf_tb__pch.h"

VlCoroutine Vday24_hcf_tb___024root___eval_initial__TOP__Vtiming__0(Vday24_hcf_tb___024root* vlSelf);
VlCoroutine Vday24_hcf_tb___024root___eval_initial__TOP__Vtiming__1(Vday24_hcf_tb___024root* vlSelf);

void Vday24_hcf_tb___024root___eval_initial(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_initial\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday24_hcf_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday24_hcf_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday24_hcf_tb___024root___eval_sample(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_sample\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__dut__DOT__state 
        = vlSelfRef.day24_hcf_tb__DOT__dut__DOT__state;
    vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__wd 
        = vlSelfRef.day24_hcf_tb__DOT__wd;
    vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__done 
        = vlSelfRef.day24_hcf_tb__DOT__done;
    vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__rst 
        = vlSelfRef.day24_hcf_tb__DOT__rst;
    vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__start 
        = vlSelfRef.day24_hcf_tb__DOT__start;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday24_hcf_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday24_hcf_tb___024root___eval_ico(Vday24_hcf_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_ico\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday24_hcf_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday24_hcf_tb___024root___timing_ready(Vday24_hcf_tb___024root* vlSelf);
void Vday24_hcf_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday24_hcf_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday24_hcf_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday24_hcf_tb___024root___timing_resume(Vday24_hcf_tb___024root* vlSelf);

bool Vday24_hcf_tb___024root___eval_act(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_act\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.day24_hcf_tb__DOT__done) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__done__0)) 
                                                           << 3U) 
                                                          | (((~ (IData)(vlSelfRef.day24_hcf_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__clk__0)) 
                                                             << 2U)) 
                                                         | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day24_hcf_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__clk__0 
            = vlSelfRef.day24_hcf_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__done__0 
            = vlSelfRef.day24_hcf_tb__DOT__done;
    }
    Vday24_hcf_tb___024root___timing_ready(vlSelf);
    Vday24_hcf_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday24_hcf_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday24_hcf_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday24_hcf_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday24_hcf_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday24_hcf_tb___024root___eval_inact(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_inact\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day24_hcf_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday24_hcf_tb___024root___nba_sequent__TOP__0(Vday24_hcf_tb___024root* vlSelf);
void Vday24_hcf_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday24_hcf_tb___024root___eval_nba(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_nba\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday24_hcf_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday24_hcf_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday24_hcf_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday24_hcf_tb___024root___eval_obs(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_obs\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday24_hcf_tb___024root___eval_react(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_react\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday24_hcf_tb___024root___eval_postponed(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_postponed\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0df7__0(Vday24_hcf_tb___024root* vlSelf, const char* __VeventDescription);
void Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(Vday24_hcf_tb___024root* vlSelf, const char* __VeventDescription);
void Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(Vday24_hcf_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday24_hcf_tb___024root___eval_initial__TOP__Vtiming__0(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day24_hcf_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day24_hcf_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day24_hcf_tb__DOT__unnamedblk2__DOT__i;
    day24_hcf_tb__DOT__unnamedblk2__DOT__i = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__0__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__0__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__0__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__0__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__0____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__0____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__unnamedblk1__DOT__t = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__2__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__2__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__2__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__2__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__2____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__2____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__unnamedblk1__DOT__t = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__4__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__4__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__4__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__4__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__4____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__4____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__unnamedblk1__DOT__t = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__6__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__6__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__6__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__6__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__6____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__6____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__unnamedblk1__DOT__t = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__8__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__8__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__8__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__8__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__8____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__8____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__unnamedblk1__DOT__t = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__10__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__10__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__10__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__10__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__10____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__10____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__unnamedblk1__DOT__t = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__12__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__12__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__12__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__12__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__12____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__12____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__unnamedblk1__DOT__t = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__14__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__14__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__14__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__14__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__14____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__14____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__unnamedblk1__DOT__t = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__16__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__16__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__16__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__16__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__16____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__16____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__unnamedblk1__DOT__t = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__18__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__18__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__18__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__18__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__18____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__18____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__unnamedblk1__DOT__t = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__20__ta;
    __Vtask_day24_hcf_tb__DOT__run_hcf__20__ta = 0;
    CData/*7:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__20__tb_;
    __Vtask_day24_hcf_tb__DOT__run_hcf__20__tb_ = 0;
    IData/*31:0*/ __Vtask_day24_hcf_tb__DOT__run_hcf__20____VlefCall_0__gcd_ref;
    __Vtask_day24_hcf_tb__DOT__run_hcf__20____VlefCall_0__gcd_ref = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__Vfuncout;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__x;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__x = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__y;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__y = 0;
    IData/*31:0*/ __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__unnamedblk1__DOT__t;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__unnamedblk1__DOT__t = 0;
    // Body
    day24_hcf_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, day24_hcf_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0df7__0(vlSelf, 
                                                            "@(posedge day24_hcf_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb0ff0df7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day24_hcf_tb.clk)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             35);
        day24_hcf_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day24_hcf_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/day24_hcf_tb.sv", 
                                         36);
    vlSelfRef.day24_hcf_tb__DOT__rst = 0U;
    __Vtask_day24_hcf_tb__DOT__run_hcf__0__tb_ = 0x12U;
    __Vtask_day24_hcf_tb__DOT__run_hcf__0__ta = 0x30U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         26);
    vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__0__ta;
    vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__0__tb_;
    vlSelfRef.day24_hcf_tb__DOT__start = 1U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         27);
    vlSelfRef.day24_hcf_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
        Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                            "@( day24_hcf_tb.done)");
        co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( day24_hcf_tb.done)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             28);
    }
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         29);
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__y = __Vtask_day24_hcf_tb__DOT__run_hcf__0__tb_;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__x = __Vtask_day24_hcf_tb__DOT__run_hcf__0__ta;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__Vfuncout = 0U;
    while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__y)) {
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__unnamedblk1__DOT__t 
            = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__y);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__x = __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__y;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__y = __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__unnamedblk1__DOT__t;
    }
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__Vfuncout 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__x;
    __Vtask_day24_hcf_tb__DOT__run_hcf__0____VlefCall_0__gcd_ref 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__1__Vfuncout;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                      != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__0____VlefCall_0__gcd_ref))))) {
        vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.day24_hcf_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__0__ta
                 , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__0__tb_)
                 , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
    __Vtask_day24_hcf_tb__DOT__run_hcf__2__tb_ = 5U;
    __Vtask_day24_hcf_tb__DOT__run_hcf__2__ta = 0x11U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         26);
    vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__2__ta;
    vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__2__tb_;
    vlSelfRef.day24_hcf_tb__DOT__start = 1U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         27);
    vlSelfRef.day24_hcf_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
        Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                            "@( day24_hcf_tb.done)");
        co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( day24_hcf_tb.done)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             28);
    }
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         29);
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__y = __Vtask_day24_hcf_tb__DOT__run_hcf__2__tb_;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__x = __Vtask_day24_hcf_tb__DOT__run_hcf__2__ta;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__Vfuncout = 0U;
    while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__y)) {
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__unnamedblk1__DOT__t 
            = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__y);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__x = __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__y;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__y = __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__unnamedblk1__DOT__t;
    }
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__Vfuncout 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__x;
    __Vtask_day24_hcf_tb__DOT__run_hcf__2____VlefCall_0__gcd_ref 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__3__Vfuncout;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                      != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__2____VlefCall_0__gcd_ref))))) {
        vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.day24_hcf_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__2__ta
                 , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__2__tb_)
                 , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
    __Vtask_day24_hcf_tb__DOT__run_hcf__4__tb_ = 0x4bU;
    __Vtask_day24_hcf_tb__DOT__run_hcf__4__ta = 0x64U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         26);
    vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__4__ta;
    vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__4__tb_;
    vlSelfRef.day24_hcf_tb__DOT__start = 1U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         27);
    vlSelfRef.day24_hcf_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
        Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                            "@( day24_hcf_tb.done)");
        co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( day24_hcf_tb.done)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             28);
    }
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         29);
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__y = __Vtask_day24_hcf_tb__DOT__run_hcf__4__tb_;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__x = __Vtask_day24_hcf_tb__DOT__run_hcf__4__ta;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__Vfuncout = 0U;
    while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__y)) {
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__unnamedblk1__DOT__t 
            = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__y);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__x = __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__y;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__y = __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__unnamedblk1__DOT__t;
    }
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__Vfuncout 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__x;
    __Vtask_day24_hcf_tb__DOT__run_hcf__4____VlefCall_0__gcd_ref 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__5__Vfuncout;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                      != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__4____VlefCall_0__gcd_ref))))) {
        vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.day24_hcf_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__4__ta
                 , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__4__tb_)
                 , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
    __Vtask_day24_hcf_tb__DOT__run_hcf__6__tb_ = 1U;
    __Vtask_day24_hcf_tb__DOT__run_hcf__6__ta = 0xffU;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         26);
    vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__6__ta;
    vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__6__tb_;
    vlSelfRef.day24_hcf_tb__DOT__start = 1U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         27);
    vlSelfRef.day24_hcf_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
        Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                            "@( day24_hcf_tb.done)");
        co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( day24_hcf_tb.done)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             28);
    }
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         29);
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__y = __Vtask_day24_hcf_tb__DOT__run_hcf__6__tb_;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__x = __Vtask_day24_hcf_tb__DOT__run_hcf__6__ta;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__Vfuncout = 0U;
    while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__y)) {
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__unnamedblk1__DOT__t 
            = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__y);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__x = __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__y;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__y = __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__unnamedblk1__DOT__t;
    }
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__Vfuncout 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__x;
    __Vtask_day24_hcf_tb__DOT__run_hcf__6____VlefCall_0__gcd_ref 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__7__Vfuncout;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                      != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__6____VlefCall_0__gcd_ref))))) {
        vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.day24_hcf_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__6__ta
                 , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__6__tb_)
                 , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
    __Vtask_day24_hcf_tb__DOT__run_hcf__8__tb_ = 9U;
    __Vtask_day24_hcf_tb__DOT__run_hcf__8__ta = 0U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         26);
    vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__8__ta;
    vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__8__tb_;
    vlSelfRef.day24_hcf_tb__DOT__start = 1U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         27);
    vlSelfRef.day24_hcf_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
        Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                            "@( day24_hcf_tb.done)");
        co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( day24_hcf_tb.done)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             28);
    }
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         29);
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__y = __Vtask_day24_hcf_tb__DOT__run_hcf__8__tb_;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__x = __Vtask_day24_hcf_tb__DOT__run_hcf__8__ta;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__Vfuncout = 0U;
    while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__y)) {
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__unnamedblk1__DOT__t 
            = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__y);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__x = __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__y;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__y = __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__unnamedblk1__DOT__t;
    }
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__Vfuncout 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__x;
    __Vtask_day24_hcf_tb__DOT__run_hcf__8____VlefCall_0__gcd_ref 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__9__Vfuncout;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                      != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__8____VlefCall_0__gcd_ref))))) {
        vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.day24_hcf_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__8__ta
                 , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__8__tb_)
                 , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
    __Vtask_day24_hcf_tb__DOT__run_hcf__10__tb_ = 0U;
    __Vtask_day24_hcf_tb__DOT__run_hcf__10__ta = 7U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         26);
    vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__10__ta;
    vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__10__tb_;
    vlSelfRef.day24_hcf_tb__DOT__start = 1U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         27);
    vlSelfRef.day24_hcf_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
        Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                            "@( day24_hcf_tb.done)");
        co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( day24_hcf_tb.done)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             28);
    }
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         29);
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__y = __Vtask_day24_hcf_tb__DOT__run_hcf__10__tb_;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__x = __Vtask_day24_hcf_tb__DOT__run_hcf__10__ta;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__Vfuncout = 0U;
    while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__y)) {
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__unnamedblk1__DOT__t 
            = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__y);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__x = __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__y;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__y = __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__unnamedblk1__DOT__t;
    }
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__Vfuncout 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__x;
    __Vtask_day24_hcf_tb__DOT__run_hcf__10____VlefCall_0__gcd_ref 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__11__Vfuncout;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                      != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__10____VlefCall_0__gcd_ref))))) {
        vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.day24_hcf_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__10__ta
                 , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__10__tb_)
                 , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
    __Vtask_day24_hcf_tb__DOT__run_hcf__12__tb_ = 0U;
    __Vtask_day24_hcf_tb__DOT__run_hcf__12__ta = 0U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         26);
    vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__12__ta;
    vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__12__tb_;
    vlSelfRef.day24_hcf_tb__DOT__start = 1U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         27);
    vlSelfRef.day24_hcf_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
        Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                            "@( day24_hcf_tb.done)");
        co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( day24_hcf_tb.done)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             28);
    }
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         29);
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__y = __Vtask_day24_hcf_tb__DOT__run_hcf__12__tb_;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__x = __Vtask_day24_hcf_tb__DOT__run_hcf__12__ta;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__Vfuncout = 0U;
    while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__y)) {
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__unnamedblk1__DOT__t 
            = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__y);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__x = __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__y;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__y = __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__unnamedblk1__DOT__t;
    }
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__Vfuncout 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__x;
    __Vtask_day24_hcf_tb__DOT__run_hcf__12____VlefCall_0__gcd_ref 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__13__Vfuncout;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                      != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__12____VlefCall_0__gcd_ref))))) {
        vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.day24_hcf_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__12__ta
                 , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__12__tb_)
                 , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
    __Vtask_day24_hcf_tb__DOT__run_hcf__14__tb_ = 0x10U;
    __Vtask_day24_hcf_tb__DOT__run_hcf__14__ta = 0x40U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         26);
    vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__14__ta;
    vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__14__tb_;
    vlSelfRef.day24_hcf_tb__DOT__start = 1U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         27);
    vlSelfRef.day24_hcf_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
        Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                            "@( day24_hcf_tb.done)");
        co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( day24_hcf_tb.done)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             28);
    }
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         29);
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__y = __Vtask_day24_hcf_tb__DOT__run_hcf__14__tb_;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__x = __Vtask_day24_hcf_tb__DOT__run_hcf__14__ta;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__Vfuncout = 0U;
    while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__y)) {
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__unnamedblk1__DOT__t 
            = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__y);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__x = __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__y;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__y = __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__unnamedblk1__DOT__t;
    }
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__Vfuncout 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__x;
    __Vtask_day24_hcf_tb__DOT__run_hcf__14____VlefCall_0__gcd_ref 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__15__Vfuncout;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                      != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__14____VlefCall_0__gcd_ref))))) {
        vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.day24_hcf_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__14__ta
                 , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__14__tb_)
                 , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
    __Vtask_day24_hcf_tb__DOT__run_hcf__16__tb_ = 0x24U;
    __Vtask_day24_hcf_tb__DOT__run_hcf__16__ta = 0x24U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         26);
    vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__16__ta;
    vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__16__tb_;
    vlSelfRef.day24_hcf_tb__DOT__start = 1U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         27);
    vlSelfRef.day24_hcf_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
        Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                            "@( day24_hcf_tb.done)");
        co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( day24_hcf_tb.done)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             28);
    }
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         29);
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__y = __Vtask_day24_hcf_tb__DOT__run_hcf__16__tb_;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__x = __Vtask_day24_hcf_tb__DOT__run_hcf__16__ta;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__Vfuncout = 0U;
    while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__y)) {
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__unnamedblk1__DOT__t 
            = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__y);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__x = __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__y;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__y = __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__unnamedblk1__DOT__t;
    }
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__Vfuncout 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__x;
    __Vtask_day24_hcf_tb__DOT__run_hcf__16____VlefCall_0__gcd_ref 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__17__Vfuncout;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                      != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__16____VlefCall_0__gcd_ref))))) {
        vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.day24_hcf_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__16__ta
                 , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__16__tb_)
                 , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
    __Vtask_day24_hcf_tb__DOT__run_hcf__18__tb_ = 0x69U;
    __Vtask_day24_hcf_tb__DOT__run_hcf__18__ta = 0xfcU;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         26);
    vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__18__ta;
    vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__18__tb_;
    vlSelfRef.day24_hcf_tb__DOT__start = 1U;
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         27);
    vlSelfRef.day24_hcf_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
        Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                            "@( day24_hcf_tb.done)");
        co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( day24_hcf_tb.done)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             28);
    }
    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                        "@(negedge day24_hcf_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day24_hcf_tb.clk)", 
                                                         "tb/day24_hcf_tb.sv", 
                                                         29);
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__y = __Vtask_day24_hcf_tb__DOT__run_hcf__18__tb_;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__x = __Vtask_day24_hcf_tb__DOT__run_hcf__18__ta;
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__Vfuncout = 0U;
    while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__y)) {
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__unnamedblk1__DOT__t 
            = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__y);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__x = __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__y;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__y = __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__unnamedblk1__DOT__t;
    }
    __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__Vfuncout 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__x;
    __Vtask_day24_hcf_tb__DOT__run_hcf__18____VlefCall_0__gcd_ref 
        = __Vfunc_day24_hcf_tb__DOT__gcd_ref__19__Vfuncout;
    if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                      != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__18____VlefCall_0__gcd_ref))))) {
        vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.day24_hcf_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__18__ta
                 , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__18__tb_)
                 , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
    day24_hcf_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000028U, day24_hcf_tb__DOT__unnamedblk2__DOT__i)) {
        __Vtask_day24_hcf_tb__DOT__run_hcf__20__tb_ 
            = (0x000000ffU & VL_RANDOM_I());
        __Vtask_day24_hcf_tb__DOT__run_hcf__20__ta 
            = (0x000000ffU & VL_RANDOM_I());
        Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                            "@(negedge day24_hcf_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day24_hcf_tb.clk)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             26);
        vlSelfRef.day24_hcf_tb__DOT__a = __Vtask_day24_hcf_tb__DOT__run_hcf__20__ta;
        vlSelfRef.day24_hcf_tb__DOT__b = __Vtask_day24_hcf_tb__DOT__run_hcf__20__tb_;
        vlSelfRef.day24_hcf_tb__DOT__start = 1U;
        Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                            "@(negedge day24_hcf_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day24_hcf_tb.clk)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             27);
        vlSelfRef.day24_hcf_tb__DOT__start = 0U;
        while ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__done)))) {
            Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(vlSelf, 
                                                                "@( day24_hcf_tb.done)");
            co_await vlSelfRef.__VtrigSched_hc51f226e__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( day24_hcf_tb.done)", 
                                                                 "tb/day24_hcf_tb.sv", 
                                                                 28);
        }
        Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(vlSelf, 
                                                            "@(negedge day24_hcf_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hb0ff0cb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day24_hcf_tb.clk)", 
                                                             "tb/day24_hcf_tb.sv", 
                                                             29);
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__y = __Vtask_day24_hcf_tb__DOT__run_hcf__20__tb_;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__x = __Vtask_day24_hcf_tb__DOT__run_hcf__20__ta;
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__Vfuncout = 0U;
        while ((0U != __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__y)) {
            __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__unnamedblk1__DOT__t 
                = VL_MODDIVS_III(32, __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__x, __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__y);
            __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__x 
                = __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__y;
            __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__y 
                = __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__unnamedblk1__DOT__t;
        }
        __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__Vfuncout 
            = __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__x;
        __Vtask_day24_hcf_tb__DOT__run_hcf__20____VlefCall_0__gcd_ref 
            = __Vfunc_day24_hcf_tb__DOT__gcd_ref__21__Vfuncout;
        if (VL_UNLIKELY((((IData)(vlSelfRef.day24_hcf_tb__DOT__hcf) 
                          != (0x000000ffU & __Vtask_day24_hcf_tb__DOT__run_hcf__20____VlefCall_0__gcd_ref))))) {
            vlSelfRef.day24_hcf_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.day24_hcf_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] HCF result (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        VL_WRITEF_NX("  HCF(%3d,%3d) = %3d\n",3, '#',8,__Vtask_day24_hcf_tb__DOT__run_hcf__20__ta
                     , '#',8,(IData)(__Vtask_day24_hcf_tb__DOT__run_hcf__20__tb_)
                     , '#',8,vlSelfRef.day24_hcf_tb__DOT__hcf);
        day24_hcf_tb__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                                  + day24_hcf_tb__DOT__unnamedblk2__DOT__i);
    }
    if ((0U == vlSelfRef.day24_hcf_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day24_hcf\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day24_hcf : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day24_hcf_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day24_hcf_tb.sv", 41, "");
    co_return;
}

VlCoroutine Vday24_hcf_tb___024root___eval_initial__TOP__Vtiming__1(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day24_hcf_tb.sv", 
                                             9);
        vlSelfRef.day24_hcf_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__clk)));
    }
    co_return;
}

bool Vday24_hcf_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday24_hcf_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___trigger_anySet__act\n"); );
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

void Vday24_hcf_tb___024root___nba_sequent__TOP__0(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___nba_sequent__TOP__0\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__day24_hcf_tb__DOT__dut__DOT__state;
    __Vdly__day24_hcf_tb__DOT__dut__DOT__state = 0;
    CData/*7:0*/ __Vdly__day24_hcf_tb__DOT__dut__DOT__x;
    __Vdly__day24_hcf_tb__DOT__dut__DOT__x = 0;
    CData/*7:0*/ __Vdly__day24_hcf_tb__DOT__dut__DOT__y;
    __Vdly__day24_hcf_tb__DOT__dut__DOT__y = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.day24_hcf_tb__DOT__rst)))) {
                if (VL_UNLIKELY((VL_LTES_III(32, 0x00000258U, vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__wd)))) {
                    VL_WRITEF_NX("[%0t] %%Error: day24_hcf_tb.sv:21: Assertion failed in %m: [SVA FAIL] a_watchdog\n",3, 'M',vlSymsp->name(),"day24_hcf_tb.a_watchdog", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day24_hcf_tb.sv", 21, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__done)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__dut__DOT__state)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day24_hcf_tb.sv:22: Assertion failed in %m: [SVA FAIL] a_done_idle\n",3, 'M',vlSymsp->name(),"day24_hcf_tb.a_done_idle", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day24_hcf_tb.sv", 22, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day24_hcf_tb__DOT___Vpast_1_1)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__dut__DOT__state))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day24_hcf_tb.sv:18: Assertion failed in %m: [SVA FAIL] a_finish\n",3, 'M',vlSymsp->name(),"day24_hcf_tb.a_finish", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day24_hcf_tb.sv", 18, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.day24_hcf_tb__DOT___Vpast_5_1) 
                                               & (~ (IData)(vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__dut__DOT__state)))) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__done))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day24_hcf_tb.sv:23: Assertion failed in %m: [SVA FAIL] a_fell_done\n",3, 'M',vlSymsp->name(),"day24_hcf_tb.a_fell_done", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day24_hcf_tb.sv", 23, "");
                }
            }
        }
    }
    if (vlSelfRef.day24_hcf_tb__DOT__dut__DOT__state) {
        __Vdly__day24_hcf_tb__DOT__dut__DOT__state = 1U;
        __Vdly__day24_hcf_tb__DOT__dut__DOT__x = vlSelfRef.day24_hcf_tb__DOT__dut__DOT__x;
        __Vdly__day24_hcf_tb__DOT__dut__DOT__y = vlSelfRef.day24_hcf_tb__DOT__dut__DOT__y;
        vlSelfRef.day24_hcf_tb__DOT__wd = ((IData)(1U) 
                                           + vlSelfRef.day24_hcf_tb__DOT__wd);
    } else {
        __Vdly__day24_hcf_tb__DOT__dut__DOT__state = 0U;
        __Vdly__day24_hcf_tb__DOT__dut__DOT__x = vlSelfRef.day24_hcf_tb__DOT__dut__DOT__x;
        __Vdly__day24_hcf_tb__DOT__dut__DOT__y = vlSelfRef.day24_hcf_tb__DOT__dut__DOT__y;
        vlSelfRef.day24_hcf_tb__DOT__wd = 0U;
    }
    if (vlSelfRef.day24_hcf_tb__DOT__rst) {
        __Vdly__day24_hcf_tb__DOT__dut__DOT__state = 0U;
        __Vdly__day24_hcf_tb__DOT__dut__DOT__x = 0U;
        __Vdly__day24_hcf_tb__DOT__dut__DOT__y = 0U;
        vlSelfRef.day24_hcf_tb__DOT__hcf = 0U;
        vlSelfRef.day24_hcf_tb__DOT__done = 0U;
    } else {
        vlSelfRef.day24_hcf_tb__DOT__done = 0U;
        if (vlSelfRef.day24_hcf_tb__DOT__dut__DOT__state) {
            if (((((IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__x) 
                   == (IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__y)) 
                  | (0U == (IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__x))) 
                 | (0U == (IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__y)))) {
                vlSelfRef.day24_hcf_tb__DOT__hcf = 
                    ((IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__x) 
                     | (IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__y));
                vlSelfRef.day24_hcf_tb__DOT__done = 1U;
                __Vdly__day24_hcf_tb__DOT__dut__DOT__state = 0U;
            } else if (((IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__x) 
                        > (IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__y))) {
                __Vdly__day24_hcf_tb__DOT__dut__DOT__x 
                    = (0x000000ffU & ((IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__x) 
                                      - (IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__y)));
            } else {
                __Vdly__day24_hcf_tb__DOT__dut__DOT__y 
                    = (0x000000ffU & ((IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__y) 
                                      - (IData)(vlSelfRef.day24_hcf_tb__DOT__dut__DOT__x)));
            }
        } else if (vlSelfRef.day24_hcf_tb__DOT__start) {
            __Vdly__day24_hcf_tb__DOT__dut__DOT__x 
                = vlSelfRef.day24_hcf_tb__DOT__a;
            __Vdly__day24_hcf_tb__DOT__dut__DOT__y 
                = vlSelfRef.day24_hcf_tb__DOT__b;
            __Vdly__day24_hcf_tb__DOT__dut__DOT__state = 1U;
        }
    }
    vlSelfRef.day24_hcf_tb__DOT___Vpast_1_1 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__rst)) 
                                               & ((IData)(vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__start) 
                                                  & (~ (IData)(vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__dut__DOT__state))));
    vlSelfRef.day24_hcf_tb__DOT___Vpast_5_1 = vlSelfRef.__Vsampled_TOP__day24_hcf_tb__DOT__dut__DOT__state;
    vlSelfRef.day24_hcf_tb__DOT__dut__DOT__x = __Vdly__day24_hcf_tb__DOT__dut__DOT__x;
    vlSelfRef.day24_hcf_tb__DOT__dut__DOT__y = __Vdly__day24_hcf_tb__DOT__dut__DOT__y;
    vlSelfRef.day24_hcf_tb__DOT__dut__DOT__state = __Vdly__day24_hcf_tb__DOT__dut__DOT__state;
}

void Vday24_hcf_tb___024root___timing_ready(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___timing_ready\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb0ff0df7__0.ready("@(posedge day24_hcf_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready("@(negedge day24_hcf_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc51f226e__0.ready("@( day24_hcf_tb.done)");
    }
}

void Vday24_hcf_tb___024root___timing_resume(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___timing_resume\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hb0ff0df7__0.moveToResumeQueue(
                                                          "@(posedge day24_hcf_tb.clk)");
    vlSelfRef.__VtrigSched_hb0ff0cb8__0.moveToResumeQueue(
                                                          "@(negedge day24_hcf_tb.clk)");
    vlSelfRef.__VtrigSched_hc51f226e__0.moveToResumeQueue(
                                                          "@( day24_hcf_tb.done)");
    vlSelfRef.__VtrigSched_hb0ff0df7__0.resume("@(posedge day24_hcf_tb.clk)");
    vlSelfRef.__VtrigSched_hb0ff0cb8__0.resume("@(negedge day24_hcf_tb.clk)");
    vlSelfRef.__VtrigSched_hc51f226e__0.resume("@( day24_hcf_tb.done)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday24_hcf_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday24_hcf_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0df7__0(Vday24_hcf_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0df7__0\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day24_hcf_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.day24_hcf_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__clk__0 
        = vlSelfRef.day24_hcf_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb0ff0df7__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0(Vday24_hcf_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root____VbeforeTrig_hb0ff0cb8__0\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day24_hcf_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.day24_hcf_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__clk__0 
        = vlSelfRef.day24_hcf_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb0ff0df7__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb0ff0cb8__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0(Vday24_hcf_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root____VbeforeTrig_hc51f226e__0\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.day24_hcf_tb__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__done__0)) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day24_hcf_tb__DOT__done__0 
        = vlSelfRef.day24_hcf_tb__DOT__done;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc51f226e__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday24_hcf_tb___024root___eval_debug_assertions(Vday24_hcf_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday24_hcf_tb___024root___eval_debug_assertions\n"); );
    Vday24_hcf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
