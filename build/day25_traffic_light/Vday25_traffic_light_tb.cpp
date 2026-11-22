// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday25_traffic_light_tb__pch.h"

//============================================================
// Constructors

Vday25_traffic_light_tb::Vday25_traffic_light_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday25_traffic_light_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday25_traffic_light_tb::Vday25_traffic_light_tb(const char* _vcname__)
    : Vday25_traffic_light_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday25_traffic_light_tb::~Vday25_traffic_light_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday25_traffic_light_tb___024root___eval_debug_assertions(Vday25_traffic_light_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday25_traffic_light_tb___024root___eval_static(Vday25_traffic_light_tb___024root* vlSelf);
void Vday25_traffic_light_tb___024root___eval_initial(Vday25_traffic_light_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday25_traffic_light_tb___024root___eval_stl(Vday25_traffic_light_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday25_traffic_light_tb___024root___eval_sample(Vday25_traffic_light_tb___024root* vlSelf);
bool Vday25_traffic_light_tb___024root___eval_ico(Vday25_traffic_light_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday25_traffic_light_tb___024root___eval_act(Vday25_traffic_light_tb___024root* vlSelf);
bool Vday25_traffic_light_tb___024root___eval_inact(Vday25_traffic_light_tb___024root* vlSelf);
bool Vday25_traffic_light_tb___024root___eval_nba(Vday25_traffic_light_tb___024root* vlSelf);
bool Vday25_traffic_light_tb___024root___eval_obs(Vday25_traffic_light_tb___024root* vlSelf);
bool Vday25_traffic_light_tb___024root___eval_react(Vday25_traffic_light_tb___024root* vlSelf);
void Vday25_traffic_light_tb___024root___eval_postponed(Vday25_traffic_light_tb___024root* vlSelf);
VL_ATTR_COLD void Vday25_traffic_light_tb___024root___eval_final(Vday25_traffic_light_tb___024root* vlSelf);
VL_ATTR_COLD void Vday25_traffic_light_tb___024root___eval_dump_triggers__stl(Vday25_traffic_light_tb___024root* vlSelf);
VL_ATTR_COLD void Vday25_traffic_light_tb___024root___eval_dump_triggers__ico(Vday25_traffic_light_tb___024root* vlSelf);
VL_ATTR_COLD void Vday25_traffic_light_tb___024root___eval_dump_triggers__act(Vday25_traffic_light_tb___024root* vlSelf);
VL_ATTR_COLD void Vday25_traffic_light_tb___024root___eval_dump_triggers__nba(Vday25_traffic_light_tb___024root* vlSelf);
VL_ATTR_COLD void Vday25_traffic_light_tb___024root___eval_dump_triggers__obs(Vday25_traffic_light_tb___024root* vlSelf);
VL_ATTR_COLD void Vday25_traffic_light_tb___024root___eval_dump_triggers__react(Vday25_traffic_light_tb___024root* vlSelf);

void Vday25_traffic_light_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday25_traffic_light_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday25_traffic_light_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday25_traffic_light_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday25_traffic_light_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday25_traffic_light_tb::evalStatic() {
    Vday25_traffic_light_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday25_traffic_light_tb::evalInitial() {
    Vday25_traffic_light_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday25_traffic_light_tb::evalStl(bool firstIteration) {
    return Vday25_traffic_light_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday25_traffic_light_tb::evalSample() {
    Vday25_traffic_light_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday25_traffic_light_tb::evalIco(bool firstIteration) {
    return Vday25_traffic_light_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday25_traffic_light_tb::evalAct() {
    return Vday25_traffic_light_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday25_traffic_light_tb::evalInact() {
    return Vday25_traffic_light_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday25_traffic_light_tb::evalNba() {
    return Vday25_traffic_light_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday25_traffic_light_tb::evalObs() {
    return Vday25_traffic_light_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday25_traffic_light_tb::evalReact() {
    return Vday25_traffic_light_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday25_traffic_light_tb::evalPostponed() {
    Vday25_traffic_light_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday25_traffic_light_tb::evalFinal() {
    Vday25_traffic_light_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday25_traffic_light_tb::dumpTriggersStl() {
    Vday25_traffic_light_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday25_traffic_light_tb::dumpTriggersIco() {
    Vday25_traffic_light_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday25_traffic_light_tb::dumpTriggersAct() {
    Vday25_traffic_light_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday25_traffic_light_tb::dumpTriggersNba() {
    Vday25_traffic_light_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday25_traffic_light_tb::dumpTriggersObs() {
    Vday25_traffic_light_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday25_traffic_light_tb::dumpTriggersReact() {
    Vday25_traffic_light_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday25_traffic_light_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday25_traffic_light_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday25_traffic_light_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday25_traffic_light_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday25_traffic_light_tb::hierName() const { return vlSymsp->name(); }
const char* Vday25_traffic_light_tb::modelName() const { return "Vday25_traffic_light_tb"; }
unsigned Vday25_traffic_light_tb::threads() const { return 1; }
void Vday25_traffic_light_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday25_traffic_light_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
