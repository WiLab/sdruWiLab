/*
 * testPHYTransmit_emxutil.h
 *
 * Code generation for function 'testPHYTransmit_emxutil'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

#ifndef __TESTPHYTRANSMIT_EMXUTIL_H__
#define __TESTPHYTRANSMIT_EMXUTIL_H__
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
#include "testPHYTransmit_types.h"

/* Function Declarations */
extern void emxEnsureCapacity(const emlrtStack *sp, emxArray__common *emxArray, int32_T oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation);
extern void emxFreeStruct_OFDMModulator(OFDMModulator *pStruct);
extern void emxFreeStruct_OFDMModulator_1(OFDMModulator_1 *pStruct);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxInitStruct_OFDMModulator(const emlrtStack *sp, OFDMModulator *pStruct, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitStruct_OFDMModulator_1(const emlrtStack *sp, OFDMModulator_1 *pStruct, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
#endif
/* End of code generation (testPHYTransmit_emxutil.h) */
