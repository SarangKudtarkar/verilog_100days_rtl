// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY26_SR_LATCH_TB__SYMS_H_
#define VERILATED_VDAY26_SR_LATCH_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday26_sr_latch_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday26_sr_latch_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday26_sr_latch_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday26_sr_latch_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday26_sr_latch_tb___024root   TOP;

    // CONSTRUCTORS
    Vday26_sr_latch_tb__Syms(VerilatedContext* contextp, const char* namep, Vday26_sr_latch_tb* modelp);
    ~Vday26_sr_latch_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
