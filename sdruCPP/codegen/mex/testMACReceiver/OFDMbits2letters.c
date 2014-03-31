/*
 * OFDMbits2letters.c
 *
 * Code generation for function 'OFDMbits2letters'
 *
 * C source code generated on: Thu Mar  6 18:47:07 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "OFDMbits2letters.h"
#include "floor.h"
#include "PHYReceive.h"
#include "OFDMDemodulator.h"
#include "eml_error.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo lf_emlrtRSI = { 30, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo ku_emlrtRSI = { 10, "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtRSInfo lu_emlrtRSI = { 13, "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtRSInfo mu_emlrtRSI = { 19, "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtRSInfo nu_emlrtRSI = { 41, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ou_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo pu_emlrtRSI = { 35, "dec2bin",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/dec2bin.m" };

static emlrtRSInfo qu_emlrtRSI = { 23, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtRSInfo ru_emlrtRSI = { 29, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtMCInfo sb_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo tb_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo ub_emlrtMCI = { 24, 5, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtMCInfo vb_emlrtMCI = { 23, 15, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 19, 44, "bits", "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m", 0
};

static emlrtECInfo t_emlrtECI = { -1, 10, 8, "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m" };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 10, 8, "bits", "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m", 0
};

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 19, 5, "Letters", "OFDMbits2letters",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/OFDMbits2letters.m", 0
};

static emlrtRSInfo wv_emlrtRSI = { 24, "bin2dec",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/bin2dec.m" };

static emlrtRSInfo bw_emlrtRSI = { 51, "eml_assert_valid_size_arg",
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
  static const int32_T iv131[2] = { 1, 28 };

  const mxArray *m30;
  char_T cv158[28];
  int32_T i;
  static const char_T cv159[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  int32_T maxdimlen;
  boolean_T y_data[560];
  const mxArray *d_y;
  static const int32_T iv132[2] = { 1, 40 };

  char_T cv160[40];
  static const char_T cv161[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  boolean_T b_bits_data[560];
  char_T s[7];
  int32_T exitg1;
  const mxArray *e_y;
  static const int32_T iv133[2] = { 1, 34 };

  char_T cv162[34];
  static const char_T cv163[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b', 'i',
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
  st.site = &ku_emlrtRSI;
  st.site = &ku_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  a = (real_T)(bits_size[0] * bits_size[1]) / 7.0;
  st.site = &ku_emlrtRSI;
  b_floor(&a);
  st.site = &ku_emlrtRSI;
  a *= 7.0;
  if (1.0 > a) {
    i26 = 0;
  } else {
    i26 = bits_size[0] * bits_size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i26, &kb_emlrtBCI, sp);
    i26 = bits_size[0] * bits_size[1];
    i27 = (int32_T)a;
    i26 = emlrtDynamicBoundsCheckFastR2012b(i27, 1, i26, &kb_emlrtBCI, sp);
  }

  emlrtVectorVectorIndexCheckR2012b(bits_size[0] * bits_size[1], 1, 1, i26,
    &t_emlrtECI, sp);

  /* Shape into letters */
  st.site = &lu_emlrtRSI;
  st.site = &lu_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  a = (real_T)i26 / 7.0;
  st.site = &lu_emlrtRSI;
  b_st.site = &nu_emlrtRSI;
  c_st.site = &ou_emlrtRSI;
  if (a != muDoubleScalarFloor(a)) {
    p = FALSE;
  } else {
    p = TRUE;
  }

  if (p) {
    c_st.site = &ou_emlrtRSI;
    p = TRUE;
  } else {
    p = FALSE;
  }

  if (p) {
  } else {
    y = NULL;
    m30 = mxCreateCharArray(2, iv131);
    for (i = 0; i < 28; i++) {
      cv158[i] = cv159[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 28, m30, cv158);
    emlrtAssign(&y, m30);
    b_y = NULL;
    m30 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m30) = MIN_int32_T;
    emlrtAssign(&b_y, m30);
    c_y = NULL;
    m30 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m30) = MAX_int32_T;
    emlrtAssign(&c_y, m30);
    c_st.site = &ou_emlrtRSI;
    d_st.site = &bw_emlrtRSI;
    c_error(&c_st, c_message(&d_st, y, b_y, c_y, &sb_emlrtMCI), &tb_emlrtMCI);
  }

  c_st.site = &ct_emlrtRSI;
  c_st.site = &ct_emlrtRSI;
  b_st.site = &ys_emlrtRSI;
  c_st.site = &we_emlrtRSI;
  maxdimlen = i26;
  if (1 > i26) {
    maxdimlen = 1;
  }

  b_st.site = &ys_emlrtRSI;
  c_st.site = &we_emlrtRSI;
  if (i26 < maxdimlen) {
  } else {
    maxdimlen = i26;
  }

  if (7 > maxdimlen) {
    b_st.site = &xs_emlrtRSI;
    c_eml_error(&b_st);
  }

  if ((int8_T)(int32_T)a > maxdimlen) {
    b_st.site = &xs_emlrtRSI;
    c_eml_error(&b_st);
  }

  b_st.site = &ws_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  if (i26 == 7 * (int32_T)a) {
  } else {
    d_y = NULL;
    m30 = mxCreateCharArray(2, iv132);
    for (i = 0; i < 40; i++) {
      cv160[i] = cv161[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m30, cv160);
    emlrtAssign(&d_y, m30);
    b_st.site = &ws_emlrtRSI;
    e_st.site = &xv_emlrtRSI;
    c_error(&b_st, b_message(&e_st, d_y, &mb_emlrtMCI), &nb_emlrtMCI);
  }

  b_st.site = &vs_emlrtRSI;
  c_st.site = &ag_emlrtRSI;
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
    st.site = &mu_emlrtRSI;
    i26 = (int32_T)a;
    i27 = 1 + i;
    emlrtDynamicBoundsCheckFastR2012b(i27, 1, i26, &jb_emlrtBCI, &st);
    b_st.site = &lf_emlrtRSI;
    b_st.site = &pu_emlrtRSI;
    for (maxdimlen = 0; maxdimlen < 7; maxdimlen++) {
      s[maxdimlen] = '0';
      if (b_bits_data[i + (int32_T)a * maxdimlen]) {
        s[maxdimlen] = '1';
      }
    }

    st.site = &mu_emlrtRSI;
    b_st.site = &qu_emlrtRSI;
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
      m30 = mxCreateCharArray(2, iv133);
      for (maxdimlen = 0; maxdimlen < 34; maxdimlen++) {
        cv162[maxdimlen] = cv163[maxdimlen];
      }

      emlrtInitCharArrayR2013a(&st, 34, m30, cv162);
      emlrtAssign(&e_y, m30);
      b_st.site = &qu_emlrtRSI;
      e_st.site = &wv_emlrtRSI;
      c_error(&b_st, b_message(&e_st, e_y, &ub_emlrtMCI), &vb_emlrtMCI);
    }

    b_st.site = &ru_emlrtRSI;
    varargin_1 = 0.0;
    p2 = 1.0;
    for (maxdimlen = 0; maxdimlen < 7; maxdimlen++) {
      if (s[6 - maxdimlen] == '1') {
        varargin_1 += p2;
      }

      p2 += p2;
    }

    st.site = &mu_emlrtRSI;
    i26 = (int32_T)varargin_1;
    emlrtDynamicBoundsCheckFastR2012b(i26, 0, 255, &i_emlrtBCI, &st);
    i26 = (int32_T)a;
    i27 = 1 + i;
    Letters_data[emlrtDynamicBoundsCheckFastR2012b(i27, 1, i26, &lb_emlrtBCI, sp)
      - 1] = (int8_T)varargin_1;
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (OFDMbits2letters.c) */
