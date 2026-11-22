// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY22_DEMUX_SIPO_TB__SYMS_H_
#define VERILATED_VDAY22_DEMUX_SIPO_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday22_demux_sipo_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday22_demux_sipo_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday22_demux_sipo_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday22_demux_sipo_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday22_demux_sipo_tb___024root TOP;

    // CONSTRUCTORS
    Vday22_demux_sipo_tb__Syms(VerilatedContext* contextp, const char* namep, Vday22_demux_sipo_tb* modelp);
    ~Vday22_demux_sipo_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
