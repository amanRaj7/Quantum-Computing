/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quantumComputer_twoQubit_wrapper_fixpt_cosim.h
 *
 * Code generation for function 'quantumComputer_twoQubit_wrapper_fixpt_cosim'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void quantumComputer_twoQubit_wrapper_fixpt_cosim(
    const emlrtStack *sp, const uint16_T opName_0[3], const int16_T theta_0[3],
    const int16_T phi_0[3], const int16_T lambda_0[3],
    const uint16_T opName_1[3], const int16_T theta_1[3],
    const int16_T phi_1[3], const int16_T lambda_1[3],
    const cint16_T initState_0[2], const cint16_T initState_1[2],
    cint16_T computerState[4], uint16_T probFinal[4], uint16_T probQubit0[2],
    uint16_T probQubit1[2]);

/* End of code generation (quantumComputer_twoQubit_wrapper_fixpt_cosim.h) */
