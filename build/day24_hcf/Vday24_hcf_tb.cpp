// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday24_hcf_tb__pch.h"

//============================================================
// Constructors

Vday24_hcf_tb::Vday24_hcf_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday24_hcf_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday24_hcf_tb::Vday24_hcf_tb(const char* _vcname__)
    : Vday24_hcf_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday24_hcf_tb::~Vday24_hcf_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday24_hcf_tb___024root___eval_debug_assertions(Vday24_hcf_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday24_hcf_tb___024root___eval_static(Vday24_hcf_tb___024root* vlSelf);
void Vday24_hcf_tb___024root___eval_initial(Vday24_hcf_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday24_hcf_tb___024root___eval_stl(Vday24_hcf_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday24_hcf_tb___024root___eval_sample(Vday24_hcf_tb___024root* vlSelf);
bool Vday24_hcf_tb___024root___eval_ico(Vday24_hcf_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday24_hcf_tb___024root___eval_act(Vday24_hcf_tb___024root* vlSelf);
bool Vday24_hcf_tb___024root___eval_inact(Vday24_hcf_tb___024root* vlSelf);
bool Vday24_hcf_tb___024root___eval_nba(Vday24_hcf_tb___024root* vlSelf);
bool Vday24_hcf_tb___024root___eval_obs(Vday24_hcf_tb___024root* vlSelf);
bool Vday24_hcf_tb___024root___eval_react(Vday24_hcf_tb___024root* vlSelf);
void Vday24_hcf_tb___024root___eval_postponed(Vday24_hcf_tb___024root* vlSelf);
VL_ATTR_COLD void Vday24_hcf_tb___024root___eval_final(Vday24_hcf_tb___024root* vlSelf);
VL_ATTR_COLD void Vday24_hcf_tb___024root___eval_dump_triggers__stl(Vday24_hcf_tb___024root* vlSelf);
VL_ATTR_COLD void Vday24_hcf_tb___024root___eval_dump_triggers__ico(Vday24_hcf_tb___024root* vlSelf);
VL_ATTR_COLD void Vday24_hcf_tb___024root___eval_dump_triggers__act(Vday24_hcf_tb___024root* vlSelf);
VL_ATTR_COLD void Vday24_hcf_tb___024root___eval_dump_triggers__nba(Vday24_hcf_tb___024root* vlSelf);
VL_ATTR_COLD void Vday24_hcf_tb___024root___eval_dump_triggers__obs(Vday24_hcf_tb___024root* vlSelf);
VL_ATTR_COLD void Vday24_hcf_tb___024root___eval_dump_triggers__react(Vday24_hcf_tb___024root* vlSelf);

void Vday24_hcf_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday24_hcf_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday24_hcf_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday24_hcf_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday24_hcf_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday24_hcf_tb::evalStatic() {
    Vday24_hcf_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday24_hcf_tb::evalInitial() {
    Vday24_hcf_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday24_hcf_tb::evalStl(bool firstIteration) {
    return Vday24_hcf_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday24_hcf_tb::evalSample() {
    Vday24_hcf_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday24_hcf_tb::evalIco(bool firstIteration) {
    return Vday24_hcf_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday24_hcf_tb::evalAct() {
    return Vday24_hcf_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday24_hcf_tb::evalInact() {
    return Vday24_hcf_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday24_hcf_tb::evalNba() {
    return Vday24_hcf_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday24_hcf_tb::evalObs() {
    return Vday24_hcf_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday24_hcf_tb::evalReact() {
    return Vday24_hcf_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday24_hcf_tb::evalPostponed() {
    Vday24_hcf_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday24_hcf_tb::evalFinal() {
    Vday24_hcf_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday24_hcf_tb::dumpTriggersStl() {
    Vday24_hcf_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday24_hcf_tb::dumpTriggersIco() {
    Vday24_hcf_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday24_hcf_tb::dumpTriggersAct() {
    Vday24_hcf_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday24_hcf_tb::dumpTriggersNba() {
    Vday24_hcf_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday24_hcf_tb::dumpTriggersObs() {
    Vday24_hcf_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday24_hcf_tb::dumpTriggersReact() {
    Vday24_hcf_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday24_hcf_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday24_hcf_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday24_hcf_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday24_hcf_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday24_hcf_tb::hierName() const { return vlSymsp->name(); }
const char* Vday24_hcf_tb::modelName() const { return "Vday24_hcf_tb"; }
unsigned Vday24_hcf_tb::threads() const { return 1; }
void Vday24_hcf_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday24_hcf_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
