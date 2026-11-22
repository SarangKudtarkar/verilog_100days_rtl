// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday46_mealy_seq_detector_tb.h for the primary calling header

#include "Vday46_mealy_seq_detector_tb__pch.h"

void Vday46_mealy_seq_detector_tb___024root___ctor_var_reset(Vday46_mealy_seq_detector_tb___024root* vlSelf);

Vday46_mealy_seq_detector_tb___024root::Vday46_mealy_seq_detector_tb___024root(Vday46_mealy_seq_detector_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday46_mealy_seq_detector_tb___024root___ctor_var_reset(this);
}

void Vday46_mealy_seq_detector_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday46_mealy_seq_detector_tb___024root::~Vday46_mealy_seq_detector_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
