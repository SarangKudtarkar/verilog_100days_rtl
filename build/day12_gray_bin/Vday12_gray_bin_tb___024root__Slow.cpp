// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday12_gray_bin_tb.h for the primary calling header

#include "Vday12_gray_bin_tb__pch.h"

void Vday12_gray_bin_tb___024root___ctor_var_reset(Vday12_gray_bin_tb___024root* vlSelf);

Vday12_gray_bin_tb___024root::Vday12_gray_bin_tb___024root(Vday12_gray_bin_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday12_gray_bin_tb___024root___ctor_var_reset(this);
}

void Vday12_gray_bin_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday12_gray_bin_tb___024root::~Vday12_gray_bin_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
