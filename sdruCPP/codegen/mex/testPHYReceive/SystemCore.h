/*
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

#ifndef __SYSTEMCORE_H__
#define __SYSTEMCORE_H__
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
extern void SystemCore_reset(const emlrtStack *sp, dspcodegen_FIRRateConverter *obj);
extern void SystemCore_step(const emlrtStack *sp, OFDMModulator *obj, creal_T varargout_1[64]);
extern void b_SystemCore_step(const emlrtStack *sp, OFDMModulator *obj, creal_T varargout_1[64]);
extern void b_SystemCore_validateProperties(void);
extern void c_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator *obj, const real_T varargin_1[560], real_T varargout_1[563]);
extern void d_SystemCore_step(const emlrtStack *sp, commcodegen_BPSKModulator *obj, const real_T varargin_1[563], creal_T varargout_1[563]);
extern void e_SystemCore_step(const emlrtStack *sp, OFDMModulator_1 *obj, const creal_T varargin_1[576], const real_T varargin_2[48], creal_T varargout_1[960]);
extern void f_SystemCore_step(const emlrtStack *sp, commcodegen_CRCGenerator_6 *obj, const real_T varargin_1[560], real_T varargout_1[563]);
extern void g_SystemCore_step(const emlrtStack *sp, commcodegen_BPSKModulator_1 *obj, const real_T varargin_1[563], creal_T varargout_1[563]);
extern void h_SystemCore_step(const emlrtStack *sp, dspcodegen_FIRRateConverter *obj, const creal_T varargin_1[288], creal_T varargout_1[3456]);
#endif
/* End of code generation (SystemCore.h) */
