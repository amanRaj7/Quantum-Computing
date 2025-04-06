/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quantumComputer_twoQubit_wrapper_fixpt_cosim_mexutil.c
 *
 * Code generation for function
 * 'quantumComputer_twoQubit_wrapper_fixpt_cosim_mexutil'
 *
 */

/* Include files */
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_mexutil.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Function Definitions */
int64_T MultiWord2sLong(const uint64_T u[])
{
  return (int64_T)u[0];
}

void MultiWordAdd(const uint64_T u1[], const uint64_T u2[], uint64_T y[])
{
  uint64_T carry = 0ULL;
  int32_T i;
  for (i = 0; i < 2; i++) {
    uint64_T u1i;
    uint64_T yi;
    u1i = u1[i];
    yi = (u1i + u2[i]) + carry;
    y[i] = yi;
    if (carry != 0ULL) {
      carry = (uint64_T)(yi <= u1i);
    } else {
      carry = (uint64_T)(yi < u1i);
    }
  }
}

void MultiWordSignedWrap(const uint64_T u1[], uint32_T n2, uint64_T y[])
{
  uint64_T mask;
  uint64_T ys;
  y[0] = u1[0];
  mask = 1ULL << (63U - n2);
  if ((u1[1] & mask) != 0ULL) {
    ys = MAX_uint64_T;
  } else {
    ys = 0ULL;
  }
  mask = (mask << 1U) - 1ULL;
  y[1] = (u1[1] & mask) | (~mask & ys);
}

const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const cint16_T u[4])
{
  static const int32_T i = 4;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  cint16_T b_u[4];
  y = NULL;
  b_u[0].re = u[0].re;
  b_u[0].im = u[0].im;
  b_u[1].re = u[1].re;
  b_u[1].im = u[1].im;
  b_u[2].re = u[2].re;
  b_u[2].im = u[2].im;
  b_u[3].re = u[3].re;
  b_u[3].im = u[3].im;
  b_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxINT16_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b((emlrtConstCTX)sp, m, &b_u[0], 2);
  emlrtAssign(&b_y, m);
  emlrtAssign(&y, emlrtCreateFIR2013b((emlrtCTX)sp, eml_mx, d_eml_mx,
                                      "simulinkarray", b_y, false, true));
  return y;
}

const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const uint16_T u[4])
{
  static const int32_T i = 4;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  uint16_T *pData;
  y = NULL;
  b_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxUINT16_CLASS, mxREAL);
  pData = (uint16_T *)emlrtMxGetData(m);
  *pData = u[0];
  pData[1] = u[1];
  pData[2] = u[2];
  pData[3] = u[3];
  emlrtAssign(&b_y, m);
  emlrtAssign(&y, emlrtCreateFIR2013b((emlrtCTX)sp, eml_mx, e_eml_mx,
                                      "simulinkarray", b_y, true, false));
  return y;
}

const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const uint16_T u[2])
{
  static const int32_T i = 2;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  uint16_T *pData;
  y = NULL;
  b_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxUINT16_CLASS, mxREAL);
  pData = (uint16_T *)emlrtMxGetData(m);
  *pData = u[0];
  pData[1] = u[1];
  emlrtAssign(&b_y, m);
  emlrtAssign(&y, emlrtCreateFIR2013b((emlrtCTX)sp, eml_mx, e_eml_mx,
                                      "simulinkarray", b_y, true, false));
  return y;
}

void sMultiWord2MultiWord(const uint64_T u1[], uint64_T y[])
{
  int32_T i;
  for (i = 0; i < 2; i++) {
    y[i] = u1[i];
  }
  if ((u1[1] & 9223372036854775808ULL) != 0ULL) {
    y[2] = MAX_uint64_T;
  } else {
    y[2] = 0ULL;
  }
}

void sMultiWord2sMultiWordSat(const uint64_T u1[], uint64_T y[])
{
  uint64_T ys;
  int32_T i;
  boolean_T doSaturation = false;
  if ((u1[2] & 9223372036854775808ULL) != 0ULL) {
    ys = MAX_uint64_T;
  } else {
    ys = 0ULL;
  }
  doSaturation = (((u1[1] ^ u1[2]) & 9223372036854775808ULL) != 0ULL);
  i = 2;
  while ((!doSaturation) && (i >= 2)) {
    doSaturation = (u1[2] != ys);
    i = 1;
  }
  if (doSaturation) {
    ys = ~ys;
    y[0] = ys;
    y[1] = ys ^ 9223372036854775808ULL;
  } else {
    for (i = 0; i < 2; i++) {
      y[i] = u1[i];
    }
    while (i < 2) {
      y[i] = ys;
      i++;
    }
  }
}

void sMultiWordMul(const uint64_T u1[], int32_T n1, const uint64_T u2[],
                   uint64_T y[])
{
  uint64_T cb;
  uint64_T cb1;
  uint64_T yk;
  int32_T i;
  int32_T j;
  int32_T k;
  boolean_T isNegative1;
  boolean_T isNegative2;
  isNegative1 = ((u1[n1 - 1] & 9223372036854775808ULL) != 0ULL);
  isNegative2 = ((u2[0] & 9223372036854775808ULL) != 0ULL);
  cb1 = 1ULL;
  /* Initialize output to zero */
  for (k = 0; k < 2; k++) {
    y[k] = 0ULL;
  }
  for (i = 0; i < n1; i++) {
    uint64_T a0;
    uint64_T a1;
    uint64_T cb2;
    uint64_T u1i;
    int32_T ni;
    cb = 0ULL;
    u1i = u1[i];
    if (isNegative1) {
      u1i = ~u1i + cb1;
      cb1 = (uint64_T)(u1i < cb1);
    }
    a1 = u1i >> 32U;
    a0 = u1i & 4294967295ULL;
    cb2 = 1ULL;
    ni = 2 - i;
    ni = muIntScalarMin_sint32(1, ni);
    k = i;
    for (j = 0; j < ni; j++) {
      uint64_T b1;
      uint64_T w01;
      uint64_T w10;
      u1i = u2[0];
      if (isNegative2) {
        u1i = ~u1i + cb2;
        cb2 = (uint64_T)(u1i < cb2);
      }
      b1 = u1i >> 32U;
      u1i &= 4294967295ULL;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (uint64_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (uint64_T)(yk < u1i);
      u1i = w10 << 32U;
      yk += u1i;
      cb += (uint64_T)(yk < u1i);
      u1i = w01 << 32U;
      yk += u1i;
      cb += (uint64_T)(yk < u1i);
      y[k] = yk;
      cb += w10 >> 32U;
      cb += w01 >> 32U;
      cb += a1 * b1;
      k++;
    }
    if (k < 2) {
      y[k] = cb;
    }
  }
  /* Apply sign */
  if (isNegative1 != isNegative2) {
    cb = 1ULL;
    for (k = 0; k < 2; k++) {
      yk = ~y[k] + cb;
      y[k] = yk;
      cb = (uint64_T)(yk < cb);
    }
  }
}

void sMultiWordShl(const uint64_T u1[], int32_T n1, uint32_T n2, uint64_T y[],
                   int32_T n)
{
  uint64_T u1i;
  uint64_T ys;
  int32_T i;
  int32_T nb;
  int32_T nc;
  nb = (int32_T)n2 / 64;
  if ((u1[n1 - 1] & 9223372036854775808ULL) != 0ULL) {
    ys = MAX_uint64_T;
  } else {
    ys = 0ULL;
  }
  if (nb > n) {
    nc = n;
  } else {
    nc = nb;
  }
  u1i = 0ULL;
  if (nc - 1 >= 0) {
    memset(&y[0], 0, (uint32_T)nc * sizeof(uint64_T));
  }
  for (i = 0; i < nc; i++) {
  }
  if (nb < n) {
    uint32_T nl;
    nl = n2 - (uint32_T)nb * 64U;
    nb += n1;
    if (nb > n) {
      nb = n;
    }
    nb -= i;
    if (nl > 0U) {
      for (nc = 0; nc < nb; nc++) {
        uint64_T yi;
        yi = u1i >> (64U - nl);
        u1i = u1[nc];
        y[i] = yi | u1i << nl;
        i++;
      }
      if (i < n) {
        y[i] = u1i >> (64U - nl) | ys << nl;
        i++;
      }
    } else {
      for (nc = 0; nc < nb; nc++) {
        y[i] = u1[nc];
        i++;
      }
    }
  }
  while (i < n) {
    y[i] = ys;
    i++;
  }
}

void sMultiWordShr(const uint64_T u1[], uint32_T n2, uint64_T y[])
{
  uint64_T ys;
  int32_T i;
  int32_T i1;
  int32_T nb;
  nb = (int32_T)n2 / 64;
  i = 0;
  if ((u1[1] & 9223372036854775808ULL) != 0ULL) {
    ys = MAX_uint64_T;
  } else {
    ys = 0ULL;
  }
  if (nb < 2) {
    int32_T nc;
    uint32_T nr;
    nc = nb + 2;
    if (nb + 2 > 2) {
      nc = 2;
    }
    nr = n2 - (uint32_T)nb * 64U;
    if (nr > 0U) {
      uint64_T u1i;
      uint64_T yi;
      u1i = u1[nb];
      for (i1 = nb + 1; i1 < nc; i1++) {
        yi = u1i >> nr;
        u1i = u1[i1];
        y[i] = yi | u1i << (64U - nr);
        i++;
      }
      if (nc < 2) {
        yi = u1[nc];
      } else {
        yi = ys;
      }
      y[i] = u1i >> nr | yi << (64U - nr);
      i++;
    } else {
      for (i1 = nb; i1 < nc; i1++) {
        y[i] = u1[i1];
        i++;
      }
    }
  }
  while (i < 2) {
    y[i] = ys;
    i++;
  }
}

void sMultiWordShrNear(const uint64_T u1[], uint32_T n2, uint64_T y[])
{
  int32_T nb;
  boolean_T doNearest;
  nb = (int32_T)(n2 - 1U) / 64;
  if (nb < 2) {
    doNearest = ((u1[nb] & 1ULL << ((n2 - (uint32_T)(nb * 64)) - 1U)) != 0ULL);
  } else {
    uint64_T u;
    if ((u1[1] & 9223372036854775808ULL) != 0ULL) {
      u = MAX_uint64_T;
    } else {
      u = 0ULL;
    }
    doNearest = (u != 0ULL);
  }
  sMultiWordShr(u1, n2, y);
  nb = 0;
  while (doNearest && (nb < 2)) {
    y[nb]++;
    doNearest = ((y[nb] == 0ULL) && doNearest);
    nb++;
  }
}

/* End of code generation
 * (quantumComputer_twoQubit_wrapper_fixpt_cosim_mexutil.c) */
