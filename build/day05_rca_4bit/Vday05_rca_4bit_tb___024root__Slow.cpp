// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday05_rca_4bit_tb.h for the primary calling header

#include "Vday05_rca_4bit_tb__pch.h"

void Vday05_rca_4bit_tb___024root___ctor_var_reset(Vday05_rca_4bit_tb___024root* vlSelf);

Vday05_rca_4bit_tb___024root::Vday05_rca_4bit_tb___024root(Vday05_rca_4bit_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday05_rca_4bit_tb___024root___ctor_var_reset(this);
}

void Vday05_rca_4bit_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday05_rca_4bit_tb___024root::~Vday05_rca_4bit_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
