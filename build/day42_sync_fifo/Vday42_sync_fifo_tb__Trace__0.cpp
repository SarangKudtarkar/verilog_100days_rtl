// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vday42_sync_fifo_tb__Syms.h"


void Vday42_sync_fifo_tb___024root__trace_chg_0_sub_0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vday42_sync_fifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_chg_0\n"); );
    // Body
    Vday42_sync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vday42_sync_fifo_tb___024root*>(voidSelf);
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vday42_sync_fifo_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vday42_sync_fifo_tb___024root__trace_chg_dtype____0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 32>& __VdtypeVar);

void Vday42_sync_fifo_tb___024root__trace_chg_0_sub_0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_chg_0_sub_0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.day42_sync_fifo_tb__DOT__dout),8);
        bufp->chgBit(oldp+1,((0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count))));
        bufp->chgBit(oldp+2,((0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count))));
        bufp->chgCData(oldp+3,(vlSelfRef.day42_sync_fifo_tb__DOT__count),6);
        Vday42_sync_fifo_tb___024root__trace_chg_dtype____0(vlSelf, bufp, 4, vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__mem);
        bufp->chgCData(oldp+36,(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__wptr),5);
        bufp->chgCData(oldp+37,(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__rptr),5);
    }
    bufp->chgBit(oldp+38,(vlSelfRef.day42_sync_fifo_tb__DOT__clk));
    bufp->chgBit(oldp+39,(vlSelfRef.day42_sync_fifo_tb__DOT__rst));
    bufp->chgBit(oldp+40,(vlSelfRef.day42_sync_fifo_tb__DOT__wr_en));
    bufp->chgBit(oldp+41,(vlSelfRef.day42_sync_fifo_tb__DOT__rd_en));
    bufp->chgCData(oldp+42,(vlSelfRef.day42_sync_fifo_tb__DOT__din),8);
    bufp->chgCData(oldp+43,(vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout),8);
    bufp->chgBit(oldp+44,(vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid));
    bufp->chgIData(oldp+45,(vlSelfRef.day42_sync_fifo_tb__DOT__errors),32);
    bufp->chgBit(oldp+46,(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__do_wr));
    bufp->chgBit(oldp+47,(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__do_rd));
}

void Vday42_sync_fifo_tb___024root__trace_chg_dtype____0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_chg_dtype____0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+8,(__VdtypeVar[8]),8);
    bufp->chgCData(oldp+9,(__VdtypeVar[9]),8);
    bufp->chgCData(oldp+10,(__VdtypeVar[10]),8);
    bufp->chgCData(oldp+11,(__VdtypeVar[11]),8);
    bufp->chgCData(oldp+12,(__VdtypeVar[12]),8);
    bufp->chgCData(oldp+13,(__VdtypeVar[13]),8);
    bufp->chgCData(oldp+14,(__VdtypeVar[14]),8);
    bufp->chgCData(oldp+15,(__VdtypeVar[15]),8);
    bufp->chgCData(oldp+16,(__VdtypeVar[16]),8);
    bufp->chgCData(oldp+17,(__VdtypeVar[17]),8);
    bufp->chgCData(oldp+18,(__VdtypeVar[18]),8);
    bufp->chgCData(oldp+19,(__VdtypeVar[19]),8);
    bufp->chgCData(oldp+20,(__VdtypeVar[20]),8);
    bufp->chgCData(oldp+21,(__VdtypeVar[21]),8);
    bufp->chgCData(oldp+22,(__VdtypeVar[22]),8);
    bufp->chgCData(oldp+23,(__VdtypeVar[23]),8);
    bufp->chgCData(oldp+24,(__VdtypeVar[24]),8);
    bufp->chgCData(oldp+25,(__VdtypeVar[25]),8);
    bufp->chgCData(oldp+26,(__VdtypeVar[26]),8);
    bufp->chgCData(oldp+27,(__VdtypeVar[27]),8);
    bufp->chgCData(oldp+28,(__VdtypeVar[28]),8);
    bufp->chgCData(oldp+29,(__VdtypeVar[29]),8);
    bufp->chgCData(oldp+30,(__VdtypeVar[30]),8);
    bufp->chgCData(oldp+31,(__VdtypeVar[31]),8);
}

void Vday42_sync_fifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_cleanup\n"); );
    // Body
    Vday42_sync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vday42_sync_fifo_tb___024root*>(voidSelf);
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
