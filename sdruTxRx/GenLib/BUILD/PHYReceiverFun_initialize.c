/*
 * PHYReceiverFun_initialize.c
 *
 * Code generation for function 'PHYReceiverFun_initialize'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "PHYReceiverFun_initialize.h"
#include "PHYReceiverFun_data.h"
#include <stdio.h>

/* Variable Definitions */
static boolean_T eml_openfiles_not_empty;
static boolean_T eml_autoflush_not_empty;

/* Function Definitions */
void PHYReceiverFun_initialize(void)
{
  uint32_T r;
  int32_T mti;
  rt_InitInfAndNaN(8U);
  eml_autoflush_not_empty = FALSE;
  eml_openfiles_not_empty = FALSE;
  memset(&state[0], 0, 625U * sizeof(uint32_T));
  r = 5489U;
  state[0] = 5489U;
  for (mti = 0; mti < 623; mti++) {
    r = (r ^ r >> 30U) * 1812433253U + (1 + mti);
    state[1 + mti] = r;
  }

  state[624] = 624U;
}

/* End of code generation (PHYReceiverFun_initialize.c) */
