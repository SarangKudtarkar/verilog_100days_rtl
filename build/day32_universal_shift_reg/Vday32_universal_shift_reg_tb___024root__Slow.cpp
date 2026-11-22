// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday32_universal_shift_reg_tb.h for the primary calling header

#include "Vday32_universal_shift_reg_tb__pch.h"

void Vday32_universal_shift_reg_tb___024root___ctor_var_reset(Vday32_universal_shift_reg_tb___024root* vlSelf);

Vday32_universal_shift_reg_tb___024root::Vday32_universal_shift_reg_tb___024root(Vday32_universal_shift_reg_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday32_universal_shift_reg_tb___024root___ctor_var_reset(this);
}

void Vday32_universal_shift_reg_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday32_universal_shift_reg_tb___024root::~Vday32_universal_shift_reg_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
