// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday31_piso_pipo_tb.h for the primary calling header

#include "Vday31_piso_pipo_tb__pch.h"

void Vday31_piso_pipo_tb___024root___ctor_var_reset(Vday31_piso_pipo_tb___024root* vlSelf);

Vday31_piso_pipo_tb___024root::Vday31_piso_pipo_tb___024root(Vday31_piso_pipo_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday31_piso_pipo_tb___024root___ctor_var_reset(this);
}

void Vday31_piso_pipo_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday31_piso_pipo_tb___024root::~Vday31_piso_pipo_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
