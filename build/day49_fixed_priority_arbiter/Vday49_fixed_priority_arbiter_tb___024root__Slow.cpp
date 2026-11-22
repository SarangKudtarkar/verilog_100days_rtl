// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday49_fixed_priority_arbiter_tb.h for the primary calling header

#include "Vday49_fixed_priority_arbiter_tb__pch.h"

void Vday49_fixed_priority_arbiter_tb___024root___ctor_var_reset(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);

Vday49_fixed_priority_arbiter_tb___024root::Vday49_fixed_priority_arbiter_tb___024root(Vday49_fixed_priority_arbiter_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday49_fixed_priority_arbiter_tb___024root___ctor_var_reset(this);
}

void Vday49_fixed_priority_arbiter_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday49_fixed_priority_arbiter_tb___024root::~Vday49_fixed_priority_arbiter_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
