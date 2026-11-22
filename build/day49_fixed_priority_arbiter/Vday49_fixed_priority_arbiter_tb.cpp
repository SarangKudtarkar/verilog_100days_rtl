// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday49_fixed_priority_arbiter_tb__pch.h"

//============================================================
// Constructors

Vday49_fixed_priority_arbiter_tb::Vday49_fixed_priority_arbiter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday49_fixed_priority_arbiter_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday49_fixed_priority_arbiter_tb::Vday49_fixed_priority_arbiter_tb(const char* _vcname__)
    : Vday49_fixed_priority_arbiter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday49_fixed_priority_arbiter_tb::~Vday49_fixed_priority_arbiter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday49_fixed_priority_arbiter_tb___024root___eval_debug_assertions(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb___024root___eval_static(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
void Vday49_fixed_priority_arbiter_tb___024root___eval_initial(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday49_fixed_priority_arbiter_tb___024root___eval_stl(Vday49_fixed_priority_arbiter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday49_fixed_priority_arbiter_tb___024root___eval_sample(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
bool Vday49_fixed_priority_arbiter_tb___024root___eval_ico(Vday49_fixed_priority_arbiter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday49_fixed_priority_arbiter_tb___024root___eval_act(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
bool Vday49_fixed_priority_arbiter_tb___024root___eval_inact(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
bool Vday49_fixed_priority_arbiter_tb___024root___eval_nba(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
bool Vday49_fixed_priority_arbiter_tb___024root___eval_obs(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
bool Vday49_fixed_priority_arbiter_tb___024root___eval_react(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
void Vday49_fixed_priority_arbiter_tb___024root___eval_postponed(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb___024root___eval_final(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__stl(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__ico(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__act(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__nba(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__obs(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__react(Vday49_fixed_priority_arbiter_tb___024root* vlSelf);

void Vday49_fixed_priority_arbiter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday49_fixed_priority_arbiter_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday49_fixed_priority_arbiter_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday49_fixed_priority_arbiter_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday49_fixed_priority_arbiter_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday49_fixed_priority_arbiter_tb::evalStatic() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday49_fixed_priority_arbiter_tb::evalInitial() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday49_fixed_priority_arbiter_tb::evalStl(bool firstIteration) {
    return Vday49_fixed_priority_arbiter_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday49_fixed_priority_arbiter_tb::evalSample() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday49_fixed_priority_arbiter_tb::evalIco(bool firstIteration) {
    return Vday49_fixed_priority_arbiter_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday49_fixed_priority_arbiter_tb::evalAct() {
    return Vday49_fixed_priority_arbiter_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday49_fixed_priority_arbiter_tb::evalInact() {
    return Vday49_fixed_priority_arbiter_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday49_fixed_priority_arbiter_tb::evalNba() {
    return Vday49_fixed_priority_arbiter_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday49_fixed_priority_arbiter_tb::evalObs() {
    return Vday49_fixed_priority_arbiter_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday49_fixed_priority_arbiter_tb::evalReact() {
    return Vday49_fixed_priority_arbiter_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday49_fixed_priority_arbiter_tb::evalPostponed() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday49_fixed_priority_arbiter_tb::evalFinal() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb::dumpTriggersStl() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb::dumpTriggersIco() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb::dumpTriggersAct() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb::dumpTriggersNba() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb::dumpTriggersObs() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb::dumpTriggersReact() {
    Vday49_fixed_priority_arbiter_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday49_fixed_priority_arbiter_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday49_fixed_priority_arbiter_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday49_fixed_priority_arbiter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday49_fixed_priority_arbiter_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday49_fixed_priority_arbiter_tb::hierName() const { return vlSymsp->name(); }
const char* Vday49_fixed_priority_arbiter_tb::modelName() const { return "Vday49_fixed_priority_arbiter_tb"; }
unsigned Vday49_fixed_priority_arbiter_tb::threads() const { return 1; }
void Vday49_fixed_priority_arbiter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday49_fixed_priority_arbiter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
