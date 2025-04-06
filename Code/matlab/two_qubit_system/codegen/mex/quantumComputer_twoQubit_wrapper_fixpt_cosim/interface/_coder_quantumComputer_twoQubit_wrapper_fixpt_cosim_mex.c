/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_mex.c
 *
 * Code generation for function
 * '_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_mex'
 *
 */

/* Include files */
#include "_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_mex.h"
#include "_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_api.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_data.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_initialize.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&quantumComputer_twoQubit_wrapper_fixpt_cosim_atexit);
  /* Module initialization. */
  quantumComputer_twoQubit_wrapper_fixpt_cosim_initialize();
  /* Dispatch the entry-point. */
  quantumComputer_twoQubit_wrapper_fixpt_cosim_mexFunction(nlhs, plhs, nrhs,
                                                           prhs);
  /* Module termination. */
  quantumComputer_twoQubit_wrapper_fixpt_cosim_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void quantumComputer_twoQubit_wrapper_fixpt_cosim_mexFunction(
    int32_T nlhs, mxArray *plhs[4], int32_T nrhs, const mxArray *prhs[10])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[4];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        44, "quantumComputer_twoQubit_wrapper_fixpt_cosim");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 44,
                        "quantumComputer_twoQubit_wrapper_fixpt_cosim");
  }
  /* Call the function. */
  d_quantumComputer_twoQubit_wrap(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation
 * (_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_mex.c) */
