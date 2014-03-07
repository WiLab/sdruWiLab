/*
 * OFDMletters2bits.c
 *
 * Code generation for function 'OFDMletters2bits'
 *
 * C source code generated on: Thu Mar  6 19:04:23 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "OFDMletters2bits.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo nf_emlrtRSI = { 7, "OFDMletters2bits",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m" };

static emlrtMCInfo b_emlrtMCI = { 11, 16, "OFDMletters2bits",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m" };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 11, 27, "letter", "OFDMletters2bits",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m", 0
};

static emlrtRSInfo jw_emlrtRSI = { 11, "OFDMletters2bits",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m" };

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_str2double,
  const char_T *identifier);
static const mxArray *str2double(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_str2double,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_str2double), &thisId);
  emlrtDestroyArray(&b_str2double);
  return y;
}

static const mxArray *str2double(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m51;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m51, 1, &pArray, "str2double", TRUE,
    location);
}

void OFDMletters2bits(const emlrtStack *sp, const char_T str[80], real_T f[560])
{
  int32_T bits_size_idx_1;
  char_T bits_data[1280];
  int32_T i0;
  int32_T firstcol;
  int32_T j;
  boolean_T exitg1;
  boolean_T p;
  int32_T i;
  boolean_T exitg2;
  char_T b_bits_data[1280];
  const mxArray *y;
  const mxArray *m4;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Encode a string of ASCII text into bits(1,0) */
  st.site = &nf_emlrtRSI;
  bits_size_idx_1 = 16;
  for (i0 = 0; i0 < 1280; i0++) {
    bits_data[i0] = '0';
  }

  for (firstcol = 0; firstcol < 80; firstcol++) {
    for (j = 0; j < 16; j++) {
      if (((uint8_T)str[firstcol] & 1 << j) != 0) {
        bits_data[firstcol + 80 * (15 - j)] = '1';
      }
    }
  }

  firstcol = 16;
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
    for (j = firstcol; j < 17; j++) {
      for (i = 0; i < 80; i++) {
        bits_data[i + 80 * (j - firstcol)] = bits_data[i + 80 * (j - 1)];
      }
    }

    j = 17 - firstcol;
    for (i0 = 0; i0 < j; i0++) {
      memcpy(&b_bits_data[80 * i0], &bits_data[80 * i0], 80U * sizeof(char_T));
    }

    bits_size_idx_1 = 17 - firstcol;
    j = 17 - firstcol;
    for (i0 = 0; i0 < j; i0++) {
      memcpy(&bits_data[80 * i0], &b_bits_data[80 * i0], 80U * sizeof(char_T));
    }
  }

  for (firstcol = 0; firstcol < 80; firstcol++) {
    for (i = 0; i < 7; i++) {
      i0 = 1 + i;
      emlrtDynamicBoundsCheckFastR2012b(i0, 1, bits_size_idx_1, &c_emlrtBCI, sp);
      y = NULL;
      m4 = emlrtCreateString1(bits_data[firstcol + 80 * i]);
      emlrtAssign(&y, m4);
      st.site = &jw_emlrtRSI;
      f[firstcol + 80 * i] = emlrt_marshallIn(&st, str2double(&st, y,
        &b_emlrtMCI), "str2double");
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

void b_OFDMletters2bits(const emlrtStack *sp, real_T f[560])
{
  int32_T bits_size_idx_1;
  char_T bits_data[1280];
  int32_T i13;
  int32_T firstcol;
  static const char_T cv86[80] = { 'L', 'i', 'v', 'e', ' ', 'l', 'o', 'n', 'g',
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
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Encode a string of ASCII text into bits(1,0) */
  st.site = &nf_emlrtRSI;
  bits_size_idx_1 = 16;
  for (i13 = 0; i13 < 1280; i13++) {
    bits_data[i13] = '0';
  }

  for (firstcol = 0; firstcol < 80; firstcol++) {
    dk = (uint16_T)cv86[firstcol];
    for (j = 0; j < 16; j++) {
      if ((dk & 1 << j) != 0) {
        bits_data[firstcol + 80 * (15 - j)] = '1';
      }
    }
  }

  firstcol = 16;
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
    for (j = firstcol; j < 17; j++) {
      for (i = 0; i < 80; i++) {
        bits_data[i + 80 * (j - firstcol)] = bits_data[i + 80 * (j - 1)];
      }
    }

    j = 17 - firstcol;
    for (i13 = 0; i13 < j; i13++) {
      memcpy(&b_bits_data[80 * i13], &bits_data[80 * i13], 80U * sizeof(char_T));
    }

    bits_size_idx_1 = 17 - firstcol;
    j = 17 - firstcol;
    for (i13 = 0; i13 < j; i13++) {
      memcpy(&bits_data[80 * i13], &b_bits_data[80 * i13], 80U * sizeof(char_T));
    }
  }

  for (firstcol = 0; firstcol < 80; firstcol++) {
    for (i = 0; i < 7; i++) {
      i13 = 1 + i;
      emlrtDynamicBoundsCheckFastR2012b(i13, 1, bits_size_idx_1, &c_emlrtBCI, sp);
      y = NULL;
      m12 = emlrtCreateString1(bits_data[firstcol + 80 * i]);
      emlrtAssign(&y, m12);
      st.site = &jw_emlrtRSI;
      f[firstcol + 80 * i] = emlrt_marshallIn(&st, str2double(&st, y,
        &b_emlrtMCI), "str2double");
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (OFDMletters2bits.c) */
