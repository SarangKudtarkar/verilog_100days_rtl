// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday50_round_robin_arbiter_tb__pch.h"

//============================================================
// Constructors

Vday50_round_robin_arbiter_tb::Vday50_round_robin_arbiter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday50_round_robin_arbiter_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday50_round_robin_arbiter_tb::Vday50_round_robin_arbiter_tb(const char* _vcname__)
    : Vday50_round_robin_arbiter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday50_round_robin_arbiter_tb::~Vday50_round_robin_arbiter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday50_round_robin_arbiter_tb___024root___eval_debug_assertions(Vday50_round_robin_arbiter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_static(Vday50_round_robin_arbiter_tb___024root* vlSelf);
void Vday50_round_robin_arbiter_tb___024root___eval_initial(Vday50_round_robin_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday50_round_robin_arbiter_tb___024root___eval_stl(Vday50_round_robin_arbiter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday50_round_robin_arbiter_tb___024root___eval_sample(Vday50_round_robin_arbiter_tb___024root* vlSelf);
bool Vday50_round_robin_arbiter_tb___024root___eval_ico(Vday50_round_robin_arbiter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday50_round_robin_arbiter_tb___024root___eval_act(Vday50_round_robin_arbiter_tb___024root* vlSelf);
bool Vday50_round_robin_arbiter_tb___024root___eval_inact(Vday50_round_robin_arbiter_tb___024root* vlSelf);
bool Vday50_round_robin_arbiter_tb___024root___eval_nba(Vday50_round_robin_arbiter_tb___024root* vlSelf);
bool Vday50_round_robin_arbiter_tb___024root___eval_obs(Vday50_round_robin_arbiter_tb___024root* vlSelf);
bool Vday50_round_robin_arbiter_tb___024root___eval_react(Vday50_round_robin_arbiter_tb___024root* vlSelf);
void Vday50_round_robin_arbiter_tb___024root___eval_postponed(Vday50_round_robin_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_final(Vday50_round_robin_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__stl(Vday50_round_robin_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__ico(Vday50_round_robin_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__act(Vday50_round_robin_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__nba(Vday50_round_robin_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__obs(Vday50_round_robin_arbiter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__react(Vday50_round_robin_arbiter_tb___024root* vlSelf);

void Vday50_round_robin_arbiter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday50_round_robin_arbiter_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday50_round_robin_arbiter_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday50_round_robin_arbiter_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday50_round_robin_arbiter_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday50_round_robin_arbiter_tb::evalStatic() {
    Vday50_round_robin_arbiter_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday50_round_robin_arbiter_tb::evalInitial() {
    Vday50_round_robin_arbiter_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday50_round_robin_arbiter_tb::evalStl(bool firstIteration) {
    return Vday50_round_robin_arbiter_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday50_round_robin_arbiter_tb::evalSample() {
    Vday50_round_robin_arbiter_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday50_round_robin_arbiter_tb::evalIco(bool firstIteration) {
    return Vday50_round_robin_arbiter_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday50_round_robin_arbiter_tb::evalAct() {
    return Vday50_round_robin_arbiter_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday50_round_robin_arbiter_tb::evalInact() {
    return Vday50_round_robin_arbiter_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday50_round_robin_arbiter_tb::evalNba() {
    return Vday50_round_robin_arbiter_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday50_round_robin_arbiter_tb::evalObs() {
    return Vday50_round_robin_arbiter_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday50_round_robin_arbiter_tb::evalReact() {
    return Vday50_round_robin_arbiter_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday50_round_robin_arbiter_tb::evalPostponed() {
    Vday50_round_robin_arbiter_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday50_round_robin_arbiter_tb::evalFinal() {
    Vday50_round_robin_arbiter_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb::dumpTriggersStl() {
    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb::dumpTriggersIco() {
    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb::dumpTriggersAct() {
    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb::dumpTriggersNba() {
    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb::dumpTriggersObs() {
    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb::dumpTriggersReact() {
    Vday50_round_robin_arbiter_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday50_round_robin_arbiter_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday50_round_robin_arbiter_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday50_round_robin_arbiter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday50_round_robin_arbiter_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday50_round_robin_arbiter_tb::hierName() const { return vlSymsp->name(); }
const char* Vday50_round_robin_arbiter_tb::modelName() const { return "Vday50_round_robin_arbiter_tb"; }
unsigned Vday50_round_robin_arbiter_tb::threads() const { return 1; }
void Vday50_round_robin_arbiter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday50_round_robin_arbiter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
