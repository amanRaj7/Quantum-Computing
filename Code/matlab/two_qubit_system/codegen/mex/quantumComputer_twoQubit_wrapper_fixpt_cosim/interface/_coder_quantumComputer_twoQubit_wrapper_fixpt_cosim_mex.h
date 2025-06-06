/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_mex.h
 *
 * Code generation for function
 * '_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_mex'
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
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

void quantumComputer_twoQubit_wrapper_fixpt_cosim_mexFunction(
    int32_T nlhs, mxArray *plhs[4], int32_T nrhs, const mxArray *prhs[10]);

/* End of code generation
 * (_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_mex.h) */
