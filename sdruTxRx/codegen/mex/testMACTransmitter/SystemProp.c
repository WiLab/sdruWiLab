/*
 * SystemProp.c
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Thu Mar  6 19:04:22 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "SystemProp.h"
#include "testMACTransmitter_emxutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo n_emlrtRTEI = { 1, 13, "SystemProp",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

/* Function Definitions */
void c_SystemProp_matlabCodegenSetAn(OFDMModulator_1 *obj)
{
  obj->isInitialized = TRUE;
}

void d_SystemProp_matlabCodegenSetAn(OFDMModulator_1 *obj, const real_T value
  [768])
{
  int32_T i2;
  for (i2 = 0; i2 < 768; i2++) {
    obj->pFullGrid[i2] = value[i2];
  }
}

void e_SystemProp_matlabCodegenSetAn(const emlrtStack *sp, OFDMModulator_1 *obj,
  const real_T value_data[768], const int32_T value_size[1])
{
  int32_T i3;
  int32_T loop_ub;
  i3 = obj->pDataLinearIndices->size[0];
  obj->pDataLinearIndices->size[0] = value_size[0];
  emxEnsureCapacity(sp, (emxArray__common *)obj->pDataLinearIndices, i3,
                    (int32_T)sizeof(real_T), &n_emlrtRTEI);
  loop_ub = value_size[0];
  for (i3 = 0; i3 < loop_ub; i3++) {
    obj->pDataLinearIndices->data[i3] = value_data[i3];
  }
}

void f_SystemProp_matlabCodegenSetAn(comm_AGC *obj, real_T value)
{
  obj->Gain = value;
}

void g_SystemProp_matlabCodegenSetAn(OFDMDemodulator_1 *obj)
{
  obj->isInitialized = TRUE;
}

void h_SystemProp_matlabCodegenSetAn(const emlrtStack *sp, OFDMDemodulator_1
  *obj, const real_T value_data[768], const int32_T value_size[1])
{
  int32_T i25;
  int32_T loop_ub;
  i25 = obj->pDataLinearIndices->size[0];
  obj->pDataLinearIndices->size[0] = value_size[0];
  emxEnsureCapacity(sp, (emxArray__common *)obj->pDataLinearIndices, i25,
                    (int32_T)sizeof(real_T), &n_emlrtRTEI);
  loop_ub = value_size[0];
  for (i25 = 0; i25 < loop_ub; i25++) {
    obj->pDataLinearIndices->data[i25] = value_data[i25];
  }
}

/* End of code generation (SystemProp.c) */
