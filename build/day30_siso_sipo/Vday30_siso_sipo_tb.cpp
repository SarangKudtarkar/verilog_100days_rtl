// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday30_siso_sipo_tb__pch.h"

//============================================================
// Constructors

Vday30_siso_sipo_tb::Vday30_siso_sipo_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday30_siso_sipo_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday30_siso_sipo_tb::Vday30_siso_sipo_tb(const char* _vcname__)
    : Vday30_siso_sipo_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday30_siso_sipo_tb::~Vday30_siso_sipo_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday30_siso_sipo_tb___024root___eval_debug_assertions(Vday30_siso_sipo_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday30_siso_sipo_tb___024root___eval_static(Vday30_siso_sipo_tb___024root* vlSelf);
void Vday30_siso_sipo_tb___024root___eval_initial(Vday30_siso_sipo_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday30_siso_sipo_tb___024root___eval_stl(Vday30_siso_sipo_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday30_siso_sipo_tb___024root___eval_sample(Vday30_siso_sipo_tb___024root* vlSelf);
bool Vday30_siso_sipo_tb___024root___eval_ico(Vday30_siso_sipo_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday30_siso_sipo_tb___024root___eval_act(Vday30_siso_sipo_tb___024root* vlSelf);
bool Vday30_siso_sipo_tb___024root___eval_inact(Vday30_siso_sipo_tb___024root* vlSelf);
bool Vday30_siso_sipo_tb___024root___eval_nba(Vday30_siso_sipo_tb___024root* vlSelf);
bool Vday30_siso_sipo_tb___024root___eval_obs(Vday30_siso_sipo_tb___024root* vlSelf);
bool Vday30_siso_sipo_tb___024root___eval_react(Vday30_siso_sipo_tb___024root* vlSelf);
void Vday30_siso_sipo_tb___024root___eval_postponed(Vday30_siso_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday30_siso_sipo_tb___024root___eval_final(Vday30_siso_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday30_siso_sipo_tb___024root___eval_dump_triggers__stl(Vday30_siso_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday30_siso_sipo_tb___024root___eval_dump_triggers__ico(Vday30_siso_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday30_siso_sipo_tb___024root___eval_dump_triggers__act(Vday30_siso_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday30_siso_sipo_tb___024root___eval_dump_triggers__nba(Vday30_siso_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday30_siso_sipo_tb___024root___eval_dump_triggers__obs(Vday30_siso_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday30_siso_sipo_tb___024root___eval_dump_triggers__react(Vday30_siso_sipo_tb___024root* vlSelf);

void Vday30_siso_sipo_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday30_siso_sipo_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday30_siso_sipo_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday30_siso_sipo_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday30_siso_sipo_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday30_siso_sipo_tb::evalStatic() {
    Vday30_siso_sipo_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday30_siso_sipo_tb::evalInitial() {
    Vday30_siso_sipo_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday30_siso_sipo_tb::evalStl(bool firstIteration) {
    return Vday30_siso_sipo_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday30_siso_sipo_tb::evalSample() {
    Vday30_siso_sipo_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday30_siso_sipo_tb::evalIco(bool firstIteration) {
    return Vday30_siso_sipo_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday30_siso_sipo_tb::evalAct() {
    return Vday30_siso_sipo_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday30_siso_sipo_tb::evalInact() {
    return Vday30_siso_sipo_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday30_siso_sipo_tb::evalNba() {
    return Vday30_siso_sipo_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday30_siso_sipo_tb::evalObs() {
    return Vday30_siso_sipo_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday30_siso_sipo_tb::evalReact() {
    return Vday30_siso_sipo_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday30_siso_sipo_tb::evalPostponed() {
    Vday30_siso_sipo_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday30_siso_sipo_tb::evalFinal() {
    Vday30_siso_sipo_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday30_siso_sipo_tb::dumpTriggersStl() {
    Vday30_siso_sipo_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday30_siso_sipo_tb::dumpTriggersIco() {
    Vday30_siso_sipo_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday30_siso_sipo_tb::dumpTriggersAct() {
    Vday30_siso_sipo_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday30_siso_sipo_tb::dumpTriggersNba() {
    Vday30_siso_sipo_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday30_siso_sipo_tb::dumpTriggersObs() {
    Vday30_siso_sipo_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday30_siso_sipo_tb::dumpTriggersReact() {
    Vday30_siso_sipo_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday30_siso_sipo_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday30_siso_sipo_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday30_siso_sipo_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday30_siso_sipo_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday30_siso_sipo_tb::hierName() const { return vlSymsp->name(); }
const char* Vday30_siso_sipo_tb::modelName() const { return "Vday30_siso_sipo_tb"; }
unsigned Vday30_siso_sipo_tb::threads() const { return 1; }
void Vday30_siso_sipo_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday30_siso_sipo_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
