// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday38_universal_counter_tb.h for the primary calling header

#include "Vday38_universal_counter_tb__pch.h"

void Vday38_universal_counter_tb___024root___ctor_var_reset(Vday38_universal_counter_tb___024root* vlSelf);

Vday38_universal_counter_tb___024root::Vday38_universal_counter_tb___024root(Vday38_universal_counter_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday38_universal_counter_tb___024root___ctor_var_reset(this);
}

void Vday38_universal_counter_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday38_universal_counter_tb___024root::~Vday38_universal_counter_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
