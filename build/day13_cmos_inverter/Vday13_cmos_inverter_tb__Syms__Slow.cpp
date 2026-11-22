// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vday13_cmos_inverter_tb__pch.h"

Vday13_cmos_inverter_tb__Syms::Vday13_cmos_inverter_tb__Syms(VerilatedContext* contextp, const char* namep, Vday13_cmos_inverter_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(228);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

Vday13_cmos_inverter_tb__Syms::~Vday13_cmos_inverter_tb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
}
