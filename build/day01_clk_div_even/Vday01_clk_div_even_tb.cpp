// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday01_clk_div_even_tb__pch.h"

//============================================================
// Constructors

Vday01_clk_div_even_tb::Vday01_clk_div_even_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday01_clk_div_even_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday01_clk_div_even_tb::Vday01_clk_div_even_tb(const char* _vcname__)
    : Vday01_clk_div_even_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday01_clk_div_even_tb::~Vday01_clk_div_even_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday01_clk_div_even_tb___024root___eval_debug_assertions(Vday01_clk_div_even_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday01_clk_div_even_tb___024root___eval_static(Vday01_clk_div_even_tb___024root* vlSelf);
void Vday01_clk_div_even_tb___024root___eval_initial(Vday01_clk_div_even_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday01_clk_div_even_tb___024root___eval_stl(Vday01_clk_div_even_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday01_clk_div_even_tb___024root___eval_sample(Vday01_clk_div_even_tb___024root* vlSelf);
bool Vday01_clk_div_even_tb___024root___eval_ico(Vday01_clk_div_even_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday01_clk_div_even_tb___024root___eval_act(Vday01_clk_div_even_tb___024root* vlSelf);
bool Vday01_clk_div_even_tb___024root___eval_inact(Vday01_clk_div_even_tb___024root* vlSelf);
bool Vday01_clk_div_even_tb___024root___eval_nba(Vday01_clk_div_even_tb___024root* vlSelf);
bool Vday01_clk_div_even_tb___024root___eval_obs(Vday01_clk_div_even_tb___024root* vlSelf);
bool Vday01_clk_div_even_tb___024root___eval_react(Vday01_clk_div_even_tb___024root* vlSelf);
void Vday01_clk_div_even_tb___024root___eval_postponed(Vday01_clk_div_even_tb___024root* vlSelf);
VL_ATTR_COLD void Vday01_clk_div_even_tb___024root___eval_final(Vday01_clk_div_even_tb___024root* vlSelf);
VL_ATTR_COLD void Vday01_clk_div_even_tb___024root___eval_dump_triggers__stl(Vday01_clk_div_even_tb___024root* vlSelf);
VL_ATTR_COLD void Vday01_clk_div_even_tb___024root___eval_dump_triggers__ico(Vday01_clk_div_even_tb___024root* vlSelf);
VL_ATTR_COLD void Vday01_clk_div_even_tb___024root___eval_dump_triggers__act(Vday01_clk_div_even_tb___024root* vlSelf);
VL_ATTR_COLD void Vday01_clk_div_even_tb___024root___eval_dump_triggers__nba(Vday01_clk_div_even_tb___024root* vlSelf);
VL_ATTR_COLD void Vday01_clk_div_even_tb___024root___eval_dump_triggers__obs(Vday01_clk_div_even_tb___024root* vlSelf);
VL_ATTR_COLD void Vday01_clk_div_even_tb___024root___eval_dump_triggers__react(Vday01_clk_div_even_tb___024root* vlSelf);

void Vday01_clk_div_even_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday01_clk_div_even_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday01_clk_div_even_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday01_clk_div_even_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday01_clk_div_even_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday01_clk_div_even_tb::evalStatic() {
    Vday01_clk_div_even_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday01_clk_div_even_tb::evalInitial() {
    Vday01_clk_div_even_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday01_clk_div_even_tb::evalStl(bool firstIteration) {
    return Vday01_clk_div_even_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday01_clk_div_even_tb::evalSample() {
    Vday01_clk_div_even_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday01_clk_div_even_tb::evalIco(bool firstIteration) {
    return Vday01_clk_div_even_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday01_clk_div_even_tb::evalAct() {
    return Vday01_clk_div_even_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday01_clk_div_even_tb::evalInact() {
    return Vday01_clk_div_even_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday01_clk_div_even_tb::evalNba() {
    return Vday01_clk_div_even_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday01_clk_div_even_tb::evalObs() {
    return Vday01_clk_div_even_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday01_clk_div_even_tb::evalReact() {
    return Vday01_clk_div_even_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday01_clk_div_even_tb::evalPostponed() {
    Vday01_clk_div_even_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday01_clk_div_even_tb::evalFinal() {
    Vday01_clk_div_even_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday01_clk_div_even_tb::dumpTriggersStl() {
    Vday01_clk_div_even_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday01_clk_div_even_tb::dumpTriggersIco() {
    Vday01_clk_div_even_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday01_clk_div_even_tb::dumpTriggersAct() {
    Vday01_clk_div_even_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday01_clk_div_even_tb::dumpTriggersNba() {
    Vday01_clk_div_even_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday01_clk_div_even_tb::dumpTriggersObs() {
    Vday01_clk_div_even_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday01_clk_div_even_tb::dumpTriggersReact() {
    Vday01_clk_div_even_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vday01_clk_div_even_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday01_clk_div_even_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday01_clk_div_even_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday01_clk_div_even_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday01_clk_div_even_tb::hierName() const { return vlSymsp->name(); }
const char* Vday01_clk_div_even_tb::modelName() const { return "Vday01_clk_div_even_tb"; }
unsigned Vday01_clk_div_even_tb::threads() const { return 1; }
void Vday01_clk_div_even_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday01_clk_div_even_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
