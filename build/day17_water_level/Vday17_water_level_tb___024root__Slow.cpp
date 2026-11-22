// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday17_water_level_tb.h for the primary calling header

#include "Vday17_water_level_tb__pch.h"

void Vday17_water_level_tb___024root___ctor_var_reset(Vday17_water_level_tb___024root* vlSelf);

Vday17_water_level_tb___024root::Vday17_water_level_tb___024root(Vday17_water_level_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday17_water_level_tb___024root___ctor_var_reset(this);
}

void Vday17_water_level_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday17_water_level_tb___024root::~Vday17_water_level_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
