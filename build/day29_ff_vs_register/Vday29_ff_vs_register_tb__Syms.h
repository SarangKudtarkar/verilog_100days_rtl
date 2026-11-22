// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY29_FF_VS_REGISTER_TB__SYMS_H_
#define VERILATED_VDAY29_FF_VS_REGISTER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday29_ff_vs_register_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday29_ff_vs_register_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday29_ff_vs_register_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday29_ff_vs_register_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday29_ff_vs_register_tb___024root TOP;

    // CONSTRUCTORS
    Vday29_ff_vs_register_tb__Syms(VerilatedContext* contextp, const char* namep, Vday29_ff_vs_register_tb* modelp);
    ~Vday29_ff_vs_register_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
