// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday25_traffic_light_tb.h for the primary calling header

#include "Vday25_traffic_light_tb__pch.h"

void Vday25_traffic_light_tb___024root___ctor_var_reset(Vday25_traffic_light_tb___024root* vlSelf);

Vday25_traffic_light_tb___024root::Vday25_traffic_light_tb___024root(Vday25_traffic_light_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday25_traffic_light_tb___024root___ctor_var_reset(this);
}

void Vday25_traffic_light_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday25_traffic_light_tb___024root::~Vday25_traffic_light_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
