// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate.h for the primary calling header

#include "Vand_gate__pch.h"
#include "Vand_gate__Syms.h"
#include "Vand_gate___024root.h"

VL_INLINE_OPT VlCoroutine Vand_gate___024root___eval_initial__TOP__Vtiming__0(Vand_gate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF("A B | Y\n");
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->and_gate_tb__DOT__a = 0U;
    vlSelf->and_gate_tb__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "and_gate_tb.v", 
                                       20);
    vlSelf->and_gate_tb__DOT__a = 0U;
    vlSelf->and_gate_tb__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "and_gate_tb.v", 
                                       21);
    vlSelf->and_gate_tb__DOT__a = 1U;
    vlSelf->and_gate_tb__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "and_gate_tb.v", 
                                       22);
    vlSelf->and_gate_tb__DOT__a = 1U;
    vlSelf->and_gate_tb__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "and_gate_tb.v", 
                                       23);
    VL_FINISH_MT("and_gate_tb.v", 25, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate___024root___dump_triggers__act(Vand_gate___024root* vlSelf);
#endif  // VL_DEBUG

void Vand_gate___024root___eval_triggers__act(Vand_gate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vand_gate___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vand_gate___024root___act_sequent__TOP__0(Vand_gate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("%0# %0# | %0#\n",1,vlSelf->and_gate_tb__DOT__a,
                  1,(IData)(vlSelf->and_gate_tb__DOT__b),
                  1,((IData)(vlSelf->and_gate_tb__DOT__a) 
                     & (IData)(vlSelf->and_gate_tb__DOT__b)));
    }
}
