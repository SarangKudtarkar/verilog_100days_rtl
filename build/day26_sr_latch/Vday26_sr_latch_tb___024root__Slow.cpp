// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday26_sr_latch_tb.h for the primary calling header

#include "Vday26_sr_latch_tb__pch.h"

// Parameter definitions for Vday26_sr_latch_tb___024root
constexpr VlUnpacked<CData/*1:0*/, 8> Vday26_sr_latch_tb___024root::day26_sr_latch_tb__DOT__NAND_V;
constexpr VlUnpacked<CData/*1:0*/, 8> Vday26_sr_latch_tb___024root::day26_sr_latch_tb__DOT__NOR_V;
constexpr VlUnpacked<IData/*31:0*/, 8> Vday26_sr_latch_tb___024root::day26_sr_latch_tb__DOT__EXP;


void Vday26_sr_latch_tb___024root___ctor_var_reset(Vday26_sr_latch_tb___024root* vlSelf);

Vday26_sr_latch_tb___024root::Vday26_sr_latch_tb___024root(Vday26_sr_latch_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday26_sr_latch_tb___024root___ctor_var_reset(this);
}

void Vday26_sr_latch_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday26_sr_latch_tb___024root::~Vday26_sr_latch_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
