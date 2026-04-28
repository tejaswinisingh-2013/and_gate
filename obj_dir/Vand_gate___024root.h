// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vand_gate.h for the primary calling header

#ifndef VERILATED_VAND_GATE___024ROOT_H_
#define VERILATED_VAND_GATE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vand_gate___024unit;


class Vand_gate__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vand_gate___024root final : public VerilatedModule {
  public:
    // CELLS
    Vand_gate___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ and_gate_tb__DOT__a;
    CData/*0:0*/ and_gate_tb__DOT__b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vand_gate__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vand_gate___024root(Vand_gate__Syms* symsp, const char* v__name);
    ~Vand_gate___024root();
    VL_UNCOPYABLE(Vand_gate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
