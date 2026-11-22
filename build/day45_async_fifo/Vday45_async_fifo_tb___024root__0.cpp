// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday45_async_fifo_tb.h for the primary calling header

#include "Vday45_async_fifo_tb__pch.h"

VlCoroutine Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__0(Vday45_async_fifo_tb___024root* vlSelf);
VlCoroutine Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__1(Vday45_async_fifo_tb___024root* vlSelf);
VlCoroutine Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__2(Vday45_async_fifo_tb___024root* vlSelf);

void Vday45_async_fifo_tb___024root___eval_initial(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_initial\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vday45_async_fifo_tb___024root___eval_sample(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_sample\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wgray 
        = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wgray;
    vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wbin 
        = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin;
    vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__wrst_n 
        = vlSelfRef.day45_async_fifo_tb__DOT__wrst_n;
    vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__wfull 
        = vlSelfRef.day45_async_fifo_tb__DOT__wfull;
    vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__winc 
        = vlSelfRef.day45_async_fifo_tb__DOT__winc;
    vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__rgray 
        = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rgray;
    vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__rbin 
        = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin;
    vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__rrst_n 
        = vlSelfRef.day45_async_fifo_tb__DOT__rrst_n;
    vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__rempty 
        = vlSelfRef.day45_async_fifo_tb__DOT__rempty;
    vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__rinc 
        = vlSelfRef.day45_async_fifo_tb__DOT__rinc;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vday45_async_fifo_tb___024root___eval_ico(Vday45_async_fifo_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_ico\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday45_async_fifo_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vday45_async_fifo_tb___024root___timing_ready(Vday45_async_fifo_tb___024root* vlSelf);
void Vday45_async_fifo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vday45_async_fifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vday45_async_fifo_tb___024root___timing_resume(Vday45_async_fifo_tb___024root* vlSelf);

bool Vday45_async_fifo_tb___024root___eval_act(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_act\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 6U) 
                                                          | ((((~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rrst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rrst_n__0)) 
                                                              << 5U) 
                                                             | (((~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__wrst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wrst_n__0)) 
                                                                << 4U))) 
                                                         | (((((~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rclk)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rclk__0)) 
                                                              << 3U) 
                                                             | (((~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__wclk)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wclk__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.day45_async_fifo_tb__DOT__rclk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rclk__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__wclk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wclk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wclk__0 
            = vlSelfRef.day45_async_fifo_tb__DOT__wclk;
        vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rclk__0 
            = vlSelfRef.day45_async_fifo_tb__DOT__rclk;
        vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wrst_n__0 
            = vlSelfRef.day45_async_fifo_tb__DOT__wrst_n;
        vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rrst_n__0 
            = vlSelfRef.day45_async_fifo_tb__DOT__rrst_n;
    }
    Vday45_async_fifo_tb___024root___timing_ready(vlSelf);
    Vday45_async_fifo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday45_async_fifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vday45_async_fifo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vday45_async_fifo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vday45_async_fifo_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vday45_async_fifo_tb___024root___eval_inact(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_inact\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/day45_async_fifo_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vday45_async_fifo_tb___024root___eval_body__nba(Vday45_async_fifo_tb___024root* vlSelf);
void Vday45_async_fifo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vday45_async_fifo_tb___024root___eval_nba(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_nba\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vday45_async_fifo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vday45_async_fifo_tb___024root___eval_body__nba(vlSelf);
        Vday45_async_fifo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vday45_async_fifo_tb___024root___eval_obs(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_obs\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vday45_async_fifo_tb___024root___eval_react(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_react\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vday45_async_fifo_tb___024root___eval_postponed(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_postponed\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vday45_async_fifo_tb___024root____VbeforeTrig_h09fd21a6__0(Vday45_async_fifo_tb___024root* vlSelf, const char* __VeventDescription);
void Vday45_async_fifo_tb___024root____VbeforeTrig_hd7da7fc3__0(Vday45_async_fifo_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__0(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ day45_async_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    day45_async_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ day45_async_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    day45_async_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ day45_async_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    day45_async_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ day45_async_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    day45_async_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ day45_async_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    day45_async_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ day45_async_fifo_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    day45_async_fifo_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ day45_async_fifo_tb__DOT__unnamedblk1_7__DOT____Vrepeat6;
    day45_async_fifo_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ day45_async_fifo_tb__DOT__unnamedblk1_8__DOT____Vrepeat7;
    day45_async_fifo_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    // Body
    day45_async_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    while (VL_LTS_III(32, 0U, day45_async_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vday45_async_fifo_tb___024root____VbeforeTrig_h09fd21a6__0(vlSelf, 
                                                                   "@(posedge day45_async_fifo_tb.wclk)");
        co_await vlSelfRef.__VtrigSched_h09fd21a6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day45_async_fifo_tb.wclk)", 
                                                             "tb/day45_async_fifo_tb.sv", 
                                                             49);
        day45_async_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (day45_async_fifo_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/day45_async_fifo_tb.sv", 
                                         49);
    vlSelfRef.day45_async_fifo_tb__DOT__wrst_n = 1U;
    day45_async_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, day45_async_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vday45_async_fifo_tb___024root____VbeforeTrig_hd7da7fc3__0(vlSelf, 
                                                                   "@(posedge day45_async_fifo_tb.rclk)");
        co_await vlSelfRef.__VtrigSched_hd7da7fc3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day45_async_fifo_tb.rclk)", 
                                                             "tb/day45_async_fifo_tb.sv", 
                                                             50);
        day45_async_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (day45_async_fifo_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/day45_async_fifo_tb.sv", 
                                         50);
    vlSelfRef.day45_async_fifo_tb__DOT__rrst_n = 1U;
    vlSelfRef.day45_async_fifo_tb__DOT__wr_prob = 0x0000005fU;
    vlSelfRef.day45_async_fifo_tb__DOT__rd_prob = 0U;
    day45_async_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000028U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rempty)))))) {
        vlSelfRef.day45_async_fifo_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day45_async_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] empty after reset (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    while (VL_LTS_III(32, 0U, day45_async_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vday45_async_fifo_tb___024root____VbeforeTrig_h09fd21a6__0(vlSelf, 
                                                                   "@(posedge day45_async_fifo_tb.wclk)");
        co_await vlSelfRef.__VtrigSched_h09fd21a6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day45_async_fifo_tb.wclk)", 
                                                             "tb/day45_async_fifo_tb.sv", 
                                                             52);
        day45_async_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (day45_async_fifo_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__wfull)))))) {
        vlSelfRef.day45_async_fifo_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day45_async_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] FIFO must report full (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  after fill : wfull=%b occupancy=%0d\n",2
                 , '#',1,vlSelfRef.day45_async_fifo_tb__DOT__wfull
                 , '~',32,vlSelfRef.day45_async_fifo_tb__DOT__model.size());
    vlSelfRef.day45_async_fifo_tb__DOT__wr_prob = 0U;
    vlSelfRef.day45_async_fifo_tb__DOT__rd_prob = 0x0000005fU;
    day45_async_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x0000003cU;
    while (VL_LTS_III(32, 0U, day45_async_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vday45_async_fifo_tb___024root____VbeforeTrig_hd7da7fc3__0(vlSelf, 
                                                                   "@(posedge day45_async_fifo_tb.rclk)");
        co_await vlSelfRef.__VtrigSched_hd7da7fc3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day45_async_fifo_tb.rclk)", 
                                                             "tb/day45_async_fifo_tb.sv", 
                                                             55);
        day45_async_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (day45_async_fifo_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rempty)))))) {
        vlSelfRef.day45_async_fifo_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day45_async_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] FIFO must report empty (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  after drain: rempty=%b occupancy=%0d\n",2
                 , '#',1,vlSelfRef.day45_async_fifo_tb__DOT__rempty
                 , '~',32,vlSelfRef.day45_async_fifo_tb__DOT__model.size());
    vlSelfRef.day45_async_fifo_tb__DOT__wr_prob = 0x0000003cU;
    vlSelfRef.day45_async_fifo_tb__DOT__rd_prob = 0x0000003cU;
    day45_async_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x00000190U;
    while (VL_LTS_III(32, 0U, day45_async_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vday45_async_fifo_tb___024root____VbeforeTrig_h09fd21a6__0(vlSelf, 
                                                                   "@(posedge day45_async_fifo_tb.wclk)");
        co_await vlSelfRef.__VtrigSched_h09fd21a6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day45_async_fifo_tb.wclk)", 
                                                             "tb/day45_async_fifo_tb.sv", 
                                                             58);
        day45_async_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (day45_async_fifo_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    vlSelfRef.day45_async_fifo_tb__DOT__wr_prob = 0x0000005aU;
    vlSelfRef.day45_async_fifo_tb__DOT__rd_prob = 0x0000001eU;
    day45_async_fifo_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x0000012cU;
    while (VL_LTS_III(32, 0U, day45_async_fifo_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vday45_async_fifo_tb___024root____VbeforeTrig_h09fd21a6__0(vlSelf, 
                                                                   "@(posedge day45_async_fifo_tb.wclk)");
        co_await vlSelfRef.__VtrigSched_h09fd21a6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day45_async_fifo_tb.wclk)", 
                                                             "tb/day45_async_fifo_tb.sv", 
                                                             59);
        day45_async_fifo_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (day45_async_fifo_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.day45_async_fifo_tb__DOT__wr_prob = 0x00000014U;
    vlSelfRef.day45_async_fifo_tb__DOT__rd_prob = 0x0000005aU;
    day45_async_fifo_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x0000012cU;
    while (VL_LTS_III(32, 0U, day45_async_fifo_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        Vday45_async_fifo_tb___024root____VbeforeTrig_h09fd21a6__0(vlSelf, 
                                                                   "@(posedge day45_async_fifo_tb.wclk)");
        co_await vlSelfRef.__VtrigSched_h09fd21a6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day45_async_fifo_tb.wclk)", 
                                                             "tb/day45_async_fifo_tb.sv", 
                                                             60);
        day45_async_fifo_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (day45_async_fifo_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    vlSelfRef.day45_async_fifo_tb__DOT__wr_prob = 0U;
    vlSelfRef.day45_async_fifo_tb__DOT__rd_prob = 0x0000005fU;
    day45_async_fifo_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0x00000050U;
    while (VL_LTS_III(32, 0U, day45_async_fifo_tb__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        Vday45_async_fifo_tb___024root____VbeforeTrig_hd7da7fc3__0(vlSelf, 
                                                                   "@(posedge day45_async_fifo_tb.rclk)");
        co_await vlSelfRef.__VtrigSched_hd7da7fc3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge day45_async_fifo_tb.rclk)", 
                                                             "tb/day45_async_fifo_tb.sv", 
                                                             61);
        day45_async_fifo_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 
            = (day45_async_fifo_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.day45_async_fifo_tb__DOT__model.size())))) {
        vlSelfRef.day45_async_fifo_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day45_async_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] all written words were read (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rempty)))))) {
        vlSelfRef.day45_async_fifo_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day45_async_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] FIFO empty at end of test (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    VL_WRITEF_NX("  words written = %0d, words read = %0d\n",2
                 , '~',32,vlSelfRef.day45_async_fifo_tb__DOT__n_wr
                 , '~',32,vlSelfRef.day45_async_fifo_tb__DOT__n_rd);
    if (VL_UNLIKELY(((1U & (~ ((vlSelfRef.day45_async_fifo_tb__DOT__n_wr 
                                == vlSelfRef.day45_async_fifo_tb__DOT__n_rd) 
                               & VL_LTS_III(32, 0x00000064U, vlSelfRef.day45_async_fifo_tb__DOT__n_wr))))))) {
        vlSelfRef.day45_async_fifo_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day45_async_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] write/read counts match (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if ((0U == vlSelfRef.day45_async_fifo_tb__DOT__errors)) {
        VL_WRITEF_NX("[PASS] day45_async_fifo\n",0);
    } else {
        VL_WRITEF_NX("[FAIL] day45_async_fifo : %0d error(s)\n",1
                     , '~',32,vlSelfRef.day45_async_fifo_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/day45_async_fifo_tb.sv", 66, "");
    co_return;
}

VlCoroutine Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__1(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(7ULL, 
                                             nullptr, 
                                             "tb/day45_async_fifo_tb.sv", 
                                             13);
        vlSelfRef.day45_async_fifo_tb__DOT__rclk = 
            (1U & (~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rclk)));
    }
    co_return;
}

VlCoroutine Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__2(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/day45_async_fifo_tb.sv", 
                                             12);
        vlSelfRef.day45_async_fifo_tb__DOT__wclk = 
            (1U & (~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__wclk)));
    }
    co_return;
}

bool Vday45_async_fifo_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___trigger_anySet__ico\n"); );
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

bool Vday45_async_fifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___trigger_anySet__act\n"); );
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

void Vday45_async_fifo_tb___024root___nba_sequent__TOP__0(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___nba_sequent__TOP__0\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (vlSelfRef.day45_async_fifo_tb__DOT__wrst_n) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wgray) 
                                  != (((IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wbin) 
                                       >> 1U) ^ (IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wbin)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day45_async_fifo_tb.sv:21: Assertion failed in %m: [SVA FAIL] a_wgray_def\n",3, 'M',vlSymsp->name(),"day45_async_fifo_tb.a_wgray_def", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day45_async_fifo_tb.sv", 21, "");
                }
                if (VL_UNLIKELY((VL_LTS_III(32, 1U, 
                                            VL_COUNTONES_I(
                                                           ((IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wgray) 
                                                            ^ (IData)(vlSelfRef.day45_async_fifo_tb__DOT___Vpast_1_1))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day45_async_fifo_tb.sv:17: Assertion failed in %m: [SVA FAIL] a_wgray_1bit\n",3, 'M',vlSymsp->name(),"day45_async_fifo_tb.a_wgray_1bit", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day45_async_fifo_tb.sv", 17, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT___Vpast_5_1)) 
                                           | ((IData)(vlSelfRef.day45_async_fifo_tb__DOT___Vpast_6_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wbin)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day45_async_fifo_tb.sv:19: Assertion failed in %m: [SVA FAIL] a_no_overflow\n",3, 'M',vlSymsp->name(),"day45_async_fifo_tb.a_no_overflow", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day45_async_fifo_tb.sv", 19, "");
                }
            }
        }
    }
    vlSelfRef.__VdlySet__day45_async_fifo_tb__DOT__dut__DOT__mem__v0 = 0U;
    if (VL_UNLIKELY((VL_LTS_III(32, 0x00000010U, vlSelfRef.day45_async_fifo_tb__DOT__model.size())))) {
        vlSelfRef.day45_async_fifo_tb__DOT__errors 
            = ((IData)(1U) + vlSelfRef.day45_async_fifo_tb__DOT__errors);
        VL_WRITEF_NX("  [FAIL] occupancy never exceeds depth (t=%0t)\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    if (((IData)(vlSelfRef.day45_async_fifo_tb__DOT__winc) 
         & (~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__wfull)))) {
        vlSelfRef.__VdlyVal__day45_async_fifo_tb__DOT__dut__DOT__mem__v0 
            = vlSelfRef.day45_async_fifo_tb__DOT__wdata;
        vlSelfRef.__VdlyDim0__day45_async_fifo_tb__DOT__dut__DOT__mem__v0 
            = (0x0000000fU & (IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin));
        vlSelfRef.__VdlySet__day45_async_fifo_tb__DOT__dut__DOT__mem__v0 = 1U;
    }
    vlSelfRef.day45_async_fifo_tb__DOT___Vpast_1_1 
        = vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wgray;
    vlSelfRef.day45_async_fifo_tb__DOT___Vpast_5_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__wrst_n) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__wfull) 
              & (IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__winc)));
    vlSelfRef.day45_async_fifo_tb__DOT___Vpast_6_1 
        = vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__wbin;
}

void Vday45_async_fifo_tb___024root___nba_sequent__TOP__1(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___nba_sequent__TOP__1\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (vlSelfRef.day45_async_fifo_tb__DOT__rrst_n) {
                if (VL_UNLIKELY((VL_LTS_III(32, 1U, 
                                            VL_COUNTONES_I(
                                                           ((IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__rgray) 
                                                            ^ (IData)(vlSelfRef.day45_async_fifo_tb__DOT___Vpast_3_1))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day45_async_fifo_tb.sv:18: Assertion failed in %m: [SVA FAIL] a_rgray_1bit\n",3, 'M',vlSymsp->name(),"day45_async_fifo_tb.a_rgray_1bit", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day45_async_fifo_tb.sv", 18, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT___Vpast_8_1)) 
                                           | ((IData)(vlSelfRef.day45_async_fifo_tb__DOT___Vpast_9_1) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__rbin)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: day45_async_fifo_tb.sv:20: Assertion failed in %m: [SVA FAIL] a_no_underflow\n",3, 'M',vlSymsp->name(),"day45_async_fifo_tb.a_no_underflow", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/day45_async_fifo_tb.sv", 20, "");
                }
            }
        }
    }
    vlSelfRef.day45_async_fifo_tb__DOT___Vpast_3_1 
        = vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__rgray;
    vlSelfRef.day45_async_fifo_tb__DOT___Vpast_9_1 
        = vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__dut__DOT__rbin;
    vlSelfRef.day45_async_fifo_tb__DOT___Vpast_8_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__rrst_n) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__rempty) 
              & (IData)(vlSelfRef.__Vsampled_TOP__day45_async_fifo_tb__DOT__rinc)));
}

void Vday45_async_fifo_tb___024root___eval_body__nba(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_body__nba\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vday45_async_fifo_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vday45_async_fifo_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            if (vlSelfRef.day45_async_fifo_tb__DOT__wrst_n) {
                vlSelfRef.day45_async_fifo_tb__DOT____VlemExpr_0 
                    = VL_URANDOM_RANGE_I(0U, 0x00000063U);
                if ((vlSelfRef.day45_async_fifo_tb__DOT____VlemExpr_0 
                     < vlSelfRef.day45_async_fifo_tb__DOT__wr_prob)) {
                    vlSelfRef.day45_async_fifo_tb__DOT__wdata 
                        = (0x000000ffU & VL_RANDOM_I());
                    vlSelfRef.day45_async_fifo_tb__DOT__winc = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__wfull)))) {
                        vlSelfRef.day45_async_fifo_tb__DOT__model.push_back(vlSelfRef.day45_async_fifo_tb__DOT__wdata);
                        vlSelfRef.day45_async_fifo_tb__DOT__n_wr 
                            = ((IData)(1U) + vlSelfRef.day45_async_fifo_tb__DOT__n_wr);
                    }
                } else {
                    vlSelfRef.day45_async_fifo_tb__DOT__winc = 0U;
                }
            }
        }
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            if (vlSelfRef.day45_async_fifo_tb__DOT__rrst_n) {
                vlSelfRef.day45_async_fifo_tb__DOT____VlemExpr_1 
                    = VL_URANDOM_RANGE_I(0U, 0x00000063U);
                if ((vlSelfRef.day45_async_fifo_tb__DOT____VlemExpr_1 
                     < vlSelfRef.day45_async_fifo_tb__DOT__rd_prob)) {
                    vlSelfRef.day45_async_fifo_tb__DOT__rinc = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rempty)))) {
                        if (VL_UNLIKELY((VL_GTES_III(32, 0U, vlSelfRef.day45_async_fifo_tb__DOT__model.size())))) {
                            vlSelfRef.day45_async_fifo_tb__DOT__errors 
                                = ((IData)(1U) + vlSelfRef.day45_async_fifo_tb__DOT__errors);
                            VL_WRITEF_NX("  [FAIL] FIFO delivered data that was never written (t=%0t)\n",2, 'T',-12
                                         , '#',64,VL_TIME_UNITED_Q(1));
                        }
                        if (VL_LTS_III(32, 0U, vlSelfRef.day45_async_fifo_tb__DOT__model.size())) {
                            if (VL_UNLIKELY(((vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__mem
                                              [(0x0000000fU 
                                                & (IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin))] 
                                              != vlSelfRef.day45_async_fifo_tb__DOT__model.at(0U))))) {
                                vlSelfRef.day45_async_fifo_tb__DOT__errors 
                                    = ((IData)(1U) 
                                       + vlSelfRef.day45_async_fifo_tb__DOT__errors);
                                VL_WRITEF_NX("  [FAIL] read data must match write order (t=%0t)\n",2, 'T',-12
                                             , '#',64,VL_TIME_UNITED_Q(1));
                            }
                            vlSelfRef.day45_async_fifo_tb__DOT__n_rd 
                                = ((IData)(1U) + vlSelfRef.day45_async_fifo_tb__DOT__n_rd);
                            std::ignore = vlSelfRef.day45_async_fifo_tb__DOT__model.pop_front();
                        }
                    }
                } else {
                    vlSelfRef.day45_async_fifo_tb__DOT__rinc = 0U;
                }
            }
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.day45_async_fifo_tb__DOT__wfull 
                = ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__wrst_n) 
                   && ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wgray_n) 
                       == ((0x00000018U & ((~ ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wq2_rgray) 
                                               >> 3U)) 
                                           << 3U)) 
                           | (7U & (IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wq2_rgray)))));
            if (vlSelfRef.day45_async_fifo_tb__DOT__wrst_n) {
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin 
                    = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin_n;
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wq2_rgray 
                    = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__u_sync_r2w__DOT__m;
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__u_sync_r2w__DOT__m 
                    = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rgray;
            } else {
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin = 0U;
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wq2_rgray = 0U;
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__u_sync_r2w__DOT__m = 0U;
            }
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            if (vlSelfRef.__VdlySet__day45_async_fifo_tb__DOT__dut__DOT__mem__v0) {
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__mem[vlSelfRef.__VdlyDim0__day45_async_fifo_tb__DOT__dut__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__day45_async_fifo_tb__DOT__dut__DOT__mem__v0;
            }
        }
    }
    if ((0x0000000000000022ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            vlSelfRef.day45_async_fifo_tb__DOT__rempty 
                = ((1U & (~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rrst_n))) 
                   || ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rgray_n) 
                       == (IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rq2_wgray)));
            if (vlSelfRef.day45_async_fifo_tb__DOT__rrst_n) {
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin 
                    = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin_n;
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rgray 
                    = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rgray_n;
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rq2_wgray 
                    = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__u_sync_w2r__DOT__m;
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__u_sync_w2r__DOT__m 
                    = vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wgray;
            } else {
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin = 0U;
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rgray = 0U;
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rq2_wgray = 0U;
                vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__u_sync_w2r__DOT__m = 0U;
            }
        }
    }
    if ((0x0000000000000015ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin_n 
                = (0x0000001fU & ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin) 
                                  + ((~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__wfull)) 
                                     & (IData)(vlSelfRef.day45_async_fifo_tb__DOT__winc))));
        }
    }
    if ((0x000000000000002aULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin_n 
                = (0x0000001fU & ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin) 
                                  + ((~ (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rempty)) 
                                     & (IData)(vlSelfRef.day45_async_fifo_tb__DOT__rinc))));
            vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rgray_n 
                = ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin_n) 
                   ^ ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__rbin_n) 
                      >> 1U));
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__7
            vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wgray 
                = ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__wrst_n)
                    ? (IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wgray_n)
                    : 0U);
        }
    }
    if ((0x0000000000000015ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__2
            vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wgray_n 
                = ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin_n) 
                   ^ ((IData)(vlSelfRef.day45_async_fifo_tb__DOT__dut__DOT__wbin_n) 
                      >> 1U));
        }
    }
}

void Vday45_async_fifo_tb___024root___timing_ready(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___timing_ready\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h09fd21a6__0.ready("@(posedge day45_async_fifo_tb.wclk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd7da7fc3__0.ready("@(posedge day45_async_fifo_tb.rclk)");
    }
}

void Vday45_async_fifo_tb___024root___timing_resume(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___timing_resume\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h09fd21a6__0.moveToResumeQueue(
                                                          "@(posedge day45_async_fifo_tb.wclk)");
    vlSelfRef.__VtrigSched_hd7da7fc3__0.moveToResumeQueue(
                                                          "@(posedge day45_async_fifo_tb.rclk)");
    vlSelfRef.__VtrigSched_h09fd21a6__0.resume("@(posedge day45_async_fifo_tb.wclk)");
    vlSelfRef.__VtrigSched_hd7da7fc3__0.resume("@(posedge day45_async_fifo_tb.rclk)");
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vday45_async_fifo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vday45_async_fifo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vday45_async_fifo_tb___024root____VbeforeTrig_h09fd21a6__0(Vday45_async_fifo_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root____VbeforeTrig_h09fd21a6__0\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.day45_async_fifo_tb__DOT__wclk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wclk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__wclk__0 
        = vlSelfRef.day45_async_fifo_tb__DOT__wclk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h09fd21a6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h09fd21a6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h09fd21a6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h09fd21a6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h09fd21a6__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vday45_async_fifo_tb___024root____VbeforeTrig_hd7da7fc3__0(Vday45_async_fifo_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root____VbeforeTrig_hd7da7fc3__0\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.day45_async_fifo_tb__DOT__rclk) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rclk__0))) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__day45_async_fifo_tb__DOT__rclk__0 
        = vlSelfRef.day45_async_fifo_tb__DOT__rclk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd7da7fc3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd7da7fc3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd7da7fc3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vday45_async_fifo_tb___024root___eval_debug_assertions(Vday45_async_fifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday45_async_fifo_tb___024root___eval_debug_assertions\n"); );
    Vday45_async_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
