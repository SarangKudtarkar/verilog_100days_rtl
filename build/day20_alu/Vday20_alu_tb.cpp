// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday20_alu_tb__pch.h"

//============================================================
// Constructors

Vday20_alu_tb::Vday20_alu_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday20_alu_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday20_alu_tb::Vday20_alu_tb(const char* _vcname__)
    : Vday20_alu_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday20_alu_tb::~Vday20_alu_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday20_alu_tb___024root___eval_debug_assertions(Vday20_alu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday20_alu_tb___024root___eval_static(Vday20_alu_tb___024root* vlSelf);
void Vday20_alu_tb___024root___eval_initial(Vday20_alu_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday20_alu_tb___024root___eval_stl(Vday20_alu_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday20_alu_tb___024root___eval_sample(Vday20_alu_tb___024root* vlSelf);
bool Vday20_alu_tb___024root___eval_ico(Vday20_alu_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday20_alu_tb___024root___eval_act(Vday20_alu_tb___024root* vlSelf);
bool Vday20_alu_tb___024root___eval_inact(Vday20_alu_tb___024root* vlSelf);
bool Vday20_alu_tb___024root___eval_nba(Vday20_alu_tb___024root* vlSelf);
bool Vday20_alu_tb___024root___eval_obs(Vday20_alu_tb___024root* vlSelf);
bool Vday20_alu_tb___024root___eval_react(Vday20_alu_tb___024root* vlSelf);
void Vday20_alu_tb___024root___eval_postponed(Vday20_alu_tb___024root* vlSelf);
VL_ATTR_COLD void Vday20_alu_tb___024root___eval_final(Vday20_alu_tb___024root* vlSelf);
VL_ATTR_COLD void Vday20_alu_tb___024root___eval_dump_triggers__stl(Vday20_alu_tb___024root* vlSelf);
VL_ATTR_COLD void Vday20_alu_tb___024root___eval_dump_triggers__ico(Vday20_alu_tb___024root* vlSelf);
VL_ATTR_COLD void Vday20_alu_tb___024root___eval_dump_triggers__act(Vday20_alu_tb___024root* vlSelf);
VL_ATTR_COLD void Vday20_alu_tb___024root___eval_dump_triggers__nba(Vday20_alu_tb___024root* vlSelf);
VL_ATTR_COLD void Vday20_alu_tb___024root___eval_dump_triggers__obs(Vday20_alu_tb___024root* vlSelf);
VL_ATTR_COLD void Vday20_alu_tb___024root___eval_dump_triggers__react(Vday20_alu_tb___024root* vlSelf);

void Vday20_alu_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday20_alu_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday20_alu_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday20_alu_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday20_alu_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday20_alu_tb::evalStatic() {
    Vday20_alu_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday20_alu_tb::evalInitial() {
    Vday20_alu_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday20_alu_tb::evalStl(bool firstIteration) {
    return Vday20_alu_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday20_alu_tb::evalSample() {
    Vday20_alu_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday20_alu_tb::evalIco(bool firstIteration) {
    return Vday20_alu_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday20_alu_tb::evalAct() {
    return Vday20_alu_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday20_alu_tb::evalInact() {
    return Vday20_alu_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday20_alu_tb::evalNba() {
    return Vday20_alu_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday20_alu_tb::evalObs() {
    return Vday20_alu_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday20_alu_tb::evalReact() {
    return Vday20_alu_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday20_alu_tb::evalPostponed() {
    Vday20_alu_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday20_alu_tb::evalFinal() {
    Vday20_alu_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday20_alu_tb::dumpTriggersStl() {
    Vday20_alu_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday20_alu_tb::dumpTriggersIco() {
    Vday20_alu_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday20_alu_tb::dumpTriggersAct() {
    Vday20_alu_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday20_alu_tb::dumpTriggersNba() {
    Vday20_alu_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday20_alu_tb::dumpTriggersObs() {
    Vday20_alu_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday20_alu_tb::dumpTriggersReact() {
    Vday20_alu_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday20_alu_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday20_alu_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday20_alu_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday20_alu_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday20_alu_tb::hierName() const { return vlSymsp->name(); }
const char* Vday20_alu_tb::modelName() const { return "Vday20_alu_tb"; }
unsigned Vday20_alu_tb::threads() const { return 1; }
void Vday20_alu_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday20_alu_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
