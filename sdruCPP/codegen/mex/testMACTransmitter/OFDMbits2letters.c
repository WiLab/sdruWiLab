/*
 * OFDMbits2letters.c
 *
 * Code generation for function 'OFDMbits2letters'
 *
 * C source code generated on: Thu Mar  6 22:22:41 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "OFDMbits2letters.h"
#include "floor.h"
#include "OFDMDemodulator.h"
#include "eml_error.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo of_emlrtRSI = { 30, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo qab_emlrtRSI = { 10, "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtRSInfo rab_emlrtRSI = { 13, "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtRSInfo sab_emlrtRSI = { 19, "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtRSInfo tab_emlrtRSI = { 41, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo uab_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo vab_emlrtRSI = { 35, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo wab_emlrtRSI = { 23, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtRSInfo xab_emlrtRSI = { 29, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtMCInfo ac_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo bc_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo cc_emlrtMCI = { 24, 5, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtMCInfo dc_emlrtMCI = { 23, 15, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 19, 44, "bits", "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m", 0
};

static emlrtECInfo x_emlrtECI = { -1, 10, 8, "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 10, 8, "bits", "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m", 0
};

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 19, 5, "Letters", "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m", 0
};

static emlrtRSInfo qbb_emlrtRSI = { 24, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtRSInfo bcb_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

/* Function Definitions */
void OFDMbits2letters(const emlrtStack *sp, const boolean_T bits_data[560],
                      const int32_T bits_size[2], real_T Letters_data[80],
                      int32_T Letters_size[1])
{
  real_T a;
  int32_T i32;
  int32_T i33;
  boolean_T p;
  const mxArray *y;
  static const int32_T iv237[2] = { 1, 28 };

  const mxArray *m43;
  char_T cv284[28];
  int32_T i;
  static const char_T cv285[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  int32_T maxdimlen;
  boolean_T y_data[560];
  const mxArray *d_y;
  static const int32_T iv238[2] = { 1, 40 };

  char_T cv286[40];
  static const char_T cv287[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  boolean_T b_bits_data[560];
  char_T s[7];
  int32_T exitg1;
  const mxArray *e_y;
  static const int32_T iv239[2] = { 1, 34 };

  char_T cv288[34];
  static const char_T cv289[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b', 'i',
    'n', '2', 'd', 'e', 'c', ':', 'I', 'l', 'l', 'e', 'g', 'a', 'l', 'B', 'i',
    'n', 'a', 'r', 'y', 'S', 't', 'r', 'i', 'n', 'g' };

  real_T varargin_1;
  real_T p2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &st;
  e_st.tls = st.tls;

  /*  OFDMbits2letters: Convert input bits from a double array to ascii */
  /*  integers, which can be converted to letters by the char() function */
  /*  Make input into column */
  /* Trim extra bits */
  st.site = &qab_emlrtRSI;
  st.site = &qab_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  a = (real_T)(bits_size[0] * bits_size[1]) / 7.0;
  st.site = &qab_emlrtRSI;
  b_floor(&a);
  st.site = &qab_emlrtRSI;
  a *= 7.0;
  if (1.0 > a) {
    i32 = 0;
  } else {
    i32 = bits_size[0] * bits_size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i32, &rb_emlrtBCI, sp);
    i32 = bits_size[0] * bits_size[1];
    i33 = (int32_T)a;
    i32 = emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &rb_emlrtBCI, sp);
  }

  emlrtVectorVectorIndexCheckR2012b(bits_size[0] * bits_size[1], 1, 1, i32,
    &x_emlrtECI, sp);

  /* Shape into letters */
  st.site = &rab_emlrtRSI;
  st.site = &rab_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  a = (real_T)i32 / 7.0;
  st.site = &rab_emlrtRSI;
  b_st.site = &tab_emlrtRSI;
  c_st.site = &uab_emlrtRSI;
  if (a != muDoubleScalarFloor(a)) {
    p = FALSE;
  } else {
    p = TRUE;
  }

  if (p) {
    c_st.site = &uab_emlrtRSI;
    p = TRUE;
  } else {
    p = FALSE;
  }

  if (p) {
  } else {
    y = NULL;
    m43 = mxCreateCharArray(2, iv237);
    for (i = 0; i < 28; i++) {
      cv284[i] = cv285[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 28, m43, cv284);
    emlrtAssign(&y, m43);
    b_y = NULL;
    m43 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m43) = MIN_int32_T;
    emlrtAssign(&b_y, m43);
    c_y = NULL;
    m43 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m43) = MAX_int32_T;
    emlrtAssign(&c_y, m43);
    c_st.site = &uab_emlrtRSI;
    d_st.site = &bcb_emlrtRSI;
    c_error(&c_st, c_message(&d_st, y, b_y, c_y, &ac_emlrtMCI), &bc_emlrtMCI);
  }

  c_st.site = &ny_emlrtRSI;
  c_st.site = &ny_emlrtRSI;
  b_st.site = &ky_emlrtRSI;
  c_st.site = &af_emlrtRSI;
  maxdimlen = i32;
  if (1 > i32) {
    maxdimlen = 1;
  }

  b_st.site = &ky_emlrtRSI;
  c_st.site = &af_emlrtRSI;
  if (i32 < maxdimlen) {
  } else {
    maxdimlen = i32;
  }

  if (7 > maxdimlen) {
    b_st.site = &jy_emlrtRSI;
    c_eml_error(&b_st);
  }

  if ((int8_T)(int32_T)a > maxdimlen) {
    b_st.site = &jy_emlrtRSI;
    c_eml_error(&b_st);
  }

  b_st.site = &iy_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  if (i32 == 7 * (int32_T)a) {
  } else {
    d_y = NULL;
    m43 = mxCreateCharArray(2, iv238);
    for (i = 0; i < 40; i++) {
      cv286[i] = cv287[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m43, cv286);
    emlrtAssign(&d_y, m43);
    b_st.site = &iy_emlrtRSI;
    e_st.site = &rbb_emlrtRSI;
    c_error(&b_st, b_message(&e_st, d_y, &tb_emlrtMCI), &ub_emlrtMCI);
  }

  b_st.site = &hy_emlrtRSI;
  c_st.site = &dg_emlrtRSI;
  for (maxdimlen = 0; maxdimlen + 1 <= i32; maxdimlen++) {
    y_data[maxdimlen] = bits_data[maxdimlen];
  }

  for (i32 = 0; i32 < 7; i32++) {
    maxdimlen = (int32_T)a;
    for (i33 = 0; i33 < maxdimlen; i33++) {
      b_bits_data[i33 + (int32_T)a * i32] = y_data[i32 + 7 * i33];
    }
  }

  /* Convert bits to letters */
  Letters_size[0] = (int32_T)a;
  maxdimlen = (int32_T)a;
  for (i32 = 0; i32 < maxdimlen; i32++) {
    Letters_data[i32] = 0.0;
  }

  i = 0;
  while (i <= (int32_T)a - 1) {
    st.site = &sab_emlrtRSI;
    i32 = (int32_T)a;
    i33 = 1 + i;
    emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &qb_emlrtBCI, &st);
    b_st.site = &of_emlrtRSI;
    b_st.site = &vab_emlrtRSI;
    for (maxdimlen = 0; maxdimlen < 7; maxdimlen++) {
      s[maxdimlen] = '0';
      if (b_bits_data[i + (int32_T)a * maxdimlen]) {
        s[maxdimlen] = '1';
      }
    }

    st.site = &sab_emlrtRSI;
    b_st.site = &wab_emlrtRSI;
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
      e_y = NULL;
      m43 = mxCreateCharArray(2, iv239);
      for (maxdimlen = 0; maxdimlen < 34; maxdimlen++) {
        cv288[maxdimlen] = cv289[maxdimlen];
      }

      emlrtInitCharArrayR2013a(&st, 34, m43, cv288);
      emlrtAssign(&e_y, m43);
      b_st.site = &wab_emlrtRSI;
      e_st.site = &qbb_emlrtRSI;
      c_error(&b_st, b_message(&e_st, e_y, &cc_emlrtMCI), &dc_emlrtMCI);
    }

    b_st.site = &xab_emlrtRSI;
    varargin_1 = 0.0;
    p2 = 1.0;
    for (maxdimlen = 0; maxdimlen < 7; maxdimlen++) {
      if (s[6 - maxdimlen] == '1') {
        varargin_1 += p2;
      }

      p2 += p2;
    }

    st.site = &sab_emlrtRSI;
    i32 = (int32_T)varargin_1;
    emlrtDynamicBoundsCheckFastR2012b(i32, 0, 255, &emlrtBCI, &st);
    i32 = (int32_T)a;
    i33 = 1 + i;
    Letters_data[emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &sb_emlrtBCI, sp)
      - 1] = (int8_T)varargin_1;
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (OFDMbits2letters.c) */
