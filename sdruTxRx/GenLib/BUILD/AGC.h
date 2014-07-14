/*
 * AGC.h
 *
 * Code generation for function 'AGC'
 *
 * C source code generated on: Thu Jul  3 10:46:49 2014
 *
 */

#ifndef __AGC_H__
#define __AGC_H__
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
extern void AGC_stepImpl(comm_AGC *obj, const creal_T x[641], creal_T y[641]);
#ifdef __cplusplus
}
#endif
#endif
/* End of code generation (AGC.h) */
