/*
 * PHYReceiver.h
 *
 * Code generation for function 'PHYReceiver'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

#ifndef __PHYRECEIVER_H__
#define __PHYRECEIVER_H__
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
extern b_PHYReceiver_167 *PHYReceiver_PHYReceiver(b_PHYReceiver_167 *obj);
extern void PHYReceiver_stepImpl(b_PHYReceiver_167 *obj, real_T data, boolean_T RHard_data[2304], int32_T RHard_size[2]);
extern void eml_fftshift(creal_T x[64]);
#ifdef __cplusplus
}
#endif
#endif
/* End of code generation (PHYReceiver.h) */
