/*
 * testFileSourceSink_emxutil.h
 *
 * Code generation for function 'testFileSourceSink_emxutil'
 *
 * C source code generated on: Thu Feb 27 11:25:03 2014
 *
 */

#ifndef __TESTFILESOURCESINK_EMXUTIL_H__
#define __TESTFILESOURCESINK_EMXUTIL_H__
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
#include "testFileSourceSink_types.h"

/* Function Declarations */
extern void emxEnsureCapacity(const emlrtStack *sp, emxArray__common *emxArray, int32_T oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation);
extern void emxFree_char_T(emxArray_char_T **pEmxArray);
extern void emxInit_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
#endif
/* End of code generation (testFileSourceSink_emxutil.h) */
