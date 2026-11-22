// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday42_sync_fifo_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vday42_sync_fifo_tb::Vday42_sync_fifo_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday42_sync_fifo_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vday42_sync_fifo_tb::Vday42_sync_fifo_tb(const char* _vcname__)
    : Vday42_sync_fifo_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday42_sync_fifo_tb::~Vday42_sync_fifo_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday42_sync_fifo_tb___024root___eval_debug_assertions(Vday42_sync_fifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_static(Vday42_sync_fifo_tb___024root* vlSelf);
void Vday42_sync_fifo_tb___024root___eval_initial(Vday42_sync_fifo_tb___024root* vlSelf);
VL_ATTR_COLD bool Vday42_sync_fifo_tb___024root___eval_stl(Vday42_sync_fifo_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vday42_sync_fifo_tb___024root___eval_sample(Vday42_sync_fifo_tb___024root* vlSelf);
bool Vday42_sync_fifo_tb___024root___eval_ico(Vday42_sync_fifo_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vday42_sync_fifo_tb___024root___eval_act(Vday42_sync_fifo_tb___024root* vlSelf);
bool Vday42_sync_fifo_tb___024root___eval_inact(Vday42_sync_fifo_tb___024root* vlSelf);
bool Vday42_sync_fifo_tb___024root___eval_nba(Vday42_sync_fifo_tb___024root* vlSelf);
bool Vday42_sync_fifo_tb___024root___eval_obs(Vday42_sync_fifo_tb___024root* vlSelf);
bool Vday42_sync_fifo_tb___024root___eval_react(Vday42_sync_fifo_tb___024root* vlSelf);
void Vday42_sync_fifo_tb___024root___eval_postponed(Vday42_sync_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_final(Vday42_sync_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__stl(Vday42_sync_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__ico(Vday42_sync_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__act(Vday42_sync_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__nba(Vday42_sync_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__obs(Vday42_sync_fifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vday42_sync_fifo_tb___024root___eval_dump_triggers__react(Vday42_sync_fifo_tb___024root* vlSelf);

void Vday42_sync_fifo_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday42_sync_fifo_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vday42_sync_fifo_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vday42_sync_fifo_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vday42_sync_fifo_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vday42_sync_fifo_tb::evalStatic() {
    Vday42_sync_fifo_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vday42_sync_fifo_tb::evalInitial() {
    Vday42_sync_fifo_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vday42_sync_fifo_tb::evalStl(bool firstIteration) {
    return Vday42_sync_fifo_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vday42_sync_fifo_tb::evalSample() {
    Vday42_sync_fifo_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vday42_sync_fifo_tb::evalIco(bool firstIteration) {
    return Vday42_sync_fifo_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vday42_sync_fifo_tb::evalAct() {
    return Vday42_sync_fifo_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vday42_sync_fifo_tb::evalInact() {
    return Vday42_sync_fifo_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vday42_sync_fifo_tb::evalNba() {
    return Vday42_sync_fifo_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vday42_sync_fifo_tb::evalObs() {
    return Vday42_sync_fifo_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vday42_sync_fifo_tb::evalReact() {
    return Vday42_sync_fifo_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vday42_sync_fifo_tb::evalPostponed() {
    Vday42_sync_fifo_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vday42_sync_fifo_tb::evalFinal() {
    Vday42_sync_fifo_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday42_sync_fifo_tb::dumpTriggersStl() {
    Vday42_sync_fifo_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday42_sync_fifo_tb::dumpTriggersIco() {
    Vday42_sync_fifo_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday42_sync_fifo_tb::dumpTriggersAct() {
    Vday42_sync_fifo_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday42_sync_fifo_tb::dumpTriggersNba() {
    Vday42_sync_fifo_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday42_sync_fifo_tb::dumpTriggersObs() {
    Vday42_sync_fifo_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vday42_sync_fifo_tb::dumpTriggersReact() {
    Vday42_sync_fifo_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

void Vday42_sync_fifo_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vday42_sync_fifo_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vday42_sync_fifo_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vday42_sync_fifo_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday42_sync_fifo_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vday42_sync_fifo_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday42_sync_fifo_tb::hierName() const { return vlSymsp->name(); }
const char* Vday42_sync_fifo_tb::modelName() const { return "Vday42_sync_fifo_tb"; }
unsigned Vday42_sync_fifo_tb::threads() const { return 1; }
void Vday42_sync_fifo_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday42_sync_fifo_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vday42_sync_fifo_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vday42_sync_fifo_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vday42_sync_fifo_tb___024root__trace_init_top(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vday42_sync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vday42_sync_fifo_tb___024root*>(voidSelf);
    Vday42_sync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vday42_sync_fifo_tb___024root__trace_decl_types(tracep);
    Vday42_sync_fifo_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vday42_sync_fifo_tb___024root__trace_register(Vday42_sync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vday42_sync_fifo_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vday42_sync_fifo_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 51);
    Vday42_sync_fifo_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
