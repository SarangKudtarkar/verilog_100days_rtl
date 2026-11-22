// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday43_single_port_ram_tb__pch.h"

//============================================================
// Constructors

Vday43_single_port_ram_tb::Vday43_single_port_ram_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday43_single_port_ram_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday43_single_port_ram_tb::Vday43_single_port_ram_tb(const char* _vcname__)
    : Vday43_single_port_ram_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday43_single_port_ram_tb::~Vday43_single_port_ram_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday43_single_port_ram_tb___024root___eval_debug_assertions(Vday43_single_port_ram_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday43_single_port_ram_tb___024root___eval_static(Vday43_single_port_ram_tb___024root* vlSelf);
void Vday43_single_port_ram_tb___024root___eval_initial(Vday43_single_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday43_single_port_ram_tb___024root___eval_stl(Vday43_single_port_ram_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday43_single_port_ram_tb___024root___eval_sample(Vday43_single_port_ram_tb___024root* vlSelf);
bool Vday43_single_port_ram_tb___024root___eval_ico(Vday43_single_port_ram_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday43_single_port_ram_tb___024root___eval_act(Vday43_single_port_ram_tb___024root* vlSelf);
bool Vday43_single_port_ram_tb___024root___eval_inact(Vday43_single_port_ram_tb___024root* vlSelf);
bool Vday43_single_port_ram_tb___024root___eval_nba(Vday43_single_port_ram_tb___024root* vlSelf);
bool Vday43_single_port_ram_tb___024root___eval_obs(Vday43_single_port_ram_tb___024root* vlSelf);
bool Vday43_single_port_ram_tb___024root___eval_react(Vday43_single_port_ram_tb___024root* vlSelf);
void Vday43_single_port_ram_tb___024root___eval_postponed(Vday43_single_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday43_single_port_ram_tb___024root___eval_final(Vday43_single_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday43_single_port_ram_tb___024root___eval_dump_triggers__stl(Vday43_single_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday43_single_port_ram_tb___024root___eval_dump_triggers__ico(Vday43_single_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday43_single_port_ram_tb___024root___eval_dump_triggers__act(Vday43_single_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday43_single_port_ram_tb___024root___eval_dump_triggers__nba(Vday43_single_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday43_single_port_ram_tb___024root___eval_dump_triggers__obs(Vday43_single_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday43_single_port_ram_tb___024root___eval_dump_triggers__react(Vday43_single_port_ram_tb___024root* vlSelf);

void Vday43_single_port_ram_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday43_single_port_ram_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday43_single_port_ram_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday43_single_port_ram_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday43_single_port_ram_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday43_single_port_ram_tb::evalStatic() {
    Vday43_single_port_ram_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday43_single_port_ram_tb::evalInitial() {
    Vday43_single_port_ram_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday43_single_port_ram_tb::evalStl(bool firstIteration) {
    return Vday43_single_port_ram_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday43_single_port_ram_tb::evalSample() {
    Vday43_single_port_ram_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday43_single_port_ram_tb::evalIco(bool firstIteration) {
    return Vday43_single_port_ram_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday43_single_port_ram_tb::evalAct() {
    return Vday43_single_port_ram_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday43_single_port_ram_tb::evalInact() {
    return Vday43_single_port_ram_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday43_single_port_ram_tb::evalNba() {
    return Vday43_single_port_ram_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday43_single_port_ram_tb::evalObs() {
    return Vday43_single_port_ram_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday43_single_port_ram_tb::evalReact() {
    return Vday43_single_port_ram_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday43_single_port_ram_tb::evalPostponed() {
    Vday43_single_port_ram_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday43_single_port_ram_tb::evalFinal() {
    Vday43_single_port_ram_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday43_single_port_ram_tb::dumpTriggersStl() {
    Vday43_single_port_ram_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday43_single_port_ram_tb::dumpTriggersIco() {
    Vday43_single_port_ram_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday43_single_port_ram_tb::dumpTriggersAct() {
    Vday43_single_port_ram_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday43_single_port_ram_tb::dumpTriggersNba() {
    Vday43_single_port_ram_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday43_single_port_ram_tb::dumpTriggersObs() {
    Vday43_single_port_ram_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday43_single_port_ram_tb::dumpTriggersReact() {
    Vday43_single_port_ram_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday43_single_port_ram_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday43_single_port_ram_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday43_single_port_ram_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday43_single_port_ram_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday43_single_port_ram_tb::hierName() const { return vlSymsp->name(); }
const char* Vday43_single_port_ram_tb::modelName() const { return "Vday43_single_port_ram_tb"; }
unsigned Vday43_single_port_ram_tb::threads() const { return 1; }
void Vday43_single_port_ram_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday43_single_port_ram_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
