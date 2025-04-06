/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cordicsincos.c
 *
 * Code generation for function 'cordicsincos'
 *
 */

/* Include files */
#include "cordicsincos.h"
#include "rt_nonfinite.h"

/* Function Definitions */
int16_T cordicsincos(int16_T theta, int16_T *cos_out)
{
  static const int16_T inpLUT[15] = {
      12868, 7596, 4014, 2037, 1023, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
  int32_T idx;
  int16_T sin_out;
  int16_T xtmp;
  int16_T ytmp;
  int16_T z;
  boolean_T negate;
  negate = false;
  z = (int16_T)(theta >> 1);
  if (z > 6434) {
    z = (int16_T)((z - 12868) << 2);
    negate = true;
  } else if (z < -6434) {
    z = (int16_T)((z + 12868) << 2);
    negate = true;
  } else {
    z = (int16_T)(theta << 1);
  }
  sin_out = 0;
  *cos_out = 9949;
  xtmp = 9949;
  ytmp = 0;
  for (idx = 0; idx < 15; idx++) {
    if (z < 0) {
      *cos_out += ytmp;
      sin_out -= xtmp;
      z += inpLUT[idx];
    } else {
      *cos_out -= ytmp;
      sin_out += xtmp;
      z -= inpLUT[idx];
    }
    xtmp = (int16_T)(*cos_out >> (idx + 1));
    ytmp = (int16_T)(sin_out >> (idx + 1));
  }
  if (negate) {
    *cos_out = (int16_T) - *cos_out;
    sin_out = (int16_T)-sin_out;
  }
  return sin_out;
}

/* End of code generation (cordicsincos.c) */
