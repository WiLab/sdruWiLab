/*
 * find.c
 *
 * Code generation for function 'find'
 *
 * C source code generated on: Thu Mar  6 22:22:39 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "find.h"
#include <stdio.h>

/* Function Definitions */
void b_eml_find(const boolean_T x_data[1224], int32_T i_data[1224], int32_T
                i_size[1])
{
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int16_T b_i_data[1224];
  idx = 0;
  ii = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (ii <= 1224)) {
    guard1 = FALSE;
    if (x_data[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      if (idx >= 1224) {
        exitg1 = TRUE;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  for (ii = 0; ii < idx; ii++) {
    b_i_data[ii] = (int16_T)i_data[ii];
  }

  i_size[0] = idx;
  for (ii = 0; ii < idx; ii++) {
    i_data[ii] = b_i_data[ii];
  }
}

void eml_find(const boolean_T x[768], int32_T i_data[768], int32_T i_size[1])
{
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int16_T b_i_data[768];
  idx = 0;
  ii = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (ii < 769)) {
    guard1 = FALSE;
    if (x[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      if (idx >= 768) {
        exitg1 = TRUE;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  for (ii = 0; ii < idx; ii++) {
    b_i_data[ii] = (int16_T)i_data[ii];
  }

  i_size[0] = idx;
  for (ii = 0; ii < idx; ii++) {
    i_data[ii] = b_i_data[ii];
  }
}

/* End of code generation (find.c) */
