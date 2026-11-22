// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY13_CMOS_INVERTER_TB__SYMS_H_
#define VERILATED_VDAY13_CMOS_INVERTER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vday13_cmos_inverter_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday13_cmos_inverter_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vday13_cmos_inverter_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday13_cmos_inverter_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vday13_cmos_inverter_tb___024root TOP;

    // CONSTRUCTORS
    Vday13_cmos_inverter_tb__Syms(VerilatedContext* contextp, const char* namep, Vday13_cmos_inverter_tb* modelp);
    ~Vday13_cmos_inverter_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
