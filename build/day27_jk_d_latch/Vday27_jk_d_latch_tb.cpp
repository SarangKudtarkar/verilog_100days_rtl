// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday27_jk_d_latch_tb__pch.h"

//============================================================
// Constructors

Vday27_jk_d_latch_tb::Vday27_jk_d_latch_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday27_jk_d_latch_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday27_jk_d_latch_tb::Vday27_jk_d_latch_tb(const char* _vcname__)
    : Vday27_jk_d_latch_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday27_jk_d_latch_tb::~Vday27_jk_d_latch_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday27_jk_d_latch_tb___024root___eval_debug_assertions(Vday27_jk_d_latch_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_static(Vday27_jk_d_latch_tb___024root* vlSelf);
void Vday27_jk_d_latch_tb___024root___eval_initial(Vday27_jk_d_latch_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday27_jk_d_latch_tb___024root___eval_stl(Vday27_jk_d_latch_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday27_jk_d_latch_tb___024root___eval_sample(Vday27_jk_d_latch_tb___024root* vlSelf);
bool Vday27_jk_d_latch_tb___024root___eval_ico(Vday27_jk_d_latch_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday27_jk_d_latch_tb___024root___eval_act(Vday27_jk_d_latch_tb___024root* vlSelf);
bool Vday27_jk_d_latch_tb___024root___eval_inact(Vday27_jk_d_latch_tb___024root* vlSelf);
bool Vday27_jk_d_latch_tb___024root___eval_nba(Vday27_jk_d_latch_tb___024root* vlSelf);
bool Vday27_jk_d_latch_tb___024root___eval_obs(Vday27_jk_d_latch_tb___024root* vlSelf);
bool Vday27_jk_d_latch_tb___024root___eval_react(Vday27_jk_d_latch_tb___024root* vlSelf);
void Vday27_jk_d_latch_tb___024root___eval_postponed(Vday27_jk_d_latch_tb___024root* vlSelf);
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_final(Vday27_jk_d_latch_tb___024root* vlSelf);
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__stl(Vday27_jk_d_latch_tb___024root* vlSelf);
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__ico(Vday27_jk_d_latch_tb___024root* vlSelf);
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__act(Vday27_jk_d_latch_tb___024root* vlSelf);
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__nba(Vday27_jk_d_latch_tb___024root* vlSelf);
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__obs(Vday27_jk_d_latch_tb___024root* vlSelf);
VL_ATTR_COLD void Vday27_jk_d_latch_tb___024root___eval_dump_triggers__react(Vday27_jk_d_latch_tb___024root* vlSelf);

void Vday27_jk_d_latch_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday27_jk_d_latch_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday27_jk_d_latch_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday27_jk_d_latch_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday27_jk_d_latch_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday27_jk_d_latch_tb::evalStatic() {
    Vday27_jk_d_latch_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday27_jk_d_latch_tb::evalInitial() {
    Vday27_jk_d_latch_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday27_jk_d_latch_tb::evalStl(bool firstIteration) {
    return Vday27_jk_d_latch_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday27_jk_d_latch_tb::evalSample() {
    Vday27_jk_d_latch_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday27_jk_d_latch_tb::evalIco(bool firstIteration) {
    return Vday27_jk_d_latch_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday27_jk_d_latch_tb::evalAct() {
    return Vday27_jk_d_latch_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday27_jk_d_latch_tb::evalInact() {
    return Vday27_jk_d_latch_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday27_jk_d_latch_tb::evalNba() {
    return Vday27_jk_d_latch_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday27_jk_d_latch_tb::evalObs() {
    return Vday27_jk_d_latch_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday27_jk_d_latch_tb::evalReact() {
    return Vday27_jk_d_latch_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday27_jk_d_latch_tb::evalPostponed() {
    Vday27_jk_d_latch_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday27_jk_d_latch_tb::evalFinal() {
    Vday27_jk_d_latch_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb::dumpTriggersStl() {
    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb::dumpTriggersIco() {
    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb::dumpTriggersAct() {
    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb::dumpTriggersNba() {
    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb::dumpTriggersObs() {
    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday27_jk_d_latch_tb::dumpTriggersReact() {
    Vday27_jk_d_latch_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday27_jk_d_latch_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday27_jk_d_latch_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday27_jk_d_latch_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday27_jk_d_latch_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday27_jk_d_latch_tb::hierName() const { return vlSymsp->name(); }
const char* Vday27_jk_d_latch_tb::modelName() const { return "Vday27_jk_d_latch_tb"; }
unsigned Vday27_jk_d_latch_tb::threads() const { return 1; }
void Vday27_jk_d_latch_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday27_jk_d_latch_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
