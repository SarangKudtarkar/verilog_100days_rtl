// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY21_MUX_PISO_TB__SYMS_H_
#define VERILATED_VDAY21_MUX_PISO_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday21_mux_piso_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday21_mux_piso_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday21_mux_piso_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday21_mux_piso_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday21_mux_piso_tb___024root   TOP;

    // CONSTRUCTORS
    Vday21_mux_piso_tb__Syms(VerilatedContext* contextp, const char* namep, Vday21_mux_piso_tb* modelp);
    ~Vday21_mux_piso_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
