// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday45_async_fifo_tb__pch.h"

//============================================================
// Constructors

Vday45_async_fifo_tb::Vday45_async_fifo_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday45_async_fifo_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday45_async_fifo_tb::Vday45_async_fifo_tb(const char* _vcname__)
    : Vday45_async_fifo_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday45_async_fifo_tb::~Vday45_async_fifo_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday45_async_fifo_tb___024root___eval_debug_assertions(Vday45_async_fifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_static(Vday45_async_fifo_tb___024root* vlSelf);
void Vday45_async_fifo_tb___024root___eval_initial(Vday45_async_fifo_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday45_async_fifo_tb___024root___eval_stl(Vday45_async_fifo_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday45_async_fifo_tb___024root___eval_sample(Vday45_async_fifo_tb___024root* vlSelf);
bool Vday45_async_fifo_tb___024root___eval_ico(Vday45_async_fifo_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday45_async_fifo_tb___024root___eval_act(Vday45_async_fifo_tb___024root* vlSelf);
bool Vday45_async_fifo_tb___024root___eval_inact(Vday45_async_fifo_tb___024root* vlSelf);
bool Vday45_async_fifo_tb___024root___eval_nba(Vday45_async_fifo_tb___024root* vlSelf);
bool Vday45_async_fifo_tb___024root___eval_obs(Vday45_async_fifo_tb___024root* vlSelf);
bool Vday45_async_fifo_tb___024root___eval_react(Vday45_async_fifo_tb___024root* vlSelf);
void Vday45_async_fifo_tb___024root___eval_postponed(Vday45_async_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_final(Vday45_async_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__stl(Vday45_async_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__ico(Vday45_async_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__act(Vday45_async_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__nba(Vday45_async_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__obs(Vday45_async_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday45_async_fifo_tb___024root___eval_dump_triggers__react(Vday45_async_fifo_tb___024root* vlSelf);

void Vday45_async_fifo_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday45_async_fifo_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday45_async_fifo_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday45_async_fifo_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday45_async_fifo_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday45_async_fifo_tb::evalStatic() {
    Vday45_async_fifo_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday45_async_fifo_tb::evalInitial() {
    Vday45_async_fifo_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday45_async_fifo_tb::evalStl(bool firstIteration) {
    return Vday45_async_fifo_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday45_async_fifo_tb::evalSample() {
    Vday45_async_fifo_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday45_async_fifo_tb::evalIco(bool firstIteration) {
    return Vday45_async_fifo_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday45_async_fifo_tb::evalAct() {
    return Vday45_async_fifo_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday45_async_fifo_tb::evalInact() {
    return Vday45_async_fifo_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday45_async_fifo_tb::evalNba() {
    return Vday45_async_fifo_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday45_async_fifo_tb::evalObs() {
    return Vday45_async_fifo_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday45_async_fifo_tb::evalReact() {
    return Vday45_async_fifo_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday45_async_fifo_tb::evalPostponed() {
    Vday45_async_fifo_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday45_async_fifo_tb::evalFinal() {
    Vday45_async_fifo_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday45_async_fifo_tb::dumpTriggersStl() {
    Vday45_async_fifo_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday45_async_fifo_tb::dumpTriggersIco() {
    Vday45_async_fifo_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday45_async_fifo_tb::dumpTriggersAct() {
    Vday45_async_fifo_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday45_async_fifo_tb::dumpTriggersNba() {
    Vday45_async_fifo_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday45_async_fifo_tb::dumpTriggersObs() {
    Vday45_async_fifo_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday45_async_fifo_tb::dumpTriggersReact() {
    Vday45_async_fifo_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday45_async_fifo_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday45_async_fifo_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday45_async_fifo_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday45_async_fifo_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday45_async_fifo_tb::hierName() const { return vlSymsp->name(); }
const char* Vday45_async_fifo_tb::modelName() const { return "Vday45_async_fifo_tb"; }
unsigned Vday45_async_fifo_tb::threads() const { return 1; }
void Vday45_async_fifo_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday45_async_fifo_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
