// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday47_moore_seq_detector_tb.h for the primary calling header

#include "Vday47_moore_seq_detector_tb__pch.h"

void Vday47_moore_seq_detector_tb___024root___ctor_var_reset(Vday47_moore_seq_detector_tb___024root* vlSelf);

Vday47_moore_seq_detector_tb___024root::Vday47_moore_seq_detector_tb___024root(Vday47_moore_seq_detector_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday47_moore_seq_detector_tb___024root___ctor_var_reset(this);
}

void Vday47_moore_seq_detector_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday47_moore_seq_detector_tb___024root::~Vday47_moore_seq_detector_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
