// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday23_majority5_tb.h for the primary calling header

#include "Vday23_majority5_tb__pch.h"

void Vday23_majority5_tb___024root___ctor_var_reset(Vday23_majority5_tb___024root* vlSelf);

Vday23_majority5_tb___024root::Vday23_majority5_tb___024root(Vday23_majority5_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday23_majority5_tb___024root___ctor_var_reset(this);
}

void Vday23_majority5_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday23_majority5_tb___024root::~Vday23_majority5_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
