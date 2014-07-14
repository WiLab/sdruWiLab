/*
 * setup.c
 *
 * Code generation for function 'setup'
 *
 * C source code generated on: Thu Jul  3 10:46:49 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "setup.h"
#include <stdio.h>

/* Function Definitions */
void Destructor(dsp_FIRRateConverter_3 *obj)
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
