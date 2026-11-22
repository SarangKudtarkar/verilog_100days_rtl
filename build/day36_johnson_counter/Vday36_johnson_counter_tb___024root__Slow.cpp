// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday36_johnson_counter_tb.h for the primary calling header

#include "Vday36_johnson_counter_tb__pch.h"

// Parameter definitions for Vday36_johnson_counter_tb___024root
constexpr VlUnpacked<CData/*3:0*/, 8> Vday36_johnson_counter_tb___024root::day36_johnson_counter_tb__DOT__SEQ;


void Vday36_johnson_counter_tb___024root___ctor_var_reset(Vday36_johnson_counter_tb___024root* vlSelf);

Vday36_johnson_counter_tb___024root::Vday36_johnson_counter_tb___024root(Vday36_johnson_counter_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday36_johnson_counter_tb___024root___ctor_var_reset(this);
}

void Vday36_johnson_counter_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday36_johnson_counter_tb___024root::~Vday36_johnson_counter_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
