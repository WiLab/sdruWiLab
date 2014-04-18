/*
 * OFDMletters2bits.c
 *
 * Code generation for function 'OFDMletters2bits'
 *
 * C source code generated on: Fri Apr 18 16:24:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "OFDMletters2bits.h"
#include "testPHYTransmit_mexutil.h"
#include "testPHYTransmit_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo qb_emlrtRSI = { 11, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m"
};

static emlrtRSInfo rb_emlrtRSI = { 7, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m"
};

static emlrtRSInfo tb_emlrtRSI = { 33, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo ub_emlrtRSI = { 141, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo vb_emlrtRSI = { 146, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo xb_emlrtRSI = { 101, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo yb_emlrtRSI = { 100, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo ac_emlrtRSI = { 93, "dec2bin",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtMCInfo c_emlrtMCI = { 11, 16, "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m"
};

static emlrtBCInfo c_emlrtBCI = { -1, -1, 11, 27, "letter", "OFDMletters2bits",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m",
  0 };

/* Function Declarations */
static real_T c_emlrt_marshallIn(const mxArray *b_str2double, const char_T
  *identifier);
static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static const mxArray *str2double(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static real_T c_emlrt_marshallIn(const mxArray *b_str2double, const char_T
  *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(emlrtAlias(b_str2double), &thisId);
  emlrtDestroyArray(&b_str2double);
  return y;
}

static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *str2double(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m28;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m28, 1, &pArray,
    "str2double", TRUE, location);
}

void OFDMletters2bits(const char_T str[80], real_T f[560])
{
  int32_T bits_size_idx_1;
  char_T bits_data[1280];
  int32_T i3;
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
  emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  bits_size_idx_1 = 16;
  for (i3 = 0; i3 < 1280; i3++) {
    bits_data[i3] = '0';
  }

  for (firstcol = 0; firstcol < 80; firstcol++) {
    for (j = 0; j < 16; j++) {
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      if (((uint8_T)str[firstcol] & 1 << j) != 0) {
        bits_data[firstcol + 80 * (15 - j)] = '1';
      }
    }
  }

  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  firstcol = 16;
  emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    for (j = firstcol; j < 17; j++) {
      emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 80; i++) {
        bits_data[i + 80 * (j - firstcol)] = bits_data[i + 80 * (j - 1)];
      }
    }

    j = 17 - firstcol;
    for (i3 = 0; i3 < j; i3++) {
      memcpy(&b_bits_data[80 * i3], &bits_data[80 * i3], 80U * sizeof(char_T));
    }

    bits_size_idx_1 = 17 - firstcol;
    j = 17 - firstcol;
    for (i3 = 0; i3 < j; i3++) {
      memcpy(&bits_data[80 * i3], &b_bits_data[80 * i3], 80U * sizeof(char_T));
    }
  }

  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  for (firstcol = 0; firstcol < 80; firstcol++) {
    for (i = 0; i < 7; i++) {
      emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      i3 = 1 + i;
      emlrtDynamicBoundsCheckFastR2012b(i3, 1, bits_size_idx_1, &c_emlrtBCI,
        emlrtRootTLSGlobal);
      y = NULL;
      m3 = emlrtCreateString1(bits_data[firstcol + 80 * i]);
      emlrtAssign(&y, m3);
      f[firstcol + 80 * i] = c_emlrt_marshallIn(str2double(y, &c_emlrtMCI),
        "str2double");
      emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }
}

void b_OFDMletters2bits(real_T f[560])
{
  int32_T bits_size_idx_1;
  char_T bits_data[1280];
  int32_T i15;
  int32_T firstcol;
  static const char_T cv63[80] = { 'L', 'i', 'v', 'e', ' ', 'l', 'o', 'n', 'g',
    ' ', 'a', 'n', 'd', ' ', 'p', 'r', 'o', 's', 'p', 'e', 'r', ',', ' ', 'f',
    'r', 'o', 'm', ' ', 't', 'h', 'e', ' ', 'C', 'o', 'm', 'm', 'u', 'n', 'i',
    'c', 'a', 't', 'i', 'o', 'n', 's', ' ', 'S', 'y', 's', 't', 'e', 'm', ' ',
    'T', 'o', 'o', 'l', 'b', 'o', 'x', ' ', 'T', 'e', 'a', 'm', ' ', 'a', 't',
    ' ', 'M', 'a', 't', 'h', 'W', 'o', 'r', 'k', 's', '!' };

  uint16_T dk;
  int32_T j;
  boolean_T exitg1;
  boolean_T p;
  int32_T i;
  boolean_T exitg2;
  char_T b_bits_data[1280];
  const mxArray *y;
  const mxArray *m12;

  /*  Encode a string of ASCII text into bits(1,0) */
  emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  bits_size_idx_1 = 16;
  for (i15 = 0; i15 < 1280; i15++) {
    bits_data[i15] = '0';
  }

  for (firstcol = 0; firstcol < 80; firstcol++) {
    dk = (uint16_T)cv63[firstcol];
    for (j = 0; j < 16; j++) {
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      if ((dk & 1 << j) != 0) {
        bits_data[firstcol + 80 * (15 - j)] = '1';
      }
    }
  }

  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  firstcol = 16;
  emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    for (j = firstcol; j < 17; j++) {
      emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 0; i < 80; i++) {
        bits_data[i + 80 * (j - firstcol)] = bits_data[i + 80 * (j - 1)];
      }
    }

    j = 17 - firstcol;
    for (i15 = 0; i15 < j; i15++) {
      memcpy(&b_bits_data[80 * i15], &bits_data[80 * i15], 80U * sizeof(char_T));
    }

    bits_size_idx_1 = 17 - firstcol;
    j = 17 - firstcol;
    for (i15 = 0; i15 < j; i15++) {
      memcpy(&bits_data[80 * i15], &b_bits_data[80 * i15], 80U * sizeof(char_T));
    }
  }

  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  for (firstcol = 0; firstcol < 80; firstcol++) {
    for (i = 0; i < 7; i++) {
      emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      i15 = 1 + i;
      emlrtDynamicBoundsCheckFastR2012b(i15, 1, bits_size_idx_1, &c_emlrtBCI,
        emlrtRootTLSGlobal);
      y = NULL;
      m12 = emlrtCreateString1(bits_data[firstcol + 80 * i]);
      emlrtAssign(&y, m12);
      f[firstcol + 80 * i] = c_emlrt_marshallIn(str2double(y, &c_emlrtMCI),
        "str2double");
      emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }
}

/* End of code generation (OFDMletters2bits.c) */
