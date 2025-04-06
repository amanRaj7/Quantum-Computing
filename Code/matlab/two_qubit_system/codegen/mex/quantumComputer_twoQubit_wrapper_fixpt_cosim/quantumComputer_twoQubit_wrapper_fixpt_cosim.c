/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quantumComputer_twoQubit_wrapper_fixpt_cosim.c
 *
 * Code generation for function 'quantumComputer_twoQubit_wrapper_fixpt_cosim'
 *
 */

/* Include files */
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim.h"
#include "cordicabs.h"
#include "quantumComputer_twoQubit_fixpt.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_data.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_mexutil.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Type Definitions */
#ifndef typedef_cint128m_T
#define typedef_cint128m_T
typedef struct {
  int128m_T re;
  int128m_T im;
} cint128m_T;
#endif /* typedef_cint128m_T */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    18,                                             /* lineNo */
    "quantumComputer_twoQubit_wrapper_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_wra"
    "pper_fixpt_cosim.m" /* pathName */
};

static emlrtMCInfo b_emlrtMCI = {
    99,                                     /* lineNo */
    1,                                      /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    102,                                    /* lineNo */
    14,                                     /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    104,                                    /* lineNo */
    14,                                     /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI = {
    106,                                    /* lineNo */
    13,                                     /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI = {
    108,                                    /* lineNo */
    20,                                     /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI = {
    110,                                    /* lineNo */
    20,                                     /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI = {
    112,                                    /* lineNo */
    17,                                     /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI = {
    117,                                    /* lineNo */
    1,                                      /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtMCInfo j_emlrtMCI = {
    118,                                    /* lineNo */
    1,                                      /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtMCInfo k_emlrtMCI = {
    119,                                    /* lineNo */
    1,                                      /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtMCInfo l_emlrtMCI = {
    120,                                    /* lineNo */
    1,                                      /* colNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pName */
};

static emlrtRSInfo bb_emlrtRSI = {
    99,                                     /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    117,                                    /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI = {
    118,                                    /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    120,                                    /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    119,                                    /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    104,                                    /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    102,                                    /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    110,                                    /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    108,                                    /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    106,                                    /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    112,                                    /* lineNo */
    "quantumComputer_twoQubit_fixpt_cosim", /* fcnName */
    "C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
    "system\\codegen\\quantumComputer_twoQubit\\cosim\\quantumComputer_"
    "twoQubit_fix"
    "pt_cosim.m" /* pathName */
};

/* Function Declarations */
static void MultiWordSub(const uint64_T u1[], const uint64_T u2[],
                         uint64_T y[]);

static const mxArray *b_complex(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location);

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const int16_T u);

static const mxArray *b_vertcat(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, const mxArray *m3,
                                const mxArray *m4, emlrtMCInfo *location);

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const int16_T u);

static void c_quantumComputer_twoQubit_fixp(
    const emlrtStack *sp, const mxArray *m, const mxArray *m1,
    const mxArray *m2, const mxArray *m3, const mxArray *m4, const mxArray *m5,
    const mxArray *m6, const mxArray *m7, const mxArray *m8, const mxArray *m9,
    const mxArray *m10, const mxArray *m11, const mxArray *m12,
    const mxArray *m13, const mxArray *m14, const mxArray *m15,
    const mxArray *m16, const mxArray *m17, const mxArray *m18,
    const mxArray *m19, const mxArray *m20, const mxArray *m21,
    const mxArray *m22, const mxArray *m23, const mxArray *m24,
    const mxArray *m25, const mxArray *m26, const mxArray *m27,
    const mxArray *m28, const mxArray *m29, const mxArray *m30,
    const mxArray *m31, emlrtMCInfo *location, const mxArray **b_r,
    const mxArray **r1, const mxArray **r2, const mxArray **r3,
    const mxArray **r4, const mxArray **r5, const mxArray **r6,
    const mxArray **r7, const mxArray **r8, const mxArray **r9,
    const mxArray **r10, const mxArray **r11, const mxArray **r12,
    const mxArray **r13, const mxArray **r14, const mxArray **r15);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const uint16_T u);

static void hdlverifier_assert(const emlrtStack *sp, const mxArray *m,
                               const mxArray *m1, const mxArray *m2,
                               emlrtMCInfo *location);

static const mxArray *vertcat(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, emlrtMCInfo *location);

/* Function Definitions */
static void MultiWordSub(const uint64_T u1[], const uint64_T u2[], uint64_T y[])
{
  uint64_T borrow = 0ULL;
  int32_T i;
  for (i = 0; i < 2; i++) {
    uint64_T u1i;
    uint64_T yi;
    u1i = u1[i];
    yi = (u1i - u2[i]) - borrow;
    y[i] = yi;
    if (borrow != 0ULL) {
      borrow = (uint64_T)(yi >= u1i);
    } else {
      borrow = (uint64_T)(yi > u1i);
    }
  }
}

static const mxArray *b_complex(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
                               "complex", true, location);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const int16_T u)
{
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  b_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&b_y, m);
  emlrtAssign(&y, emlrtCreateFIR2013b((emlrtCTX)sp, eml_mx, c_eml_mx,
                                      "simulinkarray", b_y, true, false));
  return y;
}

static const mxArray *b_vertcat(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, const mxArray *m3,
                                const mxArray *m4, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 4, &pArrays[0],
                               "vertcat", true, location);
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const int16_T u)
{
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  b_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&b_y, m);
  emlrtAssign(&y, emlrtCreateFIR2013b((emlrtCTX)sp, eml_mx, d_eml_mx,
                                      "simulinkarray", b_y, true, false));
  return y;
}

static void c_quantumComputer_twoQubit_fixp(
    const emlrtStack *sp, const mxArray *m, const mxArray *m1,
    const mxArray *m2, const mxArray *m3, const mxArray *m4, const mxArray *m5,
    const mxArray *m6, const mxArray *m7, const mxArray *m8, const mxArray *m9,
    const mxArray *m10, const mxArray *m11, const mxArray *m12,
    const mxArray *m13, const mxArray *m14, const mxArray *m15,
    const mxArray *m16, const mxArray *m17, const mxArray *m18,
    const mxArray *m19, const mxArray *m20, const mxArray *m21,
    const mxArray *m22, const mxArray *m23, const mxArray *m24,
    const mxArray *m25, const mxArray *m26, const mxArray *m27,
    const mxArray *m28, const mxArray *m29, const mxArray *m30,
    const mxArray *m31, emlrtMCInfo *location, const mxArray **b_r,
    const mxArray **r1, const mxArray **r2, const mxArray **r3,
    const mxArray **r4, const mxArray **r5, const mxArray **r6,
    const mxArray **r7, const mxArray **r8, const mxArray **r9,
    const mxArray **r10, const mxArray **r11, const mxArray **r12,
    const mxArray **r13, const mxArray **r14, const mxArray **r15)
{
  const mxArray *pArrays[32];
  const mxArray *mv[16];
  pArrays[0] = m;
  pArrays[1] = m1;
  pArrays[2] = m2;
  pArrays[3] = m3;
  pArrays[4] = m4;
  pArrays[5] = m5;
  pArrays[6] = m6;
  pArrays[7] = m7;
  pArrays[8] = m8;
  pArrays[9] = m9;
  pArrays[10] = m10;
  pArrays[11] = m11;
  pArrays[12] = m12;
  pArrays[13] = m13;
  pArrays[14] = m14;
  pArrays[15] = m15;
  pArrays[16] = m16;
  pArrays[17] = m17;
  pArrays[18] = m18;
  pArrays[19] = m19;
  pArrays[20] = m20;
  pArrays[21] = m21;
  pArrays[22] = m22;
  pArrays[23] = m23;
  pArrays[24] = m24;
  pArrays[25] = m25;
  pArrays[26] = m26;
  pArrays[27] = m27;
  pArrays[28] = m28;
  pArrays[29] = m29;
  pArrays[30] = m30;
  pArrays[31] = m31;
  emlrtAssign(
      b_r, emlrtCallMATLABR2012b((emlrtConstCTX)sp, 16, &mv[0], 32, &pArrays[0],
                                 "quantumComputer_twoQubit_fixpt_sysobj_cosim",
                                 true, location));
  emlrtAssign(r1, mv[1]);
  emlrtAssign(r2, mv[2]);
  emlrtAssign(r3, mv[3]);
  emlrtAssign(r4, mv[4]);
  emlrtAssign(r5, mv[5]);
  emlrtAssign(r6, mv[6]);
  emlrtAssign(r7, mv[7]);
  emlrtAssign(r8, mv[8]);
  emlrtAssign(r9, mv[9]);
  emlrtAssign(r10, mv[10]);
  emlrtAssign(r11, mv[11]);
  emlrtAssign(r12, mv[12]);
  emlrtAssign(r13, mv[13]);
  emlrtAssign(r14, mv[14]);
  emlrtAssign(r15, mv[15]);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const uint16_T u)
{
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  b_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT16_CLASS, mxREAL);
  *(uint16_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&b_y, m);
  emlrtAssign(&y, emlrtCreateFIR2013b((emlrtCTX)sp, eml_mx, b_eml_mx,
                                      "simulinkarray", b_y, false, false));
  return y;
}

static void hdlverifier_assert(const emlrtStack *sp, const mxArray *m,
                               const mxArray *m1, const mxArray *m2,
                               emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  pArrays[0] = m;
  pArrays[1] = m1;
  pArrays[2] = m2;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 3, &pArrays[0],
                        "hdlverifier.assert", true, location);
}

static const mxArray *vertcat(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
                               "vertcat", true, location);
}

void quantumComputer_twoQubit_wrapper_fixpt_cosim(
    const emlrtStack *sp, const uint16_T opName_0[3], const int16_T theta_0[3],
    const int16_T phi_0[3], const int16_T lambda_0[3],
    const uint16_T opName_1[3], const int16_T theta_1[3],
    const int16_T phi_1[3], const int16_T lambda_1[3],
    const cint16_T initState_0[2], const cint16_T initState_1[2],
    cint16_T computerState[4], uint16_T probFinal[4], uint16_T probQubit0[2],
    uint16_T probQubit1[2])
{
  static const int32_T iv1[2] = {1, 13};
  static const int32_T iv2[2] = {1, 9};
  static const int32_T iv3[2] = {1, 10};
  static const int32_T iv4[2] = {1, 10};
  static const int16_T iv[8] = {MAX_int16_T, 0, 0, MAX_int16_T, 0, 0, 0, 0};
  static const char_T b_u[13] = {'c', 'o', 'm', 'p', 'u', 't', 'e',
                                 'r', 'S', 't', 'a', 't', 'e'};
  static const char_T d_u[10] = {'p', 'r', 'o', 'b', 'Q',
                                 'u', 'b', 'i', 't', '0'};
  static const char_T e_u[10] = {'p', 'r', 'o', 'b', 'Q',
                                 'u', 'b', 'i', 't', '1'};
  static const char_T c_u[9] = {'p', 'r', 'o', 'b', 'F', 'i', 'n', 'a', 'l'};
  cint128m_T c_c[4];
  emlrtStack b_st;
  emlrtStack st;
  int128m_T b_r;
  int128m_T r1;
  int128m_T r2;
  int128m_T r3;
  int128m_T r4;
  int128m_T r5;
  int128m_T r8;
  int128m_T r9;
  int192m_T r10;
  int192m_T r11;
  int192m_T r6;
  int192m_T r7;
  const mxArray *b_computerState;
  const mxArray *b_m;
  const mxArray *b_probFinal;
  const mxArray *b_probQubit0;
  const mxArray *b_probQubit1;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *computerState_im;
  const mxArray *computerState_im_1;
  const mxArray *computerState_im_2;
  const mxArray *computerState_im_3;
  const mxArray *computerState_im_4;
  const mxArray *computerState_re;
  const mxArray *computerState_re_1;
  const mxArray *computerState_re_2;
  const mxArray *computerState_re_3;
  const mxArray *computerState_re_4;
  const mxArray *d_y;
  const mxArray *probFinal_1;
  const mxArray *probFinal_2;
  const mxArray *probFinal_3;
  const mxArray *probFinal_4;
  const mxArray *probQubit0_1;
  const mxArray *probQubit0_2;
  const mxArray *probQubit1_1;
  const mxArray *probQubit1_2;
  const mxArray *y;
  cint64_T b_c[16];
  cint64_T c[16];
  cint64_T b0[4];
  cint16_T op_0[16];
  cint16_T op_1[16];
  cint16_T op_2[16];
  cint16_T op_0_0[4];
  cint16_T op_0_1[4];
  cint16_T op_1_0[4];
  cint16_T op_1_1[4];
  cint16_T op_2_0[4];
  cint16_T op_2_1[4];
  int64_T c_01_im;
  int64_T c_01_re;
  int64_T f_im;
  int64_T f_re;
  int32_T abs_value[4];
  int32_T l;
  int32_T m;
  int32_T re_tmp;
  int32_T re_tmp_tmp;
  uint32_T u;
  int16_T b_im;
  int16_T b_re;
  int16_T c_im;
  int16_T c_re;
  int16_T d_im;
  int16_T d_re;
  int16_T im;
  int16_T re;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  /*                                                                           %
   */
  /*           Generated by MATLAB 24.1 and Fixed-Point Designer 24.1          %
   */
  /*                                                                           %
   */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  st.site = &emlrtRSI;
  b_probQubit1 = NULL;
  b_probQubit0 = NULL;
  b_probFinal = NULL;
  computerState_im = NULL;
  computerState_re = NULL;
  b_computerState = NULL;
  computerState_re_1 = NULL;
  computerState_re_2 = NULL;
  computerState_re_3 = NULL;
  computerState_re_4 = NULL;
  computerState_im_1 = NULL;
  computerState_im_2 = NULL;
  computerState_im_3 = NULL;
  computerState_im_4 = NULL;
  probFinal_1 = NULL;
  probFinal_2 = NULL;
  probFinal_3 = NULL;
  probFinal_4 = NULL;
  probQubit0_1 = NULL;
  probQubit0_2 = NULL;
  probQubit1_1 = NULL;
  probQubit1_2 = NULL;
  /*  Auto generated function to simulate the generated HDL code using
   * cosimulation */
  /*   */
  /*  Generated by MATLAB 24.1 and HDL Coder 24.1 */
  /*  Declare persistent variables */
  /*  Initialize persistent variables */
  /*  Call the original MATLAB function to get reference signal */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  /*                                                                           %
   */
  /*           Generated by MATLAB 24.1 and Fixed-Point Designer 24.1          %
   */
  /*                                                                           %
   */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   */
  c_01_re = (int64_T)(initState_0[0].re * initState_1[1].re) -
            initState_0[0].im * initState_1[1].im;
  c_01_im = (int64_T)(initState_0[0].re * initState_1[1].im) +
            initState_0[0].im * initState_1[1].re;
  getOperator(opName_0[0], theta_0[0], phi_0[0], lambda_0[0], op_0_0);
  getOperator(opName_0[1], theta_0[1], phi_0[1], lambda_0[1], op_1_0);
  getOperator(opName_0[2], theta_0[2], phi_0[2], lambda_0[2], op_2_0);
  getOperator(opName_1[0], theta_1[0], phi_1[0], lambda_1[0], op_0_1);
  getOperator(opName_1[1], theta_1[1], phi_1[1], lambda_1[1], op_1_1);
  getOperator(opName_1[2], theta_1[2], phi_1[0], lambda_1[2], op_2_1);
  if (opName_0[0] == 15) {
    for (l = 0; l < 4; l++) {
      re_tmp_tmp = l << 1;
      re_tmp = l << 2;
      op_2[re_tmp].re = iv[re_tmp_tmp];
      op_2[re_tmp].im = 0;
      op_2[re_tmp + 1].re = iv[re_tmp_tmp + 1];
      op_2[re_tmp + 1].im = 0;
    }
    op_2[2].re = 0;
    op_2[2].im = 0;
    re = (int16_T)((op_0_1[0].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_0_1[0].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[10].re = MAX_int16_T;
    } else {
      op_2[10].re = 0;
    }
    if (im > 0) {
      op_2[10].im = MAX_int16_T;
    } else {
      op_2[10].im = 0;
    }
    op_2[3].re = 0;
    op_2[3].im = 0;
    re = (int16_T)((op_0_1[1].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_0_1[1].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[11].re = MAX_int16_T;
    } else {
      op_2[11].re = 0;
    }
    if (im > 0) {
      op_2[11].im = MAX_int16_T;
    } else {
      op_2[11].im = 0;
    }
    op_2[6].re = 0;
    op_2[6].im = 0;
    re = (int16_T)((op_0_1[2].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_0_1[2].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[14].re = MAX_int16_T;
    } else {
      op_2[14].re = 0;
    }
    if (im > 0) {
      op_2[14].im = MAX_int16_T;
    } else {
      op_2[14].im = 0;
    }
    op_2[7].re = 0;
    op_2[7].im = 0;
    re = (int16_T)((op_0_1[3].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_0_1[3].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[15].re = MAX_int16_T;
    } else {
      op_2[15].re = 0;
    }
    if (im > 0) {
      op_2[15].im = MAX_int16_T;
    } else {
      op_2[15].im = 0;
    }
    memcpy(&op_0[0], &op_2[0], 16U * sizeof(cint16_T));
  } else if (opName_1[0] == 15) {
    op_2[1].re = 0;
    op_2[1].im = 0;
    re = (int16_T)((op_0_0[0].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_0_0[0].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[5].re = MAX_int16_T;
    } else {
      op_2[5].re = 0;
    }
    if (im > 0) {
      op_2[5].im = MAX_int16_T;
    } else {
      op_2[5].im = 0;
    }
    op_2[9].re = 0;
    op_2[9].im = 0;
    re = (int16_T)((op_0_0[2].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_0_0[2].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[13].re = MAX_int16_T;
    } else {
      op_2[13].re = 0;
    }
    if (im > 0) {
      op_2[13].im = MAX_int16_T;
    } else {
      op_2[13].im = 0;
    }
    op_2[0].re = MAX_int16_T;
    op_2[0].im = 0;
    op_2[2].re = 0;
    op_2[2].im = 0;
    op_2[4].re = 0;
    op_2[4].im = 0;
    op_2[6].re = 0;
    op_2[6].im = 0;
    op_2[8].re = 0;
    op_2[8].im = 0;
    op_2[10].re = MAX_int16_T;
    op_2[10].im = 0;
    op_2[12].re = 0;
    op_2[12].im = 0;
    op_2[14].re = 0;
    op_2[14].im = 0;
    op_2[3].re = 0;
    op_2[3].im = 0;
    re = (int16_T)((op_0_0[1].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_0_0[1].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[7].re = MAX_int16_T;
    } else {
      op_2[7].re = 0;
    }
    if (im > 0) {
      op_2[7].im = MAX_int16_T;
    } else {
      op_2[7].im = 0;
    }
    op_2[11].re = 0;
    op_2[11].im = 0;
    re = (int16_T)((op_0_0[3].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_0_0[3].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[15].re = MAX_int16_T;
    } else {
      op_2[15].re = 0;
    }
    if (im > 0) {
      op_2[15].im = MAX_int16_T;
    } else {
      op_2[15].im = 0;
    }
    memcpy(&op_0[0], &op_2[0], 16U * sizeof(cint16_T));
  } else {
    l = op_0_0[0].re * op_0_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[0].im * op_0_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[0].re = (int16_T)l;
    l = op_0_0[0].re * op_0_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[0].im * op_0_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[0].im = (int16_T)l;
    l = op_0_0[2].re * op_0_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[2].im * op_0_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[8].re = (int16_T)l;
    l = op_0_0[2].re * op_0_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[2].im * op_0_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[8].im = (int16_T)l;
    l = op_0_0[1].re * op_0_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[1].im * op_0_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[2].re = (int16_T)l;
    l = op_0_0[1].re * op_0_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[1].im * op_0_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[2].im = (int16_T)l;
    l = op_0_0[3].re * op_0_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[3].im * op_0_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[10].re = (int16_T)l;
    l = op_0_0[3].re * op_0_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[3].im * op_0_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[10].im = (int16_T)l;
    l = op_0_0[0].re * op_0_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[0].im * op_0_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[1].re = (int16_T)l;
    l = op_0_0[0].re * op_0_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[0].im * op_0_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[1].im = (int16_T)l;
    l = op_0_0[2].re * op_0_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[2].im * op_0_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[9].re = (int16_T)l;
    l = op_0_0[2].re * op_0_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[2].im * op_0_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[9].im = (int16_T)l;
    l = op_0_0[1].re * op_0_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[1].im * op_0_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[3].re = (int16_T)l;
    l = op_0_0[1].re * op_0_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[1].im * op_0_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[3].im = (int16_T)l;
    l = op_0_0[3].re * op_0_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[3].im * op_0_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[11].re = (int16_T)l;
    l = op_0_0[3].re * op_0_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[3].im * op_0_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[11].im = (int16_T)l;
    l = op_0_0[0].re * op_0_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[0].im * op_0_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[4].re = (int16_T)l;
    l = op_0_0[0].re * op_0_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[0].im * op_0_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[4].im = (int16_T)l;
    l = op_0_0[2].re * op_0_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[2].im * op_0_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[12].re = (int16_T)l;
    l = op_0_0[2].re * op_0_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[2].im * op_0_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[12].im = (int16_T)l;
    l = op_0_0[1].re * op_0_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[1].im * op_0_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[6].re = (int16_T)l;
    l = op_0_0[1].re * op_0_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[1].im * op_0_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[6].im = (int16_T)l;
    l = op_0_0[3].re * op_0_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[3].im * op_0_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[14].re = (int16_T)l;
    l = op_0_0[3].re * op_0_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[3].im * op_0_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[14].im = (int16_T)l;
    l = op_0_0[0].re * op_0_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[0].im * op_0_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[5].re = (int16_T)l;
    l = op_0_0[0].re * op_0_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[0].im * op_0_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[5].im = (int16_T)l;
    l = op_0_0[2].re * op_0_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[2].im * op_0_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[13].re = (int16_T)l;
    l = op_0_0[2].re * op_0_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[2].im * op_0_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[13].im = (int16_T)l;
    l = op_0_0[1].re * op_0_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[1].im * op_0_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[7].re = (int16_T)l;
    l = op_0_0[1].re * op_0_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[1].im * op_0_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[7].im = (int16_T)l;
    l = op_0_0[3].re * op_0_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[3].im * op_0_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[15].re = (int16_T)l;
    l = op_0_0[3].re * op_0_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_0_0[3].im * op_0_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[15].im = (int16_T)l;
    memcpy(&op_0[0], &op_2[0], 16U * sizeof(cint16_T));
  }
  if (opName_0[1] == 15) {
    for (l = 0; l < 4; l++) {
      re_tmp_tmp = l << 1;
      re_tmp = l << 2;
      op_2[re_tmp].re = iv[re_tmp_tmp];
      op_2[re_tmp].im = 0;
      op_2[re_tmp + 1].re = iv[re_tmp_tmp + 1];
      op_2[re_tmp + 1].im = 0;
    }
    op_2[2].re = 0;
    op_2[2].im = 0;
    re = (int16_T)((op_1_1[0].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_1_1[0].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[10].re = MAX_int16_T;
    } else {
      op_2[10].re = 0;
    }
    if (im > 0) {
      op_2[10].im = MAX_int16_T;
    } else {
      op_2[10].im = 0;
    }
    op_2[3].re = 0;
    op_2[3].im = 0;
    re = (int16_T)((op_1_1[1].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_1_1[1].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[11].re = MAX_int16_T;
    } else {
      op_2[11].re = 0;
    }
    if (im > 0) {
      op_2[11].im = MAX_int16_T;
    } else {
      op_2[11].im = 0;
    }
    op_2[6].re = 0;
    op_2[6].im = 0;
    re = (int16_T)((op_1_1[2].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_1_1[2].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[14].re = MAX_int16_T;
    } else {
      op_2[14].re = 0;
    }
    if (im > 0) {
      op_2[14].im = MAX_int16_T;
    } else {
      op_2[14].im = 0;
    }
    op_2[7].re = 0;
    op_2[7].im = 0;
    re = (int16_T)((op_1_1[3].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_1_1[3].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[15].re = MAX_int16_T;
    } else {
      op_2[15].re = 0;
    }
    if (im > 0) {
      op_2[15].im = MAX_int16_T;
    } else {
      op_2[15].im = 0;
    }
    memcpy(&op_1[0], &op_2[0], 16U * sizeof(cint16_T));
  } else if (opName_1[1] == 15) {
    op_2[1].re = 0;
    op_2[1].im = 0;
    re = (int16_T)((op_1_0[0].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_1_0[0].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[5].re = MAX_int16_T;
    } else {
      op_2[5].re = 0;
    }
    if (im > 0) {
      op_2[5].im = MAX_int16_T;
    } else {
      op_2[5].im = 0;
    }
    op_2[9].re = 0;
    op_2[9].im = 0;
    re = (int16_T)((op_1_0[2].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_1_0[2].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[13].re = MAX_int16_T;
    } else {
      op_2[13].re = 0;
    }
    if (im > 0) {
      op_2[13].im = MAX_int16_T;
    } else {
      op_2[13].im = 0;
    }
    op_2[0].re = MAX_int16_T;
    op_2[0].im = 0;
    op_2[2].re = 0;
    op_2[2].im = 0;
    op_2[4].re = 0;
    op_2[4].im = 0;
    op_2[6].re = 0;
    op_2[6].im = 0;
    op_2[8].re = 0;
    op_2[8].im = 0;
    op_2[10].re = MAX_int16_T;
    op_2[10].im = 0;
    op_2[12].re = 0;
    op_2[12].im = 0;
    op_2[14].re = 0;
    op_2[14].im = 0;
    op_2[3].re = 0;
    op_2[3].im = 0;
    re = (int16_T)((op_1_0[1].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_1_0[1].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[7].re = MAX_int16_T;
    } else {
      op_2[7].re = 0;
    }
    if (im > 0) {
      op_2[7].im = MAX_int16_T;
    } else {
      op_2[7].im = 0;
    }
    op_2[11].re = 0;
    op_2[11].im = 0;
    re = (int16_T)((op_1_0[3].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_1_0[3].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[15].re = MAX_int16_T;
    } else {
      op_2[15].re = 0;
    }
    if (im > 0) {
      op_2[15].im = MAX_int16_T;
    } else {
      op_2[15].im = 0;
    }
    memcpy(&op_1[0], &op_2[0], 16U * sizeof(cint16_T));
  } else {
    l = op_1_0[0].re * op_1_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[0].im * op_1_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[0].re = (int16_T)l;
    l = op_1_0[0].re * op_1_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[0].im * op_1_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[0].im = (int16_T)l;
    l = op_1_0[2].re * op_1_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[2].im * op_1_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[8].re = (int16_T)l;
    l = op_1_0[2].re * op_1_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[2].im * op_1_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[8].im = (int16_T)l;
    l = op_1_0[1].re * op_1_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[1].im * op_1_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[2].re = (int16_T)l;
    l = op_1_0[1].re * op_1_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[1].im * op_1_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[2].im = (int16_T)l;
    l = op_1_0[3].re * op_1_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[3].im * op_1_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[10].re = (int16_T)l;
    l = op_1_0[3].re * op_1_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[3].im * op_1_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[10].im = (int16_T)l;
    l = op_1_0[0].re * op_1_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[0].im * op_1_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[1].re = (int16_T)l;
    l = op_1_0[0].re * op_1_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[0].im * op_1_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[1].im = (int16_T)l;
    l = op_1_0[2].re * op_1_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[2].im * op_1_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[9].re = (int16_T)l;
    l = op_1_0[2].re * op_1_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[2].im * op_1_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[9].im = (int16_T)l;
    l = op_1_0[1].re * op_1_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[1].im * op_1_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[3].re = (int16_T)l;
    l = op_1_0[1].re * op_1_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[1].im * op_1_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[3].im = (int16_T)l;
    l = op_1_0[3].re * op_1_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[3].im * op_1_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[11].re = (int16_T)l;
    l = op_1_0[3].re * op_1_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[3].im * op_1_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[11].im = (int16_T)l;
    l = op_1_0[0].re * op_1_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[0].im * op_1_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[4].re = (int16_T)l;
    l = op_1_0[0].re * op_1_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[0].im * op_1_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[4].im = (int16_T)l;
    l = op_1_0[2].re * op_1_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[2].im * op_1_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[12].re = (int16_T)l;
    l = op_1_0[2].re * op_1_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[2].im * op_1_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[12].im = (int16_T)l;
    l = op_1_0[1].re * op_1_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[1].im * op_1_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[6].re = (int16_T)l;
    l = op_1_0[1].re * op_1_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[1].im * op_1_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[6].im = (int16_T)l;
    l = op_1_0[3].re * op_1_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[3].im * op_1_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[14].re = (int16_T)l;
    l = op_1_0[3].re * op_1_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[3].im * op_1_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[14].im = (int16_T)l;
    l = op_1_0[0].re * op_1_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[0].im * op_1_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[5].re = (int16_T)l;
    l = op_1_0[0].re * op_1_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[0].im * op_1_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[5].im = (int16_T)l;
    l = op_1_0[2].re * op_1_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[2].im * op_1_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[13].re = (int16_T)l;
    l = op_1_0[2].re * op_1_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[2].im * op_1_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[13].im = (int16_T)l;
    l = op_1_0[1].re * op_1_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[1].im * op_1_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[7].re = (int16_T)l;
    l = op_1_0[1].re * op_1_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[1].im * op_1_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[7].im = (int16_T)l;
    l = op_1_0[3].re * op_1_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[3].im * op_1_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[15].re = (int16_T)l;
    l = op_1_0[3].re * op_1_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_1_0[3].im * op_1_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[15].im = (int16_T)l;
    memcpy(&op_1[0], &op_2[0], 16U * sizeof(cint16_T));
  }
  if (opName_0[2] == 15) {
    for (l = 0; l < 4; l++) {
      re_tmp_tmp = l << 1;
      re_tmp = l << 2;
      op_2[re_tmp].re = iv[re_tmp_tmp];
      op_2[re_tmp].im = 0;
      op_2[re_tmp + 1].re = iv[re_tmp_tmp + 1];
      op_2[re_tmp + 1].im = 0;
    }
    op_2[2].re = 0;
    op_2[2].im = 0;
    re = (int16_T)((op_2_1[0].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_2_1[0].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[10].re = MAX_int16_T;
    } else {
      op_2[10].re = 0;
    }
    if (im > 0) {
      op_2[10].im = MAX_int16_T;
    } else {
      op_2[10].im = 0;
    }
    op_2[3].re = 0;
    op_2[3].im = 0;
    re = (int16_T)((op_2_1[1].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_2_1[1].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[11].re = MAX_int16_T;
    } else {
      op_2[11].re = 0;
    }
    if (im > 0) {
      op_2[11].im = MAX_int16_T;
    } else {
      op_2[11].im = 0;
    }
    op_2[6].re = 0;
    op_2[6].im = 0;
    re = (int16_T)((op_2_1[2].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_2_1[2].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[14].re = MAX_int16_T;
    } else {
      op_2[14].re = 0;
    }
    if (im > 0) {
      op_2[14].im = MAX_int16_T;
    } else {
      op_2[14].im = 0;
    }
    op_2[7].re = 0;
    op_2[7].im = 0;
    re = (int16_T)((op_2_1[3].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_2_1[3].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[15].re = MAX_int16_T;
    } else {
      op_2[15].re = 0;
    }
    if (im > 0) {
      op_2[15].im = MAX_int16_T;
    } else {
      op_2[15].im = 0;
    }
  } else if (opName_1[2] == 15) {
    op_2[1].re = 0;
    op_2[1].im = 0;
    re = (int16_T)((op_2_0[0].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_2_0[0].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[5].re = MAX_int16_T;
    } else {
      op_2[5].re = 0;
    }
    if (im > 0) {
      op_2[5].im = MAX_int16_T;
    } else {
      op_2[5].im = 0;
    }
    op_2[9].re = 0;
    op_2[9].im = 0;
    re = (int16_T)((op_2_0[2].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_2_0[2].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[13].re = MAX_int16_T;
    } else {
      op_2[13].re = 0;
    }
    if (im > 0) {
      op_2[13].im = MAX_int16_T;
    } else {
      op_2[13].im = 0;
    }
    op_2[0].re = MAX_int16_T;
    op_2[0].im = 0;
    op_2[2].re = 0;
    op_2[2].im = 0;
    op_2[4].re = 0;
    op_2[4].im = 0;
    op_2[6].re = 0;
    op_2[6].im = 0;
    op_2[8].re = 0;
    op_2[8].im = 0;
    op_2[10].re = MAX_int16_T;
    op_2[10].im = 0;
    op_2[12].re = 0;
    op_2[12].im = 0;
    op_2[14].re = 0;
    op_2[14].im = 0;
    op_2[3].re = 0;
    op_2[3].im = 0;
    re = (int16_T)((op_2_0[1].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_2_0[1].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[7].re = MAX_int16_T;
    } else {
      op_2[7].re = 0;
    }
    if (im > 0) {
      op_2[7].im = MAX_int16_T;
    } else {
      op_2[7].im = 0;
    }
    op_2[11].re = 0;
    op_2[11].im = 0;
    re = (int16_T)((op_2_0[3].re + 16384) >> 15);
    if (re < 0) {
      re = 0;
    }
    im = (int16_T)((op_2_0[3].im + 16384) >> 15);
    if (im < 0) {
      im = 0;
    }
    if (re > 0) {
      op_2[15].re = MAX_int16_T;
    } else {
      op_2[15].re = 0;
    }
    if (im > 0) {
      op_2[15].im = MAX_int16_T;
    } else {
      op_2[15].im = 0;
    }
  } else {
    l = op_2_0[0].re * op_2_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[0].im * op_2_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[0].re = (int16_T)l;
    l = op_2_0[0].re * op_2_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[0].im * op_2_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[0].im = (int16_T)l;
    l = op_2_0[2].re * op_2_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[2].im * op_2_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[8].re = (int16_T)l;
    l = op_2_0[2].re * op_2_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[2].im * op_2_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[8].im = (int16_T)l;
    l = op_2_0[1].re * op_2_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[1].im * op_2_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[2].re = (int16_T)l;
    l = op_2_0[1].re * op_2_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[1].im * op_2_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[2].im = (int16_T)l;
    l = op_2_0[3].re * op_2_1[0].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[3].im * op_2_1[0].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[10].re = (int16_T)l;
    l = op_2_0[3].re * op_2_1[0].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[3].im * op_2_1[0].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[10].im = (int16_T)l;
    l = op_2_0[0].re * op_2_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[0].im * op_2_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[1].re = (int16_T)l;
    l = op_2_0[0].re * op_2_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[0].im * op_2_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[1].im = (int16_T)l;
    l = op_2_0[2].re * op_2_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[2].im * op_2_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[9].re = (int16_T)l;
    l = op_2_0[2].re * op_2_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[2].im * op_2_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[9].im = (int16_T)l;
    l = op_2_0[1].re * op_2_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[1].im * op_2_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[3].re = (int16_T)l;
    l = op_2_0[1].re * op_2_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[1].im * op_2_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[3].im = (int16_T)l;
    l = op_2_0[3].re * op_2_1[1].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[3].im * op_2_1[1].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[11].re = (int16_T)l;
    l = op_2_0[3].re * op_2_1[1].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[3].im * op_2_1[1].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[11].im = (int16_T)l;
    l = op_2_0[0].re * op_2_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[0].im * op_2_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[4].re = (int16_T)l;
    l = op_2_0[0].re * op_2_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[0].im * op_2_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[4].im = (int16_T)l;
    l = op_2_0[2].re * op_2_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[2].im * op_2_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[12].re = (int16_T)l;
    l = op_2_0[2].re * op_2_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[2].im * op_2_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[12].im = (int16_T)l;
    l = op_2_0[1].re * op_2_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[1].im * op_2_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[6].re = (int16_T)l;
    l = op_2_0[1].re * op_2_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[1].im * op_2_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[6].im = (int16_T)l;
    l = op_2_0[3].re * op_2_1[2].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[3].im * op_2_1[2].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[14].re = (int16_T)l;
    l = op_2_0[3].re * op_2_1[2].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[3].im * op_2_1[2].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[14].im = (int16_T)l;
    l = op_2_0[0].re * op_2_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[0].im * op_2_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[5].re = (int16_T)l;
    l = op_2_0[0].re * op_2_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[0].im * op_2_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[5].im = (int16_T)l;
    l = op_2_0[2].re * op_2_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[2].im * op_2_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[13].re = (int16_T)l;
    l = op_2_0[2].re * op_2_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[2].im * op_2_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[13].im = (int16_T)l;
    l = op_2_0[1].re * op_2_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[1].im * op_2_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[7].re = (int16_T)l;
    l = op_2_0[1].re * op_2_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[1].im * op_2_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[7].im = (int16_T)l;
    l = op_2_0[3].re * op_2_1[3].re;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[3].im * op_2_1[3].im;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l -= re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[15].re = (int16_T)l;
    l = op_2_0[3].re * op_2_1[3].im;
    l = (l >> 15) + ((l & 16384) != 0);
    if (l > 32767) {
      l = 32767;
    }
    re_tmp_tmp = op_2_0[3].im * op_2_1[3].re;
    re_tmp_tmp = (re_tmp_tmp >> 15) + ((re_tmp_tmp & 16384) != 0);
    if (re_tmp_tmp > 32767) {
      re_tmp_tmp = 32767;
    }
    l += re_tmp_tmp;
    if (l > 32767) {
      l = 32767;
    } else if (l < -32768) {
      l = -32768;
    }
    op_2[15].im = (int16_T)l;
  }
  memset(&c[0], 0, 16U * sizeof(cint64_T));
  for (l = 0; l < 4; l++) {
    int16_T e_im;
    int16_T e_re;
    b_re = op_1[l].re;
    b_im = op_1[l].im;
    c_re = op_1[l + 4].re;
    c_im = op_1[l + 4].im;
    d_re = op_1[l + 8].re;
    d_im = op_1[l + 8].im;
    e_re = op_1[l + 12].re;
    e_im = op_1[l + 12].im;
    for (m = 0; m < 4; m++) {
      re_tmp_tmp = m << 2;
      re_tmp = l + re_tmp_tmp;
      re = op_0[re_tmp_tmp].re;
      im = op_0[re_tmp_tmp].im;
      f_re = (c[re_tmp].re + b_re * re) - b_im * im;
      if (f_re > 17179869183LL) {
        f_re = 17179869183LL;
      } else if (f_re < -17179869184LL) {
        f_re = -17179869184LL;
      }
      f_im = (c[re_tmp].im + b_re * im) + b_im * re;
      if (f_im > 17179869183LL) {
        f_im = 17179869183LL;
      } else if (f_im < -17179869184LL) {
        f_im = -17179869184LL;
      }
      re = op_0[re_tmp_tmp + 1].re;
      im = op_0[re_tmp_tmp + 1].im;
      f_re = (f_re + c_re * re) - c_im * im;
      if (f_re > 17179869183LL) {
        f_re = 17179869183LL;
      } else if (f_re < -17179869184LL) {
        f_re = -17179869184LL;
      }
      f_im = (f_im + c_re * im) + c_im * re;
      if (f_im > 17179869183LL) {
        f_im = 17179869183LL;
      } else if (f_im < -17179869184LL) {
        f_im = -17179869184LL;
      }
      re = op_0[re_tmp_tmp + 2].re;
      im = op_0[re_tmp_tmp + 2].im;
      f_re = (f_re + d_re * re) - d_im * im;
      if (f_re > 17179869183LL) {
        f_re = 17179869183LL;
      } else if (f_re < -17179869184LL) {
        f_re = -17179869184LL;
      }
      f_im = (f_im + d_re * im) + d_im * re;
      if (f_im > 17179869183LL) {
        f_im = 17179869183LL;
      } else if (f_im < -17179869184LL) {
        f_im = -17179869184LL;
      }
      re = op_0[re_tmp_tmp + 3].re;
      im = op_0[re_tmp_tmp + 3].im;
      f_re = (f_re + e_re * re) - e_im * im;
      if (f_re > 17179869183LL) {
        f_re = 17179869183LL;
      } else if (f_re < -17179869184LL) {
        f_re = -17179869184LL;
      }
      f_im = (f_im + e_re * im) + e_im * re;
      if (f_im > 17179869183LL) {
        f_im = 17179869183LL;
      } else if (f_im < -17179869184LL) {
        f_im = -17179869184LL;
      }
      c[re_tmp].re = f_re;
      c[re_tmp].im = f_im;
    }
  }
  memset(&b_c[0], 0, 16U * sizeof(cint64_T));
  b0[0].re = (int64_T)(initState_0[0].re * initState_1[0].re) -
             initState_0[0].im * initState_1[0].im;
  b0[0].im = (int64_T)(initState_0[0].re * initState_1[0].im) +
             initState_0[0].im * initState_1[0].re;
  b0[1].re = c_01_re;
  b0[1].im = c_01_im;
  b0[2].re = c_01_re;
  b0[2].im = c_01_im;
  b0[3].re = (int64_T)(initState_0[1].re * initState_1[1].re) -
             initState_0[1].im * initState_1[1].im;
  b0[3].im = (int64_T)(initState_0[1].re * initState_1[1].im) +
             initState_0[1].im * initState_1[1].re;
  for (l = 0; l < 4; l++) {
    c_c[l].re = r;
    c_c[l].im = r;
    re = op_2[l].re;
    im = op_2[l].im;
    b_re = op_2[l + 4].re;
    b_im = op_2[l + 4].im;
    c_re = op_2[l + 8].re;
    c_im = op_2[l + 8].im;
    d_re = op_2[l + 12].re;
    d_im = op_2[l + 12].im;
    for (m = 0; m < 4; m++) {
      uint64_T u1;
      uint64_T u2;
      uint64_T u3;
      uint64_T u4;
      re_tmp_tmp = m << 2;
      re_tmp = l + re_tmp_tmp;
      f_re = c[re_tmp_tmp].re;
      f_im = c[re_tmp_tmp].im;
      c_01_re = (b_c[re_tmp].re + re * f_re) - im * f_im;
      if (c_01_re > 9007199254740991LL) {
        c_01_re = 9007199254740991LL;
      } else if (c_01_re < -9007199254740992LL) {
        c_01_re = -9007199254740992LL;
      }
      c_01_im = (b_c[re_tmp].im + re * f_im) + im * f_re;
      if (c_01_im > 9007199254740991LL) {
        c_01_im = 9007199254740991LL;
      } else if (c_01_im < -9007199254740992LL) {
        c_01_im = -9007199254740992LL;
      }
      f_re = c[re_tmp_tmp + 1].re;
      f_im = c[re_tmp_tmp + 1].im;
      c_01_re = (c_01_re + b_re * f_re) - b_im * f_im;
      if (c_01_re > 9007199254740991LL) {
        c_01_re = 9007199254740991LL;
      } else if (c_01_re < -9007199254740992LL) {
        c_01_re = -9007199254740992LL;
      }
      c_01_im = (c_01_im + b_re * f_im) + b_im * f_re;
      if (c_01_im > 9007199254740991LL) {
        c_01_im = 9007199254740991LL;
      } else if (c_01_im < -9007199254740992LL) {
        c_01_im = -9007199254740992LL;
      }
      f_re = c[re_tmp_tmp + 2].re;
      f_im = c[re_tmp_tmp + 2].im;
      c_01_re = (c_01_re + c_re * f_re) - c_im * f_im;
      if (c_01_re > 9007199254740991LL) {
        c_01_re = 9007199254740991LL;
      } else if (c_01_re < -9007199254740992LL) {
        c_01_re = -9007199254740992LL;
      }
      c_01_im = (c_01_im + c_re * f_im) + c_im * f_re;
      if (c_01_im > 9007199254740991LL) {
        c_01_im = 9007199254740991LL;
      } else if (c_01_im < -9007199254740992LL) {
        c_01_im = -9007199254740992LL;
      }
      f_re = c[re_tmp_tmp + 3].re;
      f_im = c[re_tmp_tmp + 3].im;
      c_01_re = (c_01_re + d_re * f_re) - d_im * f_im;
      if (c_01_re > 9007199254740991LL) {
        c_01_re = 9007199254740991LL;
      } else if (c_01_re < -9007199254740992LL) {
        c_01_re = -9007199254740992LL;
      }
      f_im = (c_01_im + d_re * f_im) + d_im * f_re;
      if (f_im > 9007199254740991LL) {
        f_im = 9007199254740991LL;
      } else if (f_im < -9007199254740992LL) {
        f_im = -9007199254740992LL;
      }
      b_c[re_tmp].re = c_01_re;
      b_c[re_tmp].im = f_im;
      u1 = (uint64_T)c_01_re;
      u2 = (uint64_T)b0[m].re;
      sMultiWordMul((uint64_T *)&u1, 1, (uint64_T *)&u2,
                    (uint64_T *)&r2.chunks[0U]);
      MultiWordSignedWrap((uint64_T *)&r2.chunks[0U], 38U,
                          (uint64_T *)&r3.chunks[0U]);
      u3 = (uint64_T)f_im;
      u4 = (uint64_T)b0[m].im;
      sMultiWordMul((uint64_T *)&u3, 1, (uint64_T *)&u4,
                    (uint64_T *)&r4.chunks[0U]);
      MultiWordSignedWrap((uint64_T *)&r4.chunks[0U], 38U,
                          (uint64_T *)&r2.chunks[0U]);
      MultiWordSub((uint64_T *)&r3.chunks[0U], (uint64_T *)&r2.chunks[0U],
                   (uint64_T *)&r5.chunks[0U]);
      sMultiWord2MultiWord((uint64_T *)&r5.chunks[0U],
                           (uint64_T *)&r6.chunks[0U]);
      sMultiWordShl((uint64_T *)&r6.chunks[0U], 3, 38U,
                    (uint64_T *)&r7.chunks[0U], 3);
      sMultiWord2sMultiWordSat((uint64_T *)&r7.chunks[0U],
                               (uint64_T *)&r8.chunks[0U]);
      sMultiWordShr((uint64_T *)&r8.chunks[0U], 38U,
                    (uint64_T *)&r9.chunks[0U]);
      MultiWordAdd((uint64_T *)&c_c[l].re.chunks[0U],
                   (uint64_T *)&r9.chunks[0U], (uint64_T *)&r1.chunks[0U]);
      sMultiWord2MultiWord((uint64_T *)&r1.chunks[0U],
                           (uint64_T *)&r10.chunks[0U]);
      sMultiWordShl((uint64_T *)&r10.chunks[0U], 3, 38U,
                    (uint64_T *)&r11.chunks[0U], 3);
      sMultiWord2sMultiWordSat((uint64_T *)&r11.chunks[0U],
                               (uint64_T *)&b_r.chunks[0U]);
      sMultiWordShr((uint64_T *)&b_r.chunks[0U], 38U,
                    (uint64_T *)&c_c[l].re.chunks[0U]);
      sMultiWordMul((uint64_T *)&u1, 1, (uint64_T *)&u4,
                    (uint64_T *)&r2.chunks[0U]);
      MultiWordSignedWrap((uint64_T *)&r2.chunks[0U], 38U,
                          (uint64_T *)&r3.chunks[0U]);
      sMultiWordMul((uint64_T *)&u3, 1, (uint64_T *)&u2,
                    (uint64_T *)&r4.chunks[0U]);
      MultiWordSignedWrap((uint64_T *)&r4.chunks[0U], 38U,
                          (uint64_T *)&r2.chunks[0U]);
      MultiWordAdd((uint64_T *)&r3.chunks[0U], (uint64_T *)&r2.chunks[0U],
                   (uint64_T *)&r5.chunks[0U]);
      sMultiWord2MultiWord((uint64_T *)&r5.chunks[0U],
                           (uint64_T *)&r6.chunks[0U]);
      sMultiWordShl((uint64_T *)&r6.chunks[0U], 3, 38U,
                    (uint64_T *)&r7.chunks[0U], 3);
      sMultiWord2sMultiWordSat((uint64_T *)&r7.chunks[0U],
                               (uint64_T *)&r8.chunks[0U]);
      sMultiWordShr((uint64_T *)&r8.chunks[0U], 38U,
                    (uint64_T *)&r9.chunks[0U]);
      MultiWordAdd((uint64_T *)&c_c[l].im.chunks[0U],
                   (uint64_T *)&r9.chunks[0U], (uint64_T *)&r1.chunks[0U]);
      sMultiWord2MultiWord((uint64_T *)&r1.chunks[0U],
                           (uint64_T *)&r10.chunks[0U]);
      sMultiWordShl((uint64_T *)&r10.chunks[0U], 3, 38U,
                    (uint64_T *)&r11.chunks[0U], 3);
      sMultiWord2sMultiWordSat((uint64_T *)&r11.chunks[0U],
                               (uint64_T *)&b_r.chunks[0U]);
      sMultiWordShr((uint64_T *)&b_r.chunks[0U], 38U,
                    (uint64_T *)&c_c[l].im.chunks[0U]);
    }
    sMultiWordShrNear((uint64_T *)&c_c[l].re.chunks[0U], 60U,
                      (uint64_T *)&b_r.chunks[0U]);
    c_01_re = MultiWord2sLong((uint64_T *)&b_r.chunks[0U]);
    if (c_01_re > 32767LL) {
      c_01_re = 32767LL;
    } else if (c_01_re < -32768LL) {
      c_01_re = -32768LL;
    }
    sMultiWordShrNear((uint64_T *)&c_c[l].im.chunks[0U], 60U,
                      (uint64_T *)&r1.chunks[0U]);
    c_01_im = MultiWord2sLong((uint64_T *)&r1.chunks[0U]);
    if (c_01_im > 32767LL) {
      c_01_im = 32767LL;
    } else if (c_01_im < -32768LL) {
      c_01_im = -32768LL;
    }
    computerState[l].re = (int16_T)c_01_re;
    computerState[l].im = (int16_T)c_01_im;
  }
  cordicabs(computerState, abs_value);
  c_01_re = ((int64_T)abs_value[0] * abs_value[0] + 8192LL) >> 14;
  if (c_01_re < 0LL) {
    c_01_re = 0LL;
  } else if (c_01_re > 65535LL) {
    c_01_re = 65535LL;
  }
  probFinal[0] = (uint16_T)c_01_re;
  c_01_im = ((int64_T)abs_value[1] * abs_value[1] + 8192LL) >> 14;
  if (c_01_im < 0LL) {
    c_01_im = 0LL;
  } else if (c_01_im > 65535LL) {
    c_01_im = 65535LL;
  }
  probFinal[1] = (uint16_T)c_01_im;
  f_re = ((int64_T)abs_value[2] * abs_value[2] + 8192LL) >> 14;
  if (f_re < 0LL) {
    f_re = 0LL;
  } else if (f_re > 65535LL) {
    f_re = 65535LL;
  }
  probFinal[2] = (uint16_T)f_re;
  f_im = ((int64_T)abs_value[3] * abs_value[3] + 8192LL) >> 14;
  if (f_im < 0LL) {
    f_im = 0LL;
  } else if (f_im > 65535LL) {
    f_im = 65535LL;
  }
  probFinal[3] = (uint16_T)f_im;
  u = (uint32_T)(uint16_T)c_01_re + (uint16_T)c_01_im;
  if (u > 65535U) {
    u = 65535U;
  }
  probQubit0[0] = (uint16_T)u;
  u = (uint32_T)(uint16_T)f_re + (uint16_T)f_im;
  if (u > 65535U) {
    u = 65535U;
  }
  probQubit0[1] = (uint16_T)u;
  u = (uint32_T)(uint16_T)c_01_re + (uint16_T)f_re;
  if (u > 65535U) {
    u = 65535U;
  }
  probQubit1[0] = (uint16_T)u;
  u = (uint32_T)(uint16_T)c_01_im + (uint16_T)f_im;
  if (u > 65535U) {
    u = 65535U;
  }
  probQubit1[1] = (uint16_T)u;
  /*  Convert input signals */
  /*  Run cosimulation */
  b_st.site = &bb_emlrtRSI;
  c_quantumComputer_twoQubit_fixp(
      &b_st, emlrt_marshallOut(&b_st, opName_0[0]),
      emlrt_marshallOut(&b_st, opName_0[1]),
      emlrt_marshallOut(&b_st, opName_0[2]),
      b_emlrt_marshallOut(&b_st, theta_0[0]),
      b_emlrt_marshallOut(&b_st, theta_0[1]),
      b_emlrt_marshallOut(&b_st, theta_0[2]),
      b_emlrt_marshallOut(&b_st, phi_0[0]),
      b_emlrt_marshallOut(&b_st, phi_0[1]),
      b_emlrt_marshallOut(&b_st, phi_0[2]),
      b_emlrt_marshallOut(&b_st, lambda_0[0]),
      b_emlrt_marshallOut(&b_st, lambda_0[1]),
      b_emlrt_marshallOut(&b_st, lambda_0[2]),
      emlrt_marshallOut(&b_st, opName_1[0]),
      emlrt_marshallOut(&b_st, opName_1[1]),
      emlrt_marshallOut(&b_st, opName_1[2]),
      b_emlrt_marshallOut(&b_st, theta_1[0]),
      b_emlrt_marshallOut(&b_st, theta_1[1]),
      b_emlrt_marshallOut(&b_st, theta_1[2]),
      b_emlrt_marshallOut(&b_st, phi_1[0]),
      b_emlrt_marshallOut(&b_st, phi_1[1]),
      b_emlrt_marshallOut(&b_st, phi_1[2]),
      b_emlrt_marshallOut(&b_st, lambda_1[0]),
      b_emlrt_marshallOut(&b_st, lambda_1[1]),
      b_emlrt_marshallOut(&b_st, lambda_1[2]),
      c_emlrt_marshallOut(&b_st, initState_0[0].re),
      c_emlrt_marshallOut(&b_st, initState_0[1].re),
      c_emlrt_marshallOut(&b_st, initState_0[0].im),
      c_emlrt_marshallOut(&b_st, initState_0[1].im),
      c_emlrt_marshallOut(&b_st, initState_1[0].re),
      c_emlrt_marshallOut(&b_st, initState_1[1].re),
      c_emlrt_marshallOut(&b_st, initState_1[0].im),
      c_emlrt_marshallOut(&b_st, initState_1[1].im), &b_emlrtMCI,
      &computerState_re_1, &computerState_re_2, &computerState_re_3,
      &computerState_re_4, &computerState_im_1, &computerState_im_2,
      &computerState_im_3, &computerState_im_4, &probFinal_1, &probFinal_2,
      &probFinal_3, &probFinal_4, &probQubit0_1, &probQubit0_2, &probQubit1_1,
      &probQubit1_2);
  /*  Convert output signals */
  b_st.site = &hb_emlrtRSI;
  emlrtAssign(&b_probQubit1, vertcat(&b_st, emlrtAlias(probQubit1_1),
                                     emlrtAlias(probQubit1_2), &c_emlrtMCI));
  b_st.site = &gb_emlrtRSI;
  emlrtAssign(&b_probQubit0, vertcat(&b_st, emlrtAlias(probQubit0_1),
                                     emlrtAlias(probQubit0_2), &d_emlrtMCI));
  b_st.site = &kb_emlrtRSI;
  emlrtAssign(&b_probFinal,
              b_vertcat(&b_st, emlrtAlias(probFinal_1), emlrtAlias(probFinal_2),
                        emlrtAlias(probFinal_3), emlrtAlias(probFinal_4),
                        &e_emlrtMCI));
  b_st.site = &jb_emlrtRSI;
  emlrtAssign(&computerState_im,
              b_vertcat(&b_st, emlrtAlias(computerState_im_1),
                        emlrtAlias(computerState_im_2),
                        emlrtAlias(computerState_im_3),
                        emlrtAlias(computerState_im_4), &f_emlrtMCI));
  b_st.site = &ib_emlrtRSI;
  emlrtAssign(&computerState_re,
              b_vertcat(&b_st, emlrtAlias(computerState_re_1),
                        emlrtAlias(computerState_re_2),
                        emlrtAlias(computerState_re_3),
                        emlrtAlias(computerState_re_4), &g_emlrtMCI));
  b_st.site = &lb_emlrtRSI;
  emlrtAssign(&b_computerState,
              b_complex(&b_st, emlrtAlias(computerState_re),
                        emlrtAlias(computerState_im), &h_emlrtMCI));
  /*  Verify the cosimulation output */
  y = NULL;
  b_m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&st, 13, b_m, &b_u[0]);
  emlrtAssign(&y, b_m);
  b_st.site = &cb_emlrtRSI;
  hdlverifier_assert(&b_st, emlrtAlias(b_computerState),
                     d_emlrt_marshallOut(&b_st, computerState), y, &i_emlrtMCI);
  b_y = NULL;
  b_m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(&st, 9, b_m, &c_u[0]);
  emlrtAssign(&b_y, b_m);
  b_st.site = &db_emlrtRSI;
  hdlverifier_assert(&b_st, emlrtAlias(b_probFinal),
                     e_emlrt_marshallOut(&b_st, probFinal), b_y, &j_emlrtMCI);
  c_y = NULL;
  b_m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(&st, 10, b_m, &d_u[0]);
  emlrtAssign(&c_y, b_m);
  b_st.site = &fb_emlrtRSI;
  hdlverifier_assert(&b_st, emlrtAlias(b_probQubit0),
                     f_emlrt_marshallOut(&b_st, probQubit0), c_y, &k_emlrtMCI);
  d_y = NULL;
  b_m = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a(&st, 10, b_m, &e_u[0]);
  emlrtAssign(&d_y, b_m);
  b_st.site = &eb_emlrtRSI;
  hdlverifier_assert(&b_st, emlrtAlias(b_probQubit1),
                     f_emlrt_marshallOut(&b_st, probQubit1), d_y, &l_emlrtMCI);
  emlrtDestroyArray(&b_probQubit1);
  emlrtDestroyArray(&b_probQubit0);
  emlrtDestroyArray(&b_probFinal);
  emlrtDestroyArray(&computerState_im);
  emlrtDestroyArray(&computerState_re);
  emlrtDestroyArray(&b_computerState);
  emlrtDestroyArray(&computerState_re_1);
  emlrtDestroyArray(&computerState_re_2);
  emlrtDestroyArray(&computerState_re_3);
  emlrtDestroyArray(&computerState_re_4);
  emlrtDestroyArray(&computerState_im_1);
  emlrtDestroyArray(&computerState_im_2);
  emlrtDestroyArray(&computerState_im_3);
  emlrtDestroyArray(&computerState_im_4);
  emlrtDestroyArray(&probFinal_1);
  emlrtDestroyArray(&probFinal_2);
  emlrtDestroyArray(&probFinal_3);
  emlrtDestroyArray(&probFinal_4);
  emlrtDestroyArray(&probQubit0_1);
  emlrtDestroyArray(&probQubit0_2);
  emlrtDestroyArray(&probQubit1_1);
  emlrtDestroyArray(&probQubit1_2);
}

/* End of code generation (quantumComputer_twoQubit_wrapper_fixpt_cosim.c) */
