// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday15_encoders_tb__pch.h"

//============================================================
// Constructors

Vday15_encoders_tb::Vday15_encoders_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday15_encoders_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday15_encoders_tb::Vday15_encoders_tb(const char* _vcname__)
    : Vday15_encoders_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday15_encoders_tb::~Vday15_encoders_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday15_encoders_tb___024root___eval_debug_assertions(Vday15_encoders_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday15_encoders_tb___024root___eval_static(Vday15_encoders_tb___024root* vlSelf);
void Vday15_encoders_tb___024root___eval_initial(Vday15_encoders_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday15_encoders_tb___024root___eval_stl(Vday15_encoders_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday15_encoders_tb___024root___eval_sample(Vday15_encoders_tb___024root* vlSelf);
bool Vday15_encoders_tb___024root___eval_ico(Vday15_encoders_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday15_encoders_tb___024root___eval_act(Vday15_encoders_tb___024root* vlSelf);
bool Vday15_encoders_tb___024root___eval_inact(Vday15_encoders_tb___024root* vlSelf);
bool Vday15_encoders_tb___024root___eval_nba(Vday15_encoders_tb___024root* vlSelf);
bool Vday15_encoders_tb___024root___eval_obs(Vday15_encoders_tb___024root* vlSelf);
bool Vday15_encoders_tb___024root___eval_react(Vday15_encoders_tb___024root* vlSelf);
void Vday15_encoders_tb___024root___eval_postponed(Vday15_encoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday15_encoders_tb___024root___eval_final(Vday15_encoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday15_encoders_tb___024root___eval_dump_triggers__stl(Vday15_encoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday15_encoders_tb___024root___eval_dump_triggers__ico(Vday15_encoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday15_encoders_tb___024root___eval_dump_triggers__act(Vday15_encoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday15_encoders_tb___024root___eval_dump_triggers__nba(Vday15_encoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday15_encoders_tb___024root___eval_dump_triggers__obs(Vday15_encoders_tb___024root* vlSelf);
VL_ATTR_COLD void Vday15_encoders_tb___024root___eval_dump_triggers__react(Vday15_encoders_tb___024root* vlSelf);

void Vday15_encoders_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday15_encoders_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday15_encoders_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday15_encoders_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday15_encoders_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday15_encoders_tb::evalStatic() {
    Vday15_encoders_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday15_encoders_tb::evalInitial() {
    Vday15_encoders_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday15_encoders_tb::evalStl(bool firstIteration) {
    return Vday15_encoders_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday15_encoders_tb::evalSample() {
    Vday15_encoders_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday15_encoders_tb::evalIco(bool firstIteration) {
    return Vday15_encoders_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday15_encoders_tb::evalAct() {
    return Vday15_encoders_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday15_encoders_tb::evalInact() {
    return Vday15_encoders_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday15_encoders_tb::evalNba() {
    return Vday15_encoders_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday15_encoders_tb::evalObs() {
    return Vday15_encoders_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday15_encoders_tb::evalReact() {
    return Vday15_encoders_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday15_encoders_tb::evalPostponed() {
    Vday15_encoders_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday15_encoders_tb::evalFinal() {
    Vday15_encoders_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday15_encoders_tb::dumpTriggersStl() {
    Vday15_encoders_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday15_encoders_tb::dumpTriggersIco() {
    Vday15_encoders_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday15_encoders_tb::dumpTriggersAct() {
    Vday15_encoders_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday15_encoders_tb::dumpTriggersNba() {
    Vday15_encoders_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday15_encoders_tb::dumpTriggersObs() {
    Vday15_encoders_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday15_encoders_tb::dumpTriggersReact() {
    Vday15_encoders_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday15_encoders_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday15_encoders_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday15_encoders_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday15_encoders_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday15_encoders_tb::hierName() const { return vlSymsp->name(); }
const char* Vday15_encoders_tb::modelName() const { return "Vday15_encoders_tb"; }
unsigned Vday15_encoders_tb::threads() const { return 1; }
void Vday15_encoders_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday15_encoders_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
