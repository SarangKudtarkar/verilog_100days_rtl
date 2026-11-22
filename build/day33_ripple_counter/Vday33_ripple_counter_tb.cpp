// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday33_ripple_counter_tb__pch.h"

//============================================================
// Constructors

Vday33_ripple_counter_tb::Vday33_ripple_counter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday33_ripple_counter_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday33_ripple_counter_tb::Vday33_ripple_counter_tb(const char* _vcname__)
    : Vday33_ripple_counter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday33_ripple_counter_tb::~Vday33_ripple_counter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday33_ripple_counter_tb___024root___eval_debug_assertions(Vday33_ripple_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday33_ripple_counter_tb___024root___eval_static(Vday33_ripple_counter_tb___024root* vlSelf);
void Vday33_ripple_counter_tb___024root___eval_initial(Vday33_ripple_counter_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday33_ripple_counter_tb___024root___eval_stl(Vday33_ripple_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday33_ripple_counter_tb___024root___eval_sample(Vday33_ripple_counter_tb___024root* vlSelf);
bool Vday33_ripple_counter_tb___024root___eval_ico(Vday33_ripple_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday33_ripple_counter_tb___024root___eval_act(Vday33_ripple_counter_tb___024root* vlSelf);
bool Vday33_ripple_counter_tb___024root___eval_inact(Vday33_ripple_counter_tb___024root* vlSelf);
bool Vday33_ripple_counter_tb___024root___eval_nba(Vday33_ripple_counter_tb___024root* vlSelf);
bool Vday33_ripple_counter_tb___024root___eval_obs(Vday33_ripple_counter_tb___024root* vlSelf);
bool Vday33_ripple_counter_tb___024root___eval_react(Vday33_ripple_counter_tb___024root* vlSelf);
void Vday33_ripple_counter_tb___024root___eval_postponed(Vday33_ripple_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday33_ripple_counter_tb___024root___eval_final(Vday33_ripple_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday33_ripple_counter_tb___024root___eval_dump_triggers__stl(Vday33_ripple_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday33_ripple_counter_tb___024root___eval_dump_triggers__ico(Vday33_ripple_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday33_ripple_counter_tb___024root___eval_dump_triggers__act(Vday33_ripple_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday33_ripple_counter_tb___024root___eval_dump_triggers__nba(Vday33_ripple_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday33_ripple_counter_tb___024root___eval_dump_triggers__obs(Vday33_ripple_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday33_ripple_counter_tb___024root___eval_dump_triggers__react(Vday33_ripple_counter_tb___024root* vlSelf);

void Vday33_ripple_counter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday33_ripple_counter_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday33_ripple_counter_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday33_ripple_counter_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday33_ripple_counter_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday33_ripple_counter_tb::evalStatic() {
    Vday33_ripple_counter_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday33_ripple_counter_tb::evalInitial() {
    Vday33_ripple_counter_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday33_ripple_counter_tb::evalStl(bool firstIteration) {
    return Vday33_ripple_counter_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday33_ripple_counter_tb::evalSample() {
    Vday33_ripple_counter_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday33_ripple_counter_tb::evalIco(bool firstIteration) {
    return Vday33_ripple_counter_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday33_ripple_counter_tb::evalAct() {
    return Vday33_ripple_counter_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday33_ripple_counter_tb::evalInact() {
    return Vday33_ripple_counter_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday33_ripple_counter_tb::evalNba() {
    return Vday33_ripple_counter_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday33_ripple_counter_tb::evalObs() {
    return Vday33_ripple_counter_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday33_ripple_counter_tb::evalReact() {
    return Vday33_ripple_counter_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday33_ripple_counter_tb::evalPostponed() {
    Vday33_ripple_counter_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday33_ripple_counter_tb::evalFinal() {
    Vday33_ripple_counter_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday33_ripple_counter_tb::dumpTriggersStl() {
    Vday33_ripple_counter_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday33_ripple_counter_tb::dumpTriggersIco() {
    Vday33_ripple_counter_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday33_ripple_counter_tb::dumpTriggersAct() {
    Vday33_ripple_counter_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday33_ripple_counter_tb::dumpTriggersNba() {
    Vday33_ripple_counter_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday33_ripple_counter_tb::dumpTriggersObs() {
    Vday33_ripple_counter_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday33_ripple_counter_tb::dumpTriggersReact() {
    Vday33_ripple_counter_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday33_ripple_counter_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday33_ripple_counter_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday33_ripple_counter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday33_ripple_counter_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday33_ripple_counter_tb::hierName() const { return vlSymsp->name(); }
const char* Vday33_ripple_counter_tb::modelName() const { return "Vday33_ripple_counter_tb"; }
unsigned Vday33_ripple_counter_tb::threads() const { return 1; }
void Vday33_ripple_counter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday33_ripple_counter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
