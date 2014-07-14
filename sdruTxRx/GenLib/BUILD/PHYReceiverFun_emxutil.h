/*
 * PHYReceiverFun_emxutil.h
 *
 * Code generation for function 'PHYReceiverFun_emxutil'
 *
 * C source code generated on: Thu Jul  3 10:46:49 2014
 *
 */

#ifndef __PHYRECEIVERFUN_EMXUTIL_H__
#define __PHYRECEIVERFUN_EMXUTIL_H__
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
extern void b_emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T numDimensions);
extern void b_emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T numDimensions);
extern void b_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions);
extern void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel, int32_T elementSize);
extern void emxFreeStruct_PHYReceiver_167(PHYReceiver_167 *pStruct);
extern void emxFree_creal_T(emxArray_creal_T **pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInitStruct_PHYReceiver_167(PHYReceiver_167 *pStruct);
extern void emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T numDimensions);
extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T numDimensions);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions);
#ifdef __cplusplus
}
#endif
#endif
/* End of code generation (PHYReceiverFun_emxutil.h) */
