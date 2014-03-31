/*
 * SystemProp.h
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Thu Mar  6 23:19:55 2014
 *
 */

#ifndef __SYSTEMPROP_H__
#define __SYSTEMPROP_H__
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
#include "testSpectrumSenseP25_types.h"

/* Function Declarations */
extern void c_SystemProp_matlabCodegenSetAn(OFDMModulator_1 *obj);
extern void d_SystemProp_matlabCodegenSetAn(OFDMModulator_1 *obj, const real_T value[768]);
extern void e_SystemProp_matlabCodegenSetAn(const emlrtStack *sp, OFDMModulator_1 *obj, const real_T value_data[768], const int32_T value_size[1]);
extern void f_SystemProp_matlabCodegenSetAn(comm_AGC *obj, real_T value);
#endif
/* End of code generation (SystemProp.h) */
