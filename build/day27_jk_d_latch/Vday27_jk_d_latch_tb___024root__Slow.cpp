// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday27_jk_d_latch_tb.h for the primary calling header

#include "Vday27_jk_d_latch_tb__pch.h"

void Vday27_jk_d_latch_tb___024root___ctor_var_reset(Vday27_jk_d_latch_tb___024root* vlSelf);

Vday27_jk_d_latch_tb___024root::Vday27_jk_d_latch_tb___024root(Vday27_jk_d_latch_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday27_jk_d_latch_tb___024root___ctor_var_reset(this);
}

void Vday27_jk_d_latch_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday27_jk_d_latch_tb___024root::~Vday27_jk_d_latch_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
