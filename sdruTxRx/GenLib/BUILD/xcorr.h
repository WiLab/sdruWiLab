/*
 * xcorr.h
 *
 * Code generation for function 'xcorr'
 *
 * C source code generated on: Thu Jul  3 10:46:49 2014
 *
 */

#ifndef __XCORR_H__
#define __XCORR_H__
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
extern void b_xcorr(const real_T arg1[112], real_T C[223]);
extern void xcorr(const creal_T arg1[112], const creal_T arg2[16], creal_T C[223]);
#ifdef __cplusplus
}
#endif
#endif
/* End of code generation (xcorr.h) */
