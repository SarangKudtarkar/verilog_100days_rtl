// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday40_edge_detectors_tb__pch.h"

//============================================================
// Constructors

Vday40_edge_detectors_tb::Vday40_edge_detectors_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday40_edge_detectors_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday40_edge_detectors_tb::Vday40_edge_detectors_tb(const char* _vcname__)
    : Vday40_edge_detectors_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday40_edge_detectors_tb::~Vday40_edge_detectors_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday40_edge_detectors_tb___024root___eval_debug_assertions(Vday40_edge_detectors_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday40_edge_detectors_tb___024root___eval_static(Vday40_edge_detectors_tb___024root* vlSelf);
void Vday40_edge_detectors_tb___024root___eval_initial(Vday40_edge_detectors_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday40_edge_detectors_tb___024root___eval_stl(Vday40_edge_detectors_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday40_edge_detectors_tb___024root___eval_sample(Vday40_edge_detectors_tb___024root* vlSelf);
bool Vday40_edge_detectors_tb___024root___eval_ico(Vday40_edge_detectors_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday40_edge_detectors_tb___024root___eval_act(Vday40_edge_detectors_tb___024root* vlSelf);
bool Vday40_edge_detectors_tb___024root___eval_inact(Vday40_edge_detectors_tb___024root* vlSelf);
bool Vday40_edge_detectors_tb___024root___eval_nba(Vday40_edge_detectors_tb___024root* vlSelf);
bool Vday40_edge_detectors_tb___024root___eval_obs(Vday40_edge_detectors_tb___024root* vlSelf);
bool Vday40_edge_detectors_tb___024root___eval_react(Vday40_edge_detectors_tb___024root* vlSelf);
void Vday40_edge_detectors_tb___024root___eval_postponed(Vday40_edge_detectors_tb___024root* vlSelf);
VL_ATTR_COLD void Vday40_edge_detectors_tb___024root___eval_final(Vday40_edge_detectors_tb___024root* vlSelf);
VL_ATTR_COLD void Vday40_edge_detectors_tb___024root___eval_dump_triggers__stl(Vday40_edge_detectors_tb___024root* vlSelf);
VL_ATTR_COLD void Vday40_edge_detectors_tb___024root___eval_dump_triggers__ico(Vday40_edge_detectors_tb___024root* vlSelf);
VL_ATTR_COLD void Vday40_edge_detectors_tb___024root___eval_dump_triggers__act(Vday40_edge_detectors_tb___024root* vlSelf);
VL_ATTR_COLD void Vday40_edge_detectors_tb___024root___eval_dump_triggers__nba(Vday40_edge_detectors_tb___024root* vlSelf);
VL_ATTR_COLD void Vday40_edge_detectors_tb___024root___eval_dump_triggers__obs(Vday40_edge_detectors_tb___024root* vlSelf);
VL_ATTR_COLD void Vday40_edge_detectors_tb___024root___eval_dump_triggers__react(Vday40_edge_detectors_tb___024root* vlSelf);

void Vday40_edge_detectors_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday40_edge_detectors_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday40_edge_detectors_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday40_edge_detectors_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday40_edge_detectors_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday40_edge_detectors_tb::evalStatic() {
    Vday40_edge_detectors_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday40_edge_detectors_tb::evalInitial() {
    Vday40_edge_detectors_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday40_edge_detectors_tb::evalStl(bool firstIteration) {
    return Vday40_edge_detectors_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday40_edge_detectors_tb::evalSample() {
    Vday40_edge_detectors_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday40_edge_detectors_tb::evalIco(bool firstIteration) {
    return Vday40_edge_detectors_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday40_edge_detectors_tb::evalAct() {
    return Vday40_edge_detectors_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday40_edge_detectors_tb::evalInact() {
    return Vday40_edge_detectors_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday40_edge_detectors_tb::evalNba() {
    return Vday40_edge_detectors_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday40_edge_detectors_tb::evalObs() {
    return Vday40_edge_detectors_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday40_edge_detectors_tb::evalReact() {
    return Vday40_edge_detectors_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday40_edge_detectors_tb::evalPostponed() {
    Vday40_edge_detectors_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday40_edge_detectors_tb::evalFinal() {
    Vday40_edge_detectors_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday40_edge_detectors_tb::dumpTriggersStl() {
    Vday40_edge_detectors_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday40_edge_detectors_tb::dumpTriggersIco() {
    Vday40_edge_detectors_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday40_edge_detectors_tb::dumpTriggersAct() {
    Vday40_edge_detectors_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday40_edge_detectors_tb::dumpTriggersNba() {
    Vday40_edge_detectors_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday40_edge_detectors_tb::dumpTriggersObs() {
    Vday40_edge_detectors_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday40_edge_detectors_tb::dumpTriggersReact() {
    Vday40_edge_detectors_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday40_edge_detectors_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday40_edge_detectors_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday40_edge_detectors_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday40_edge_detectors_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday40_edge_detectors_tb::hierName() const { return vlSymsp->name(); }
const char* Vday40_edge_detectors_tb::modelName() const { return "Vday40_edge_detectors_tb"; }
unsigned Vday40_edge_detectors_tb::threads() const { return 1; }
void Vday40_edge_detectors_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday40_edge_detectors_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
