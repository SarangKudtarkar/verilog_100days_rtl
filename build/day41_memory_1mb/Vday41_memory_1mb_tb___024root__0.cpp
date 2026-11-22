// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday41_memory_1mb_tb.h for the primary calling header

#include "Vday41_memory_1mb_tb__pch.h"

VlCoroutine Vday41_memory_1mb_tb___024root___eval_initial__TOP__Vtiming__0(Vday41_memory_1mb_tb___024root* vlSelf);
VlCoroutine Vday41_memory_1mb_tb___024root___eval_initial__TOP__Vtiming__1(Vday41_memory_1mb_tb___024root* vlSelf);

void Vday41_memory_1mb_tb___024root___eval_initial(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_initial\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday41_memory_1mb_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday41_memory_1mb_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vday41_memory_1mb_tb___024root___eval_sample(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_sample\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day41_memory_1mb_tb__DOT__dout 
        = vlSelfRef.day41_memory_1mb_tb__DOT__dout;
    vlSelfRef.__Vsampled_TOP__day41_memory_1mb_tb__DOT__we 
        = vlSelfRef.day41_memory_1mb_tb__DOT__we;
    vlSelfRef.__Vsampled_TOP__day41_memory_1mb_tb__DOT__addr 
        = vlSelfRef.day41_memory_1mb_tb__DOT__addr;
    vlSelfRef.__Vsampled_TOP__day41_memory_1mb_tb__DOT__din 
        = vlSelfRef.day41_memory_1mb_tb__DOT__din;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday41_memory_1mb_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday41_memory_1mb_tb___024root___eval_ico(Vday41_memory_1mb_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_ico\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday41_memory_1mb_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday41_memory_1mb_tb___024root___timing_ready(Vday41_memory_1mb_tb___024root* vlSelf);
void Vday41_memory_1mb_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday41_memory_1mb_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday41_memory_1mb_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday41_memory_1mb_tb___024root___timing_resume(Vday41_memory_1mb_tb___024root* vlSelf);

bool Vday41_memory_1mb_tb___024root___eval_act(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_act\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day41_memory_1mb_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day41_memory_1mb_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day41_memory_1mb_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day41_memory_1mb_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day41_memory_1mb_tb__DOT__clk__0 
            = vlSelfRef.day41_memory_1mb_tb__DOT__clk;
    }
    Vday41_memory_1mb_tb___024root___timing_ready(vlSelf);
    Vday41_memory_1mb_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday41_memory_1mb_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday41_memory_1mb_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday41_memory_1mb_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday41_memory_1mb_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday41_memory_1mb_tb___024root___eval_inact(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_inact\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day41_memory_1mb_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday41_memory_1mb_tb___024root___nba_sequent__TOP__0(Vday41_memory_1mb_tb___024root* vlSelf);
void Vday41_memory_1mb_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday41_memory_1mb_tb___024root___eval_nba(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_nba\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday41_memory_1mb_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday41_memory_1mb_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vday41_memory_1mb_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday41_memory_1mb_tb___024root___eval_obs(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_obs\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday41_memory_1mb_tb___024root___eval_react(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_react\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday41_memory_1mb_tb___024root___eval_postponed(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_postponed\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0(Vday41_memory_1mb_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday41_memory_1mb_tb___024root___eval_initial__TOP__Vtiming__0(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day41_memory_1mb_tb__DOT__unnamedblk1__DOT__i;
    day41_memory_1mb_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ day41_memory_1mb_tb__DOT__unnamedblk2__DOT__i;
    day41_memory_1mb_tb__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ day41_memory_1mb_tb__DOT__unnamedblk3__DOT__i;
    day41_memory_1mb_tb__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ day41_memory_1mb_tb__DOT__unnamedblk4__DOT__i;
    day41_memory_1mb_tb__DOT__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ day41_memory_1mb_tb__DOT__unnamedblk5__DOT__i;
    day41_memory_1mb_tb__DOT__unnamedblk5__DOT__i = 0;
    IData/*17:0*/ __Vtask_day41_memory_1mb_tb__DOT__mem_write__0__a;
    __Vtask_day41_memory_1mb_tb__DOT__mem_write__0__a = 0;
    IData/*31:0*/ __Vtask_day41_memory_1mb_tb__DOT__mem_write__0__v;
    __Vtask_day41_memory_1mb_tb__DOT__mem_write__0__v = 0;
    IData/*17:0*/ __Vtask_day41_memory_1mb_tb__DOT__mem_read__1__a;
    __Vtask_day41_memory_1mb_tb__DOT__mem_read__1__a = 0;
    IData/*17:0*/ __Vtask_day41_memory_1mb_tb__DOT__mem_write__2__a;
    __Vtask_day41_memory_1mb_tb__DOT__mem_write__2__a = 0;
    IData/*31:0*/ __Vtask_day41_memory_1mb_tb__DOT__mem_write__2__v;
    __Vtask_day41_memory_1mb_tb__DOT__mem_write__2__v = 0;
    IData/*17:0*/ __Vtask_day41_memory_1mb_tb__DOT__mem_read__3__a;
    __Vtask_day41_memory_1mb_tb__DOT__mem_read__3__a = 0;
    // Body
    VL_WRITEF_NX("Memory size = 262144 words x 32 bit = 1024 KB\n",0);
    vlSelfRef.day41_memory_1mb_tb__DOT__list[0U] = 0U;
    vlSelfRef.day41_memory_1mb_tb__DOT__list[1U] = 0x0003ffffU;
    day41_memory_1mb_tb__DOT__unnamedblk1__DOT__i = 2U;
    while (VL_GTS_III(32, 0x00000080U, day41_memory_1mb_tb__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.day41_memory_1mb_tb__DOT__list[(0x0000007fU 
                                                  & day41_memory_1mb_tb__DOT__unnamedblk1__DOT__i)] 
            = (0x0003ffffU & VL_RANDOM_I());
        day41_memory_1mb_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + day41_memory_1mb_tb__DOT__unnamedblk1__DOT__i);
    }
    day41_memory_1mb_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, day41_memory_1mb_tb__DOT__unnamedblk2__DOT__i)) {
        __Vtask_day41_memory_1mb_tb__DOT__mem_write__0__v 
            = VL_RANDOM_I();
        __Vtask_day41_memory_1mb_tb__DOT__mem_write__0__a 
            = vlSelfRef.day41_memory_1mb_tb__DOT__list
            [(0x0000007fU & day41_memory_1mb_tb__DOT__unnamedblk2__DOT__i)];
        Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0(vlSelf, 
                                                                   "@(negedge day41_memory_1mb_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hce30d683__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day41_memory_1mb_tb.clk)", 
                                                             "tb/day41_memory_1mb_tb.sv", 
                                                             18);
        vlSelfRef.day41_memory_1mb_tb__DOT__we = 1U;
        vlSelfRef.day41_memory_1mb_tb__DOT__addr = __Vtask_day41_memory_1mb_tb__DOT__mem_write__0__a;
        vlSelfRef.day41_memory_1mb_tb__DOT__din = __Vtask_day41_memory_1mb_tb__DOT__mem_write__0__v;
        Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0(vlSelf, 
                                                                   "@(negedge day41_memory_1mb_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hce30d683__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day41_memory_1mb_tb.clk)", 
                                                             "tb/day41_memory_1mb_tb.sv", 
                                                             19);
        vlSelfRef.day41_memory_1mb_tb__DOT__we = 0U;
        vlSelfRef.day41_memory_1mb_tb__DOT__shadow.atWrite(__Vtask_day41_memory_1mb_tb__DOT__mem_write__0__a) 
            = __Vtask_day41_memory_1mb_tb__DOT__mem_write__0__v;
        day41_memory_1mb_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + day41_memory_1mb_tb__DOT__unnamedblk2__DOT__i);
    }
    day41_memory_1mb_tb__DOT__unnamedblk3__DOT__i = 0x0000007fU;
    while (VL_LTES_III(32, 0U, day41_memory_1mb_tb__DOT__unnamedblk3__DOT__i)) {
        __Vtask_day41_memory_1mb_tb__DOT__mem_read__1__a 
            = vlSelfRef.day41_memory_1mb_tb__DOT__list
            [(0x0000007fU & day41_memory_1mb_tb__DOT__unnamedblk3__DOT__i)];
        Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0(vlSelf, 
                                                                   "@(negedge day41_memory_1mb_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hce30d683__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day41_memory_1mb_tb.clk)", 
                                                             "tb/day41_memory_1mb_tb.sv", 
                                                             24);
        vlSelfRef.day41_memory_1mb_tb__DOT__we = 0U;
        vlSelfRef.day41_memory_1mb_tb__DOT__addr = __Vtask_day41_memory_1mb_tb__DOT__mem_read__1__a;
        Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0(vlSelf, 
                                                                   "@(negedge day41_memory_1mb_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hce30d683__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day41_memory_1mb_tb.clk)", 
                                                             "tb/day41_memory_1mb_tb.sv", 
                                                             25);
        if (VL_UNLIKELY(((vlSelfRef.day41_memory_1mb_tb__DOT__dout 
                          != vlSelfRef.day41_memory_1mb_tb__DOT__shadow
                          .at(__Vtask_day41_memory_1mb_tb__DOT__mem_read__1__a))))) {
            vlSelfRef.day41_memory_1mb_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day41_memory_1mb_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] memory read-back (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        day41_memory_1mb_tb__DOT__unnamedblk3__DOT__i 
            = (day41_memory_1mb_tb__DOT__unnamedblk3__DOT__i 
               - (IData)(1U));
    }
    VL_WRITEF_NX("  mem[0x00000]=%08h  mem[0x3FFFF]=%08h\n",2
                 , '#',32,vlSelfRef.day41_memory_1mb_tb__DOT__shadow
                 .at(0U), '#',32,vlSelfRef.day41_memory_1mb_tb__DOT__shadow
                 .at(0x0003ffffU));
    day41_memory_1mb_tb__DOT__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, day41_memory_1mb_tb__DOT__unnamedblk4__DOT__i)) {
        __Vtask_day41_memory_1mb_tb__DOT__mem_write__2__v 
            = ((IData)(0xdead0000U) + day41_memory_1mb_tb__DOT__unnamedblk4__DOT__i);
        __Vtask_day41_memory_1mb_tb__DOT__mem_write__2__a 
            = vlSelfRef.day41_memory_1mb_tb__DOT__list
            [(0x0000007fU & day41_memory_1mb_tb__DOT__unnamedblk4__DOT__i)];
        Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0(vlSelf, 
                                                                   "@(negedge day41_memory_1mb_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hce30d683__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day41_memory_1mb_tb.clk)", 
                                                             "tb/day41_memory_1mb_tb.sv", 
                                                             18);
        vlSelfRef.day41_memory_1mb_tb__DOT__we = 1U;
        vlSelfRef.day41_memory_1mb_tb__DOT__addr = __Vtask_day41_memory_1mb_tb__DOT__mem_write__2__a;
        vlSelfRef.day41_memory_1mb_tb__DOT__din = __Vtask_day41_memory_1mb_tb__DOT__mem_write__2__v;
        Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0(vlSelf, 
                                                                   "@(negedge day41_memory_1mb_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hce30d683__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day41_memory_1mb_tb.clk)", 
                                                             "tb/day41_memory_1mb_tb.sv", 
                                                             19);
        vlSelfRef.day41_memory_1mb_tb__DOT__we = 0U;
        vlSelfRef.day41_memory_1mb_tb__DOT__shadow.atWrite(__Vtask_day41_memory_1mb_tb__DOT__mem_write__2__a) 
            = __Vtask_day41_memory_1mb_tb__DOT__mem_write__2__v;
        day41_memory_1mb_tb__DOT__unnamedblk4__DOT__i 
            = ((IData)(1U) + day41_memory_1mb_tb__DOT__unnamedblk4__DOT__i);
    }
    day41_memory_1mb_tb__DOT__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, day41_memory_1mb_tb__DOT__unnamedblk5__DOT__i)) {
        __Vtask_day41_memory_1mb_tb__DOT__mem_read__3__a 
            = vlSelfRef.day41_memory_1mb_tb__DOT__list
            [(0x0000007fU & day41_memory_1mb_tb__DOT__unnamedblk5__DOT__i)];
        Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0(vlSelf, 
                                                                   "@(negedge day41_memory_1mb_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hce30d683__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day41_memory_1mb_tb.clk)", 
                                                             "tb/day41_memory_1mb_tb.sv", 
                                                             24);
        vlSelfRef.day41_memory_1mb_tb__DOT__we = 0U;
        vlSelfRef.day41_memory_1mb_tb__DOT__addr = __Vtask_day41_memory_1mb_tb__DOT__mem_read__3__a;
        Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0(vlSelf, 
                                                                   "@(negedge day41_memory_1mb_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hce30d683__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day41_memory_1mb_tb.clk)", 
                                                             "tb/day41_memory_1mb_tb.sv", 
                                                             25);
        if (VL_UNLIKELY(((vlSelfRef.day41_memory_1mb_tb__DOT__dout 
                          != vlSelfRef.day41_memory_1mb_tb__DOT__shadow
                          .at(__Vtask_day41_memory_1mb_tb__DOT__mem_read__3__a))))) {
            vlSelfRef.day41_memory_1mb_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day41_memory_1mb_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] memory read-back (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        day41_memory_1mb_tb__DOT__unnamedblk5__DOT__i 
            = ((IData)(1U) + day41_memory_1mb_tb__DOT__unnamedblk5__DOT__i);
    }
    if ((0U == vlSelfRef.day41_memory_1mb_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day41_memory_1mb\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day41_memory_1mb : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day41_memory_1mb_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day41_memory_1mb_tb.sv", 40, "");
    co_return;
}

VlCoroutine Vday41_memory_1mb_tb___024root___eval_initial__TOP__Vtiming__1(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day41_memory_1mb_tb.sv", 
                                             10);
        vlSelfRef.day41_memory_1mb_tb__DOT__clk = (1U 
                                                   & (~ (IData)(vlSelfRef.day41_memory_1mb_tb__DOT__clk)));
    }
    co_return;
}

bool Vday41_memory_1mb_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday41_memory_1mb_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___trigger_anySet__act\n"); );
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

void Vday41_memory_1mb_tb___024root___nba_sequent__TOP__0(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___nba_sequent__TOP__0\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0;
    __VdlyVal__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0 = 0;
    IData/*17:0*/ __VdlyDim0__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0;
    __VdlyDim0__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0;
    __VdlySet__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0 = 0;
    // Body
    __VdlySet__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0 = 0U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day41_memory_1mb_tb__DOT___Vpast_3_1)) 
                                       | (vlSelfRef.__Vsampled_TOP__day41_memory_1mb_tb__DOT__dout 
                                          == vlSelfRef.day41_memory_1mb_tb__DOT___Vpast_4_2))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day41_memory_1mb_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_rw\n",3, 'M',vlSymsp->name(),"day41_memory_1mb_tb.a_rw", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day41_memory_1mb_tb.sv", 15, "");
            }
        }
    }
    if (vlSelfRef.day41_memory_1mb_tb__DOT__we) {
        __VdlyVal__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0 
            = vlSelfRef.day41_memory_1mb_tb__DOT__din;
        __VdlyDim0__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0 
            = vlSelfRef.day41_memory_1mb_tb__DOT__addr;
        __VdlySet__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0 = 1U;
    }
    vlSelfRef.day41_memory_1mb_tb__DOT__dout = vlSelfRef.day41_memory_1mb_tb__DOT__dut__DOT__mem
        [vlSelfRef.day41_memory_1mb_tb__DOT__addr];
    vlSelfRef.day41_memory_1mb_tb__DOT___Vpast_4_2 
        = vlSelfRef.day41_memory_1mb_tb__DOT___Vpast_4_1;
    vlSelfRef.day41_memory_1mb_tb__DOT___Vpast_3_1 
        = (((~ (IData)(vlSelfRef.__Vsampled_TOP__day41_memory_1mb_tb__DOT__we)) 
            & (IData)(vlSelfRef.day41_memory_1mb_tb__DOT___Vpast_1_1)) 
           & (vlSelfRef.__Vsampled_TOP__day41_memory_1mb_tb__DOT__addr 
              == vlSelfRef.day41_memory_1mb_tb__DOT___Vpast_2_1));
    if (__VdlySet__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0) {
        vlSelfRef.day41_memory_1mb_tb__DOT__dut__DOT__mem[__VdlyDim0__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0] 
            = __VdlyVal__day41_memory_1mb_tb__DOT__dut__DOT__mem__v0;
    }
    vlSelfRef.day41_memory_1mb_tb__DOT___Vpast_4_1 
        = vlSelfRef.__Vsampled_TOP__day41_memory_1mb_tb__DOT__din;
    vlSelfRef.day41_memory_1mb_tb__DOT___Vpast_1_1 
        = vlSelfRef.__Vsampled_TOP__day41_memory_1mb_tb__DOT__we;
    vlSelfRef.day41_memory_1mb_tb__DOT___Vpast_2_1 
        = vlSelfRef.__Vsampled_TOP__day41_memory_1mb_tb__DOT__addr;
}

void Vday41_memory_1mb_tb___024root___timing_ready(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___timing_ready\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hce30d683__0.ready("@(negedge day41_memory_1mb_tb.clk)");
    }
}

void Vday41_memory_1mb_tb___024root___timing_resume(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___timing_resume\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hce30d683__0.moveToResumeQueue(
                                                          "@(negedge day41_memory_1mb_tb.clk)");
    vlSelfRef.__VtrigSched_hce30d683__0.resume("@(negedge day41_memory_1mb_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday41_memory_1mb_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday41_memory_1mb_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0(Vday41_memory_1mb_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root____VbeforeTrig_hce30d683__0\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.day41_memory_1mb_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day41_memory_1mb_tb__DOT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day41_memory_1mb_tb__DOT__clk__0 
        = vlSelfRef.day41_memory_1mb_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hce30d683__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hce30d683__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hce30d683__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hce30d683__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hce30d683__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hce30d683__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hce30d683__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hce30d683__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday41_memory_1mb_tb___024root___eval_debug_assertions(Vday41_memory_1mb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday41_memory_1mb_tb___024root___eval_debug_assertions\n"); );
    Vday41_memory_1mb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
