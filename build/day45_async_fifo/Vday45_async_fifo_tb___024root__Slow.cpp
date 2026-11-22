// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday45_async_fifo_tb.h for the primary calling header

#include "Vday45_async_fifo_tb__pch.h"

void Vday45_async_fifo_tb___024root___ctor_var_reset(Vday45_async_fifo_tb___024root* vlSelf);

Vday45_async_fifo_tb___024root::Vday45_async_fifo_tb___024root(Vday45_async_fifo_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday45_async_fifo_tb___024root___ctor_var_reset(this);
}

void Vday45_async_fifo_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday45_async_fifo_tb___024root::~Vday45_async_fifo_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
