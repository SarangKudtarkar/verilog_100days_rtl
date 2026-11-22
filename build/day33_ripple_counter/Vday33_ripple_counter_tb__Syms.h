// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY33_RIPPLE_COUNTER_TB__SYMS_H_
#define VERILATED_VDAY33_RIPPLE_COUNTER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday33_ripple_counter_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday33_ripple_counter_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday33_ripple_counter_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday33_ripple_counter_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday33_ripple_counter_tb___024root TOP;

    // CONSTRUCTORS
    Vday33_ripple_counter_tb__Syms(VerilatedContext* contextp, const char* namep, Vday33_ripple_counter_tb* modelp);
    ~Vday33_ripple_counter_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
