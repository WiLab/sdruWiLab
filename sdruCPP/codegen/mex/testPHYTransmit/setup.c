/*
 * setup.c
 *
 * Code generation for function 'setup'
 *
 * C source code generated on: Fri Apr 18 16:24:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "setup.h"
#include <stdio.h>

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

void c_Outputs(const comm_BPSKModulator_8 *obj, const real_T U0_data[563], const
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

/* End of code generation (setup.c) */
