/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cordicabs.c
 *
 * Code generation for function 'cordicabs'
 *
 */

/* Include files */
#include "cordicabs.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void cordicabs(const cint16_T c[4], int32_T b_r[4])
{
  int32_T b_idx;
  int32_T idx;
  int16_T x[4];
  int16_T y[4];
  x[0] = c[0].re;
  y[0] = c[0].im;
  x[1] = c[1].re;
  y[1] = c[1].im;
  x[2] = c[2].re;
  y[2] = c[2].im;
  x[3] = c[3].re;
  y[3] = c[3].im;
  for (idx = 0; idx < 4; idx++) {
    int32_T a__1;
    int32_T xN;
    int32_T xtmp;
    int32_T ytmp;
    if (y[idx] < 0) {
      a__1 = -y[idx];
    } else {
      a__1 = y[idx];
    }
    if (x[idx] < 0) {
      xN = -x[idx];
    } else {
      xN = x[idx];
    }
    xtmp = xN;
    ytmp = a__1;
    for (b_idx = 0; b_idx < 15; b_idx++) {
      if (a__1 < 0) {
        ytmp = xN - ytmp;
        if ((ytmp & 131072) != 0) {
          xN = ytmp | -131072;
        } else {
          xN = ytmp & 131071;
        }
        ytmp = a__1 + xtmp;
        if ((ytmp & 131072) != 0) {
          a__1 = ytmp | -131072;
        } else {
          a__1 = ytmp & 131071;
        }
      } else {
        ytmp += xN;
        if ((ytmp & 131072) != 0) {
          xN = ytmp | -131072;
        } else {
          xN = ytmp & 131071;
        }
        ytmp = a__1 - xtmp;
        if ((ytmp & 131072) != 0) {
          a__1 = ytmp | -131072;
        } else {
          a__1 = ytmp & 131071;
        }
      }
      xtmp = xN >> (b_idx + 1);
      ytmp = a__1 >> (b_idx + 1);
    }
    b_r[idx] = (xN * 9949) >> 14;
  }
}

/* End of code generation (cordicabs.c) */
