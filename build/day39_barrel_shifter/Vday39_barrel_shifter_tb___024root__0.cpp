// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday39_barrel_shifter_tb.h for the primary calling header

#include "Vday39_barrel_shifter_tb__pch.h"

VlCoroutine Vday39_barrel_shifter_tb___024root___eval_initial__TOP__Vtiming__0(Vday39_barrel_shifter_tb___024root* vlSelf);
VlCoroutine Vday39_barrel_shifter_tb___024root___eval_initial__TOP__Vtiming__1(Vday39_barrel_shifter_tb___024root* vlSelf);

void Vday39_barrel_shifter_tb___024root___eval_initial(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_initial\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday39_barrel_shifter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday39_barrel_shifter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday39_barrel_shifter_tb___024root___eval_sample(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_sample\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__shamt 
        = vlSelfRef.day39_barrel_shifter_tb__DOT__shamt;
    vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__dout 
        = vlSelfRef.day39_barrel_shifter_tb__DOT__dout;
    vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__din 
        = vlSelfRef.day39_barrel_shifter_tb__DOT__din;
    vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__mode 
        = vlSelfRef.day39_barrel_shifter_tb__DOT__mode;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday39_barrel_shifter_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday39_barrel_shifter_tb___024root___eval_ico(Vday39_barrel_shifter_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_ico\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday39_barrel_shifter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday39_barrel_shifter_tb___024root___timing_ready(Vday39_barrel_shifter_tb___024root* vlSelf);
void Vday39_barrel_shifter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday39_barrel_shifter_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday39_barrel_shifter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday39_barrel_shifter_tb___024root___timing_resume(Vday39_barrel_shifter_tb___024root* vlSelf);
void Vday39_barrel_shifter_tb___024root___act_comb__TOP__0(Vday39_barrel_shifter_tb___024root* vlSelf);

bool Vday39_barrel_shifter_tb___024root___eval_act(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_act\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day39_barrel_shifter_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day39_barrel_shifter_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day39_barrel_shifter_tb__DOT__clk__0 
            = vlSelfRef.day39_barrel_shifter_tb__DOT__clk;
    }
    Vday39_barrel_shifter_tb___024root___timing_ready(vlSelf);
    Vday39_barrel_shifter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday39_barrel_shifter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday39_barrel_shifter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday39_barrel_shifter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday39_barrel_shifter_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vday39_barrel_shifter_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vday39_barrel_shifter_tb___024root___eval_inact(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_inact\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day39_barrel_shifter_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday39_barrel_shifter_tb___024root___nba_sequent__TOP__0(Vday39_barrel_shifter_tb___024root* vlSelf);
void Vday39_barrel_shifter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday39_barrel_shifter_tb___024root___eval_nba(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_nba\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday39_barrel_shifter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday39_barrel_shifter_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday39_barrel_shifter_tb___024root___act_comb__TOP__0(vlSelf);
            }
        }
        Vday39_barrel_shifter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday39_barrel_shifter_tb___024root___eval_obs(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_obs\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday39_barrel_shifter_tb___024root___eval_react(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_react\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday39_barrel_shifter_tb___024root___eval_postponed(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_postponed\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday39_barrel_shifter_tb___024root____VbeforeTrig_h604e20c9__0(Vday39_barrel_shifter_tb___024root* vlSelf, const char* __VeventDescription);
void Vday39_barrel_shifter_tb___024root____VbeforeTrig_h604e210a__0(Vday39_barrel_shifter_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday39_barrel_shifter_tb___024root___eval_initial__TOP__Vtiming__0(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day39_barrel_shifter_tb__DOT__unnamedblk1__DOT__i;
    day39_barrel_shifter_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ day39_barrel_shifter_tb__DOT__unnamedblk2__DOT__m;
    day39_barrel_shifter_tb__DOT__unnamedblk2__DOT__m = 0;
    CData/*7:0*/ __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__v;
    __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__v = 0;
    IData/*31:0*/ __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__s;
    __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__s = 0;
    CData/*1:0*/ __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__m;
    __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__m = 0;
    IData/*31:0*/ __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__w;
    __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__w = 0;
    // Body
    VL_WRITEF_NX("Console results (din = 8'b10110001):\n",0);
    day39_barrel_shifter_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00002000U, day39_barrel_shifter_tb__DOT__unnamedblk1__DOT__i)) {
        Vday39_barrel_shifter_tb___024root____VbeforeTrig_h604e20c9__0(vlSelf, 
                                                                       "@(negedge day39_barrel_shifter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h604e20c9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day39_barrel_shifter_tb.clk)", 
                                                             "tb/day39_barrel_shifter_tb.sv", 
                                                             33);
        vlSelfRef.day39_barrel_shifter_tb__DOT__mode 
            = (3U & (day39_barrel_shifter_tb__DOT__unnamedblk1__DOT__i 
                     >> 0x0000000bU));
        vlSelfRef.day39_barrel_shifter_tb__DOT__shamt 
            = (7U & (day39_barrel_shifter_tb__DOT__unnamedblk1__DOT__i 
                     >> 8U));
        vlSelfRef.day39_barrel_shifter_tb__DOT__din 
            = (0x000000ffU & day39_barrel_shifter_tb__DOT__unnamedblk1__DOT__i);
        Vday39_barrel_shifter_tb___024root____VbeforeTrig_h604e210a__0(vlSelf, 
                                                                       "@(posedge day39_barrel_shifter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h604e210a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day39_barrel_shifter_tb.clk)", 
                                                             "tb/day39_barrel_shifter_tb.sv", 
                                                             34);
        __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__m 
            = vlSelfRef.day39_barrel_shifter_tb__DOT__mode;
        __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__s 
            = vlSelfRef.day39_barrel_shifter_tb__DOT__shamt;
        __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__v 
            = vlSelfRef.day39_barrel_shifter_tb__DOT__din;
        vlSelfRef.day39_barrel_shifter_tb__DOT____VlemCall_0__ref_shift = 0;
        __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__w = 0;
        __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__w 
            = __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__v;
        vlSelfRef.day39_barrel_shifter_tb__DOT____VlemCall_0__ref_shift 
            = (0x000000ffU & ((0U == (IData)(__Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__m))
                               ? VL_SHIFTL_III(8,32,32, __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__w, __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__s)
                               : ((1U == (IData)(__Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__m))
                                   ? VL_SHIFTR_III(8,32,32, __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__w, __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__s)
                                   : ((2U == (IData)(__Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__m))
                                       ? (VL_SHIFTL_III(8,32,32, __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__w, __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__s) 
                                          | VL_SHIFTR_III(8,32,32, __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__w, 
                                                          ((IData)(8U) 
                                                           - __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__s)))
                                       : (VL_SHIFTR_III(8,32,32, __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__w, __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__s) 
                                          | VL_SHIFTL_III(8,32,32, __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__w, 
                                                          ((IData)(8U) 
                                                           - __Vfunc_day39_barrel_shifter_tb__DOT__ref_shift__0__s)))))));
        if (VL_UNLIKELY((((IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__dout) 
                          != (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT____VlemCall_0__ref_shift))))) {
            vlSelfRef.day39_barrel_shifter_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day39_barrel_shifter_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] barrel shift result (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        day39_barrel_shifter_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day39_barrel_shifter_tb__DOT__unnamedblk1__DOT__i);
    }
    day39_barrel_shifter_tb__DOT__unnamedblk2__DOT__m = 0U;
    while (VL_GTS_III(32, 4U, day39_barrel_shifter_tb__DOT__unnamedblk2__DOT__m)) {
        Vday39_barrel_shifter_tb___024root____VbeforeTrig_h604e20c9__0(vlSelf, 
                                                                       "@(negedge day39_barrel_shifter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h604e20c9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day39_barrel_shifter_tb.clk)", 
                                                             "tb/day39_barrel_shifter_tb.sv", 
                                                             38);
        vlSelfRef.day39_barrel_shifter_tb__DOT__din = 0xb1U;
        vlSelfRef.day39_barrel_shifter_tb__DOT__mode 
            = (3U & day39_barrel_shifter_tb__DOT__unnamedblk2__DOT__m);
        vlSelfRef.day39_barrel_shifter_tb__DOT__shamt = 3U;
        Vday39_barrel_shifter_tb___024root____VbeforeTrig_h604e210a__0(vlSelf, 
                                                                       "@(posedge day39_barrel_shifter_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h604e210a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day39_barrel_shifter_tb.clk)", 
                                                             "tb/day39_barrel_shifter_tb.sv", 
                                                             39);
        VL_WRITEF_NX("  mode=%02b shamt=3 -> %08b\n",2
                     , '#',2,vlSelfRef.day39_barrel_shifter_tb__DOT__mode
                     , '#',8,(IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__dout));
        day39_barrel_shifter_tb__DOT__unnamedblk2__DOT__m 
            = ((IData)(1U) + day39_barrel_shifter_tb__DOT__unnamedblk2__DOT__m);
    }
    if ((0U == vlSelfRef.day39_barrel_shifter_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day39_barrel_shifter\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day39_barrel_shifter : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day39_barrel_shifter_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day39_barrel_shifter_tb.sv", 42, "");
    co_return;
}

VlCoroutine Vday39_barrel_shifter_tb___024root___eval_initial__TOP__Vtiming__1(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day39_barrel_shifter_tb.sv", 
                                             10);
        vlSelfRef.day39_barrel_shifter_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__clk)));
    }
    co_return;
}

bool Vday39_barrel_shifter_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday39_barrel_shifter_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___trigger_anySet__act\n"); );
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

void Vday39_barrel_shifter_tb___024root___act_comb__TOP__0(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___act_comb__TOP__0\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_0 = (0x000000ffU & 
                                      ((1U & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__shamt))
                                        ? ((2U & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__mode))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__mode))
                                                ? (
                                                   ((IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__din) 
                                                    >> 1U) 
                                                   | ((IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__din) 
                                                      << 7U))
                                                : (
                                                   ((IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__din) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__din) 
                                                      >> 7U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__mode))
                                                ? ((IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__din) 
                                                   >> 1U)
                                                : ((IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__din) 
                                                   << 1U)))
                                        : (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__din)));
    __VdfgRegularize_h6e95ff9d_0_1 = (0x000000ffU & 
                                      ((2U & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__shamt))
                                        ? ((2U & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__mode))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__mode))
                                                ? (
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                                    >> 2U) 
                                                   | ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                                      << 6U))
                                                : (
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                                    << 2U) 
                                                   | ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                                      >> 6U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__mode))
                                                ? ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                                   >> 2U)
                                                : ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
                                                   << 2U)))
                                        : (IData)(__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.day39_barrel_shifter_tb__DOT__dout = 
        (0x000000ffU & ((4U & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__shamt))
                         ? ((2U & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__mode))
                             ? (((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
                                 >> 4U) | ((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
                                           << 4U)) : 
                            ((1U & (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__mode))
                              ? ((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
                                 >> 4U) : ((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
                                           << 4U)))
                         : (IData)(__VdfgRegularize_h6e95ff9d_0_1)));
}

void Vday39_barrel_shifter_tb___024root___nba_sequent__TOP__0(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___nba_sequent__TOP__0\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((0U != (IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__shamt)) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__dout) 
                                          == (IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__din)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day39_barrel_shifter_tb.sv:25: Assertion failed in %m: [SVA FAIL] a_zero_shift\n",3, 'M',vlSymsp->name(),"day39_barrel_shifter_tb.a_zero_shift", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day39_barrel_shifter_tb.sv", 25, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__mode) 
                                           >> 1U)) 
                                       | (VL_COUNTONES_I((IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__dout)) 
                                          == VL_COUNTONES_I((IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__din))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day39_barrel_shifter_tb.sv:26: Assertion failed in %m: [SVA FAIL] a_rot_pop\n",3, 'M',vlSymsp->name(),"day39_barrel_shifter_tb.a_rot_pop", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day39_barrel_shifter_tb.sv", 26, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((0U == (IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__mode)) 
                                           & (1U == (IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__shamt)))) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__dout) 
                                          == (0x000000feU 
                                              & ((IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__din) 
                                                 << 1U))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day39_barrel_shifter_tb.sv:27: Assertion failed in %m: [SVA FAIL] a_sll_msb\n",3, 'M',vlSymsp->name(),"day39_barrel_shifter_tb.a_sll_msb", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day39_barrel_shifter_tb.sv", 27, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ ((2U == (IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__mode)) 
                                           & (1U == (IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__shamt)))) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__dout) 
                                          == ((0x000000feU 
                                               & ((IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__din) 
                                                  << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__Vsampled_TOP__day39_barrel_shifter_tb__DOT__din) 
                                                    >> 7U)))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day39_barrel_shifter_tb.sv:28: Assertion failed in %m: [SVA FAIL] a_rol_1\n",3, 'M',vlSymsp->name(),"day39_barrel_shifter_tb.a_rol_1", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day39_barrel_shifter_tb.sv", 28, "");
            }
        }
    }
}

void Vday39_barrel_shifter_tb___024root___timing_ready(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___timing_ready\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h604e20c9__0.ready("@(negedge day39_barrel_shifter_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h604e210a__0.ready("@(posedge day39_barrel_shifter_tb.clk)");
    }
}

void Vday39_barrel_shifter_tb___024root___timing_resume(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___timing_resume\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h604e20c9__0.moveToResumeQueue(
                                                          "@(negedge day39_barrel_shifter_tb.clk)");
    vlSelfRef.__VtrigSched_h604e210a__0.moveToResumeQueue(
                                                          "@(posedge day39_barrel_shifter_tb.clk)");
    vlSelfRef.__VtrigSched_h604e20c9__0.resume("@(negedge day39_barrel_shifter_tb.clk)");
    vlSelfRef.__VtrigSched_h604e210a__0.resume("@(posedge day39_barrel_shifter_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday39_barrel_shifter_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday39_barrel_shifter_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday39_barrel_shifter_tb___024root____VbeforeTrig_h604e20c9__0(Vday39_barrel_shifter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root____VbeforeTrig_h604e20c9__0\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day39_barrel_shifter_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day39_barrel_shifter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day39_barrel_shifter_tb__DOT__clk__0 
        = vlSelfRef.day39_barrel_shifter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h604e210a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h604e210a__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h604e20c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h604e20c9__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday39_barrel_shifter_tb___024root____VbeforeTrig_h604e210a__0(Vday39_barrel_shifter_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root____VbeforeTrig_h604e210a__0\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day39_barrel_shifter_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day39_barrel_shifter_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day39_barrel_shifter_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day39_barrel_shifter_tb__DOT__clk__0 
        = vlSelfRef.day39_barrel_shifter_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h604e210a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h604e210a__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h604e20c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h604e20c9__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday39_barrel_shifter_tb___024root___eval_debug_assertions(Vday39_barrel_shifter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday39_barrel_shifter_tb___024root___eval_debug_assertions\n"); );
    Vday39_barrel_shifter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
