// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday03_clk_div_odd_tb__pch.h"

//============================================================
// Constructors

Vday03_clk_div_odd_tb::Vday03_clk_div_odd_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday03_clk_div_odd_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday03_clk_div_odd_tb::Vday03_clk_div_odd_tb(const char* _vcname__)
    : Vday03_clk_div_odd_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday03_clk_div_odd_tb::~Vday03_clk_div_odd_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday03_clk_div_odd_tb___024root___eval_debug_assertions(Vday03_clk_div_odd_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday03_clk_div_odd_tb___024root___eval_static(Vday03_clk_div_odd_tb___024root* vlSelf);
void Vday03_clk_div_odd_tb___024root___eval_initial(Vday03_clk_div_odd_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday03_clk_div_odd_tb___024root___eval_stl(Vday03_clk_div_odd_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday03_clk_div_odd_tb___024root___eval_sample(Vday03_clk_div_odd_tb___024root* vlSelf);
bool Vday03_clk_div_odd_tb___024root___eval_ico(Vday03_clk_div_odd_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday03_clk_div_odd_tb___024root___eval_act(Vday03_clk_div_odd_tb___024root* vlSelf);
bool Vday03_clk_div_odd_tb___024root___eval_inact(Vday03_clk_div_odd_tb___024root* vlSelf);
bool Vday03_clk_div_odd_tb___024root___eval_nba(Vday03_clk_div_odd_tb___024root* vlSelf);
bool Vday03_clk_div_odd_tb___024root___eval_obs(Vday03_clk_div_odd_tb___024root* vlSelf);
bool Vday03_clk_div_odd_tb___024root___eval_react(Vday03_clk_div_odd_tb___024root* vlSelf);
void Vday03_clk_div_odd_tb___024root___eval_postponed(Vday03_clk_div_odd_tb___024root* vlSelf);
VL_ATTR_COLD void Vday03_clk_div_odd_tb___024root___eval_final(Vday03_clk_div_odd_tb___024root* vlSelf);
VL_ATTR_COLD void Vday03_clk_div_odd_tb___024root___eval_dump_triggers__stl(Vday03_clk_div_odd_tb___024root* vlSelf);
VL_ATTR_COLD void Vday03_clk_div_odd_tb___024root___eval_dump_triggers__ico(Vday03_clk_div_odd_tb___024root* vlSelf);
VL_ATTR_COLD void Vday03_clk_div_odd_tb___024root___eval_dump_triggers__act(Vday03_clk_div_odd_tb___024root* vlSelf);
VL_ATTR_COLD void Vday03_clk_div_odd_tb___024root___eval_dump_triggers__nba(Vday03_clk_div_odd_tb___024root* vlSelf);
VL_ATTR_COLD void Vday03_clk_div_odd_tb___024root___eval_dump_triggers__obs(Vday03_clk_div_odd_tb___024root* vlSelf);
VL_ATTR_COLD void Vday03_clk_div_odd_tb___024root___eval_dump_triggers__react(Vday03_clk_div_odd_tb___024root* vlSelf);

void Vday03_clk_div_odd_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday03_clk_div_odd_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday03_clk_div_odd_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday03_clk_div_odd_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday03_clk_div_odd_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday03_clk_div_odd_tb::evalStatic() {
    Vday03_clk_div_odd_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday03_clk_div_odd_tb::evalInitial() {
    Vday03_clk_div_odd_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday03_clk_div_odd_tb::evalStl(bool firstIteration) {
    return Vday03_clk_div_odd_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday03_clk_div_odd_tb::evalSample() {
    Vday03_clk_div_odd_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday03_clk_div_odd_tb::evalIco(bool firstIteration) {
    return Vday03_clk_div_odd_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday03_clk_div_odd_tb::evalAct() {
    return Vday03_clk_div_odd_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday03_clk_div_odd_tb::evalInact() {
    return Vday03_clk_div_odd_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday03_clk_div_odd_tb::evalNba() {
    return Vday03_clk_div_odd_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday03_clk_div_odd_tb::evalObs() {
    return Vday03_clk_div_odd_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday03_clk_div_odd_tb::evalReact() {
    return Vday03_clk_div_odd_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday03_clk_div_odd_tb::evalPostponed() {
    Vday03_clk_div_odd_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday03_clk_div_odd_tb::evalFinal() {
    Vday03_clk_div_odd_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday03_clk_div_odd_tb::dumpTriggersStl() {
    Vday03_clk_div_odd_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday03_clk_div_odd_tb::dumpTriggersIco() {
    Vday03_clk_div_odd_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday03_clk_div_odd_tb::dumpTriggersAct() {
    Vday03_clk_div_odd_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday03_clk_div_odd_tb::dumpTriggersNba() {
    Vday03_clk_div_odd_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday03_clk_div_odd_tb::dumpTriggersObs() {
    Vday03_clk_div_odd_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday03_clk_div_odd_tb::dumpTriggersReact() {
    Vday03_clk_div_odd_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday03_clk_div_odd_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday03_clk_div_odd_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday03_clk_div_odd_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday03_clk_div_odd_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday03_clk_div_odd_tb::hierName() const { return vlSymsp->name(); }
const char* Vday03_clk_div_odd_tb::modelName() const { return "Vday03_clk_div_odd_tb"; }
unsigned Vday03_clk_div_odd_tb::threads() const { return 1; }
void Vday03_clk_div_odd_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday03_clk_div_odd_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
