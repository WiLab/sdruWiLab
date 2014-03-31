/*
 * AGC.c
 *
 * Code generation for function 'AGC'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "AGC.h"

/* Function Definitions */
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

/* End of code generation (AGC.c) */
