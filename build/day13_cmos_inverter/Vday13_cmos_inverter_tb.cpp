// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday13_cmos_inverter_tb__pch.h"

//============================================================
// Constructors

Vday13_cmos_inverter_tb::Vday13_cmos_inverter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday13_cmos_inverter_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday13_cmos_inverter_tb::Vday13_cmos_inverter_tb(const char* _vcname__)
    : Vday13_cmos_inverter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday13_cmos_inverter_tb::~Vday13_cmos_inverter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday13_cmos_inverter_tb___024root___eval_debug_assertions(Vday13_cmos_inverter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday13_cmos_inverter_tb___024root___eval_static(Vday13_cmos_inverter_tb___024root* vlSelf);
void Vday13_cmos_inverter_tb___024root___eval_initial(Vday13_cmos_inverter_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday13_cmos_inverter_tb___024root___eval_stl(Vday13_cmos_inverter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday13_cmos_inverter_tb___024root___eval_sample(Vday13_cmos_inverter_tb___024root* vlSelf);
bool Vday13_cmos_inverter_tb___024root___eval_ico(Vday13_cmos_inverter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday13_cmos_inverter_tb___024root___eval_act(Vday13_cmos_inverter_tb___024root* vlSelf);
bool Vday13_cmos_inverter_tb___024root___eval_inact(Vday13_cmos_inverter_tb___024root* vlSelf);
bool Vday13_cmos_inverter_tb___024root___eval_nba(Vday13_cmos_inverter_tb___024root* vlSelf);
bool Vday13_cmos_inverter_tb___024root___eval_obs(Vday13_cmos_inverter_tb___024root* vlSelf);
bool Vday13_cmos_inverter_tb___024root___eval_react(Vday13_cmos_inverter_tb___024root* vlSelf);
void Vday13_cmos_inverter_tb___024root___eval_postponed(Vday13_cmos_inverter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday13_cmos_inverter_tb___024root___eval_final(Vday13_cmos_inverter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday13_cmos_inverter_tb___024root___eval_dump_triggers__stl(Vday13_cmos_inverter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday13_cmos_inverter_tb___024root___eval_dump_triggers__ico(Vday13_cmos_inverter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday13_cmos_inverter_tb___024root___eval_dump_triggers__act(Vday13_cmos_inverter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday13_cmos_inverter_tb___024root___eval_dump_triggers__nba(Vday13_cmos_inverter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday13_cmos_inverter_tb___024root___eval_dump_triggers__obs(Vday13_cmos_inverter_tb___024root* vlSelf);
VL_ATTR_COLD void Vday13_cmos_inverter_tb___024root___eval_dump_triggers__react(Vday13_cmos_inverter_tb___024root* vlSelf);

void Vday13_cmos_inverter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday13_cmos_inverter_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday13_cmos_inverter_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday13_cmos_inverter_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday13_cmos_inverter_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday13_cmos_inverter_tb::evalStatic() {
    Vday13_cmos_inverter_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday13_cmos_inverter_tb::evalInitial() {
    Vday13_cmos_inverter_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday13_cmos_inverter_tb::evalStl(bool firstIteration) {
    return Vday13_cmos_inverter_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday13_cmos_inverter_tb::evalSample() {
    Vday13_cmos_inverter_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday13_cmos_inverter_tb::evalIco(bool firstIteration) {
    return Vday13_cmos_inverter_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday13_cmos_inverter_tb::evalAct() {
    return Vday13_cmos_inverter_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday13_cmos_inverter_tb::evalInact() {
    return Vday13_cmos_inverter_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday13_cmos_inverter_tb::evalNba() {
    return Vday13_cmos_inverter_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday13_cmos_inverter_tb::evalObs() {
    return Vday13_cmos_inverter_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday13_cmos_inverter_tb::evalReact() {
    return Vday13_cmos_inverter_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday13_cmos_inverter_tb::evalPostponed() {
    Vday13_cmos_inverter_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday13_cmos_inverter_tb::evalFinal() {
    Vday13_cmos_inverter_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday13_cmos_inverter_tb::dumpTriggersStl() {
    Vday13_cmos_inverter_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday13_cmos_inverter_tb::dumpTriggersIco() {
    Vday13_cmos_inverter_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday13_cmos_inverter_tb::dumpTriggersAct() {
    Vday13_cmos_inverter_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday13_cmos_inverter_tb::dumpTriggersNba() {
    Vday13_cmos_inverter_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday13_cmos_inverter_tb::dumpTriggersObs() {
    Vday13_cmos_inverter_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday13_cmos_inverter_tb::dumpTriggersReact() {
    Vday13_cmos_inverter_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday13_cmos_inverter_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday13_cmos_inverter_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday13_cmos_inverter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday13_cmos_inverter_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday13_cmos_inverter_tb::hierName() const { return vlSymsp->name(); }
const char* Vday13_cmos_inverter_tb::modelName() const { return "Vday13_cmos_inverter_tb"; }
unsigned Vday13_cmos_inverter_tb::threads() const { return 1; }
void Vday13_cmos_inverter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday13_cmos_inverter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
