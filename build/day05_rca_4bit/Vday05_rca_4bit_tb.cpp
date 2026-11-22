// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday05_rca_4bit_tb__pch.h"

//============================================================
// Constructors

Vday05_rca_4bit_tb::Vday05_rca_4bit_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday05_rca_4bit_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday05_rca_4bit_tb::Vday05_rca_4bit_tb(const char* _vcname__)
    : Vday05_rca_4bit_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday05_rca_4bit_tb::~Vday05_rca_4bit_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday05_rca_4bit_tb___024root___eval_debug_assertions(Vday05_rca_4bit_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_static(Vday05_rca_4bit_tb___024root* vlSelf);
void Vday05_rca_4bit_tb___024root___eval_initial(Vday05_rca_4bit_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday05_rca_4bit_tb___024root___eval_stl(Vday05_rca_4bit_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday05_rca_4bit_tb___024root___eval_sample(Vday05_rca_4bit_tb___024root* vlSelf);
bool Vday05_rca_4bit_tb___024root___eval_ico(Vday05_rca_4bit_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday05_rca_4bit_tb___024root___eval_act(Vday05_rca_4bit_tb___024root* vlSelf);
bool Vday05_rca_4bit_tb___024root___eval_inact(Vday05_rca_4bit_tb___024root* vlSelf);
bool Vday05_rca_4bit_tb___024root___eval_nba(Vday05_rca_4bit_tb___024root* vlSelf);
bool Vday05_rca_4bit_tb___024root___eval_obs(Vday05_rca_4bit_tb___024root* vlSelf);
bool Vday05_rca_4bit_tb___024root___eval_react(Vday05_rca_4bit_tb___024root* vlSelf);
void Vday05_rca_4bit_tb___024root___eval_postponed(Vday05_rca_4bit_tb___024root* vlSelf);
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_final(Vday05_rca_4bit_tb___024root* vlSelf);
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__stl(Vday05_rca_4bit_tb___024root* vlSelf);
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__ico(Vday05_rca_4bit_tb___024root* vlSelf);
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__act(Vday05_rca_4bit_tb___024root* vlSelf);
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__nba(Vday05_rca_4bit_tb___024root* vlSelf);
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__obs(Vday05_rca_4bit_tb___024root* vlSelf);
VL_ATTR_COLD void Vday05_rca_4bit_tb___024root___eval_dump_triggers__react(Vday05_rca_4bit_tb___024root* vlSelf);

void Vday05_rca_4bit_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday05_rca_4bit_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday05_rca_4bit_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday05_rca_4bit_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday05_rca_4bit_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday05_rca_4bit_tb::evalStatic() {
    Vday05_rca_4bit_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday05_rca_4bit_tb::evalInitial() {
    Vday05_rca_4bit_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday05_rca_4bit_tb::evalStl(bool firstIteration) {
    return Vday05_rca_4bit_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday05_rca_4bit_tb::evalSample() {
    Vday05_rca_4bit_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday05_rca_4bit_tb::evalIco(bool firstIteration) {
    return Vday05_rca_4bit_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday05_rca_4bit_tb::evalAct() {
    return Vday05_rca_4bit_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday05_rca_4bit_tb::evalInact() {
    return Vday05_rca_4bit_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday05_rca_4bit_tb::evalNba() {
    return Vday05_rca_4bit_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday05_rca_4bit_tb::evalObs() {
    return Vday05_rca_4bit_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday05_rca_4bit_tb::evalReact() {
    return Vday05_rca_4bit_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday05_rca_4bit_tb::evalPostponed() {
    Vday05_rca_4bit_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday05_rca_4bit_tb::evalFinal() {
    Vday05_rca_4bit_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday05_rca_4bit_tb::dumpTriggersStl() {
    Vday05_rca_4bit_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday05_rca_4bit_tb::dumpTriggersIco() {
    Vday05_rca_4bit_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday05_rca_4bit_tb::dumpTriggersAct() {
    Vday05_rca_4bit_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday05_rca_4bit_tb::dumpTriggersNba() {
    Vday05_rca_4bit_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday05_rca_4bit_tb::dumpTriggersObs() {
    Vday05_rca_4bit_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday05_rca_4bit_tb::dumpTriggersReact() {
    Vday05_rca_4bit_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday05_rca_4bit_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday05_rca_4bit_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday05_rca_4bit_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday05_rca_4bit_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday05_rca_4bit_tb::hierName() const { return vlSymsp->name(); }
const char* Vday05_rca_4bit_tb::modelName() const { return "Vday05_rca_4bit_tb"; }
unsigned Vday05_rca_4bit_tb::threads() const { return 1; }
void Vday05_rca_4bit_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday05_rca_4bit_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
