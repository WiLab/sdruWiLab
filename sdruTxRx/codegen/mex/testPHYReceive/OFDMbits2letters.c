/*
 * OFDMbits2letters.c
 *
 * Code generation for function 'OFDMbits2letters'
 *
 * C source code generated on: Thu Apr  3 19:36:38 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "OFDMbits2letters.h"
#include "receiveData.h"
#include "equalizeOFDM.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo gj_emlrtRSI = { 13, "OFDMbits2letters",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m"
};

static emlrtRSInfo hj_emlrtRSI = { 19, "OFDMbits2letters",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m"
};

static emlrtRSInfo ij_emlrtRSI = { 41, "reshape",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo jj_emlrtRSI = { 48, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo kj_emlrtRSI = { 23, "bin2dec",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtMCInfo sb_emlrtMCI = { 49, 13, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo tb_emlrtMCI = { 48, 23, "eml_assert_valid_size_arg",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo ub_emlrtMCI = { 24, 5, "bin2dec",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtMCInfo vb_emlrtMCI = { 23, 15, "bin2dec",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 19, 44, "bits", "OFDMbits2letters",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m",
  0 };

static emlrtECInfo m_emlrtECI = { -1, 10, 8, "OFDMbits2letters",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m"
};

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 10, 8, "bits", "OFDMbits2letters",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 19, 5, "Letters", "OFDMbits2letters",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m",
  0 };

/* Function Definitions */
void OFDMbits2letters(const boolean_T bits_data[560], const int32_T bits_size[2],
                      real_T Letters_data[80], int32_T Letters_size[1])
{
  int32_T i27;
  int32_T i28;
  real_T y;
  boolean_T b_y;
  const mxArray *c_y;
  static const int32_T iv123[2] = { 1, 28 };

  const mxArray *m28;
  char_T cv139[28];
  int32_T i;
  static const char_T cv140[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  int32_T maxdimlen;
  boolean_T y_data[560];
  const mxArray *d_y;
  static const int32_T iv124[2] = { 1, 40 };

  char_T cv141[40];
  static const char_T cv142[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  boolean_T b_bits_data[560];
  char_T s[7];
  int32_T exitg1;
  boolean_T p;
  const mxArray *e_y;
  static const int32_T iv125[2] = { 1, 34 };

  char_T cv143[34];
  static const char_T cv144[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b', 'i',
    'n', '2', 'd', 'e', 'c', ':', 'I', 'l', 'l', 'e', 'g', 'a', 'l', 'B', 'i',
    'n', 'a', 'r', 'y', 'S', 't', 'r', 'i', 'n', 'g' };

  real_T x;
  real_T p2;
  char_T f_y;

  /*  OFDMbits2letters: Convert input bits from a double array to ascii */
  /*  integers, which can be converted to letters by the char() function */
  /*  Make input into column */
  /* Trim extra bits */
  i27 = (int32_T)muDoubleScalarFloor((real_T)(bits_size[0] * bits_size[1]) / 7.0)
    * 7;
  if (1 > i27) {
    i27 = 0;
  } else {
    i28 = bits_size[0] * bits_size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i28, &bb_emlrtBCI,
      emlrtRootTLSGlobal);
    i28 = bits_size[0] * bits_size[1];
    i27 = emlrtDynamicBoundsCheckFastR2012b(i27, 1, i28, &bb_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtVectorVectorIndexCheckR2012b(bits_size[0] * bits_size[1], 1, 1, i27,
    &m_emlrtECI, emlrtRootTLSGlobal);

  /* Shape into letters */
  emlrtPushRtStackR2012b(&gj_emlrtRSI, emlrtRootTLSGlobal);
  y = (real_T)i27 / 7.0;
  emlrtPushRtStackR2012b(&ij_emlrtRSI, emlrtRootTLSGlobal);
  if (y != muDoubleScalarFloor(y)) {
    b_y = FALSE;
  } else {
    b_y = TRUE;
  }

  if (b_y) {
  } else {
    emlrtPushRtStackR2012b(&jj_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m28 = mxCreateCharArray(2, iv123);
    for (i = 0; i < 28; i++) {
      cv139[i] = cv140[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 28, m28, cv139);
    emlrtAssign(&c_y, m28);
    b_error(b_message(c_y, &sb_emlrtMCI), &tb_emlrtMCI);
    emlrtPopRtStackR2012b(&jj_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ij_emlrtRSI, emlrtRootTLSGlobal);
  maxdimlen = i27;
  if (1 > i27) {
    maxdimlen = 1;
  }

  if (i27 < maxdimlen) {
  } else {
    maxdimlen = i27;
  }

  if (7 > maxdimlen) {
    emlrtPushRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
  }

  if ((int8_T)(int32_T)y > maxdimlen) {
    emlrtPushRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
    c_eml_error();
    emlrtPopRtStackR2012b(&qi_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (i27 == 7 * (int32_T)y) {
  } else {
    emlrtPushRtStackR2012b(&pi_emlrtRSI, emlrtRootTLSGlobal);
    d_y = NULL;
    m28 = mxCreateCharArray(2, iv124);
    for (i = 0; i < 40; i++) {
      cv141[i] = cv142[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 40, m28, cv141);
    emlrtAssign(&d_y, m28);
    b_error(b_message(d_y, &mb_emlrtMCI), &nb_emlrtMCI);
    emlrtPopRtStackR2012b(&pi_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&oi_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oi_emlrtRSI, emlrtRootTLSGlobal);
  for (maxdimlen = 0; maxdimlen + 1 <= i27; maxdimlen++) {
    y_data[maxdimlen] = bits_data[maxdimlen];
  }

  for (i27 = 0; i27 < 7; i27++) {
    maxdimlen = (int32_T)y;
    for (i28 = 0; i28 < maxdimlen; i28++) {
      b_bits_data[i28 + (int32_T)y * i27] = y_data[i27 + 7 * i28];
    }
  }

  emlrtPopRtStackR2012b(&gj_emlrtRSI, emlrtRootTLSGlobal);

  /* Convert bits to letters */
  Letters_size[0] = (int32_T)y;
  maxdimlen = (int32_T)y;
  for (i27 = 0; i27 < maxdimlen; i27++) {
    Letters_data[i27] = 0.0;
  }

  i = 0;
  while (i <= (int32_T)y - 1) {
    emlrtPushRtStackR2012b(&hj_emlrtRSI, emlrtRootTLSGlobal);
    i27 = (int32_T)y;
    i28 = 1 + i;
    emlrtDynamicBoundsCheckFastR2012b(i28, 1, i27, &ab_emlrtBCI,
      emlrtRootTLSGlobal);
    for (maxdimlen = 0; maxdimlen < 7; maxdimlen++) {
      s[maxdimlen] = '0';
      if (b_bits_data[i + (int32_T)y * maxdimlen]) {
        s[maxdimlen] = '1';
      }
    }

    maxdimlen = 0;
    do {
      exitg1 = 0;
      if (maxdimlen < 7) {
        if ((s[maxdimlen] != '0') && (s[maxdimlen] != '1')) {
          p = FALSE;
          exitg1 = 1;
        } else {
          maxdimlen++;
        }
      } else {
        p = TRUE;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (p) {
    } else {
      emlrtPushRtStackR2012b(&kj_emlrtRSI, emlrtRootTLSGlobal);
      e_y = NULL;
      m28 = mxCreateCharArray(2, iv125);
      for (maxdimlen = 0; maxdimlen < 34; maxdimlen++) {
        cv143[maxdimlen] = cv144[maxdimlen];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m28, cv143);
      emlrtAssign(&e_y, m28);
      b_error(b_message(e_y, &ub_emlrtMCI), &vb_emlrtMCI);
      emlrtPopRtStackR2012b(&kj_emlrtRSI, emlrtRootTLSGlobal);
    }

    x = 0.0;
    p2 = 1.0;
    for (maxdimlen = 0; maxdimlen < 7; maxdimlen++) {
      if (s[6 - maxdimlen] == '1') {
        x += p2;
      }

      p2 += p2;
    }

    i27 = (int32_T)x;
    f_y = (int8_T)emlrtDynamicBoundsCheckFastR2012b(i27, 0, 255, &emlrtBCI,
      emlrtRootTLSGlobal);
    i27 = (int32_T)y;
    i28 = 1 + i;
    Letters_data[emlrtDynamicBoundsCheckFastR2012b(i28, 1, i27, &cb_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = f_y;
    emlrtPopRtStackR2012b(&hj_emlrtRSI, emlrtRootTLSGlobal);
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }
}

/* End of code generation (OFDMbits2letters.c) */
