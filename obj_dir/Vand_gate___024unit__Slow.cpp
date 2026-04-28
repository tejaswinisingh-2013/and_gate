// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate.h for the primary calling header

#include "Vand_gate__pch.h"
#include "Vand_gate__Syms.h"
#include "Vand_gate___024unit.h"

void Vand_gate___024unit___ctor_var_reset(Vand_gate___024unit* vlSelf);

Vand_gate___024unit::Vand_gate___024unit(Vand_gate__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vand_gate___024unit___ctor_var_reset(this);
}

void Vand_gate___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vand_gate___024unit::~Vand_gate___024unit() {
}
