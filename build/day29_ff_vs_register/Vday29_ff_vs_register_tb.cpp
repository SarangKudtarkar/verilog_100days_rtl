// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday29_ff_vs_register_tb__pch.h"

//============================================================
// Constructors

Vday29_ff_vs_register_tb::Vday29_ff_vs_register_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday29_ff_vs_register_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday29_ff_vs_register_tb::Vday29_ff_vs_register_tb(const char* _vcname__)
    : Vday29_ff_vs_register_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday29_ff_vs_register_tb::~Vday29_ff_vs_register_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday29_ff_vs_register_tb___024root___eval_debug_assertions(Vday29_ff_vs_register_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_static(Vday29_ff_vs_register_tb___024root* vlSelf);
void Vday29_ff_vs_register_tb___024root___eval_initial(Vday29_ff_vs_register_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday29_ff_vs_register_tb___024root___eval_stl(Vday29_ff_vs_register_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday29_ff_vs_register_tb___024root___eval_sample(Vday29_ff_vs_register_tb___024root* vlSelf);
bool Vday29_ff_vs_register_tb___024root___eval_ico(Vday29_ff_vs_register_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday29_ff_vs_register_tb___024root___eval_act(Vday29_ff_vs_register_tb___024root* vlSelf);
bool Vday29_ff_vs_register_tb___024root___eval_inact(Vday29_ff_vs_register_tb___024root* vlSelf);
bool Vday29_ff_vs_register_tb___024root___eval_nba(Vday29_ff_vs_register_tb___024root* vlSelf);
bool Vday29_ff_vs_register_tb___024root___eval_obs(Vday29_ff_vs_register_tb___024root* vlSelf);
bool Vday29_ff_vs_register_tb___024root___eval_react(Vday29_ff_vs_register_tb___024root* vlSelf);
void Vday29_ff_vs_register_tb___024root___eval_postponed(Vday29_ff_vs_register_tb___024root* vlSelf);
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_final(Vday29_ff_vs_register_tb___024root* vlSelf);
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__stl(Vday29_ff_vs_register_tb___024root* vlSelf);
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__ico(Vday29_ff_vs_register_tb___024root* vlSelf);
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__act(Vday29_ff_vs_register_tb___024root* vlSelf);
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__nba(Vday29_ff_vs_register_tb___024root* vlSelf);
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__obs(Vday29_ff_vs_register_tb___024root* vlSelf);
VL_ATTR_COLD void Vday29_ff_vs_register_tb___024root___eval_dump_triggers__react(Vday29_ff_vs_register_tb___024root* vlSelf);

void Vday29_ff_vs_register_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday29_ff_vs_register_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday29_ff_vs_register_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday29_ff_vs_register_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday29_ff_vs_register_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday29_ff_vs_register_tb::evalStatic() {
    Vday29_ff_vs_register_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday29_ff_vs_register_tb::evalInitial() {
    Vday29_ff_vs_register_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday29_ff_vs_register_tb::evalStl(bool firstIteration) {
    return Vday29_ff_vs_register_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday29_ff_vs_register_tb::evalSample() {
    Vday29_ff_vs_register_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday29_ff_vs_register_tb::evalIco(bool firstIteration) {
    return Vday29_ff_vs_register_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday29_ff_vs_register_tb::evalAct() {
    return Vday29_ff_vs_register_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday29_ff_vs_register_tb::evalInact() {
    return Vday29_ff_vs_register_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday29_ff_vs_register_tb::evalNba() {
    return Vday29_ff_vs_register_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday29_ff_vs_register_tb::evalObs() {
    return Vday29_ff_vs_register_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday29_ff_vs_register_tb::evalReact() {
    return Vday29_ff_vs_register_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday29_ff_vs_register_tb::evalPostponed() {
    Vday29_ff_vs_register_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday29_ff_vs_register_tb::evalFinal() {
    Vday29_ff_vs_register_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb::dumpTriggersStl() {
    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb::dumpTriggersIco() {
    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb::dumpTriggersAct() {
    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb::dumpTriggersNba() {
    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb::dumpTriggersObs() {
    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday29_ff_vs_register_tb::dumpTriggersReact() {
    Vday29_ff_vs_register_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday29_ff_vs_register_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday29_ff_vs_register_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday29_ff_vs_register_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday29_ff_vs_register_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday29_ff_vs_register_tb::hierName() const { return vlSymsp->name(); }
const char* Vday29_ff_vs_register_tb::modelName() const { return "Vday29_ff_vs_register_tb"; }
unsigned Vday29_ff_vs_register_tb::threads() const { return 1; }
void Vday29_ff_vs_register_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday29_ff_vs_register_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
