// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday44_dual_port_ram_tb.h for the primary calling header

#include "Vday44_dual_port_ram_tb__pch.h"

void Vday44_dual_port_ram_tb___024root___ctor_var_reset(Vday44_dual_port_ram_tb___024root* vlSelf);

Vday44_dual_port_ram_tb___024root::Vday44_dual_port_ram_tb___024root(Vday44_dual_port_ram_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday44_dual_port_ram_tb___024root___ctor_var_reset(this);
}

void Vday44_dual_port_ram_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday44_dual_port_ram_tb___024root::~Vday44_dual_port_ram_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
