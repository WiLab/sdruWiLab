/*
 * rdivide.h
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Thu Mar  6 19:04:22 2014
 *
 */

#ifndef __RDIVIDE_H__
#define __RDIVIDE_H__
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
#include "testMACTransmitter_types.h"

/* Function Declarations */
extern void b_rdivide(const creal_T x[106], const real_T y[106], creal_T z[106]);
extern void c_rdivide(const creal_T x[53], const real_T y[53], creal_T z[53]);
extern void rdivide(const real_T x_data[1224], const real_T y_data[1224], real_T z_data[1224], int32_T z_size[1]);
#endif
/* End of code generation (rdivide.h) */
