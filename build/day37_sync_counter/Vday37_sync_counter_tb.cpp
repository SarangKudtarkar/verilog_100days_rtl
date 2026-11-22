// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday37_sync_counter_tb__pch.h"

//============================================================
// Constructors

Vday37_sync_counter_tb::Vday37_sync_counter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday37_sync_counter_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday37_sync_counter_tb::Vday37_sync_counter_tb(const char* _vcname__)
    : Vday37_sync_counter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday37_sync_counter_tb::~Vday37_sync_counter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday37_sync_counter_tb___024root___eval_debug_assertions(Vday37_sync_counter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_static(Vday37_sync_counter_tb___024root* vlSelf);
void Vday37_sync_counter_tb___024root___eval_initial(Vday37_sync_counter_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday37_sync_counter_tb___024root___eval_stl(Vday37_sync_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday37_sync_counter_tb___024root___eval_sample(Vday37_sync_counter_tb___024root* vlSelf);
bool Vday37_sync_counter_tb___024root___eval_ico(Vday37_sync_counter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday37_sync_counter_tb___024root___eval_act(Vday37_sync_counter_tb___024root* vlSelf);
bool Vday37_sync_counter_tb___024root___eval_inact(Vday37_sync_counter_tb___024root* vlSelf);
bool Vday37_sync_counter_tb___024root___eval_nba(Vday37_sync_counter_tb___024root* vlSelf);
bool Vday37_sync_counter_tb___024root___eval_obs(Vday37_sync_counter_tb___024root* vlSelf);
bool Vday37_sync_counter_tb___024root___eval_react(Vday37_sync_counter_tb___024root* vlSelf);
void Vday37_sync_counter_tb___024root___eval_postponed(Vday37_sync_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_final(Vday37_sync_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__stl(Vday37_sync_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__ico(Vday37_sync_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__act(Vday37_sync_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__nba(Vday37_sync_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__obs(Vday37_sync_counter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday37_sync_counter_tb___024root___eval_dump_triggers__react(Vday37_sync_counter_tb___024root* vlSelf);

void Vday37_sync_counter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday37_sync_counter_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday37_sync_counter_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday37_sync_counter_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday37_sync_counter_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday37_sync_counter_tb::evalStatic() {
    Vday37_sync_counter_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday37_sync_counter_tb::evalInitial() {
    Vday37_sync_counter_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday37_sync_counter_tb::evalStl(bool firstIteration) {
    return Vday37_sync_counter_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday37_sync_counter_tb::evalSample() {
    Vday37_sync_counter_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday37_sync_counter_tb::evalIco(bool firstIteration) {
    return Vday37_sync_counter_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday37_sync_counter_tb::evalAct() {
    return Vday37_sync_counter_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday37_sync_counter_tb::evalInact() {
    return Vday37_sync_counter_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday37_sync_counter_tb::evalNba() {
    return Vday37_sync_counter_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday37_sync_counter_tb::evalObs() {
    return Vday37_sync_counter_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday37_sync_counter_tb::evalReact() {
    return Vday37_sync_counter_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday37_sync_counter_tb::evalPostponed() {
    Vday37_sync_counter_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday37_sync_counter_tb::evalFinal() {
    Vday37_sync_counter_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday37_sync_counter_tb::dumpTriggersStl() {
    Vday37_sync_counter_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday37_sync_counter_tb::dumpTriggersIco() {
    Vday37_sync_counter_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday37_sync_counter_tb::dumpTriggersAct() {
    Vday37_sync_counter_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday37_sync_counter_tb::dumpTriggersNba() {
    Vday37_sync_counter_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday37_sync_counter_tb::dumpTriggersObs() {
    Vday37_sync_counter_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday37_sync_counter_tb::dumpTriggersReact() {
    Vday37_sync_counter_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday37_sync_counter_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday37_sync_counter_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday37_sync_counter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday37_sync_counter_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday37_sync_counter_tb::hierName() const { return vlSymsp->name(); }
const char* Vday37_sync_counter_tb::modelName() const { return "Vday37_sync_counter_tb"; }
unsigned Vday37_sync_counter_tb::threads() const { return 1; }
void Vday37_sync_counter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday37_sync_counter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
