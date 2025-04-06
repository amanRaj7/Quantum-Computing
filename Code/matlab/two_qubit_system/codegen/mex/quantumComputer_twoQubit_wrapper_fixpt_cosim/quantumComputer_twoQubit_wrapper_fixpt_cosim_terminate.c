/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quantumComputer_twoQubit_wrapper_fixpt_cosim_terminate.c
 *
 * Code generation for function
 * 'quantumComputer_twoQubit_wrapper_fixpt_cosim_terminate'
 *
 */

/* Include files */
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_terminate.h"
#include "_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_mex.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void emlrtExitTimeCleanupDtorFcn(const void *b_r);

/* Function Definitions */
static void emlrtExitTimeCleanupDtorFcn(const void *b_r)
{
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void quantumComputer_twoQubit_wrapper_fixpt_cosim_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtPushHeapReferenceStackR2021a(
      &st, false, NULL, (void *)&emlrtExitTimeCleanupDtorFcn, NULL, NULL, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
  emlrtDestroyArray(&eml_mx);
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&c_eml_mx);
  emlrtDestroyArray(&d_eml_mx);
  emlrtDestroyArray(&e_eml_mx);
}

void quantumComputer_twoQubit_wrapper_fixpt_cosim_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation
 * (quantumComputer_twoQubit_wrapper_fixpt_cosim_terminate.c) */
