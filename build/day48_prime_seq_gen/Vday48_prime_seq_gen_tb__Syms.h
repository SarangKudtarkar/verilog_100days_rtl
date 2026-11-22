// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY48_PRIME_SEQ_GEN_TB__SYMS_H_
#define VERILATED_VDAY48_PRIME_SEQ_GEN_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday48_prime_seq_gen_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday48_prime_seq_gen_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday48_prime_seq_gen_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday48_prime_seq_gen_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday48_prime_seq_gen_tb___024root TOP;

    // CONSTRUCTORS
    Vday48_prime_seq_gen_tb__Syms(VerilatedContext* contextp, const char* namep, Vday48_prime_seq_gen_tb* modelp);
    ~Vday48_prime_seq_gen_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
