// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday16_bcd_7seg_tb__pch.h"

//============================================================
// Constructors

Vday16_bcd_7seg_tb::Vday16_bcd_7seg_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday16_bcd_7seg_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday16_bcd_7seg_tb::Vday16_bcd_7seg_tb(const char* _vcname__)
    : Vday16_bcd_7seg_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday16_bcd_7seg_tb::~Vday16_bcd_7seg_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday16_bcd_7seg_tb___024root___eval_debug_assertions(Vday16_bcd_7seg_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday16_bcd_7seg_tb___024root___eval_static(Vday16_bcd_7seg_tb___024root* vlSelf);
void Vday16_bcd_7seg_tb___024root___eval_initial(Vday16_bcd_7seg_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday16_bcd_7seg_tb___024root___eval_stl(Vday16_bcd_7seg_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday16_bcd_7seg_tb___024root___eval_sample(Vday16_bcd_7seg_tb___024root* vlSelf);
bool Vday16_bcd_7seg_tb___024root___eval_ico(Vday16_bcd_7seg_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday16_bcd_7seg_tb___024root___eval_act(Vday16_bcd_7seg_tb___024root* vlSelf);
bool Vday16_bcd_7seg_tb___024root___eval_inact(Vday16_bcd_7seg_tb___024root* vlSelf);
bool Vday16_bcd_7seg_tb___024root___eval_nba(Vday16_bcd_7seg_tb___024root* vlSelf);
bool Vday16_bcd_7seg_tb___024root___eval_obs(Vday16_bcd_7seg_tb___024root* vlSelf);
bool Vday16_bcd_7seg_tb___024root___eval_react(Vday16_bcd_7seg_tb___024root* vlSelf);
void Vday16_bcd_7seg_tb___024root___eval_postponed(Vday16_bcd_7seg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday16_bcd_7seg_tb___024root___eval_final(Vday16_bcd_7seg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday16_bcd_7seg_tb___024root___eval_dump_triggers__stl(Vday16_bcd_7seg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday16_bcd_7seg_tb___024root___eval_dump_triggers__ico(Vday16_bcd_7seg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday16_bcd_7seg_tb___024root___eval_dump_triggers__act(Vday16_bcd_7seg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday16_bcd_7seg_tb___024root___eval_dump_triggers__nba(Vday16_bcd_7seg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday16_bcd_7seg_tb___024root___eval_dump_triggers__obs(Vday16_bcd_7seg_tb___024root* vlSelf);
VL_ATTR_COLD void Vday16_bcd_7seg_tb___024root___eval_dump_triggers__react(Vday16_bcd_7seg_tb___024root* vlSelf);

void Vday16_bcd_7seg_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday16_bcd_7seg_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday16_bcd_7seg_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday16_bcd_7seg_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday16_bcd_7seg_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday16_bcd_7seg_tb::evalStatic() {
    Vday16_bcd_7seg_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday16_bcd_7seg_tb::evalInitial() {
    Vday16_bcd_7seg_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday16_bcd_7seg_tb::evalStl(bool firstIteration) {
    return Vday16_bcd_7seg_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday16_bcd_7seg_tb::evalSample() {
    Vday16_bcd_7seg_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday16_bcd_7seg_tb::evalIco(bool firstIteration) {
    return Vday16_bcd_7seg_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday16_bcd_7seg_tb::evalAct() {
    return Vday16_bcd_7seg_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday16_bcd_7seg_tb::evalInact() {
    return Vday16_bcd_7seg_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday16_bcd_7seg_tb::evalNba() {
    return Vday16_bcd_7seg_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday16_bcd_7seg_tb::evalObs() {
    return Vday16_bcd_7seg_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday16_bcd_7seg_tb::evalReact() {
    return Vday16_bcd_7seg_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday16_bcd_7seg_tb::evalPostponed() {
    Vday16_bcd_7seg_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday16_bcd_7seg_tb::evalFinal() {
    Vday16_bcd_7seg_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday16_bcd_7seg_tb::dumpTriggersStl() {
    Vday16_bcd_7seg_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday16_bcd_7seg_tb::dumpTriggersIco() {
    Vday16_bcd_7seg_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday16_bcd_7seg_tb::dumpTriggersAct() {
    Vday16_bcd_7seg_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday16_bcd_7seg_tb::dumpTriggersNba() {
    Vday16_bcd_7seg_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday16_bcd_7seg_tb::dumpTriggersObs() {
    Vday16_bcd_7seg_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday16_bcd_7seg_tb::dumpTriggersReact() {
    Vday16_bcd_7seg_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday16_bcd_7seg_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday16_bcd_7seg_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday16_bcd_7seg_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday16_bcd_7seg_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday16_bcd_7seg_tb::hierName() const { return vlSymsp->name(); }
const char* Vday16_bcd_7seg_tb::modelName() const { return "Vday16_bcd_7seg_tb"; }
unsigned Vday16_bcd_7seg_tb::threads() const { return 1; }
void Vday16_bcd_7seg_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday16_bcd_7seg_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
