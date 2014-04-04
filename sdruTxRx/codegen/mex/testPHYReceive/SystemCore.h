/*
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
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
extern void SystemCore_checkTunableProps(commcodegen_BPSKModulator *obj);
extern void SystemCore_reset(dspcodegen_FIRRateConverter *obj);
extern void SystemCore_setup(commcodegen_BPSKModulator *obj);
extern void SystemCore_step(OFDMModulator_4 *obj, creal_T varargout_1[64]);
extern void b_SystemCore_checkTunableProps(commcodegen_BPSKModulator *obj);
extern void b_SystemCore_setup(commcodegen_BPSKModulator *obj);
extern void b_SystemCore_step(OFDMModulator_4 *obj, creal_T varargout_1[64]);
extern void c_SystemCore_checkTunableProps(commcodegen_BPSKModulator_191 *obj);
extern boolean_T c_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator *obj);
extern void c_SystemCore_setup(commcodegen_BPSKModulator_191 *obj);
extern void c_SystemCore_step(commcodegen_CRCGenerator *obj, const real_T varargin_1[560], real_T varargout_1[563]);
extern void d_SystemCore_checkTunableProps(commcodegen_BPSKModulator_191 *obj);
extern boolean_T d_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator *obj);
extern void d_SystemCore_setup(commcodegen_BPSKModulator_191 *obj);
extern void d_SystemCore_step(OFDMModulator_196 *obj, const creal_T varargin_1[576], const real_T varargin_2[48], creal_T varargout_1[960]);
extern boolean_T e_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj);
extern void e_SystemCore_step(commcodegen_CRCGenerator_256 *obj, const real_T varargin_1[560], real_T varargout_1[563]);
extern boolean_T f_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj);
extern void f_SystemCore_step(OFDMDemodulator_1 *obj, const creal_T varargin_1[64], emxArray_creal_T *varargout_1);
extern void g_SystemCore_step(dspcodegen_FIRRateConverter *obj, const creal_T varargin_1[288], creal_T varargout_1[3456]);
#endif
/* End of code generation (SystemCore.h) */
