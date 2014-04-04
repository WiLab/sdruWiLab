/*
 * SystemProp.c
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "SystemProp.h"
#include "testMACReceiver_emxutil.h"

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
  int32_T i25;
  int32_T loop_ub;
  i25 = obj->pDataLinearIndices->size[0];
  obj->pDataLinearIndices->size[0] = value_size[0];
  emxEnsureCapacity((emxArray__common *)obj->pDataLinearIndices, i25, (int32_T)
                    sizeof(real_T), &n_emlrtRTEI);
  loop_ub = value_size[0];
  for (i25 = 0; i25 < loop_ub; i25++) {
    obj->pDataLinearIndices->data[i25] = value_data[i25];
  }
}

/* End of code generation (SystemProp.c) */
