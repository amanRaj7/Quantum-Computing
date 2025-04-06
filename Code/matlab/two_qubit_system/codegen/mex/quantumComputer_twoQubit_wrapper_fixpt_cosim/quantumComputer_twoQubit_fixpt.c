/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quantumComputer_twoQubit_fixpt.c
 *
 * Code generation for function 'quantumComputer_twoQubit_fixpt'
 *
 */

/* Include files */
#include "quantumComputer_twoQubit_fixpt.h"
#include "cordicsincos.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_data.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_mexutil.h"
#include "quantumComputer_twoQubit_wrapper_fixpt_cosim_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void MultiWordNeg(const uint64_T u1[], uint64_T y[]);

static void sLong2MultiWord(int64_T u, uint64_T y[]);

/* Function Definitions */
static void MultiWordNeg(const uint64_T u1[], uint64_T y[])
{
  uint64_T carry = 1ULL;
  int32_T i;
  for (i = 0; i < 2; i++) {
    uint64_T yi;
    yi = ~u1[i] + carry;
    y[i] = yi;
    carry = (uint64_T)(yi < carry);
  }
}

static void sLong2MultiWord(int64_T u, uint64_T y[])
{
  y[0] = (uint64_T)u;
  if (u < 0LL) {
    y[1] = MAX_uint64_T;
  } else {
    y[1] = 0ULL;
  }
}

void getOperator(uint16_T opName, int16_T theta, int16_T phi, int16_T lambda,
                 cint16_T op[4])
{
  static const cint16_T icv[4] = {{
                                      MAX_int16_T, /* re */
                                      0            /* im */
                                  },
                                  {
                                      0, /* re */
                                      0  /* im */
                                  },
                                  {
                                      0, /* re */
                                      0  /* im */
                                  },
                                  {
                                      0,          /* re */
                                      MAX_int16_T /* im */
                                  }};
  static const cint16_T icv1[4] = {{
                                       MAX_int16_T, /* re */
                                       0            /* im */
                                   },
                                   {
                                       0, /* re */
                                       0  /* im */
                                   },
                                   {
                                       0, /* re */
                                       0  /* im */
                                   },
                                   {
                                       23170, /* re */
                                       23170  /* im */
                                   }};
  static const cint16_T icv2[4] = {{
                                       MAX_int16_T, /* re */
                                       0            /* im */
                                   },
                                   {
                                       0, /* re */
                                       0  /* im */
                                   },
                                   {
                                       0, /* re */
                                       0  /* im */
                                   },
                                   {
                                       0,          /* re */
                                       MIN_int16_T /* im */
                                   }};
  static const cint16_T icv3[4] = {{
                                       MAX_int16_T, /* re */
                                       0            /* im */
                                   },
                                   {
                                       0, /* re */
                                       0  /* im */
                                   },
                                   {
                                       0, /* re */
                                       0  /* im */
                                   },
                                   {
                                       23170, /* re */
                                       -23170 /* im */
                                   }};
  static const int64_T im = 0LL;
  static const int64_T re = 268435456LL;
  int128m_T b_r;
  int128m_T c_im;
  int128m_T r1;
  int128m_T r12;
  int128m_T r13;
  int128m_T r14;
  int128m_T r2;
  int128m_T r4;
  int128m_T r6;
  int128m_T r7;
  int128m_T r8;
  int128m_T r9;
  int192m_T r10;
  int192m_T r11;
  int192m_T r3;
  int192m_T r5;
  cint16_T b_fmo_4[4];
  int16_T fmo_1;
  int16_T fmo_2;
  int16_T fmo_3;
  int16_T fmo_4;
  int16_T fmo_5;
  int16_T fmo_6;
  int16_T fmo_7;
  int16_T fmo_8;
  fmo_1 = cordicsincos(phi, &fmo_2);
  fmo_3 = cordicsincos((int16_T)(theta >> 1), &fmo_4);
  fmo_5 = cordicsincos(theta, &fmo_6);
  fmo_7 = cordicsincos(lambda, &fmo_8);
  if (opName == 0) {
    op[0].re = MAX_int16_T;
    op[0].im = 0;
    op[1].re = 0;
    op[1].im = 0;
    op[2].re = 0;
    op[2].im = 0;
    op[3].re = MAX_int16_T;
    op[3].im = 0;
  } else if (opName == 1) {
    op[0].re = 0;
    op[0].im = 0;
    op[1].re = MAX_int16_T;
    op[1].im = 0;
    op[2].re = MAX_int16_T;
    op[2].im = 0;
    op[3].re = 0;
    op[3].im = 0;
  } else if (opName == 2) {
    op[0].re = 0;
    op[0].im = 0;
    op[1].re = 0;
    op[1].im = MAX_int16_T;
    op[2].re = 0;
    op[2].im = MIN_int16_T;
    op[3].re = 0;
    op[3].im = 0;
  } else if (opName == 3) {
    op[0].re = MAX_int16_T;
    op[0].im = 0;
    op[1].re = 0;
    op[1].im = 0;
    op[2].re = 0;
    op[2].im = 0;
    op[3].re = MIN_int16_T;
    op[3].im = 0;
  } else if (opName == 4) {
    op[0].re = 23170;
    op[0].im = 0;
    op[1].re = 23170;
    op[1].im = 0;
    op[2].re = 23170;
    op[2].im = 0;
    op[3].re = -23170;
    op[3].im = 0;
  } else if (opName == 5) {
    op[0] = icv[0];
    op[1] = icv[1];
    op[2] = icv[2];
    op[3] = icv[3];
  } else if (opName == 6) {
    op[0] = icv1[0];
    op[1] = icv1[1];
    op[2] = icv1[2];
    op[3] = icv1[3];
  } else if (opName == 7) {
    op[0] = icv2[0];
    op[1] = icv2[1];
    op[2] = icv2[2];
    op[3] = icv2[3];
  } else if (opName == 8) {
    op[0] = icv3[0];
    op[1] = icv3[1];
    op[2] = icv3[2];
    op[3] = icv3[3];
  } else if (opName == 9) {
    int64_T fmo_8_re;
    int64_T i;
    b_fmo_4[0].re = MAX_int16_T;
    b_fmo_4[0].im = 0;
    b_fmo_4[2].re = 0;
    b_fmo_4[2].im = 0;
    b_fmo_4[1].re = 0;
    b_fmo_4[1].im = 0;
    i = (((int64_T)fmo_6 << 14) + 4096LL) >> 13;
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    fmo_8_re = (((int64_T)fmo_5 << 14) + 4096LL) >> 13;
    if (fmo_8_re > 32767LL) {
      fmo_8_re = 32767LL;
    } else if (fmo_8_re < -32768LL) {
      fmo_8_re = -32768LL;
    }
    b_fmo_4[3].re = (int16_T)i;
    b_fmo_4[3].im = (int16_T)fmo_8_re;
    op[0] = b_fmo_4[0];
    op[1] = b_fmo_4[1];
    op[2] = b_fmo_4[2];
    op[3] = b_fmo_4[3];
  } else if (opName == 10) {
    int64_T fmo_8_im;
    int64_T fmo_8_re;
    int64_T i;
    uint64_T u;
    uint64_T u1;
    sLong2MultiWord(((int64_T)(fmo_6 * fmo_2) - fmo_5 * fmo_1) << 31,
                    (uint64_T *)&b_r.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&b_r.chunks[0U], 61U,
                        (uint64_T *)&r1.chunks[0U]);
    b_r = r;
    MultiWordAdd((uint64_T *)&r1.chunks[0U], (uint64_T *)&r.chunks[0U],
                 (uint64_T *)&r2.chunks[0U]);
    sMultiWord2MultiWord((uint64_T *)&r2.chunks[0U],
                         (uint64_T *)&r3.chunks[0U]);
    sMultiWordShl((uint64_T *)&r3.chunks[0U], 3, 61U,
                  (uint64_T *)&r5.chunks[0U], 3);
    sMultiWord2sMultiWordSat((uint64_T *)&r5.chunks[0U],
                             (uint64_T *)&r6.chunks[0U]);
    sMultiWordShr((uint64_T *)&r6.chunks[0U], 61U, (uint64_T *)&r7.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r7.chunks[0U], 31U,
                      (uint64_T *)&r8.chunks[0U]);
    fmo_8_re = MultiWord2sLong((uint64_T *)&r8.chunks[0U]);
    if (fmo_8_re > 4294967295LL) {
      fmo_8_re = 4294967295LL;
    } else if (fmo_8_re < -4294967296LL) {
      fmo_8_re = -4294967296LL;
    }
    sLong2MultiWord(((int64_T)(fmo_5 * fmo_2) + fmo_6 * fmo_1) << 31,
                    (uint64_T *)&r4.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r4.chunks[0U], 61U,
                        (uint64_T *)&r9.chunks[0U]);
    MultiWordAdd((uint64_T *)&r.chunks[0U], (uint64_T *)&r9.chunks[0U],
                 (uint64_T *)&r1.chunks[0U]);
    sMultiWord2MultiWord((uint64_T *)&r1.chunks[0U],
                         (uint64_T *)&r3.chunks[0U]);
    sMultiWordShl((uint64_T *)&r3.chunks[0U], 3, 61U,
                  (uint64_T *)&r5.chunks[0U], 3);
    sMultiWord2sMultiWordSat((uint64_T *)&r5.chunks[0U],
                             (uint64_T *)&r2.chunks[0U]);
    sMultiWordShr((uint64_T *)&r2.chunks[0U], 61U, (uint64_T *)&r6.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r6.chunks[0U], 31U,
                      (uint64_T *)&r7.chunks[0U]);
    fmo_8_im = MultiWord2sLong((uint64_T *)&r7.chunks[0U]);
    if (fmo_8_im > 4294967295LL) {
      fmo_8_im = 4294967295LL;
    } else if (fmo_8_im < -4294967296LL) {
      fmo_8_im = -4294967296LL;
    }
    u = 3037000500ULL;
    u1 = (uint64_T)re;
    sMultiWordMul((uint64_T *)&u, 1, (uint64_T *)&u1,
                  (uint64_T *)&r1.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r1.chunks[0U], 62U,
                        (uint64_T *)&r2.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r2.chunks[0U], 45U,
                      (uint64_T *)&r6.chunks[0U]);
    i = MultiWord2sLong((uint64_T *)&r6.chunks[0U]);
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    op[0].re = (int16_T)i;
    u = 3037000500ULL;
    u1 = (uint64_T)im;
    sMultiWordMul((uint64_T *)&u, 1, (uint64_T *)&u1,
                  (uint64_T *)&b_r.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&b_r.chunks[0U], 62U,
                        (uint64_T *)&r1.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r1.chunks[0U], 45U,
                      (uint64_T *)&r2.chunks[0U]);
    i = MultiWord2sLong((uint64_T *)&r2.chunks[0U]);
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    op[0].im = (int16_T)i;
    u = 3037000500ULL;
    u1 = (uint64_T)((int64_T)fmo_2 << 14);
    sMultiWordMul((uint64_T *)&u, 1, (uint64_T *)&u1,
                  (uint64_T *)&r9.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r9.chunks[0U], 62U,
                        (uint64_T *)&b_r.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&b_r.chunks[0U], 45U,
                      (uint64_T *)&r1.chunks[0U]);
    i = MultiWord2sLong((uint64_T *)&r1.chunks[0U]);
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    op[1].re = (int16_T)i;
    u = 3037000500ULL;
    u1 = (uint64_T)((int64_T)fmo_1 << 14);
    sMultiWordMul((uint64_T *)&u, 1, (uint64_T *)&u1,
                  (uint64_T *)&r4.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r4.chunks[0U], 62U,
                        (uint64_T *)&r9.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r9.chunks[0U], 45U,
                      (uint64_T *)&b_r.chunks[0U]);
    i = MultiWord2sLong((uint64_T *)&b_r.chunks[0U]);
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    op[1].im = (int16_T)i;
    u = 3037000500ULL;
    u1 = (uint64_T) - ((int64_T)fmo_6 << 14);
    sMultiWordMul((uint64_T *)&u, 1, (uint64_T *)&u1,
                  (uint64_T *)&r12.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r12.chunks[0U], 62U,
                        (uint64_T *)&r4.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r4.chunks[0U], 45U,
                      (uint64_T *)&r9.chunks[0U]);
    i = MultiWord2sLong((uint64_T *)&r9.chunks[0U]);
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    op[2].re = (int16_T)i;
    u = 3037000500ULL;
    u1 = (uint64_T) - ((int64_T)fmo_5 << 14);
    sMultiWordMul((uint64_T *)&u, 1, (uint64_T *)&u1,
                  (uint64_T *)&r13.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r13.chunks[0U], 62U,
                        (uint64_T *)&r12.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r12.chunks[0U], 45U,
                      (uint64_T *)&r4.chunks[0U]);
    i = MultiWord2sLong((uint64_T *)&r4.chunks[0U]);
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    op[2].im = (int16_T)i;
    u = 3037000500ULL;
    u1 = (uint64_T)fmo_8_re;
    sMultiWordMul((uint64_T *)&u, 1, (uint64_T *)&u1,
                  (uint64_T *)&r14.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r14.chunks[0U], 62U,
                        (uint64_T *)&r13.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r13.chunks[0U], 45U,
                      (uint64_T *)&r12.chunks[0U]);
    i = MultiWord2sLong((uint64_T *)&r12.chunks[0U]);
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    op[3].re = (int16_T)i;
    u = 3037000500ULL;
    u1 = (uint64_T)fmo_8_im;
    sMultiWordMul((uint64_T *)&u, 1, (uint64_T *)&u1,
                  (uint64_T *)&c_im.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&c_im.chunks[0U], 62U,
                        (uint64_T *)&r14.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r14.chunks[0U], 45U,
                      (uint64_T *)&r13.chunks[0U]);
    i = MultiWord2sLong((uint64_T *)&r13.chunks[0U]);
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    op[3].im = (int16_T)i;
  } else if (opName == 11) {
    int64_T fmo_8_im;
    int64_T fmo_8_re;
    int64_T i;
    uint64_T u;
    sLong2MultiWord(((int64_T)(fmo_7 * fmo_2) + fmo_8 * fmo_1) << 31,
                    (uint64_T *)&r4.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r4.chunks[0U], 62U,
                        (uint64_T *)&c_im.chunks[0U]);
    if (fmo_4 > 16383) {
      fmo_5 = MAX_int16_T;
    } else if (fmo_4 <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)(fmo_4 << 1);
    }
    b_fmo_4[0].re = fmo_5;
    b_fmo_4[0].im = 0;
    sLong2MultiWord((int64_T)(fmo_8 * fmo_3) << 30, (uint64_T *)&r1.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r1.chunks[0U], 63U,
                        (uint64_T *)&r2.chunks[0U]);
    r1 = r;
    MultiWordAdd((uint64_T *)&r2.chunks[0U], (uint64_T *)&r.chunks[0U],
                 (uint64_T *)&r6.chunks[0U]);
    sMultiWord2MultiWord((uint64_T *)&r6.chunks[0U],
                         (uint64_T *)&r10.chunks[0U]);
    sMultiWordShl((uint64_T *)&r10.chunks[0U], 3, 63U,
                  (uint64_T *)&r11.chunks[0U], 3);
    sMultiWord2sMultiWordSat((uint64_T *)&r11.chunks[0U],
                             (uint64_T *)&r7.chunks[0U]);
    sMultiWordShr((uint64_T *)&r7.chunks[0U], 63U, (uint64_T *)&r8.chunks[0U]);
    MultiWordNeg((uint64_T *)&r8.chunks[0U], (uint64_T *)&r12.chunks[0U]);
    sMultiWord2MultiWord((uint64_T *)&r12.chunks[0U],
                         (uint64_T *)&r3.chunks[0U]);
    sMultiWordShl((uint64_T *)&r3.chunks[0U], 3, 63U,
                  (uint64_T *)&r5.chunks[0U], 3);
    sMultiWord2sMultiWordSat((uint64_T *)&r5.chunks[0U],
                             (uint64_T *)&r13.chunks[0U]);
    sMultiWordShr((uint64_T *)&r13.chunks[0U], 63U,
                  (uint64_T *)&r14.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r14.chunks[0U], 44U,
                      (uint64_T *)&r4.chunks[0U]);
    i = MultiWord2sLong((uint64_T *)&r4.chunks[0U]);
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    sLong2MultiWord((int64_T)(fmo_7 * fmo_3) << 30, (uint64_T *)&r9.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r9.chunks[0U], 63U,
                        (uint64_T *)&b_r.chunks[0U]);
    MultiWordAdd((uint64_T *)&r.chunks[0U], (uint64_T *)&b_r.chunks[0U],
                 (uint64_T *)&r2.chunks[0U]);
    sMultiWord2MultiWord((uint64_T *)&r2.chunks[0U],
                         (uint64_T *)&r10.chunks[0U]);
    sMultiWordShl((uint64_T *)&r10.chunks[0U], 3, 63U,
                  (uint64_T *)&r11.chunks[0U], 3);
    sMultiWord2sMultiWordSat((uint64_T *)&r11.chunks[0U],
                             (uint64_T *)&r6.chunks[0U]);
    sMultiWordShr((uint64_T *)&r6.chunks[0U], 63U, (uint64_T *)&r7.chunks[0U]);
    MultiWordNeg((uint64_T *)&r7.chunks[0U], (uint64_T *)&r8.chunks[0U]);
    sMultiWord2MultiWord((uint64_T *)&r8.chunks[0U],
                         (uint64_T *)&r3.chunks[0U]);
    sMultiWordShl((uint64_T *)&r3.chunks[0U], 3, 63U,
                  (uint64_T *)&r5.chunks[0U], 3);
    sMultiWord2sMultiWordSat((uint64_T *)&r5.chunks[0U],
                             (uint64_T *)&r12.chunks[0U]);
    sMultiWordShr((uint64_T *)&r12.chunks[0U], 63U,
                  (uint64_T *)&r13.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r13.chunks[0U], 44U,
                      (uint64_T *)&r14.chunks[0U]);
    fmo_8_re = MultiWord2sLong((uint64_T *)&r14.chunks[0U]);
    if (fmo_8_re > 32767LL) {
      fmo_8_re = 32767LL;
    } else if (fmo_8_re < -32768LL) {
      fmo_8_re = -32768LL;
    }
    if ((int16_T)i > 16383) {
      fmo_5 = MAX_int16_T;
    } else if ((int16_T)i <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)((int16_T)i << 1);
    }
    if ((int16_T)fmo_8_re > 16383) {
      fmo_6 = MAX_int16_T;
    } else if ((int16_T)fmo_8_re <= -16384) {
      fmo_6 = MIN_int16_T;
    } else {
      fmo_6 = (int16_T)((int16_T)fmo_8_re << 1);
    }
    b_fmo_4[2].re = fmo_5;
    b_fmo_4[2].im = fmo_6;
    i = (((int64_T)(fmo_2 * fmo_3) << 14) + 134217728LL) >> 28;
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    fmo_8_re = ((int64_T)(fmo_1 << 14) * fmo_3 + 134217728LL) >> 28;
    if (fmo_8_re > 32767LL) {
      fmo_8_re = 32767LL;
    } else if (fmo_8_re < -32768LL) {
      fmo_8_re = -32768LL;
    }
    if ((int16_T)i > 16383) {
      fmo_5 = MAX_int16_T;
    } else if ((int16_T)i <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)((int16_T)i << 1);
    }
    if ((int16_T)fmo_8_re > 16383) {
      fmo_6 = MAX_int16_T;
    } else if ((int16_T)fmo_8_re <= -16384) {
      fmo_6 = MIN_int16_T;
    } else {
      fmo_6 = (int16_T)((int16_T)fmo_8_re << 1);
    }
    b_fmo_4[1].re = fmo_5;
    b_fmo_4[1].im = fmo_6;
    sLong2MultiWord(((int64_T)(fmo_8 * fmo_2) - fmo_7 * fmo_1) * fmo_4,
                    (uint64_T *)&r1.chunks[0U]);
    sMultiWordShl((uint64_T *)&r1.chunks[0U], 2, 31U,
                  (uint64_T *)&r2.chunks[0U], 2);
    MultiWordSignedWrap((uint64_T *)&r2.chunks[0U], 45U,
                        (uint64_T *)&r6.chunks[0U]);
    u = (uint64_T)fmo_4;
    sMultiWordMul((uint64_T *)&r.chunks[0U], 2, (uint64_T *)&u,
                  (uint64_T *)&r1.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&r1.chunks[0U], 45U,
                        (uint64_T *)&r2.chunks[0U]);
    MultiWordAdd((uint64_T *)&r6.chunks[0U], (uint64_T *)&r2.chunks[0U],
                 (uint64_T *)&r7.chunks[0U]);
    sMultiWord2MultiWord((uint64_T *)&r7.chunks[0U],
                         (uint64_T *)&r3.chunks[0U]);
    sMultiWordShl((uint64_T *)&r3.chunks[0U], 3, 45U,
                  (uint64_T *)&r5.chunks[0U], 3);
    sMultiWord2sMultiWordSat((uint64_T *)&r5.chunks[0U],
                             (uint64_T *)&r8.chunks[0U]);
    sMultiWordShr((uint64_T *)&r8.chunks[0U], 45U, (uint64_T *)&r12.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r12.chunks[0U], 31U,
                      (uint64_T *)&r13.chunks[0U]);
    fmo_8_re = MultiWord2sLong((uint64_T *)&r13.chunks[0U]);
    if (fmo_8_re > 281474976710655LL) {
      fmo_8_re = 281474976710655LL;
    } else if (fmo_8_re < -281474976710656LL) {
      fmo_8_re = -281474976710656LL;
    }
    sMultiWordMul((uint64_T *)&c_im.chunks[0U], 2, (uint64_T *)&u,
                  (uint64_T *)&b_r.chunks[0U]);
    MultiWordSignedWrap((uint64_T *)&b_r.chunks[0U], 45U,
                        (uint64_T *)&r1.chunks[0U]);
    MultiWordAdd((uint64_T *)&r.chunks[0U], (uint64_T *)&r1.chunks[0U],
                 (uint64_T *)&r6.chunks[0U]);
    sMultiWord2MultiWord((uint64_T *)&r6.chunks[0U],
                         (uint64_T *)&r3.chunks[0U]);
    sMultiWordShl((uint64_T *)&r3.chunks[0U], 3, 45U,
                  (uint64_T *)&r5.chunks[0U], 3);
    sMultiWord2sMultiWordSat((uint64_T *)&r5.chunks[0U],
                             (uint64_T *)&r7.chunks[0U]);
    sMultiWordShr((uint64_T *)&r7.chunks[0U], 45U, (uint64_T *)&r8.chunks[0U]);
    sMultiWordShrNear((uint64_T *)&r8.chunks[0U], 31U,
                      (uint64_T *)&r12.chunks[0U]);
    fmo_8_im = MultiWord2sLong((uint64_T *)&r12.chunks[0U]);
    if (fmo_8_im > 281474976710655LL) {
      fmo_8_im = 281474976710655LL;
    } else if (fmo_8_im < -281474976710656LL) {
      fmo_8_im = -281474976710656LL;
    }
    i = (fmo_8_re + 134217728LL) >> 28;
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    fmo_8_re = (fmo_8_im + 134217728LL) >> 28;
    if (fmo_8_re > 32767LL) {
      fmo_8_re = 32767LL;
    } else if (fmo_8_re < -32768LL) {
      fmo_8_re = -32768LL;
    }
    if ((int16_T)i > 16383) {
      fmo_5 = MAX_int16_T;
    } else if ((int16_T)i <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)((int16_T)i << 1);
    }
    if ((int16_T)fmo_8_re > 16383) {
      fmo_6 = MAX_int16_T;
    } else if ((int16_T)fmo_8_re <= -16384) {
      fmo_6 = MIN_int16_T;
    } else {
      fmo_6 = (int16_T)((int16_T)fmo_8_re << 1);
    }
    b_fmo_4[3].re = fmo_5;
    b_fmo_4[3].im = fmo_6;
    op[0] = b_fmo_4[0];
    op[1] = b_fmo_4[1];
    op[2] = b_fmo_4[2];
    op[3] = b_fmo_4[3];
  } else if (opName == 12) {
    int32_T i1;
    int32_T op_tmp_im_tmp;
    op_tmp_im_tmp = -32768 * fmo_3;
    if (fmo_4 > 16383) {
      fmo_5 = MAX_int16_T;
    } else if (fmo_4 <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)(fmo_4 << 1);
    }
    b_fmo_4[0].re = fmo_5;
    b_fmo_4[0].im = 0;
    op_tmp_im_tmp = (op_tmp_im_tmp >> 15) + ((op_tmp_im_tmp & 16384) != 0);
    i1 = op_tmp_im_tmp;
    if (op_tmp_im_tmp > 32767) {
      i1 = 32767;
    }
    if ((int16_T)i1 > 16383) {
      fmo_5 = MAX_int16_T;
    } else if ((int16_T)i1 <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)((int16_T)i1 << 1);
    }
    b_fmo_4[2].re = 0;
    b_fmo_4[2].im = fmo_5;
    if (op_tmp_im_tmp > 32767) {
      op_tmp_im_tmp = 32767;
    }
    if ((int16_T)op_tmp_im_tmp > 16383) {
      fmo_5 = MAX_int16_T;
    } else if ((int16_T)op_tmp_im_tmp <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)((int16_T)op_tmp_im_tmp << 1);
    }
    b_fmo_4[1].re = 0;
    b_fmo_4[1].im = fmo_5;
    if (fmo_4 > 16383) {
      fmo_5 = MAX_int16_T;
    } else if (fmo_4 <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)(fmo_4 << 1);
    }
    b_fmo_4[3].re = fmo_5;
    b_fmo_4[3].im = 0;
    op[0] = b_fmo_4[0];
    op[1] = b_fmo_4[1];
    op[2] = b_fmo_4[2];
    op[3] = b_fmo_4[3];
  } else if (opName == 13) {
    int32_T op_tmp_im_tmp;
    if (fmo_4 > 16383) {
      fmo_5 = MAX_int16_T;
    } else if (fmo_4 <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)(fmo_4 << 1);
    }
    b_fmo_4[0].re = fmo_5;
    b_fmo_4[0].im = 0;
    op_tmp_im_tmp = -fmo_3;
    if (-fmo_3 > 32767) {
      op_tmp_im_tmp = 32767;
    }
    if ((int16_T)op_tmp_im_tmp > 16383) {
      fmo_5 = MAX_int16_T;
    } else if ((int16_T)op_tmp_im_tmp <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)((int16_T)op_tmp_im_tmp << 1);
    }
    b_fmo_4[2].re = fmo_5;
    b_fmo_4[2].im = 0;
    if (fmo_3 > 16383) {
      fmo_5 = MAX_int16_T;
    } else if (fmo_3 <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)(fmo_3 << 1);
    }
    b_fmo_4[1].re = fmo_5;
    b_fmo_4[1].im = 0;
    if (fmo_4 > 16383) {
      fmo_5 = MAX_int16_T;
    } else if (fmo_4 <= -16384) {
      fmo_5 = MIN_int16_T;
    } else {
      fmo_5 = (int16_T)(fmo_4 << 1);
    }
    b_fmo_4[3].re = fmo_5;
    b_fmo_4[3].im = 0;
    op[0] = b_fmo_4[0];
    op[1] = b_fmo_4[1];
    op[2] = b_fmo_4[2];
    op[3] = b_fmo_4[3];
  } else if (opName == 14) {
    int64_T fmo_8_im;
    int64_T fmo_8_re;
    int64_T i;
    int32_T op_tmp_im_tmp;
    op_tmp_im_tmp = fmo_3 << 14;
    i = (int64_T)fmo_4 << 14;
    fmo_8_re = i;
    if (i > 4294967295LL) {
      fmo_8_re = 4294967295LL;
    } else if (i < -4294967296LL) {
      fmo_8_re = -4294967296LL;
    }
    fmo_8_re = (fmo_8_re + 4096LL) >> 13;
    if (fmo_8_re > 32767LL) {
      fmo_8_re = 32767LL;
    } else if (fmo_8_re < -32768LL) {
      fmo_8_re = -32768LL;
    }
    fmo_8_im = -(int64_T)op_tmp_im_tmp;
    if (-(int64_T)op_tmp_im_tmp > 4294967295LL) {
      fmo_8_im = 4294967295LL;
    } else if (-(int64_T)op_tmp_im_tmp < -4294967296LL) {
      fmo_8_im = -4294967296LL;
    }
    fmo_8_im = (fmo_8_im + 4096LL) >> 13;
    if (fmo_8_im > 32767LL) {
      fmo_8_im = 32767LL;
    } else if (fmo_8_im < -32768LL) {
      fmo_8_im = -32768LL;
    }
    b_fmo_4[0].re = (int16_T)fmo_8_re;
    b_fmo_4[0].im = (int16_T)fmo_8_im;
    b_fmo_4[2].re = 0;
    b_fmo_4[2].im = 0;
    b_fmo_4[1].re = 0;
    b_fmo_4[1].im = 0;
    if (i > 4294967295LL) {
      i = 4294967295LL;
    } else if (i < -4294967296LL) {
      i = -4294967296LL;
    }
    i = (i + 4096LL) >> 13;
    if (i > 32767LL) {
      i = 32767LL;
    } else if (i < -32768LL) {
      i = -32768LL;
    }
    fmo_8_re = (op_tmp_im_tmp + 4096LL) >> 13;
    if (fmo_8_re > 32767LL) {
      fmo_8_re = 32767LL;
    } else if (fmo_8_re < -32768LL) {
      fmo_8_re = -32768LL;
    }
    b_fmo_4[3].re = (int16_T)i;
    b_fmo_4[3].im = (int16_T)fmo_8_re;
    op[0] = b_fmo_4[0];
    op[1] = b_fmo_4[1];
    op[2] = b_fmo_4[2];
    op[3] = b_fmo_4[3];
  } else {
    op[0].re = 0;
    op[0].im = 0;
    op[1].re = 0;
    op[1].im = 0;
    op[2].re = 0;
    op[2].im = 0;
    op[3].re = 0;
    op[3].im = 0;
  }
}

/* End of code generation (quantumComputer_twoQubit_fixpt.c) */
