// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday14_decoders_tb__pch.h"

//============================================================
// Constructors

Vday14_decoders_tb::Vday14_decoders_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday14_decoders_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday14_decoders_tb::Vday14_decoders_tb(const char* _vcname__)
    : Vday14_decoders_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday14_decoders_tb::~Vday14_decoders_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday14_decoders_tb___024root___eval_debug_assertions(Vday14_decoders_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday14_decoders_tb___024root___eval_static(Vday14_decoders_tb___024root* vlSelf);
void Vday14_decoders_tb___024root___eval_initial(Vday14_decoders_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday14_decoders_tb___024root___eval_stl(Vday14_decoders_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday14_decoders_tb___024root___eval_sample(Vday14_decoders_tb___024root* vlSelf);
bool Vday14_decoders_tb___024root___eval_ico(Vday14_decoders_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday14_decoders_tb___024root___eval_act(Vday14_decoders_tb___024root* vlSelf);
bool Vday14_decoders_tb___024root___eval_inact(Vday14_decoders_tb___024root* vlSelf);
bool Vday14_decoders_tb___024root___eval_nba(Vday14_decoders_tb___024root* vlSelf);
bool Vday14_decoders_tb___024root___eval_obs(Vday14_decoders_tb___024root* vlSelf);
bool Vday14_decoders_tb___024root___eval_react(Vday14_decoders_tb___024root* vlSelf);
void Vday14_decoders_tb___024root___eval_postponed(Vday14_decoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday14_decoders_tb___024root___eval_final(Vday14_decoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday14_decoders_tb___024root___eval_dump_triggers__stl(Vday14_decoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday14_decoders_tb___024root___eval_dump_triggers__ico(Vday14_decoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday14_decoders_tb___024root___eval_dump_triggers__act(Vday14_decoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday14_decoders_tb___024root___eval_dump_triggers__nba(Vday14_decoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday14_decoders_tb___024root___eval_dump_triggers__obs(Vday14_decoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday14_decoders_tb___024root___eval_dump_triggers__react(Vday14_decoders_tb___024root* vlSelf);

void Vday14_decoders_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday14_decoders_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday14_decoders_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday14_decoders_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday14_decoders_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday14_decoders_tb::evalStatic() {
    Vday14_decoders_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday14_decoders_tb::evalInitial() {
    Vday14_decoders_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday14_decoders_tb::evalStl(bool firstIteration) {
    return Vday14_decoders_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday14_decoders_tb::evalSample() {
    Vday14_decoders_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday14_decoders_tb::evalIco(bool firstIteration) {
    return Vday14_decoders_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday14_decoders_tb::evalAct() {
    return Vday14_decoders_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday14_decoders_tb::evalInact() {
    return Vday14_decoders_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday14_decoders_tb::evalNba() {
    return Vday14_decoders_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday14_decoders_tb::evalObs() {
    return Vday14_decoders_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday14_decoders_tb::evalReact() {
    return Vday14_decoders_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday14_decoders_tb::evalPostponed() {
    Vday14_decoders_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday14_decoders_tb::evalFinal() {
    Vday14_decoders_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday14_decoders_tb::dumpTriggersStl() {
    Vday14_decoders_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday14_decoders_tb::dumpTriggersIco() {
    Vday14_decoders_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday14_decoders_tb::dumpTriggersAct() {
    Vday14_decoders_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday14_decoders_tb::dumpTriggersNba() {
    Vday14_decoders_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday14_decoders_tb::dumpTriggersObs() {
    Vday14_decoders_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday14_decoders_tb::dumpTriggersReact() {
    Vday14_decoders_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday14_decoders_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday14_decoders_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday14_decoders_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday14_decoders_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday14_decoders_tb::hierName() const { return vlSymsp->name(); }
const char* Vday14_decoders_tb::modelName() const { return "Vday14_decoders_tb"; }
unsigned Vday14_decoders_tb::threads() const { return 1; }
void Vday14_decoders_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday14_decoders_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
