// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday13_cmos_inverter_tb.h for the primary calling header

#include "Vday13_cmos_inverter_tb__pch.h"

void Vday13_cmos_inverter_tb___024root___ctor_var_reset(Vday13_cmos_inverter_tb___024root* vlSelf);

Vday13_cmos_inverter_tb___024root::Vday13_cmos_inverter_tb___024root(Vday13_cmos_inverter_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday13_cmos_inverter_tb___024root___ctor_var_reset(this);
}

void Vday13_cmos_inverter_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday13_cmos_inverter_tb___024root::~Vday13_cmos_inverter_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
