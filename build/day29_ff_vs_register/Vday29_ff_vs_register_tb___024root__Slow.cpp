// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday29_ff_vs_register_tb.h for the primary calling header

#include "Vday29_ff_vs_register_tb__pch.h"

void Vday29_ff_vs_register_tb___024root___ctor_var_reset(Vday29_ff_vs_register_tb___024root* vlSelf);

Vday29_ff_vs_register_tb___024root::Vday29_ff_vs_register_tb___024root(Vday29_ff_vs_register_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday29_ff_vs_register_tb___024root___ctor_var_reset(this);
}

void Vday29_ff_vs_register_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday29_ff_vs_register_tb___024root::~Vday29_ff_vs_register_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
