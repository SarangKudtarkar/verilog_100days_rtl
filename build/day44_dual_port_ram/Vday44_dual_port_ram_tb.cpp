// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday44_dual_port_ram_tb__pch.h"

//============================================================
// Constructors

Vday44_dual_port_ram_tb::Vday44_dual_port_ram_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday44_dual_port_ram_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday44_dual_port_ram_tb::Vday44_dual_port_ram_tb(const char* _vcname__)
    : Vday44_dual_port_ram_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday44_dual_port_ram_tb::~Vday44_dual_port_ram_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday44_dual_port_ram_tb___024root___eval_debug_assertions(Vday44_dual_port_ram_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday44_dual_port_ram_tb___024root___eval_static(Vday44_dual_port_ram_tb___024root* vlSelf);
void Vday44_dual_port_ram_tb___024root___eval_initial(Vday44_dual_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday44_dual_port_ram_tb___024root___eval_stl(Vday44_dual_port_ram_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday44_dual_port_ram_tb___024root___eval_sample(Vday44_dual_port_ram_tb___024root* vlSelf);
bool Vday44_dual_port_ram_tb___024root___eval_ico(Vday44_dual_port_ram_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday44_dual_port_ram_tb___024root___eval_act(Vday44_dual_port_ram_tb___024root* vlSelf);
bool Vday44_dual_port_ram_tb___024root___eval_inact(Vday44_dual_port_ram_tb___024root* vlSelf);
bool Vday44_dual_port_ram_tb___024root___eval_nba(Vday44_dual_port_ram_tb___024root* vlSelf);
bool Vday44_dual_port_ram_tb___024root___eval_obs(Vday44_dual_port_ram_tb___024root* vlSelf);
bool Vday44_dual_port_ram_tb___024root___eval_react(Vday44_dual_port_ram_tb___024root* vlSelf);
void Vday44_dual_port_ram_tb___024root___eval_postponed(Vday44_dual_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday44_dual_port_ram_tb___024root___eval_final(Vday44_dual_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday44_dual_port_ram_tb___024root___eval_dump_triggers__stl(Vday44_dual_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday44_dual_port_ram_tb___024root___eval_dump_triggers__ico(Vday44_dual_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday44_dual_port_ram_tb___024root___eval_dump_triggers__act(Vday44_dual_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday44_dual_port_ram_tb___024root___eval_dump_triggers__nba(Vday44_dual_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday44_dual_port_ram_tb___024root___eval_dump_triggers__obs(Vday44_dual_port_ram_tb___024root* vlSelf);
VL_ATTR_COLD void Vday44_dual_port_ram_tb___024root___eval_dump_triggers__react(Vday44_dual_port_ram_tb___024root* vlSelf);

void Vday44_dual_port_ram_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday44_dual_port_ram_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday44_dual_port_ram_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday44_dual_port_ram_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday44_dual_port_ram_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday44_dual_port_ram_tb::evalStatic() {
    Vday44_dual_port_ram_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday44_dual_port_ram_tb::evalInitial() {
    Vday44_dual_port_ram_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday44_dual_port_ram_tb::evalStl(bool firstIteration) {
    return Vday44_dual_port_ram_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday44_dual_port_ram_tb::evalSample() {
    Vday44_dual_port_ram_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday44_dual_port_ram_tb::evalIco(bool firstIteration) {
    return Vday44_dual_port_ram_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday44_dual_port_ram_tb::evalAct() {
    return Vday44_dual_port_ram_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday44_dual_port_ram_tb::evalInact() {
    return Vday44_dual_port_ram_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday44_dual_port_ram_tb::evalNba() {
    return Vday44_dual_port_ram_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday44_dual_port_ram_tb::evalObs() {
    return Vday44_dual_port_ram_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday44_dual_port_ram_tb::evalReact() {
    return Vday44_dual_port_ram_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday44_dual_port_ram_tb::evalPostponed() {
    Vday44_dual_port_ram_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday44_dual_port_ram_tb::evalFinal() {
    Vday44_dual_port_ram_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday44_dual_port_ram_tb::dumpTriggersStl() {
    Vday44_dual_port_ram_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday44_dual_port_ram_tb::dumpTriggersIco() {
    Vday44_dual_port_ram_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday44_dual_port_ram_tb::dumpTriggersAct() {
    Vday44_dual_port_ram_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday44_dual_port_ram_tb::dumpTriggersNba() {
    Vday44_dual_port_ram_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday44_dual_port_ram_tb::dumpTriggersObs() {
    Vday44_dual_port_ram_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday44_dual_port_ram_tb::dumpTriggersReact() {
    Vday44_dual_port_ram_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday44_dual_port_ram_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday44_dual_port_ram_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday44_dual_port_ram_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday44_dual_port_ram_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday44_dual_port_ram_tb::hierName() const { return vlSymsp->name(); }
const char* Vday44_dual_port_ram_tb::modelName() const { return "Vday44_dual_port_ram_tb"; }
unsigned Vday44_dual_port_ram_tb::threads() const { return 1; }
void Vday44_dual_port_ram_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday44_dual_port_ram_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
