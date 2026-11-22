// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY41_MEMORY_1MB_TB__SYMS_H_
#define VERILATED_VDAY41_MEMORY_1MB_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday41_memory_1mb_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday41_memory_1mb_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday41_memory_1mb_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday41_memory_1mb_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday41_memory_1mb_tb___024root TOP;

    // CONSTRUCTORS
    Vday41_memory_1mb_tb__Syms(VerilatedContext* contextp, const char* namep, Vday41_memory_1mb_tb* modelp);
    ~Vday41_memory_1mb_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
