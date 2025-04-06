/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_info.c
 *
 * Code generation for function 'quantumComputer_twoQubit_wrapper_fixpt_cosim'
 *
 */

/* Include files */
#include "_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[5] = {
      "789ce555cb4ac340149d480541d4aec4952bd15d117421ee6cb422d59ada52178ec43ca6"
      "4d3093e7c4b68220b8115cb8f207fc2d372edde92798a6499b06c614"
      "82a9d4d9dcdc9c3b73ce196e6e007374c2000016417fad2cf46310403e88336074c57126"
      "56c78c968359901bd917e2cf41940c9da00ee927ba80d160a76c6055",
      "177452ef9a08d8c831b41b24fb4853d5505dc5a8164d2abd0c9722d020e941bd675641d2"
      "75cdc5c0569ca1422d9a0ceee38be23737e67d3c51ee231fc32f0e2e"
      "d95db86f48b0a512c51561d5f53cbb18b2868c201688268890b40dde724595f04ed72108"
      "43c9035b488756bf9835b0e91264f35e61b557e715382aa6c27cdb16",
      "4cd37bd1543b26e1fde2021ef1ff98d2ff5a82ff10a74a8c488bea3253ea9a4fd015e208"
      "8b4896915c68aa20caff9192ff21813fc427d317f47eb8a2f85a1ad3"
      "773c0eebe7fcb8f1fac664c9075f3eb7b2e40bd7a4f83a94f3c6eddb650a5f3e86bb5655"
      "24879c7cba872b58e2cadcd976512c0d7570093c493a0025cfeafcff",
      "fafddfa7f4bd9ae03bc47f96f677fe03ef29f9ef12f843fc97fac0bfcd843ef03b20ab79"
      "b59ef1fc078dc3cd4cf98235edf3bf61766f77ce896d1b4aa76c958e"
      "2b65bb684ec1fcff06577c4ccd",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3376U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[9] = {"Version",
                                    "ResolvedFunctions",
                                    "Checksum",
                                    "EntryPoints",
                                    "CoverageInfo",
                                    "IsPolymorphic",
                                    "PropertyList",
                                    "UUID",
                                    "ClassEntryPointIsHandle"};
  const char_T *epFieldName[8] = {
      "Name",     "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "FullPath", "TimeStamp",      "Constructor",     "Visible"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 8, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 10);
  emlrtSetField(
      xEntryPoints, 0, "Name",
      emlrtMxCreateString("quantumComputer_twoQubit_wrapper_fixpt_cosim"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(10.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString("C:\\Doc\\github\\Quantum\\Code\\matlab\\two_qubit_"
                          "system\\codegen\\quantumComputer_"
                          "twoQubit\\cosim\\quantumComputer_twoQubit_wra"
                          "pper_fixpt_cosim.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739707.66342592589));
  emlrtSetField(xEntryPoints, 0, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("24.1.0.2628055 (R2024a) Update 4"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("j2r5EcP3pOfGO7ek1EAiLG"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation
 * (_coder_quantumComputer_twoQubit_wrapper_fixpt_cosim_info.c) */
