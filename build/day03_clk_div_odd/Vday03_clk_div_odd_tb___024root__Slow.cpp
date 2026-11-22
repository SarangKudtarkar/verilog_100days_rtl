// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday03_clk_div_odd_tb.h for the primary calling header

#include "Vday03_clk_div_odd_tb__pch.h"

void Vday03_clk_div_odd_tb___024root___ctor_var_reset(Vday03_clk_div_odd_tb___024root* vlSelf);

Vday03_clk_div_odd_tb___024root::Vday03_clk_div_odd_tb___024root(Vday03_clk_div_odd_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday03_clk_div_odd_tb___024root___ctor_var_reset(this);
}

void Vday03_clk_div_odd_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday03_clk_div_odd_tb___024root::~Vday03_clk_div_odd_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
