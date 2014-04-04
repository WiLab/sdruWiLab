/*
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
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
#include "testMACReceiver_types.h"

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
extern void c_SystemCore_step(OFDMModulator_196 *obj, const creal_T varargin_1[576], const real_T varargin_2[48], creal_T varargout_1[960]);
extern void c_eml_error(void);
extern void check_forloop_overflow_error(void);
extern void d_SystemCore_checkTunableProps(commcodegen_BPSKModulator_191 *obj);
extern boolean_T d_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator *obj);
extern void d_SystemCore_setup(commcodegen_BPSKModulator_191 *obj);
extern void d_SystemCore_step(commcodegen_CRCGenerator_256 *obj, const real_T varargin_1[560], real_T varargout_1[563]);
extern void e_SystemCore_checkTunableProps(commcodegen_BPSKModulator_348 *obj);
extern boolean_T e_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj);
extern void e_SystemCore_setup(commcodegen_BPSKModulator_348 *obj);
extern void e_SystemCore_step(OFDMDemodulator_1 *obj, const creal_T varargin_1[64], emxArray_creal_T *varargout_1);
extern void f_SystemCore_checkTunableProps(commcodegen_BPSKModulator_348 *obj);
extern boolean_T f_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_191 *obj);
extern void f_SystemCore_setup(commcodegen_BPSKModulator_348 *obj);
extern void f_SystemCore_step(testMACReceiverStackData *SD, OFDMDemodulator *obj, const creal_T varargin_1[960], emxArray_creal_T *varargout_1, creal_T varargout_2[48]);
extern boolean_T g_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_348 *obj);
extern void g_SystemCore_step(dspcodegen_FIRRateConverter *obj, const creal_T varargin_1[288], creal_T varargout_1[3456]);
extern boolean_T h_SystemCore_detectInputSizeCha(commcodegen_BPSKModulator_348 *obj);
extern void h_SystemCore_step(commcodegen_CRCDetector *obj, const boolean_T varargin_1_data[563], boolean_T varargout_1_data[560], int32_T varargout_1_size[2], boolean_T *varargout_2);
extern void i_SystemCore_step(testMACReceiverStackData *SD, comm_SDRuTransmitter *obj, const creal_T varargin_1[38400]);
extern void j_SystemCore_step(testMACReceiverStackData *SD, comm_SDRuReceiver *obj);
#endif
/* End of code generation (SystemCore.h) */
