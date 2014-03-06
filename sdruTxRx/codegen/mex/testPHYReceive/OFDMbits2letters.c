/*
 * OFDMbits2letters.c
 *
 * Code generation for function 'OFDMbits2letters'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "OFDMbits2letters.h"
#include "floor.h"
#include "PHYReceive.h"
#include "OFDMDemodulator.h"
#include "eml_error.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"

/* Variable Definitions */
static emlrtRSInfo gf_emlrtRSI = { 30, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo it_emlrtRSI = { 10, "OFDMbits2letters",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtRSInfo jt_emlrtRSI = { 13, "OFDMbits2letters",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtRSInfo kt_emlrtRSI = { 19, "OFDMbits2letters",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtRSInfo lt_emlrtRSI = { 41, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo mt_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo nt_emlrtRSI = { 35, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo ot_emlrtRSI = { 23, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtRSInfo pt_emlrtRSI = { 29, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtMCInfo rb_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo sb_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo tb_emlrtMCI = { 24, 5, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtMCInfo ub_emlrtMCI = { 23, 15, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 19, 44, "bits", "OFDMbits2letters",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m", 0 };

static emlrtECInfo m_emlrtECI = { -1, 10, 8, "OFDMbits2letters",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 10, 8, "bits", "OFDMbits2letters",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m", 0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 19, 5, "Letters", "OFDMbits2letters",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m", 0 };

static emlrtRSInfo gu_emlrtRSI = { 24, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtRSInfo ku_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

/* Function Definitions */
void OFDMbits2letters(const emlrtStack *sp, const boolean_T bits_data[560],
                      const int32_T bits_size[2], real_T Letters_data[80],
                      int32_T Letters_size[1])
{
  real_T a;
  int32_T i26;
  int32_T i27;
  boolean_T p;
  const mxArray *y;
  static const int32_T iv123[2] = { 1, 28 };

  const mxArray *m26;
  char_T cv146[28];
  int32_T i;
  static const char_T cv147[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  int32_T maxdimlen;
  boolean_T y_data[560];
  const mxArray *d_y;
  static const int32_T iv124[2] = { 1, 40 };

  char_T cv148[40];
  static const char_T cv149[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  boolean_T b_bits_data[560];
  char_T s[7];
  int32_T exitg1;
  const mxArray *e_y;
  static const int32_T iv125[2] = { 1, 34 };

  char_T cv150[34];
  static const char_T cv151[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b', 'i',
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
  st.site = &it_emlrtRSI;
  st.site = &it_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  a = (real_T)(bits_size[0] * bits_size[1]) / 7.0;
  st.site = &it_emlrtRSI;
  b_floor(&a);
  st.site = &it_emlrtRSI;
  a *= 7.0;
  if (1.0 > a) {
    i26 = 0;
  } else {
    i26 = bits_size[0] * bits_size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i26, &cb_emlrtBCI, sp);
    i26 = bits_size[0] * bits_size[1];
    i27 = (int32_T)a;
    i26 = emlrtDynamicBoundsCheckFastR2012b(i27, 1, i26, &cb_emlrtBCI, sp);
  }

  emlrtVectorVectorIndexCheckR2012b(bits_size[0] * bits_size[1], 1, 1, i26,
    &m_emlrtECI, sp);

  /* Shape into letters */
  st.site = &jt_emlrtRSI;
  st.site = &jt_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  a = (real_T)i26 / 7.0;
  st.site = &jt_emlrtRSI;
  b_st.site = &lt_emlrtRSI;
  c_st.site = &mt_emlrtRSI;
  if (a != muDoubleScalarFloor(a)) {
    p = FALSE;
  } else {
    p = TRUE;
  }

  if (p) {
    c_st.site = &mt_emlrtRSI;
    p = TRUE;
  } else {
    p = FALSE;
  }

  if (p) {
  } else {
    y = NULL;
    m26 = mxCreateCharArray(2, iv123);
    for (i = 0; i < 28; i++) {
      cv146[i] = cv147[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 28, m26, cv146);
    emlrtAssign(&y, m26);
    b_y = NULL;
    m26 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m26) = MIN_int32_T;
    emlrtAssign(&b_y, m26);
    c_y = NULL;
    m26 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m26) = MAX_int32_T;
    emlrtAssign(&c_y, m26);
    c_st.site = &mt_emlrtRSI;
    d_st.site = &ku_emlrtRSI;
    b_error(&c_st, c_message(&d_st, y, b_y, c_y, &rb_emlrtMCI), &sb_emlrtMCI);
  }

  c_st.site = &as_emlrtRSI;
  c_st.site = &as_emlrtRSI;
  b_st.site = &wr_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  maxdimlen = i26;
  if (1 > i26) {
    maxdimlen = 1;
  }

  b_st.site = &wr_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  if (i26 < maxdimlen) {
  } else {
    maxdimlen = i26;
  }

  if (7 > maxdimlen) {
    b_st.site = &vr_emlrtRSI;
    c_eml_error(&b_st);
  }

  if ((int8_T)(int32_T)a > maxdimlen) {
    b_st.site = &vr_emlrtRSI;
    c_eml_error(&b_st);
  }

  b_st.site = &ur_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  if (i26 == 7 * (int32_T)a) {
  } else {
    d_y = NULL;
    m26 = mxCreateCharArray(2, iv124);
    for (i = 0; i < 40; i++) {
      cv148[i] = cv149[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m26, cv148);
    emlrtAssign(&d_y, m26);
    b_st.site = &ur_emlrtRSI;
    e_st.site = &hu_emlrtRSI;
    b_error(&b_st, b_message(&e_st, d_y, &lb_emlrtMCI), &mb_emlrtMCI);
  }

  b_st.site = &tr_emlrtRSI;
  c_st.site = &uf_emlrtRSI;
  for (maxdimlen = 0; maxdimlen + 1 <= i26; maxdimlen++) {
    y_data[maxdimlen] = bits_data[maxdimlen];
  }

  for (i26 = 0; i26 < 7; i26++) {
    maxdimlen = (int32_T)a;
    for (i27 = 0; i27 < maxdimlen; i27++) {
      b_bits_data[i27 + (int32_T)a * i26] = y_data[i26 + 7 * i27];
    }
  }

  /* Convert bits to letters */
  Letters_size[0] = (int32_T)a;
  maxdimlen = (int32_T)a;
  for (i26 = 0; i26 < maxdimlen; i26++) {
    Letters_data[i26] = 0.0;
  }

  i = 0;
  while (i <= (int32_T)a - 1) {
    st.site = &kt_emlrtRSI;
    i26 = (int32_T)a;
    i27 = 1 + i;
    emlrtDynamicBoundsCheckFastR2012b(i27, 1, i26, &bb_emlrtBCI, &st);
    b_st.site = &gf_emlrtRSI;
    b_st.site = &nt_emlrtRSI;
    for (maxdimlen = 0; maxdimlen < 7; maxdimlen++) {
      s[maxdimlen] = '0';
      if (b_bits_data[i + (int32_T)a * maxdimlen]) {
        s[maxdimlen] = '1';
      }
    }

    st.site = &kt_emlrtRSI;
    b_st.site = &ot_emlrtRSI;
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
      m26 = mxCreateCharArray(2, iv125);
      for (maxdimlen = 0; maxdimlen < 34; maxdimlen++) {
        cv150[maxdimlen] = cv151[maxdimlen];
      }

      emlrtInitCharArrayR2013a(&st, 34, m26, cv150);
      emlrtAssign(&e_y, m26);
      b_st.site = &ot_emlrtRSI;
      e_st.site = &gu_emlrtRSI;
      b_error(&b_st, b_message(&e_st, e_y, &tb_emlrtMCI), &ub_emlrtMCI);
    }

    b_st.site = &pt_emlrtRSI;
    varargin_1 = 0.0;
    p2 = 1.0;
    for (maxdimlen = 0; maxdimlen < 7; maxdimlen++) {
      if (s[6 - maxdimlen] == '1') {
        varargin_1 += p2;
      }

      p2 += p2;
    }

    st.site = &kt_emlrtRSI;
    i26 = (int32_T)varargin_1;
    emlrtDynamicBoundsCheckFastR2012b(i26, 0, 255, &emlrtBCI, &st);
    i26 = (int32_T)a;
    i27 = 1 + i;
    Letters_data[emlrtDynamicBoundsCheckFastR2012b(i27, 1, i26, &db_emlrtBCI, sp)
      - 1] = (int8_T)varargin_1;
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (OFDMbits2letters.c) */
