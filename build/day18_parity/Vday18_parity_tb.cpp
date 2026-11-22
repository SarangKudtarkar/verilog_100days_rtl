// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday18_parity_tb__pch.h"

//============================================================
// Constructors

Vday18_parity_tb::Vday18_parity_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday18_parity_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday18_parity_tb::Vday18_parity_tb(const char* _vcname__)
    : Vday18_parity_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday18_parity_tb::~Vday18_parity_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday18_parity_tb___024root___eval_debug_assertions(Vday18_parity_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday18_parity_tb___024root___eval_static(Vday18_parity_tb___024root* vlSelf);
void Vday18_parity_tb___024root___eval_initial(Vday18_parity_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday18_parity_tb___024root___eval_stl(Vday18_parity_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday18_parity_tb___024root___eval_sample(Vday18_parity_tb___024root* vlSelf);
bool Vday18_parity_tb___024root___eval_ico(Vday18_parity_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday18_parity_tb___024root___eval_act(Vday18_parity_tb___024root* vlSelf);
bool Vday18_parity_tb___024root___eval_inact(Vday18_parity_tb___024root* vlSelf);
bool Vday18_parity_tb___024root___eval_nba(Vday18_parity_tb___024root* vlSelf);
bool Vday18_parity_tb___024root___eval_obs(Vday18_parity_tb___024root* vlSelf);
bool Vday18_parity_tb___024root___eval_react(Vday18_parity_tb___024root* vlSelf);
void Vday18_parity_tb___024root___eval_postponed(Vday18_parity_tb___024root* vlSelf);
VL_ATTR_COLD void Vday18_parity_tb___024root___eval_final(Vday18_parity_tb___024root* vlSelf);
VL_ATTR_COLD void Vday18_parity_tb___024root___eval_dump_triggers__stl(Vday18_parity_tb___024root* vlSelf);
VL_ATTR_COLD void Vday18_parity_tb___024root___eval_dump_triggers__ico(Vday18_parity_tb___024root* vlSelf);
VL_ATTR_COLD void Vday18_parity_tb___024root___eval_dump_triggers__act(Vday18_parity_tb___024root* vlSelf);
VL_ATTR_COLD void Vday18_parity_tb___024root___eval_dump_triggers__nba(Vday18_parity_tb___024root* vlSelf);
VL_ATTR_COLD void Vday18_parity_tb___024root___eval_dump_triggers__obs(Vday18_parity_tb___024root* vlSelf);
VL_ATTR_COLD void Vday18_parity_tb___024root___eval_dump_triggers__react(Vday18_parity_tb___024root* vlSelf);

void Vday18_parity_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday18_parity_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday18_parity_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday18_parity_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday18_parity_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday18_parity_tb::evalStatic() {
    Vday18_parity_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday18_parity_tb::evalInitial() {
    Vday18_parity_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday18_parity_tb::evalStl(bool firstIteration) {
    return Vday18_parity_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday18_parity_tb::evalSample() {
    Vday18_parity_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday18_parity_tb::evalIco(bool firstIteration) {
    return Vday18_parity_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday18_parity_tb::evalAct() {
    return Vday18_parity_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday18_parity_tb::evalInact() {
    return Vday18_parity_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday18_parity_tb::evalNba() {
    return Vday18_parity_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday18_parity_tb::evalObs() {
    return Vday18_parity_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday18_parity_tb::evalReact() {
    return Vday18_parity_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday18_parity_tb::evalPostponed() {
    Vday18_parity_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday18_parity_tb::evalFinal() {
    Vday18_parity_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday18_parity_tb::dumpTriggersStl() {
    Vday18_parity_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday18_parity_tb::dumpTriggersIco() {
    Vday18_parity_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday18_parity_tb::dumpTriggersAct() {
    Vday18_parity_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday18_parity_tb::dumpTriggersNba() {
    Vday18_parity_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday18_parity_tb::dumpTriggersObs() {
    Vday18_parity_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday18_parity_tb::dumpTriggersReact() {
    Vday18_parity_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday18_parity_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday18_parity_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday18_parity_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday18_parity_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday18_parity_tb::hierName() const { return vlSymsp->name(); }
const char* Vday18_parity_tb::modelName() const { return "Vday18_parity_tb"; }
unsigned Vday18_parity_tb::threads() const { return 1; }
void Vday18_parity_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday18_parity_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
