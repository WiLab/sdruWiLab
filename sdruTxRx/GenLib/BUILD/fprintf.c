/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "fprintf.h"
#include "fileManager.h"
#include <stdio.h>

/* Function Declarations */
static real_T c_fprintf(int16_T varargin_1);

/* Function Definitions */
static real_T c_fprintf(int16_T varargin_1)
{
  int32_T nbytesint;
  FILE * b_NULL;
  boolean_T autoflush;
  FILE * filestar;
  char_T cfmt[4];
  static const char_T b_cfmt[4] = { '%', 'd', '\x0a', '\x00' };

  nbytesint = 0;
  b_NULL = NULL;
  fileManager(&filestar, &autoflush);
  if (filestar == b_NULL) {
  } else {
    for (nbytesint = 0; nbytesint < 4; nbytesint++) {
      cfmt[nbytesint] = b_cfmt[nbytesint];
    }

    nbytesint = fprintf(filestar, cfmt, varargin_1);
    fflush(filestar);
  }

  return nbytesint;
}

void b_fprintf(int16_T formatSpec)
{
  c_fprintf(formatSpec);
}

/* End of code generation (fprintf.c) */
