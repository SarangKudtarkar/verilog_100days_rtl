// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY20_ALU_TB__SYMS_H_
#define VERILATED_VDAY20_ALU_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday20_alu_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday20_alu_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday20_alu_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday20_alu_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday20_alu_tb___024root        TOP;

    // CONSTRUCTORS
    Vday20_alu_tb__Syms(VerilatedContext* contextp, const char* namep, Vday20_alu_tb* modelp);
    ~Vday20_alu_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
