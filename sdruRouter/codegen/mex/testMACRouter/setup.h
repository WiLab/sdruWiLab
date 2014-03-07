/*
 * setup.h
 *
 * Code generation for function 'setup'
 *
 * C source code generated on: Thu Mar  6 21:20:55 2014
 *
 */

#ifndef __SETUP_H__
#define __SETUP_H__
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
#include "testMACRouter_types.h"

/* Function Declarations */
extern void Outputs(const comm_BPSKModulator_1 *obj, const real_T U0_data[563], const int32_T U0_size[2], creal_T Y0_data[563], int32_T Y0_size[2]);
extern void b_Outputs(const comm_BPSKModulator_4 *obj, const real_T U0_data[563], const int32_T U0_size[2], creal_T Y0_data[563], int32_T Y0_size[2]);
extern void c_Destructor(dsp_FIRRateConverter_7 *obj);
extern void c_Outputs(const comm_BPSKModulator_9 *obj, const real_T U0_data[563], const int32_T U0_size[2], creal_T Y0_data[563], int32_T Y0_size[2]);
#endif
/* End of code generation (setup.h) */
