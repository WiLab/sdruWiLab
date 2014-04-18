/*
 * OFDMletters2bits.c
 *
 * Code generation for function 'OFDMletters2bits'
 *
 * C source code generated on: Thu Apr 17 22:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "OFDMletters2bits.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Function Definitions */
void OFDMletters2bits(const char_T str[80], real_T f[560])
{
  int32_T bits_size_idx_1;
  char_T bits_data[1280];
  int32_T i1;
  int32_T firstcol;
  int32_T j;
  boolean_T exitg1;
  boolean_T p;
  int32_T i;
  boolean_T exitg2;
  char_T b_bits_data[1280];
  const mxArray *y;
  const mxArray *m3;

  /*  Encode a string of ASCII text into bits(1,0) */
  emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  bits_size_idx_1 = 16;
  for (i1 = 0; i1 < 1280; i1++) {
    bits_data[i1] = '0';
  }

  for (firstcol = 0; firstcol < 80; firstcol++) {
    for (j = 0; j < 16; j++) {
      emlrtPushRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
      if (((uint8_T)str[firstcol] & 1 << j) != 0) {
        bits_data[firstcol + 80 * (15 - j)] = '1';
      }
    }
  }

  emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
  firstcol = 16;
  emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  j = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (j <= 15)) {
    p = FALSE;
    i = 0;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (i <= 79)) {
      if (bits_data[i + 80 * (j - 1)] != '0') {
        p = TRUE;
        exitg2 = TRUE;
      } else {
        i++;
      }
    }

    if (p) {
      firstcol = j;
      exitg1 = TRUE;
    } else {
      j++;
    }
  }

  if (firstcol > 1) {
    emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    for (j = firstcol; j < 17; j++) {
      emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 80; i++) {
        bits_data[i + 80 * (j - firstcol)] = bits_data[i + 80 * (j - 1)];
      }
    }

    j = 17 - firstcol;
    for (i1 = 0; i1 < j; i1++) {
      memcpy(&b_bits_data[80 * i1], &bits_data[80 * i1], 80U * sizeof(char_T));
    }

    bits_size_idx_1 = 17 - firstcol;
    j = 17 - firstcol;
    for (i1 = 0; i1 < j; i1++) {
      memcpy(&bits_data[80 * i1], &b_bits_data[80 * i1], 80U * sizeof(char_T));
    }
  }

  emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  for (firstcol = 0; firstcol < 80; firstcol++) {
    for (i = 0; i < 7; i++) {
      emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      i1 = 1 + i;
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, bits_size_idx_1, &c_emlrtBCI,
        emlrtRootTLSGlobal);
      y = NULL;
      m3 = emlrtCreateString1(bits_data[firstcol + 80 * i]);
      emlrtAssign(&y, m3);
      f[firstcol + 80 * i] = c_emlrt_marshallIn(str2double(y, &c_emlrtMCI),
        "str2double");
      emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }
}

/* End of code generation (OFDMletters2bits.c) */
