// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday22_demux_sipo_tb__pch.h"

//============================================================
// Constructors

Vday22_demux_sipo_tb::Vday22_demux_sipo_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday22_demux_sipo_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday22_demux_sipo_tb::Vday22_demux_sipo_tb(const char* _vcname__)
    : Vday22_demux_sipo_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday22_demux_sipo_tb::~Vday22_demux_sipo_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday22_demux_sipo_tb___024root___eval_debug_assertions(Vday22_demux_sipo_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_static(Vday22_demux_sipo_tb___024root* vlSelf);
void Vday22_demux_sipo_tb___024root___eval_initial(Vday22_demux_sipo_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday22_demux_sipo_tb___024root___eval_stl(Vday22_demux_sipo_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday22_demux_sipo_tb___024root___eval_sample(Vday22_demux_sipo_tb___024root* vlSelf);
bool Vday22_demux_sipo_tb___024root___eval_ico(Vday22_demux_sipo_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday22_demux_sipo_tb___024root___eval_act(Vday22_demux_sipo_tb___024root* vlSelf);
bool Vday22_demux_sipo_tb___024root___eval_inact(Vday22_demux_sipo_tb___024root* vlSelf);
bool Vday22_demux_sipo_tb___024root___eval_nba(Vday22_demux_sipo_tb___024root* vlSelf);
bool Vday22_demux_sipo_tb___024root___eval_obs(Vday22_demux_sipo_tb___024root* vlSelf);
bool Vday22_demux_sipo_tb___024root___eval_react(Vday22_demux_sipo_tb___024root* vlSelf);
void Vday22_demux_sipo_tb___024root___eval_postponed(Vday22_demux_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_final(Vday22_demux_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__stl(Vday22_demux_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__ico(Vday22_demux_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__act(Vday22_demux_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__nba(Vday22_demux_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__obs(Vday22_demux_sipo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday22_demux_sipo_tb___024root___eval_dump_triggers__react(Vday22_demux_sipo_tb___024root* vlSelf);

void Vday22_demux_sipo_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday22_demux_sipo_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday22_demux_sipo_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday22_demux_sipo_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday22_demux_sipo_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday22_demux_sipo_tb::evalStatic() {
    Vday22_demux_sipo_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday22_demux_sipo_tb::evalInitial() {
    Vday22_demux_sipo_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday22_demux_sipo_tb::evalStl(bool firstIteration) {
    return Vday22_demux_sipo_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday22_demux_sipo_tb::evalSample() {
    Vday22_demux_sipo_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday22_demux_sipo_tb::evalIco(bool firstIteration) {
    return Vday22_demux_sipo_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday22_demux_sipo_tb::evalAct() {
    return Vday22_demux_sipo_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday22_demux_sipo_tb::evalInact() {
    return Vday22_demux_sipo_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday22_demux_sipo_tb::evalNba() {
    return Vday22_demux_sipo_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday22_demux_sipo_tb::evalObs() {
    return Vday22_demux_sipo_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday22_demux_sipo_tb::evalReact() {
    return Vday22_demux_sipo_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday22_demux_sipo_tb::evalPostponed() {
    Vday22_demux_sipo_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday22_demux_sipo_tb::evalFinal() {
    Vday22_demux_sipo_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday22_demux_sipo_tb::dumpTriggersStl() {
    Vday22_demux_sipo_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday22_demux_sipo_tb::dumpTriggersIco() {
    Vday22_demux_sipo_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday22_demux_sipo_tb::dumpTriggersAct() {
    Vday22_demux_sipo_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday22_demux_sipo_tb::dumpTriggersNba() {
    Vday22_demux_sipo_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday22_demux_sipo_tb::dumpTriggersObs() {
    Vday22_demux_sipo_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday22_demux_sipo_tb::dumpTriggersReact() {
    Vday22_demux_sipo_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday22_demux_sipo_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday22_demux_sipo_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday22_demux_sipo_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday22_demux_sipo_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday22_demux_sipo_tb::hierName() const { return vlSymsp->name(); }
const char* Vday22_demux_sipo_tb::modelName() const { return "Vday22_demux_sipo_tb"; }
unsigned Vday22_demux_sipo_tb::threads() const { return 1; }
void Vday22_demux_sipo_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday22_demux_sipo_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
