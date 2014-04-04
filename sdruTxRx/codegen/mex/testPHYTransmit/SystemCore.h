/*
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Sat Mar 29 15:48:37 2014
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
#include "testPHYTransmit_types.h"

/* Function Declarations */
extern void SystemCore_checkTunableProps(commcodegen_BPSKModulator *obj);
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
extern void e_SystemCore_checkTunableProps(commcodegen_BPSKModulator_348 *obj);
extern boolean_T e_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj);
extern void e_SystemCore_setup(commcodegen_BPSKModulator_348 *obj);
extern void e_SystemCore_step(commcodegen_CRCGenerator_256 *obj, const real_T varargin_1[560], real_T varargout_1[563]);
extern void f_SystemCore_checkTunableProps(commcodegen_BPSKModulator_348 *obj);
extern boolean_T f_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj);
extern void f_SystemCore_setup(commcodegen_BPSKModulator_348 *obj);
extern void f_SystemCore_step(commcodegen_CRCGenerator_478 *obj, const real_T varargin_1[560], real_T varargout_1[563]);
extern boolean_T g_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_348 *obj);
extern void g_SystemCore_step(testPHYTransmitStackData *SD, comm_SDRuTransmitter *obj, const creal_T varargin_1[38400]);
extern boolean_T h_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_348 *obj);
extern void h_SystemCore_step(testPHYTransmitStackData *SD, comm_SDRuReceiver *obj);
#endif
/* End of code generation (SystemCore.h) */
