/*
 * testPHYReceive_emxutil.h
 *
 * Code generation for function 'testPHYReceive_emxutil'
 *
 * C source code generated on: Thu Apr 17 22:51:42 2014
 *
 */

#ifndef __TESTPHYRECEIVE_EMXUTIL_H__
#define __TESTPHYRECEIVE_EMXUTIL_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "testPHYReceive_types.h"

/* Function Declarations */
extern void b_emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation);
extern void emxFreeStruct_OFDMModulator_196(OFDMModulator_196 *pStruct);
extern void emxFreeStruct_OFDMModulator_4(OFDMModulator_4 *pStruct);
extern void emxFree_creal_T(emxArray_creal_T **pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInitStruct_OFDMDemodulator(OFDMDemodulator *pStruct, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitStruct_OFDMModulator_196(OFDMModulator_196 *pStruct, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitStruct_OFDMModulator_4(OFDMModulator_4 *pStruct, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
#endif
/* End of code generation (testPHYReceive_emxutil.h) */
