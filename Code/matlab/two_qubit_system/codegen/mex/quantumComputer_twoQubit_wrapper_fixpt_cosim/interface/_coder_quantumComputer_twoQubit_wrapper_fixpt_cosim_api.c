/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_api.c
 *
 * Code generation for function
 * '_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_api'
 *
 */

/* Include files */
#include "_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_api.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_data.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_mexutil.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               uint16_T y[3]);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, int16_T y[3]);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               int16_T y[3]);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, cint16_T y[2]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                             const char_T *identifier, uint16_T y[3]);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               cint16_T y[2]);

static void g_emlrt_marshallIn(const mxArray *src, uint16_T ret[3]);

static void h_emlrt_marshallIn(const mxArray *src, int16_T ret[3]);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               cint16_T ret[2]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               uint16_T y[3])
{
  static const int32_T dims = 3;
  emlrtCheckFiR2012b((emlrtCTX)sp, parentId, u, false, 1U, (void *)&dims,
                     eml_mx, b_eml_mx);
  g_emlrt_marshallIn(emlrtAlias(u), y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, int16_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, int16_T y[3])
{
  static const int32_T dims = 3;
  emlrtCheckFiR2012b((emlrtCTX)sp, parentId, u, false, 1U, (void *)&dims,
                     eml_mx, c_eml_mx);
  h_emlrt_marshallIn(emlrtAlias(u), y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, cint16_T y[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                             const char_T *identifier, uint16_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               cint16_T y[2])
{
  static const int32_T dims = 2;
  emlrtCheckFiR2012b((emlrtCTX)sp, parentId, u, true, 1U, (void *)&dims, eml_mx,
                     d_eml_mx);
  i_emlrt_marshallIn(sp, emlrtAlias(u), y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const mxArray *src, uint16_T ret[3])
{
  const mxArray *mxInt;
  uint16_T(*b_r)[3];
  mxInt = emlrtImportFiIntArrayR2008b(src);
  b_r = (uint16_T(*)[3])emlrtMxGetData(mxInt);
  ret[0] = (*b_r)[0];
  ret[1] = (*b_r)[1];
  ret[2] = (*b_r)[2];
  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const mxArray *src, int16_T ret[3])
{
  const mxArray *mxInt;
  int16_T(*b_r)[3];
  mxInt = emlrtImportFiIntArrayR2008b(src);
  b_r = (int16_T(*)[3])emlrtMxGetData(mxInt);
  ret[0] = (*b_r)[0];
  ret[1] = (*b_r)[1];
  ret[2] = (*b_r)[2];
  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               cint16_T ret[2])
{
  const mxArray *mxInt;
  mxInt = emlrtImportFiIntArrayR2008b(src);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, mxInt, &ret[0], 2, true);
  emlrtDestroyArray(&mxInt);
  emlrtDestroyArray(&src);
}

void d_quantumComputer_twoQubit_wrap(const mxArray *const prhs[10],
                                     int32_T nlhs, const mxArray *plhs[4])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  cint16_T computerState[4];
  cint16_T initState_0[2];
  cint16_T initState_1[2];
  int16_T lambda_0[3];
  int16_T lambda_1[3];
  int16_T phi_0[3];
  int16_T phi_1[3];
  int16_T theta_0[3];
  int16_T theta_1[3];
  uint16_T probFinal[4];
  uint16_T opName_0[3];
  uint16_T opName_1[3];
  uint16_T probQubit0[2];
  uint16_T probQubit1[2];
  st.tls = emlrtRootTLSGlobal;
  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "opName_0", opName_0);
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "theta_0", theta_0);
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "phi_0", phi_0);
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "lambda_0", lambda_0);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "opName_1", opName_1);
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "theta_1", theta_1);
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "phi_1", phi_1);
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "lambda_1", lambda_1);
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "initState_0", initState_0);
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "initState_1", initState_1);
  /* Invoke the target function */
  quantumComputer_twoQubit_wrapper_fixpt_cosim(
      &st, opName_0, theta_0, phi_0, lambda_0, opName_1, theta_1, phi_1,
      lambda_1, initState_0, initState_1, computerState, probFinal, probQubit0,
      probQubit1);
  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(&st, computerState);
  if (nlhs > 1) {
    plhs[1] = e_emlrt_marshallOut(&st, probFinal);
  }
  if (nlhs > 2) {
    plhs[2] = f_emlrt_marshallOut(&st, probQubit0);
  }
  if (nlhs > 3) {
    plhs[3] = f_emlrt_marshallOut(&st, probQubit1);
  }
}

/* End of code generation
 * (_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_api.c) */
