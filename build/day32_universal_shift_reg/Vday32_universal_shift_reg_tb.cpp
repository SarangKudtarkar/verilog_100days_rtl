// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday32_universal_shift_reg_tb__pch.h"

//============================================================
// Constructors

Vday32_universal_shift_reg_tb::Vday32_universal_shift_reg_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday32_universal_shift_reg_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday32_universal_shift_reg_tb::Vday32_universal_shift_reg_tb(const char* _vcname__)
    : Vday32_universal_shift_reg_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday32_universal_shift_reg_tb::~Vday32_universal_shift_reg_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday32_universal_shift_reg_tb___024root___eval_debug_assertions(Vday32_universal_shift_reg_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday32_universal_shift_reg_tb___024root___eval_static(Vday32_universal_shift_reg_tb___024root* vlSelf);
void Vday32_universal_shift_reg_tb___024root___eval_initial(Vday32_universal_shift_reg_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday32_universal_shift_reg_tb___024root___eval_stl(Vday32_universal_shift_reg_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday32_universal_shift_reg_tb___024root___eval_sample(Vday32_universal_shift_reg_tb___024root* vlSelf);
bool Vday32_universal_shift_reg_tb___024root___eval_ico(Vday32_universal_shift_reg_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday32_universal_shift_reg_tb___024root___eval_act(Vday32_universal_shift_reg_tb___024root* vlSelf);
bool Vday32_universal_shift_reg_tb___024root___eval_inact(Vday32_universal_shift_reg_tb___024root* vlSelf);
bool Vday32_universal_shift_reg_tb___024root___eval_nba(Vday32_universal_shift_reg_tb___024root* vlSelf);
bool Vday32_universal_shift_reg_tb___024root___eval_obs(Vday32_universal_shift_reg_tb___024root* vlSelf);
bool Vday32_universal_shift_reg_tb___024root___eval_react(Vday32_universal_shift_reg_tb___024root* vlSelf);
void Vday32_universal_shift_reg_tb___024root___eval_postponed(Vday32_universal_shift_reg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday32_universal_shift_reg_tb___024root___eval_final(Vday32_universal_shift_reg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__stl(Vday32_universal_shift_reg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__ico(Vday32_universal_shift_reg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__act(Vday32_universal_shift_reg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__nba(Vday32_universal_shift_reg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__obs(Vday32_universal_shift_reg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__react(Vday32_universal_shift_reg_tb___024root* vlSelf);

void Vday32_universal_shift_reg_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday32_universal_shift_reg_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday32_universal_shift_reg_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday32_universal_shift_reg_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday32_universal_shift_reg_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday32_universal_shift_reg_tb::evalStatic() {
    Vday32_universal_shift_reg_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday32_universal_shift_reg_tb::evalInitial() {
    Vday32_universal_shift_reg_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday32_universal_shift_reg_tb::evalStl(bool firstIteration) {
    return Vday32_universal_shift_reg_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday32_universal_shift_reg_tb::evalSample() {
    Vday32_universal_shift_reg_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday32_universal_shift_reg_tb::evalIco(bool firstIteration) {
    return Vday32_universal_shift_reg_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday32_universal_shift_reg_tb::evalAct() {
    return Vday32_universal_shift_reg_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday32_universal_shift_reg_tb::evalInact() {
    return Vday32_universal_shift_reg_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday32_universal_shift_reg_tb::evalNba() {
    return Vday32_universal_shift_reg_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday32_universal_shift_reg_tb::evalObs() {
    return Vday32_universal_shift_reg_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday32_universal_shift_reg_tb::evalReact() {
    return Vday32_universal_shift_reg_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday32_universal_shift_reg_tb::evalPostponed() {
    Vday32_universal_shift_reg_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday32_universal_shift_reg_tb::evalFinal() {
    Vday32_universal_shift_reg_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday32_universal_shift_reg_tb::dumpTriggersStl() {
    Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday32_universal_shift_reg_tb::dumpTriggersIco() {
    Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday32_universal_shift_reg_tb::dumpTriggersAct() {
    Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday32_universal_shift_reg_tb::dumpTriggersNba() {
    Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday32_universal_shift_reg_tb::dumpTriggersObs() {
    Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday32_universal_shift_reg_tb::dumpTriggersReact() {
    Vday32_universal_shift_reg_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday32_universal_shift_reg_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday32_universal_shift_reg_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday32_universal_shift_reg_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday32_universal_shift_reg_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday32_universal_shift_reg_tb::hierName() const { return vlSymsp->name(); }
const char* Vday32_universal_shift_reg_tb::modelName() const { return "Vday32_universal_shift_reg_tb"; }
unsigned Vday32_universal_shift_reg_tb::threads() const { return 1; }
void Vday32_universal_shift_reg_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday32_universal_shift_reg_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
