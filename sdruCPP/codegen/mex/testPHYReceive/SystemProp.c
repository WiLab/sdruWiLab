/*
 * SystemProp.c
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Thu Apr 17 22:51:41 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "SystemProp.h"
#include "testPHYReceive_emxutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo n_emlrtRTEI = { 1, 13, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

/* Function Definitions */
void c_SystemProp_matlabCodegenSetAn(OFDMModulator_196 *obj, const real_T value
  [768])
{
  int32_T i3;
  for (i3 = 0; i3 < 768; i3++) {
    obj->pFullGrid[i3] = value[i3];
  }
}

void d_SystemProp_matlabCodegenSetAn(OFDMModulator_196 *obj, const real_T
  value_data[768], const int32_T value_size[1])
{
  int32_T i4;
  int32_T loop_ub;
  i4 = obj->pDataLinearIndices->size[0];
  obj->pDataLinearIndices->size[0] = value_size[0];
  emxEnsureCapacity((emxArray__common *)obj->pDataLinearIndices, i4, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  loop_ub = value_size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    obj->pDataLinearIndices->data[i4] = value_data[i4];
  }
}

void e_SystemProp_matlabCodegenSetAn(comm_AGC *obj, real_T value)
{
  obj->Gain = value;
}

void f_SystemProp_matlabCodegenSetAn(OFDMDemodulator *obj, const real_T
  value_data[768], const int32_T value_size[1])
{
  int32_T i23;
  int32_T loop_ub;
  i23 = obj->pDataLinearIndices->size[0];
  obj->pDataLinearIndices->size[0] = value_size[0];
  emxEnsureCapacity((emxArray__common *)obj->pDataLinearIndices, i23, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  loop_ub = value_size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    obj->pDataLinearIndices->data[i23] = value_data[i23];
  }
}

/* End of code generation (SystemProp.c) */
