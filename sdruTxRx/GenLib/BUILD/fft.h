/*
 * fft.h
 *
 * Code generation for function 'fft'
 *
 * C source code generated on: Thu Jul  3 10:46:49 2014
 *
 */

#ifndef __FFT_H__
#define __FFT_H__
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
extern void fft(const creal_T x[64], creal_T y[64]);
#ifdef __cplusplus
}
#endif
#endif
/* End of code generation (fft.h) */
