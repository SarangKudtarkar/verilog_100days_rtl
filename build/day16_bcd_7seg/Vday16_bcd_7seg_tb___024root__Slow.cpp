// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday16_bcd_7seg_tb.h for the primary calling header

#include "Vday16_bcd_7seg_tb__pch.h"

// Parameter definitions for Vday16_bcd_7seg_tb___024root
constexpr VlUnpacked<CData/*6:0*/, 10> Vday16_bcd_7seg_tb___024root::day16_bcd_7seg_tb__DOT__EXP;


void Vday16_bcd_7seg_tb___024root___ctor_var_reset(Vday16_bcd_7seg_tb___024root* vlSelf);

Vday16_bcd_7seg_tb___024root::Vday16_bcd_7seg_tb___024root(Vday16_bcd_7seg_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday16_bcd_7seg_tb___024root___ctor_var_reset(this);
}

void Vday16_bcd_7seg_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday16_bcd_7seg_tb___024root::~Vday16_bcd_7seg_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
