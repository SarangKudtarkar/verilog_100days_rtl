// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday48_prime_seq_gen_tb.h for the primary calling header

#include "Vday48_prime_seq_gen_tb__pch.h"

// Parameter definitions for Vday48_prime_seq_gen_tb___024root
constexpr VlUnpacked<CData/*3:0*/, 5> Vday48_prime_seq_gen_tb___024root::day48_prime_seq_gen_tb__DOT__PR;


void Vday48_prime_seq_gen_tb___024root___ctor_var_reset(Vday48_prime_seq_gen_tb___024root* vlSelf);

Vday48_prime_seq_gen_tb___024root::Vday48_prime_seq_gen_tb___024root(Vday48_prime_seq_gen_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vday48_prime_seq_gen_tb___024root___ctor_var_reset(this);
}

void Vday48_prime_seq_gen_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vday48_prime_seq_gen_tb___024root::~Vday48_prime_seq_gen_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
