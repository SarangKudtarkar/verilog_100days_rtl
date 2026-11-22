// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday44_dual_port_ram_tb.h for the primary calling header

#include "Vday44_dual_port_ram_tb__pch.h"

VlCoroutine Vday44_dual_port_ram_tb___024root___eval_initial__TOP__Vtiming__0(Vday44_dual_port_ram_tb___024root* vlSelf);
VlCoroutine Vday44_dual_port_ram_tb___024root___eval_initial__TOP__Vtiming__1(Vday44_dual_port_ram_tb___024root* vlSelf);

void Vday44_dual_port_ram_tb___024root___eval_initial(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_initial\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday44_dual_port_ram_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday44_dual_port_ram_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday44_dual_port_ram_tb___024root___eval_sample(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_sample\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__dout_a 
        = vlSelfRef.day44_dual_port_ram_tb__DOT__dout_a;
    vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__dout_b 
        = vlSelfRef.day44_dual_port_ram_tb__DOT__dout_b;
    vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__we_a 
        = vlSelfRef.day44_dual_port_ram_tb__DOT__we_a;
    vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__din_a 
        = vlSelfRef.day44_dual_port_ram_tb__DOT__din_a;
    vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__we_b 
        = vlSelfRef.day44_dual_port_ram_tb__DOT__we_b;
    vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__din_b 
        = vlSelfRef.day44_dual_port_ram_tb__DOT__din_b;
    vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__addr_b 
        = vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b;
    vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__addr_a 
        = vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday44_dual_port_ram_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday44_dual_port_ram_tb___024root___eval_ico(Vday44_dual_port_ram_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_ico\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday44_dual_port_ram_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday44_dual_port_ram_tb___024root___timing_ready(Vday44_dual_port_ram_tb___024root* vlSelf);
void Vday44_dual_port_ram_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday44_dual_port_ram_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday44_dual_port_ram_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday44_dual_port_ram_tb___024root___timing_resume(Vday44_dual_port_ram_tb___024root* vlSelf);

bool Vday44_dual_port_ram_tb___024root___eval_act(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_act\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day44_dual_port_ram_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day44_dual_port_ram_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day44_dual_port_ram_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day44_dual_port_ram_tb__DOT__clk__0 
            = vlSelfRef.day44_dual_port_ram_tb__DOT__clk;
    }
    Vday44_dual_port_ram_tb___024root___timing_ready(vlSelf);
    Vday44_dual_port_ram_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday44_dual_port_ram_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday44_dual_port_ram_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday44_dual_port_ram_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday44_dual_port_ram_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday44_dual_port_ram_tb___024root___eval_inact(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_inact\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day44_dual_port_ram_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday44_dual_port_ram_tb___024root___nba_sequent__TOP__0(Vday44_dual_port_ram_tb___024root* vlSelf);
void Vday44_dual_port_ram_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday44_dual_port_ram_tb___024root___eval_nba(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_nba\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday44_dual_port_ram_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday44_dual_port_ram_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday44_dual_port_ram_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday44_dual_port_ram_tb___024root___eval_obs(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_obs\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday44_dual_port_ram_tb___024root___eval_react(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_react\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday44_dual_port_ram_tb___024root___eval_postponed(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_postponed\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday44_dual_port_ram_tb___024root____VbeforeTrig_h1b6fe5ab__0(Vday44_dual_port_ram_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday44_dual_port_ram_tb___024root___eval_initial__TOP__Vtiming__0(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__unnamedblk1__DOT__i;
    day44_dual_port_ram_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__unnamedblk2__DOT__i;
    day44_dual_port_ram_tb__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__unnamedblk3__DOT__i;
    day44_dual_port_ram_tb__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ day44_dual_port_ram_tb__DOT__unnamedblk4__DOT__i;
    day44_dual_port_ram_tb__DOT__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wa;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wa = 0;
    CData/*0:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wb;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wb = 0;
    CData/*7:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__aa;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__aa = 0;
    CData/*7:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__ab;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__ab = 0;
    IData/*31:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__da;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__da = 0;
    IData/*31:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__db;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__db = 0;
    CData/*0:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wa;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wa = 0;
    CData/*0:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wb;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wb = 0;
    CData/*7:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__aa;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__aa = 0;
    CData/*7:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__ab;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__ab = 0;
    IData/*31:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__da;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__da = 0;
    IData/*31:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__db;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__db = 0;
    CData/*0:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wa;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wa = 0;
    CData/*0:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wb;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wb = 0;
    CData/*7:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__aa;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__aa = 0;
    CData/*7:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__ab;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__ab = 0;
    IData/*31:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__da;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__da = 0;
    IData/*31:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__db;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__db = 0;
    CData/*0:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wa;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wa = 0;
    CData/*0:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wb;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wb = 0;
    CData/*7:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__aa;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__aa = 0;
    CData/*7:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__ab;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__ab = 0;
    IData/*31:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__da;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__da = 0;
    IData/*31:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__db;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__db = 0;
    CData/*0:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wa;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wa = 0;
    CData/*0:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wb;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wb = 0;
    CData/*7:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__aa;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__aa = 0;
    CData/*7:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__ab;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__ab = 0;
    IData/*31:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__da;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__da = 0;
    IData/*31:0*/ __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__db;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__db = 0;
    // Body
    day44_dual_port_ram_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, day44_dual_port_ram_tb__DOT__unnamedblk1__DOT__i)) {
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__db = 0U;
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__da = 0U;
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__ab = 0U;
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__aa 
            = (0x000000ffU & day44_dual_port_ram_tb__DOT__unnamedblk1__DOT__i);
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wb = 0U;
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wa = 1U;
        Vday44_dual_port_ram_tb___024root____VbeforeTrig_h1b6fe5ab__0(vlSelf, 
                                                                      "@(negedge day44_dual_port_ram_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1b6fe5ab__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day44_dual_port_ram_tb.clk)", 
                                                             "tb/day44_dual_port_ram_tb.sv", 
                                                             22);
        if (vlSelfRef.day44_dual_port_ram_tb__DOT__chk) {
            if (VL_UNLIKELY(((vlSelfRef.day44_dual_port_ram_tb__DOT__dout_a 
                              != vlSelfRef.day44_dual_port_ram_tb__DOT__exp_a)))) {
                vlSelfRef.day44_dual_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] port A output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY(((vlSelfRef.day44_dual_port_ram_tb__DOT__dout_b 
                              != vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b)))) {
                vlSelfRef.day44_dual_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] port B output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        vlSelfRef.day44_dual_port_ram_tb__DOT__we_a 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wa;
        if (__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wb) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__we_b = 1U;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__aa;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__ab;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__da;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__db;
            vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__db;
        } else {
            vlSelfRef.day44_dual_port_ram_tb__DOT__we_b = 0U;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__aa;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__ab;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__da;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__db;
            vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b 
                = vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
                .at((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__ab));
        }
        vlSelfRef.day44_dual_port_ram_tb__DOT__exp_a 
            = ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wa)
                ? __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__da
                : vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
               .at((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__aa)));
        if (((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wb) 
             & (~ ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wa) 
                   & ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__aa) 
                      == (IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__ab)))))) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__ab)) 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__db;
        }
        if (__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__wa) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__0__aa)) 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__0__da;
        }
        day44_dual_port_ram_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day44_dual_port_ram_tb__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.day44_dual_port_ram_tb__DOT__chk = 1U;
    day44_dual_port_ram_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, day44_dual_port_ram_tb__DOT__unnamedblk2__DOT__i)) {
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__db = 0U;
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__da 
            = VL_RANDOM_I();
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__ab 
            = (0x000000ffU & ((IData)(0xffU) - day44_dual_port_ram_tb__DOT__unnamedblk2__DOT__i));
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__aa 
            = (0x000000ffU & day44_dual_port_ram_tb__DOT__unnamedblk2__DOT__i);
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wb = 0U;
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wa = 1U;
        Vday44_dual_port_ram_tb___024root____VbeforeTrig_h1b6fe5ab__0(vlSelf, 
                                                                      "@(negedge day44_dual_port_ram_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1b6fe5ab__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day44_dual_port_ram_tb.clk)", 
                                                             "tb/day44_dual_port_ram_tb.sv", 
                                                             22);
        if (vlSelfRef.day44_dual_port_ram_tb__DOT__chk) {
            if (VL_UNLIKELY(((vlSelfRef.day44_dual_port_ram_tb__DOT__dout_a 
                              != vlSelfRef.day44_dual_port_ram_tb__DOT__exp_a)))) {
                vlSelfRef.day44_dual_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] port A output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY(((vlSelfRef.day44_dual_port_ram_tb__DOT__dout_b 
                              != vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b)))) {
                vlSelfRef.day44_dual_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] port B output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        vlSelfRef.day44_dual_port_ram_tb__DOT__we_a 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wa;
        if (__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wb) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__we_b = 1U;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__aa;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__ab;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__da;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__db;
            vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__db;
        } else {
            vlSelfRef.day44_dual_port_ram_tb__DOT__we_b = 0U;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__aa;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__ab;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__da;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__db;
            vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b 
                = vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
                .at((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__ab));
        }
        vlSelfRef.day44_dual_port_ram_tb__DOT__exp_a 
            = ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wa)
                ? __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__da
                : vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
               .at((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__aa)));
        if (((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wb) 
             & (~ ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wa) 
                   & ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__aa) 
                      == (IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__ab)))))) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__ab)) 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__db;
        }
        if (__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__wa) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__1__aa)) 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__1__da;
        }
        day44_dual_port_ram_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + day44_dual_port_ram_tb__DOT__unnamedblk2__DOT__i);
    }
    day44_dual_port_ram_tb__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, day44_dual_port_ram_tb__DOT__unnamedblk3__DOT__i)) {
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__db = 0U;
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__da = 0U;
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__ab 
            = (0x000000ffU & day44_dual_port_ram_tb__DOT__unnamedblk3__DOT__i);
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__aa 
            = (0x000000ffU & ((IData)(0xffU) - day44_dual_port_ram_tb__DOT__unnamedblk3__DOT__i));
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wb = 0U;
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wa = 0U;
        Vday44_dual_port_ram_tb___024root____VbeforeTrig_h1b6fe5ab__0(vlSelf, 
                                                                      "@(negedge day44_dual_port_ram_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1b6fe5ab__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day44_dual_port_ram_tb.clk)", 
                                                             "tb/day44_dual_port_ram_tb.sv", 
                                                             22);
        if (vlSelfRef.day44_dual_port_ram_tb__DOT__chk) {
            if (VL_UNLIKELY(((vlSelfRef.day44_dual_port_ram_tb__DOT__dout_a 
                              != vlSelfRef.day44_dual_port_ram_tb__DOT__exp_a)))) {
                vlSelfRef.day44_dual_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] port A output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY(((vlSelfRef.day44_dual_port_ram_tb__DOT__dout_b 
                              != vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b)))) {
                vlSelfRef.day44_dual_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] port B output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        vlSelfRef.day44_dual_port_ram_tb__DOT__we_a 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wa;
        if (__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wb) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__we_b = 1U;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__aa;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__ab;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__da;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__db;
            vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__db;
        } else {
            vlSelfRef.day44_dual_port_ram_tb__DOT__we_b = 0U;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__aa;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__ab;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__da;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__db;
            vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b 
                = vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
                .at((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__ab));
        }
        vlSelfRef.day44_dual_port_ram_tb__DOT__exp_a 
            = ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wa)
                ? __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__da
                : vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
               .at((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__aa)));
        if (((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wb) 
             & (~ ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wa) 
                   & ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__aa) 
                      == (IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__ab)))))) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__ab)) 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__db;
        }
        if (__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__wa) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__2__aa)) 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__2__da;
        }
        day44_dual_port_ram_tb__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + day44_dual_port_ram_tb__DOT__unnamedblk3__DOT__i);
    }
    day44_dual_port_ram_tb__DOT__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000bb8U, day44_dual_port_ram_tb__DOT__unnamedblk4__DOT__i)) {
        vlSelfRef.day44_dual_port_ram_tb__DOT____VlemExpr_0 
            = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
        vlSelfRef.day44_dual_port_ram_tb__DOT____VlemExpr_1 
            = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__db 
            = VL_RANDOM_I();
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__da 
            = VL_RANDOM_I();
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__ab 
            = (0x000000ffU & vlSelfRef.day44_dual_port_ram_tb__DOT____VlemExpr_1);
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__aa 
            = (0x000000ffU & vlSelfRef.day44_dual_port_ram_tb__DOT____VlemExpr_0);
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wb 
            = (1U & VL_RANDOM_I());
        __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wa 
            = (1U & VL_RANDOM_I());
        Vday44_dual_port_ram_tb___024root____VbeforeTrig_h1b6fe5ab__0(vlSelf, 
                                                                      "@(negedge day44_dual_port_ram_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1b6fe5ab__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day44_dual_port_ram_tb.clk)", 
                                                             "tb/day44_dual_port_ram_tb.sv", 
                                                             22);
        if (vlSelfRef.day44_dual_port_ram_tb__DOT__chk) {
            if (VL_UNLIKELY(((vlSelfRef.day44_dual_port_ram_tb__DOT__dout_a 
                              != vlSelfRef.day44_dual_port_ram_tb__DOT__exp_a)))) {
                vlSelfRef.day44_dual_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] port A output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY(((vlSelfRef.day44_dual_port_ram_tb__DOT__dout_b 
                              != vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b)))) {
                vlSelfRef.day44_dual_port_ram_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] port B output (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        vlSelfRef.day44_dual_port_ram_tb__DOT__we_a 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wa;
        if (__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wb) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__we_b = 1U;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__aa;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__ab;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__da;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__db;
            vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__db;
        } else {
            vlSelfRef.day44_dual_port_ram_tb__DOT__we_b = 0U;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__aa;
            vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__ab;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_a 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__da;
            vlSelfRef.day44_dual_port_ram_tb__DOT__din_b 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__db;
            vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b 
                = vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
                .at((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__ab));
        }
        vlSelfRef.day44_dual_port_ram_tb__DOT__exp_a 
            = ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wa)
                ? __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__da
                : vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
               .at((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__aa)));
        if (((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wb) 
             & (~ ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wa) 
                   & ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__aa) 
                      == (IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__ab)))))) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__ab)) 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__db;
        }
        if (__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__wa) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__3__aa)) 
                = __Vtask_day44_dual_port_ram_tb__DOT__cyc__3__da;
        }
        day44_dual_port_ram_tb__DOT__unnamedblk4__DOT__i 
            = ((IData)(1U) + day44_dual_port_ram_tb__DOT__unnamedblk4__DOT__i);
    }
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__db = 0U;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__da = 0U;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__ab = 1U;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__aa = 0U;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wb = 0U;
    __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wa = 0U;
    Vday44_dual_port_ram_tb___024root____VbeforeTrig_h1b6fe5ab__0(vlSelf, 
                                                                  "@(negedge day44_dual_port_ram_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h1b6fe5ab__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge day44_dual_port_ram_tb.clk)", 
                                                         "tb/day44_dual_port_ram_tb.sv", 
                                                         22);
    if (vlSelfRef.day44_dual_port_ram_tb__DOT__chk) {
        if (VL_UNLIKELY(((vlSelfRef.day44_dual_port_ram_tb__DOT__dout_a 
                          != vlSelfRef.day44_dual_port_ram_tb__DOT__exp_a)))) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] port A output (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY(((vlSelfRef.day44_dual_port_ram_tb__DOT__dout_b 
                          != vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b)))) {
            vlSelfRef.day44_dual_port_ram_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] port B output (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
    }
    vlSelfRef.day44_dual_port_ram_tb__DOT__we_a = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wa;
    if (__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wb) {
        vlSelfRef.day44_dual_port_ram_tb__DOT__we_b = 1U;
        vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__aa;
        vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__ab;
        vlSelfRef.day44_dual_port_ram_tb__DOT__din_a 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__da;
        vlSelfRef.day44_dual_port_ram_tb__DOT__din_b 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__db;
        vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__db;
    } else {
        vlSelfRef.day44_dual_port_ram_tb__DOT__we_b = 0U;
        vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__aa;
        vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__ab;
        vlSelfRef.day44_dual_port_ram_tb__DOT__din_a 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__da;
        vlSelfRef.day44_dual_port_ram_tb__DOT__din_b 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__db;
        vlSelfRef.day44_dual_port_ram_tb__DOT__exp_b 
            = vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
            .at((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__ab));
    }
    vlSelfRef.day44_dual_port_ram_tb__DOT__exp_a = 
        ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wa)
          ? __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__da
          : vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
         .at((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__aa)));
    if (((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wb) 
         & (~ ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wa) 
               & ((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__aa) 
                  == (IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__ab)))))) {
        vlSelfRef.day44_dual_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__ab)) 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__db;
    }
    if (__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__wa) {
        vlSelfRef.day44_dual_port_ram_tb__DOT__shadow.atWrite((IData)(__Vtask_day44_dual_port_ram_tb__DOT__cyc__4__aa)) 
            = __Vtask_day44_dual_port_ram_tb__DOT__cyc__4__da;
    }
    VL_WRITEF_NX("  mem[0]=%08h  mem[1]=%08h\n",2, '#',32,vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
                 .at(0U), '#',32,vlSelfRef.day44_dual_port_ram_tb__DOT__shadow
                 .at(1U));
    if ((0U == vlSelfRef.day44_dual_port_ram_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day44_dual_port_ram\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day44_dual_port_ram : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day44_dual_port_ram_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day44_dual_port_ram_tb.sv", 45, "");
    co_return;
}

VlCoroutine Vday44_dual_port_ram_tb___024root___eval_initial__TOP__Vtiming__1(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day44_dual_port_ram_tb.sv", 
                                             12);
        vlSelfRef.day44_dual_port_ram_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT__clk)));
    }
    co_return;
}

bool Vday44_dual_port_ram_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday44_dual_port_ram_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___trigger_anySet__act\n"); );
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

void Vday44_dual_port_ram_tb___024root___nba_sequent__TOP__0(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___nba_sequent__TOP__0\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0;
    __VdlyVal__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0;
    __VdlyDim0__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0;
    __VdlySet__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1;
    __VdlyVal__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1;
    __VdlyDim0__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1;
    __VdlySet__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1 = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_1_1)) 
                                       | (vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__dout_a 
                                          == vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_2_1))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day44_dual_port_ram_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_a_write\n",3, 'M',vlSymsp->name(),"day44_dual_port_ram_tb.a_a_write", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day44_dual_port_ram_tb.sv", 15, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_4_1)) 
                                       | (vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__dout_b 
                                          == vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_5_1))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day44_dual_port_ram_tb.sv:16: Assertion failed in %m: [SVA FAIL] a_b_write\n",3, 'M',vlSymsp->name(),"day44_dual_port_ram_tb.a_b_write", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day44_dual_port_ram_tb.sv", 16, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_11_1)) 
                                       | (vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__dout_b 
                                          == vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_12_1))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day44_dual_port_ram_tb.sv:19: Assertion failed in %m: [SVA FAIL] a_stable_b\n",3, 'M',vlSymsp->name(),"day44_dual_port_ram_tb.a_stable_b", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day44_dual_port_ram_tb.sv", 19, "");
            }
        }
    }
    __VdlySet__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0 = 0U;
    __VdlySet__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1 = 0U;
    if (vlSelfRef.day44_dual_port_ram_tb__DOT__we_a) {
        __VdlyVal__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0 
            = vlSelfRef.day44_dual_port_ram_tb__DOT__din_a;
        __VdlyDim0__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0 
            = vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a;
        __VdlySet__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0 = 1U;
        vlSelfRef.day44_dual_port_ram_tb__DOT__dout_a 
            = vlSelfRef.day44_dual_port_ram_tb__DOT__din_a;
    } else {
        vlSelfRef.day44_dual_port_ram_tb__DOT__dout_a 
            = vlSelfRef.day44_dual_port_ram_tb__DOT__dut__DOT__mem
            [vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a];
    }
    if (vlSelfRef.day44_dual_port_ram_tb__DOT__we_b) {
        if ((1U & (~ ((IData)(vlSelfRef.day44_dual_port_ram_tb__DOT__we_a) 
                      & ((IData)(vlSelfRef.day44_dual_port_ram_tb__DOT__addr_a) 
                         == (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b)))))) {
            __VdlyVal__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1 
                = vlSelfRef.day44_dual_port_ram_tb__DOT__din_b;
            __VdlyDim0__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1 
                = vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b;
            __VdlySet__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1 = 1U;
        }
        vlSelfRef.day44_dual_port_ram_tb__DOT__dout_b 
            = vlSelfRef.day44_dual_port_ram_tb__DOT__din_b;
    } else {
        vlSelfRef.day44_dual_port_ram_tb__DOT__dout_b 
            = vlSelfRef.day44_dual_port_ram_tb__DOT__dut__DOT__mem
            [vlSelfRef.day44_dual_port_ram_tb__DOT__addr_b];
    }
    vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__din_a;
    vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_1_1 
        = vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__we_a;
    vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_5_1 
        = vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__din_b;
    vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_4_1 
        = vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__we_b;
    vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_12_1 
        = vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__dout_b;
    vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_11_1 
        = (((((((~ (IData)(vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__we_a)) 
                & (~ (IData)(vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__we_b))) 
               & (~ (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_7_1))) 
              & (~ (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_8_1))) 
             & ((IData)(vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__addr_b) 
                == (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_9_1))) 
            & ((IData)(vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__addr_a) 
               == (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_10_1))) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__addr_a) 
              != (IData)(vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__addr_b)));
    if (__VdlySet__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0) {
        vlSelfRef.day44_dual_port_ram_tb__DOT__dut__DOT__mem[__VdlyDim0__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0] 
            = __VdlyVal__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v0;
    }
    if (__VdlySet__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1) {
        vlSelfRef.day44_dual_port_ram_tb__DOT__dut__DOT__mem[__VdlyDim0__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1] 
            = __VdlyVal__day44_dual_port_ram_tb__DOT__dut__DOT__mem__v1;
    }
    vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_9_1 
        = vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__addr_b;
    vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_10_1 
        = vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__addr_a;
    vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_7_1 
        = vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__we_a;
    vlSelfRef.day44_dual_port_ram_tb__DOT___Vpast_8_1 
        = vlSelfRef.__Vsampled_TOP__day44_dual_port_ram_tb__DOT__we_b;
}

void Vday44_dual_port_ram_tb___024root___timing_ready(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___timing_ready\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1b6fe5ab__0.ready("@(negedge day44_dual_port_ram_tb.clk)");
    }
}

void Vday44_dual_port_ram_tb___024root___timing_resume(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___timing_resume\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1b6fe5ab__0.moveToResumeQueue(
                                                          "@(negedge day44_dual_port_ram_tb.clk)");
    vlSelfRef.__VtrigSched_h1b6fe5ab__0.resume("@(negedge day44_dual_port_ram_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday44_dual_port_ram_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday44_dual_port_ram_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday44_dual_port_ram_tb___024root____VbeforeTrig_h1b6fe5ab__0(Vday44_dual_port_ram_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root____VbeforeTrig_h1b6fe5ab__0\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day44_dual_port_ram_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day44_dual_port_ram_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day44_dual_port_ram_tb__DOT__clk__0 
        = vlSelfRef.day44_dual_port_ram_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1b6fe5ab__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1b6fe5ab__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1b6fe5ab__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1b6fe5ab__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1b6fe5ab__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday44_dual_port_ram_tb___024root___eval_debug_assertions(Vday44_dual_port_ram_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday44_dual_port_ram_tb___024root___eval_debug_assertions\n"); );
    Vday44_dual_port_ram_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
