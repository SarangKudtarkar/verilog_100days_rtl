// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday23_majority5_tb__pch.h"

//============================================================
// Constructors

Vday23_majority5_tb::Vday23_majority5_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday23_majority5_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday23_majority5_tb::Vday23_majority5_tb(const char* _vcname__)
    : Vday23_majority5_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday23_majority5_tb::~Vday23_majority5_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday23_majority5_tb___024root___eval_debug_assertions(Vday23_majority5_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday23_majority5_tb___024root___eval_static(Vday23_majority5_tb___024root* vlSelf);
void Vday23_majority5_tb___024root___eval_initial(Vday23_majority5_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday23_majority5_tb___024root___eval_stl(Vday23_majority5_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday23_majority5_tb___024root___eval_sample(Vday23_majority5_tb___024root* vlSelf);
bool Vday23_majority5_tb___024root___eval_ico(Vday23_majority5_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday23_majority5_tb___024root___eval_act(Vday23_majority5_tb___024root* vlSelf);
bool Vday23_majority5_tb___024root___eval_inact(Vday23_majority5_tb___024root* vlSelf);
bool Vday23_majority5_tb___024root___eval_nba(Vday23_majority5_tb___024root* vlSelf);
bool Vday23_majority5_tb___024root___eval_obs(Vday23_majority5_tb___024root* vlSelf);
bool Vday23_majority5_tb___024root___eval_react(Vday23_majority5_tb___024root* vlSelf);
void Vday23_majority5_tb___024root___eval_postponed(Vday23_majority5_tb___024root* vlSelf);
VL_ATTR_COLD void Vday23_majority5_tb___024root___eval_final(Vday23_majority5_tb___024root* vlSelf);
VL_ATTR_COLD void Vday23_majority5_tb___024root___eval_dump_triggers__stl(Vday23_majority5_tb___024root* vlSelf);
VL_ATTR_COLD void Vday23_majority5_tb___024root___eval_dump_triggers__ico(Vday23_majority5_tb___024root* vlSelf);
VL_ATTR_COLD void Vday23_majority5_tb___024root___eval_dump_triggers__act(Vday23_majority5_tb___024root* vlSelf);
VL_ATTR_COLD void Vday23_majority5_tb___024root___eval_dump_triggers__nba(Vday23_majority5_tb___024root* vlSelf);
VL_ATTR_COLD void Vday23_majority5_tb___024root___eval_dump_triggers__obs(Vday23_majority5_tb___024root* vlSelf);
VL_ATTR_COLD void Vday23_majority5_tb___024root___eval_dump_triggers__react(Vday23_majority5_tb___024root* vlSelf);

void Vday23_majority5_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday23_majority5_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday23_majority5_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday23_majority5_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday23_majority5_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday23_majority5_tb::evalStatic() {
    Vday23_majority5_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday23_majority5_tb::evalInitial() {
    Vday23_majority5_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday23_majority5_tb::evalStl(bool firstIteration) {
    return Vday23_majority5_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday23_majority5_tb::evalSample() {
    Vday23_majority5_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday23_majority5_tb::evalIco(bool firstIteration) {
    return Vday23_majority5_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday23_majority5_tb::evalAct() {
    return Vday23_majority5_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday23_majority5_tb::evalInact() {
    return Vday23_majority5_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday23_majority5_tb::evalNba() {
    return Vday23_majority5_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday23_majority5_tb::evalObs() {
    return Vday23_majority5_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday23_majority5_tb::evalReact() {
    return Vday23_majority5_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday23_majority5_tb::evalPostponed() {
    Vday23_majority5_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday23_majority5_tb::evalFinal() {
    Vday23_majority5_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday23_majority5_tb::dumpTriggersStl() {
    Vday23_majority5_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday23_majority5_tb::dumpTriggersIco() {
    Vday23_majority5_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday23_majority5_tb::dumpTriggersAct() {
    Vday23_majority5_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday23_majority5_tb::dumpTriggersNba() {
    Vday23_majority5_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday23_majority5_tb::dumpTriggersObs() {
    Vday23_majority5_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday23_majority5_tb::dumpTriggersReact() {
    Vday23_majority5_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday23_majority5_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday23_majority5_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday23_majority5_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday23_majority5_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday23_majority5_tb::hierName() const { return vlSymsp->name(); }
const char* Vday23_majority5_tb::modelName() const { return "Vday23_majority5_tb"; }
unsigned Vday23_majority5_tb::threads() const { return 1; }
void Vday23_majority5_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday23_majority5_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
