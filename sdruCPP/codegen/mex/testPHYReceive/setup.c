/*
 * setup.c
 *
 * Code generation for function 'setup'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "setup.h"

/* Function Definitions */
void Outputs(const comm_BPSKModulator_1 *obj, const real_T U0_data[563], const
             int32_T U0_size[2], creal_T Y0_data[563], int32_T Y0_size[2])
{
  int32_T inIdx;
  int32_T outIdx;
  int32_T i;
  real_T u;
  int32_T symbolIndex;

  /* System object Outputs function: comm.BPSKModulator */
  Y0_size[0] = U0_size[0];
  Y0_size[1] = U0_size[1];
  inIdx = 0;
  outIdx = 0;
  for (i = 0; i < U0_size[0]; i++) {
    u = U0_data[inIdx];
    inIdx++;
    symbolIndex = (int32_T)muDoubleScalarFloor(u);
    Y0_data[outIdx].re = obj->P0_modmap[symbolIndex << 1];
    Y0_data[outIdx].im = obj->P0_modmap[(symbolIndex << 1) + 1];
    outIdx++;
  }
}

void b_Outputs(const comm_BPSKModulator_4 *obj, const real_T U0_data[563], const
               int32_T U0_size[2], creal_T Y0_data[563], int32_T Y0_size[2])
{
  int32_T inIdx;
  int32_T outIdx;
  int32_T i;
  real_T u;
  int32_T symbolIndex;

  /* System object Outputs function: comm.BPSKModulator */
  Y0_size[0] = U0_size[0];
  Y0_size[1] = U0_size[1];
  inIdx = 0;
  outIdx = 0;
  for (i = 0; i < U0_size[0]; i++) {
    u = U0_data[inIdx];
    inIdx++;
    symbolIndex = (int32_T)muDoubleScalarFloor(u);
    Y0_data[outIdx].re = obj->P0_modmap[symbolIndex << 1];
    Y0_data[outIdx].im = obj->P0_modmap[(symbolIndex << 1) + 1];
    outIdx++;
  }
}

void c_Destructor(dsp_FIRRateConverter_7 *obj)
{
  /* System object Destructor function: dsp.FIRRateConverter */
  if (obj->S0_isInitialized) {
    obj->S0_isInitialized = FALSE;
    if (!obj->S1_isReleased) {
      obj->S1_isReleased = TRUE;
    }
  }
}

/* End of code generation (setup.c) */
