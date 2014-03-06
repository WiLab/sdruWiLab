/*
 * sendComplexDoubleData.h
 *
 * Code generation for function 'sendComplexDoubleData'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

#ifndef __SENDCOMPLEXDOUBLEDATA_H__
#define __SENDCOMPLEXDOUBLEDATA_H__
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
extern void sendComplexDoubleData(testPHYTransmitStackData *SD, const emlrtStack *sp, int32_T driverApiH, const creal_T data[38400], real_T freq, real_T loOffset, real_T gain, real_T interp, uint32_T *underflow, UsrpErrorCapiEnumT *errStat, char_T errStr_data[1024], int32_T errStr_size[2]);
#endif
/* End of code generation (sendComplexDoubleData.h) */
