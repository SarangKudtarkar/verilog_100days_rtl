// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vday42_sync_fifo_tb__Syms.h"


VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_init_dtype____0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_init_sub__TOP__0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_init_sub__TOP__0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "day42_sync_fifo_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"exp_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"exp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vday42_sync_fifo_tb___024root__trace_init_dtype____0(vlSelf, tracep, "mem", 0, c+4, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"wptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"rptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"do_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"do_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_init_dtype_sub____0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_init_dtype____0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_init_dtype____0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday42_sync_fifo_tb___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_init_dtype_sub____0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_init_dtype_sub____0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_init_top(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_init_top\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vday42_sync_fifo_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vday42_sync_fifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vday42_sync_fifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_register(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_register\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vday42_sync_fifo_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vday42_sync_fifo_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vday42_sync_fifo_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vday42_sync_fifo_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_const_0_sub_0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_const_0\n"); );
    // Body
    Vday42_sync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vday42_sync_fifo_tb___024root*>(voidSelf);
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vday42_sync_fifo_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_const_0_sub_0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_const_0_sub_0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+48,(0x00000020U),32);
    bufp->fullIData(oldp+49,(8U),32);
    bufp->fullIData(oldp+50,(5U),32);
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_full_0_sub_0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_full_0\n"); );
    // Body
    Vday42_sync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vday42_sync_fifo_tb___024root*>(voidSelf);
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vday42_sync_fifo_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_full_dtype____0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_full_0_sub_0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_full_0_sub_0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.day42_sync_fifo_tb__DOT__dout),8);
    bufp->fullBit(oldp+1,((0x20U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count))));
    bufp->fullBit(oldp+2,((0U == (IData)(vlSelfRef.day42_sync_fifo_tb__DOT__count))));
    bufp->fullCData(oldp+3,(vlSelfRef.day42_sync_fifo_tb__DOT__count),6);
    Vday42_sync_fifo_tb___024root__trace_full_dtype____0(vlSelf, bufp, 4, vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__mem);
    bufp->fullCData(oldp+36,(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__wptr),5);
    bufp->fullCData(oldp+37,(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__rptr),5);
    bufp->fullBit(oldp+38,(vlSelfRef.day42_sync_fifo_tb__DOT__clk));
    bufp->fullBit(oldp+39,(vlSelfRef.day42_sync_fifo_tb__DOT__rst));
    bufp->fullBit(oldp+40,(vlSelfRef.day42_sync_fifo_tb__DOT__wr_en));
    bufp->fullBit(oldp+41,(vlSelfRef.day42_sync_fifo_tb__DOT__rd_en));
    bufp->fullCData(oldp+42,(vlSelfRef.day42_sync_fifo_tb__DOT__din),8);
    bufp->fullCData(oldp+43,(vlSelfRef.day42_sync_fifo_tb__DOT__exp_dout),8);
    bufp->fullBit(oldp+44,(vlSelfRef.day42_sync_fifo_tb__DOT__exp_valid));
    bufp->fullIData(oldp+45,(vlSelfRef.day42_sync_fifo_tb__DOT__errors),32);
    bufp->fullBit(oldp+46,(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__do_wr));
    bufp->fullBit(oldp+47,(vlSelfRef.day42_sync_fifo_tb__DOT__dut__DOT__do_rd));
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_full_dtype____0(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday42_sync_fifo_tb___024root__trace_full_dtype____0\n"); );
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->fullCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->fullCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->fullCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->fullCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->fullCData(oldp+7,(__VdtypeVar[7]),8);
    bufp->fullCData(oldp+8,(__VdtypeVar[8]),8);
    bufp->fullCData(oldp+9,(__VdtypeVar[9]),8);
    bufp->fullCData(oldp+10,(__VdtypeVar[10]),8);
    bufp->fullCData(oldp+11,(__VdtypeVar[11]),8);
    bufp->fullCData(oldp+12,(__VdtypeVar[12]),8);
    bufp->fullCData(oldp+13,(__VdtypeVar[13]),8);
    bufp->fullCData(oldp+14,(__VdtypeVar[14]),8);
    bufp->fullCData(oldp+15,(__VdtypeVar[15]),8);
    bufp->fullCData(oldp+16,(__VdtypeVar[16]),8);
    bufp->fullCData(oldp+17,(__VdtypeVar[17]),8);
    bufp->fullCData(oldp+18,(__VdtypeVar[18]),8);
    bufp->fullCData(oldp+19,(__VdtypeVar[19]),8);
    bufp->fullCData(oldp+20,(__VdtypeVar[20]),8);
    bufp->fullCData(oldp+21,(__VdtypeVar[21]),8);
    bufp->fullCData(oldp+22,(__VdtypeVar[22]),8);
    bufp->fullCData(oldp+23,(__VdtypeVar[23]),8);
    bufp->fullCData(oldp+24,(__VdtypeVar[24]),8);
    bufp->fullCData(oldp+25,(__VdtypeVar[25]),8);
    bufp->fullCData(oldp+26,(__VdtypeVar[26]),8);
    bufp->fullCData(oldp+27,(__VdtypeVar[27]),8);
    bufp->fullCData(oldp+28,(__VdtypeVar[28]),8);
    bufp->fullCData(oldp+29,(__VdtypeVar[29]),8);
    bufp->fullCData(oldp+30,(__VdtypeVar[30]),8);
    bufp->fullCData(oldp+31,(__VdtypeVar[31]),8);
}
