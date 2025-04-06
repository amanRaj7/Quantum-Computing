/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quantumComputer_twoQubit_wrapper_fixpt_cosim_mexutil.h
 *
 * Code generation for function
 * 'quantumComputer_twoQubit_wrapper_fixpt_cosim_mexutil'
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
int64_T MultiWord2sLong(const uint64_T u[]);

void MultiWordAdd(const uint64_T u1[], const uint64_T u2[], uint64_T y[]);

void MultiWordSignedWrap(const uint64_T u1[], uint32_T n2, uint64_T y[]);

const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const cint16_T u[4]);

const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const uint16_T u[4]);

const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const uint16_T u[2]);

void sMultiWord2MultiWord(const uint64_T u1[], uint64_T y[]);

void sMultiWord2sMultiWordSat(const uint64_T u1[], uint64_T y[]);

void sMultiWordMul(const uint64_T u1[], int32_T n1, const uint64_T u2[],
                   uint64_T y[]);

void sMultiWordShl(const uint64_T u1[], int32_T n1, uint32_T n2, uint64_T y[],
                   int32_T n);

void sMultiWordShr(const uint64_T u1[], uint32_T n2, uint64_T y[]);

void sMultiWordShrNear(const uint64_T u1[], uint32_T n2, uint64_T y[]);

/* End of code generation
 * (quantumComputer_twoQubit_wrapper_fixpt_cosim_mexutil.h) */
