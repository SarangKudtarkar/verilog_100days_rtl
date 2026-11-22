// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY07_CLA_4BIT_TB__SYMS_H_
#define VERILATED_VDAY07_CLA_4BIT_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday07_cla_4bit_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday07_cla_4bit_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday07_cla_4bit_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday07_cla_4bit_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday07_cla_4bit_tb___024root   TOP;

    // CONSTRUCTORS
    Vday07_cla_4bit_tb__Syms(VerilatedContext* contextp, const char* namep, Vday07_cla_4bit_tb* modelp);
    ~Vday07_cla_4bit_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
