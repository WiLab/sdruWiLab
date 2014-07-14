/*
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

#ifndef __SYSTEMCORE_H__
#define __SYSTEMCORE_H__
/* Include files */
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "PHYReceiverFun_types.h"

/* Function Declarations */
#ifdef __cplusplus
extern "C" {
#endif
extern void SystemCore_step(b_PHYReceiver_167 *obj, real_T varargin_1, boolean_T varargout_1_data[2304], int32_T varargout_1_size[2]);
extern void c_SystemCore_step(comm_AGC *obj, const creal_T varargin_1[641], creal_T varargout_1[641]);
extern void d_SystemCore_step(OFDMDemodulator *obj, const creal_T varargin_1[64], emxArray_creal_T *varargout_1);
extern void e_SystemCore_step(dspcodegen_FIRRateConverter *obj, const creal_T varargin_1[24], creal_T varargout_1[288]);
#ifdef __cplusplus
}
#endif
#endif
/* End of code generation (SystemCore.h) */
