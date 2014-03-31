/*
 * AGC.c
 *
 * Code generation for function 'AGC'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "AGC.h"
#include "abs.h"
#include "mean.h"
#include "SystemProp.h"

/* Function Declarations */
static real_T rectifier(const creal_T x[5120]);
static void rectifierOutput(real_T *z, real_T g);

/* Function Definitions */
static real_T rectifier(const creal_T x[5120])
{
  real_T dv6[5120];
  b_abs(x, dv6);
  return mean(dv6);
}

static void rectifierOutput(real_T *z, real_T g)
{
  *z *= g;
}

comm_AGC *AGC_AGC(comm_AGC *obj)
{
  comm_AGC *b_obj;
  comm_AGC *c_obj;
  b_obj = obj;
  c_obj = b_obj;
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  return b_obj;
}

void AGC_stepImpl(testPHYReceiveStackData *SD, comm_AGC *obj, const creal_T x
                  [5120], creal_T y[5120])
{
  real_T g;
  real_T z;
  int32_T i;
  g = obj->Gain;
  memcpy(&SD->u1.f2.dcv4[0], &x[0], 5120U * sizeof(creal_T));
  z = rectifier(SD->u1.f2.dcv4);
  for (i = 0; i < 5120; i++) {
    y[i].re = g * x[i].re;
    y[i].im = g * x[i].im;
  }

  rectifierOutput(&z, g);
  g += 0.1 * (1.0 - z);
  if (g < 1.4901161193847656E-8) {
    g = 1.4901161193847656E-8;
  } else {
    if (g > 1000.0) {
      g = 1000.0;
    }
  }

  f_SystemProp_matlabCodegenSetAn(obj, g);
}

/* End of code generation (AGC.c) */
