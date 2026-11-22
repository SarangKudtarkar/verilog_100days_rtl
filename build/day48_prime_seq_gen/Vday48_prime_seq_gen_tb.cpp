// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday48_prime_seq_gen_tb__pch.h"

//============================================================
// Constructors

Vday48_prime_seq_gen_tb::Vday48_prime_seq_gen_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday48_prime_seq_gen_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday48_prime_seq_gen_tb::Vday48_prime_seq_gen_tb(const char* _vcname__)
    : Vday48_prime_seq_gen_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday48_prime_seq_gen_tb::~Vday48_prime_seq_gen_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday48_prime_seq_gen_tb___024root___eval_debug_assertions(Vday48_prime_seq_gen_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday48_prime_seq_gen_tb___024root___eval_static(Vday48_prime_seq_gen_tb___024root* vlSelf);
void Vday48_prime_seq_gen_tb___024root___eval_initial(Vday48_prime_seq_gen_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday48_prime_seq_gen_tb___024root___eval_stl(Vday48_prime_seq_gen_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday48_prime_seq_gen_tb___024root___eval_sample(Vday48_prime_seq_gen_tb___024root* vlSelf);
bool Vday48_prime_seq_gen_tb___024root___eval_ico(Vday48_prime_seq_gen_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday48_prime_seq_gen_tb___024root___eval_act(Vday48_prime_seq_gen_tb___024root* vlSelf);
bool Vday48_prime_seq_gen_tb___024root___eval_inact(Vday48_prime_seq_gen_tb___024root* vlSelf);
bool Vday48_prime_seq_gen_tb___024root___eval_nba(Vday48_prime_seq_gen_tb___024root* vlSelf);
bool Vday48_prime_seq_gen_tb___024root___eval_obs(Vday48_prime_seq_gen_tb___024root* vlSelf);
bool Vday48_prime_seq_gen_tb___024root___eval_react(Vday48_prime_seq_gen_tb___024root* vlSelf);
void Vday48_prime_seq_gen_tb___024root___eval_postponed(Vday48_prime_seq_gen_tb___024root* vlSelf);
VL_ATTR_COLD void Vday48_prime_seq_gen_tb___024root___eval_final(Vday48_prime_seq_gen_tb___024root* vlSelf);
VL_ATTR_COLD void Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__stl(Vday48_prime_seq_gen_tb___024root* vlSelf);
VL_ATTR_COLD void Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__ico(Vday48_prime_seq_gen_tb___024root* vlSelf);
VL_ATTR_COLD void Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__act(Vday48_prime_seq_gen_tb___024root* vlSelf);
VL_ATTR_COLD void Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__nba(Vday48_prime_seq_gen_tb___024root* vlSelf);
VL_ATTR_COLD void Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__obs(Vday48_prime_seq_gen_tb___024root* vlSelf);
VL_ATTR_COLD void Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__react(Vday48_prime_seq_gen_tb___024root* vlSelf);

void Vday48_prime_seq_gen_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday48_prime_seq_gen_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday48_prime_seq_gen_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday48_prime_seq_gen_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday48_prime_seq_gen_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday48_prime_seq_gen_tb::evalStatic() {
    Vday48_prime_seq_gen_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday48_prime_seq_gen_tb::evalInitial() {
    Vday48_prime_seq_gen_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday48_prime_seq_gen_tb::evalStl(bool firstIteration) {
    return Vday48_prime_seq_gen_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday48_prime_seq_gen_tb::evalSample() {
    Vday48_prime_seq_gen_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday48_prime_seq_gen_tb::evalIco(bool firstIteration) {
    return Vday48_prime_seq_gen_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday48_prime_seq_gen_tb::evalAct() {
    return Vday48_prime_seq_gen_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday48_prime_seq_gen_tb::evalInact() {
    return Vday48_prime_seq_gen_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday48_prime_seq_gen_tb::evalNba() {
    return Vday48_prime_seq_gen_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday48_prime_seq_gen_tb::evalObs() {
    return Vday48_prime_seq_gen_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday48_prime_seq_gen_tb::evalReact() {
    return Vday48_prime_seq_gen_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday48_prime_seq_gen_tb::evalPostponed() {
    Vday48_prime_seq_gen_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday48_prime_seq_gen_tb::evalFinal() {
    Vday48_prime_seq_gen_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday48_prime_seq_gen_tb::dumpTriggersStl() {
    Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday48_prime_seq_gen_tb::dumpTriggersIco() {
    Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday48_prime_seq_gen_tb::dumpTriggersAct() {
    Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday48_prime_seq_gen_tb::dumpTriggersNba() {
    Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday48_prime_seq_gen_tb::dumpTriggersObs() {
    Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday48_prime_seq_gen_tb::dumpTriggersReact() {
    Vday48_prime_seq_gen_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday48_prime_seq_gen_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday48_prime_seq_gen_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday48_prime_seq_gen_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday48_prime_seq_gen_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday48_prime_seq_gen_tb::hierName() const { return vlSymsp->name(); }
const char* Vday48_prime_seq_gen_tb::modelName() const { return "Vday48_prime_seq_gen_tb"; }
unsigned Vday48_prime_seq_gen_tb::threads() const { return 1; }
void Vday48_prime_seq_gen_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday48_prime_seq_gen_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
