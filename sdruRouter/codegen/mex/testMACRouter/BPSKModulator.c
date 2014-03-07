/*
 * BPSKModulator.c
 *
 * Code generation for function 'BPSKModulator'
 *
 * C source code generated on: Thu Mar  6 21:20:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "BPSKModulator.h"
#include <stdio.h>

/* Function Definitions */
commcodegen_BPSKModulator_1 *BPSKModulator_BPSKModulator
  (commcodegen_BPSKModulator_1 *obj)
{
  commcodegen_BPSKModulator_1 *b_obj;
  commcodegen_BPSKModulator_1 *c_obj;
  comm_BPSKModulator_4 *d_obj;
  int32_T i;
  static const real_T dv5[4] = { 1.0, 0.0, -1.0, 1.2246467991473532E-16 };

  b_obj = obj;
  c_obj = b_obj;
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  c_obj->inputDirectFeedthrough1 = FALSE;
  d_obj = &b_obj->cSFunObject;

  /* System object Constructor function: comm.BPSKModulator */
  d_obj->S0_isInitialized = FALSE;
  d_obj->S1_isReleased = FALSE;
  for (i = 0; i < 4; i++) {
    d_obj->P0_modmap[i] = dv5[i];
  }

  return b_obj;
}

/* End of code generation (BPSKModulator.c) */
