// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY32_UNIVERSAL_SHIFT_REG_TB__SYMS_H_
#define VERILATED_VDAY32_UNIVERSAL_SHIFT_REG_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday32_universal_shift_reg_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday32_universal_shift_reg_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday32_universal_shift_reg_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday32_universal_shift_reg_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday32_universal_shift_reg_tb___024root TOP;

    // CONSTRUCTORS
    Vday32_universal_shift_reg_tb__Syms(VerilatedContext* contextp, const char* namep, Vday32_universal_shift_reg_tb* modelp);
    ~Vday32_universal_shift_reg_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
