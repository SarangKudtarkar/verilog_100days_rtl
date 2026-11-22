// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY23_MAJORITY5_TB__SYMS_H_
#define VERILATED_VDAY23_MAJORITY5_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday23_majority5_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday23_majority5_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday23_majority5_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday23_majority5_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday23_majority5_tb___024root  TOP;

    // CONSTRUCTORS
    Vday23_majority5_tb__Syms(VerilatedContext* contextp, const char* namep, Vday23_majority5_tb* modelp);
    ~Vday23_majority5_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
