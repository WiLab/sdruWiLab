/*
 * AGC.h
 *
 * Code generation for function 'AGC'
 *
 * C source code generated on: Thu Mar  6 21:20:55 2014
 *
 */

#ifndef __AGC_H__
#define __AGC_H__
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
extern comm_AGC *AGC_AGC(comm_AGC *obj);
extern void AGC_stepImpl(testMACRouterStackData *SD, comm_AGC *obj, const creal_T x[5120], creal_T y[5120]);
#endif
/* End of code generation (AGC.h) */
