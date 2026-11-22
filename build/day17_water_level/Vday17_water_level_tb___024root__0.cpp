// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday17_water_level_tb.h for the primary calling header

#include "Vday17_water_level_tb__pch.h"

VlCoroutine Vday17_water_level_tb___024root___eval_initial__TOP__Vtiming__0(Vday17_water_level_tb___024root* vlSelf);
VlCoroutine Vday17_water_level_tb___024root___eval_initial__TOP__Vtiming__1(Vday17_water_level_tb___024root* vlSelf);

void Vday17_water_level_tb___024root___eval_initial(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_initial\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday17_water_level_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday17_water_level_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

extern const VlUnpacked<CData/*2:0*/, 256> Vday17_water_level_tb__ConstPool__TABLE_h0a26a470_0;

void Vday17_water_level_tb___024root___eval_sample(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_sample\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day17_water_level_tb__DOT__sensor 
        = vlSelfRef.day17_water_level_tb__DOT__sensor;
    vlSelfRef.__Vsampled_TOP__TABLE_h0a26a470_0 = Vday17_water_level_tb__ConstPool__TABLE_h0a26a470_0;
    vlSelfRef.__Vsampled_TOP__day17_water_level_tb__DOT__empty 
        = vlSelfRef.day17_water_level_tb__DOT__empty;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday17_water_level_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday17_water_level_tb___024root___eval_ico(Vday17_water_level_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_ico\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday17_water_level_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday17_water_level_tb___024root___timing_ready(Vday17_water_level_tb___024root* vlSelf);
void Vday17_water_level_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday17_water_level_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday17_water_level_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday17_water_level_tb___024root___timing_resume(Vday17_water_level_tb___024root* vlSelf);
extern const VlUnpacked<CData/*0:0*/, 256> Vday17_water_level_tb__ConstPool__TABLE_he2a5b38f_0;

bool Vday17_water_level_tb___024root___eval_act(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_act\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.day17_water_level_tb__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day17_water_level_tb__DOT__clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.day17_water_level_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day17_water_level_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day17_water_level_tb__DOT__clk__0 
            = vlSelfRef.day17_water_level_tb__DOT__clk;
    }
    Vday17_water_level_tb___024root___timing_ready(vlSelf);
    Vday17_water_level_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday17_water_level_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday17_water_level_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday17_water_level_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday17_water_level_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day17_water_level_tb__DOT__empty 
                        = (1U & (~ (IData)(Vday17_water_level_tb__ConstPool__TABLE_he2a5b38f_0
                                           [vlSelfRef.day17_water_level_tb__DOT__sensor])));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vday17_water_level_tb___024root___eval_inact(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_inact\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day17_water_level_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday17_water_level_tb___024root___nba_sequent__TOP__0(Vday17_water_level_tb___024root* vlSelf);
void Vday17_water_level_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday17_water_level_tb___024root___eval_nba(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_nba\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday17_water_level_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vday17_water_level_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.day17_water_level_tb__DOT__empty 
                        = (1U & (~ (IData)(Vday17_water_level_tb__ConstPool__TABLE_he2a5b38f_0
                                           [vlSelfRef.day17_water_level_tb__DOT__sensor])));
                }
            }
        }
        Vday17_water_level_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday17_water_level_tb___024root___eval_obs(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_obs\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday17_water_level_tb___024root___eval_react(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_react\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday17_water_level_tb___024root___eval_postponed(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_postponed\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday17_water_level_tb___024root____VbeforeTrig_h3d8e99d8__0(Vday17_water_level_tb___024root* vlSelf, const char* __VeventDescription);
void Vday17_water_level_tb___024root____VbeforeTrig_h3d8e9a17__0(Vday17_water_level_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday17_water_level_tb___024root___eval_initial__TOP__Vtiming__0(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day17_water_level_tb__DOT__unnamedblk1__DOT__k;
    day17_water_level_tb__DOT__unnamedblk1__DOT__k = 0;
    // Body
    VL_WRITEF_NX("Console results (water rising, thermometer-coded probes):\n",0);
    day17_water_level_tb__DOT__unnamedblk1__DOT__k = 0U;
    while (VL_GTES_III(32, 8U, day17_water_level_tb__DOT__unnamedblk1__DOT__k)) {
        Vday17_water_level_tb___024root____VbeforeTrig_h3d8e99d8__0(vlSelf, 
                                                                    "@(negedge day17_water_level_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h3d8e99d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge day17_water_level_tb.clk)", 
                                                             "tb/day17_water_level_tb.sv", 
                                                             20);
        vlSelfRef.day17_water_level_tb__DOT__sensor 
            = (0x000000ffU & (VL_SHIFTL_III(8,32,32, (IData)(1U), day17_water_level_tb__DOT__unnamedblk1__DOT__k) 
                              - (IData)(1U)));
        Vday17_water_level_tb___024root____VbeforeTrig_h3d8e9a17__0(vlSelf, 
                                                                    "@(posedge day17_water_level_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h3d8e9a17__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day17_water_level_tb.clk)", 
                                                             "tb/day17_water_level_tb.sv", 
                                                             21);
        if (VL_UNLIKELY((((IData)(vlSelfRef.day17_water_level_tb__DOT__empty) 
                          != (0U == day17_water_level_tb__DOT__unnamedblk1__DOT__k))))) {
            vlSelfRef.day17_water_level_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day17_water_level_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] empty flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.day17_water_level_tb__DOT__sensor) 
                                 >> 7U)) != (8U == day17_water_level_tb__DOT__unnamedblk1__DOT__k))))) {
            vlSelfRef.day17_water_level_tb__DOT__errors 
                = ((IData)(1U) + vlSelfRef.day17_water_level_tb__DOT__errors);
            VL_WRITEF_NX("  [FAIL] full flag (t=%0t)\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
        }
        if (VL_LTS_III(32, 0U, day17_water_level_tb__DOT__unnamedblk1__DOT__k)) {
            if (VL_UNLIKELY(((Vday17_water_level_tb__ConstPool__TABLE_h0a26a470_0
                              [vlSelfRef.day17_water_level_tb__DOT__sensor] 
                              != (7U & (day17_water_level_tb__DOT__unnamedblk1__DOT__k 
                                        - (IData)(1U))))))) {
                vlSelfRef.day17_water_level_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.day17_water_level_tb__DOT__errors);
                VL_WRITEF_NX("  [FAIL] level code (t=%0t)\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        VL_WRITEF_NX("  sensors=%08b  level=%0d  empty=%b full=%b\n",4
                     , '#',8,vlSelfRef.day17_water_level_tb__DOT__sensor
                     , '#',3,Vday17_water_level_tb__ConstPool__TABLE_h0a26a470_0
                     [vlSelfRef.day17_water_level_tb__DOT__sensor]
                     , '#',1,vlSelfRef.day17_water_level_tb__DOT__empty
                     , '#',1,(1U & ((IData)(vlSelfRef.day17_water_level_tb__DOT__sensor) 
                                    >> 7U)));
        day17_water_level_tb__DOT__unnamedblk1__DOT__k 
            = ((IData)(1U) + day17_water_level_tb__DOT__unnamedblk1__DOT__k);
    }
    if ((0U == vlSelfRef.day17_water_level_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day17_water_level\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day17_water_level : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day17_water_level_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day17_water_level_tb.sv", 27, "");
    co_return;
}

VlCoroutine Vday17_water_level_tb___024root___eval_initial__TOP__Vtiming__1(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day17_water_level_tb.sv", 
                                             10);
        vlSelfRef.day17_water_level_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.day17_water_level_tb__DOT__clk)));
    }
    co_return;
}

bool Vday17_water_level_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday17_water_level_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___trigger_anySet__act\n"); );
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

void Vday17_water_level_tb___024root___nba_sequent__TOP__0(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___nba_sequent__TOP__0\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSelfRef.__Vsampled_TOP__day17_water_level_tb__DOT__sensor) 
                                           >> 7U)) 
                                       | (7U == vlSelfRef.__Vsampled_TOP__TABLE_h0a26a470_0
                                          [vlSelfRef.__Vsampled_TOP__day17_water_level_tb__DOT__sensor]))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day17_water_level_tb.sv:13: Assertion failed in %m: [SVA FAIL] a_full\n",3, 'M',vlSymsp->name(),"day17_water_level_tb.a_full", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day17_water_level_tb.sv", 13, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__day17_water_level_tb__DOT__empty)) 
                                       | (0U == (IData)(vlSelfRef.__Vsampled_TOP__day17_water_level_tb__DOT__sensor)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: day17_water_level_tb.sv:14: Assertion failed in %m: [SVA FAIL] a_empty\n",3, 'M',vlSymsp->name(),"day17_water_level_tb.a_empty", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day17_water_level_tb.sv", 14, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__day17_water_level_tb__DOT__empty) 
                              & ((IData)(vlSelfRef.__Vsampled_TOP__day17_water_level_tb__DOT__sensor) 
                                 >> 7U))))) {
                VL_WRITEF_NX("[%0t] %%Error: day17_water_level_tb.sv:15: Assertion failed in %m: [SVA FAIL] a_xor\n",3, 'M',vlSymsp->name(),"day17_water_level_tb.a_xor", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/day17_water_level_tb.sv", 15, "");
            }
        }
    }
}

void Vday17_water_level_tb___024root___timing_ready(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___timing_ready\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3d8e99d8__0.ready("@(negedge day17_water_level_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3d8e9a17__0.ready("@(posedge day17_water_level_tb.clk)");
    }
}

void Vday17_water_level_tb___024root___timing_resume(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___timing_resume\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h3d8e99d8__0.moveToResumeQueue(
                                                          "@(negedge day17_water_level_tb.clk)");
    vlSelfRef.__VtrigSched_h3d8e9a17__0.moveToResumeQueue(
                                                          "@(posedge day17_water_level_tb.clk)");
    vlSelfRef.__VtrigSched_h3d8e99d8__0.resume("@(negedge day17_water_level_tb.clk)");
    vlSelfRef.__VtrigSched_h3d8e9a17__0.resume("@(posedge day17_water_level_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday17_water_level_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday17_water_level_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday17_water_level_tb___024root____VbeforeTrig_h3d8e99d8__0(Vday17_water_level_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root____VbeforeTrig_h3d8e99d8__0\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day17_water_level_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day17_water_level_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day17_water_level_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day17_water_level_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day17_water_level_tb__DOT__clk__0 
        = vlSelfRef.day17_water_level_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3d8e9a17__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3d8e99d8__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday17_water_level_tb___024root____VbeforeTrig_h3d8e9a17__0(Vday17_water_level_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root____VbeforeTrig_h3d8e9a17__0\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.day17_water_level_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day17_water_level_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.day17_water_level_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day17_water_level_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__day17_water_level_tb__DOT__clk__0 
        = vlSelfRef.day17_water_level_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3d8e9a17__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3d8e99d8__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday17_water_level_tb___024root___eval_debug_assertions(Vday17_water_level_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday17_water_level_tb___024root___eval_debug_assertions\n"); );
    Vday17_water_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
