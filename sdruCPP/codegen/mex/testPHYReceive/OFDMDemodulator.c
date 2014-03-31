/*
 * OFDMDemodulator.c
 *
 * Code generation for function 'OFDMDemodulator'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "OFDMDemodulator.h"
#include "testPHYReceive_emxutil.h"
#include "PHYReceive.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_error.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"

/* Variable Definitions */
static emlrtRSInfo ed_emlrtRSI = { 40, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo fd_emlrtRSI = { 41, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo id_emlrtRSI = { 49, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo wi_emlrtRSI = { 29, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo xi_emlrtRSI = { 31, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo yi_emlrtRSI = { 32, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo aj_emlrtRSI = { 35, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo ir_emlrtRSI = { 152, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo jr_emlrtRSI = { 162, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo kr_emlrtRSI = { 168, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo lr_emlrtRSI = { 172, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo mr_emlrtRSI = { 171, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo nr_emlrtRSI = { 14, "fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/fft.m" };

static emlrtRSInfo sr_emlrtRSI = { 16, "fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/fftshift.m" };

static emlrtRSInfo xr_emlrtRSI = { 22, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo yr_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo vs_emlrtRSI = { 176, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtMCInfo nb_emlrtMCI = { 42, 9, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo ob_emlrtMCI = { 41, 19, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo pb_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo qb_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo pb_emlrtRTEI = { 144, 24, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRTEInfo qb_emlrtRTEI = { 65, 1, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtBCInfo y_emlrtBCI = { 1, 64, 171, 28, "postShift", "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 171, 28, "OFDMDemodulator",
  "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 1 };

static emlrtBCInfo ab_emlrtBCI = { 1, 768, 171, 28, "postShift",
  "OFDMDemodulator", "/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 0
};

static emlrtRSInfo iu_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo lu_emlrtRSI = { 42, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

/* Function Definitions */
void OFDMDemodulator_stepImpl(const emlrtStack *sp, const OFDMDemodulator_1 *obj,
  const creal_T x[64], emxArray_creal_T *varargout_1)
{
  creal_T inputIn3D[64];
  creal_T postFFT[64];
  int32_T ix;
  int32_T ju;
  int32_T iy;
  int32_T i;
  int32_T ib;
  boolean_T overflow;
  real_T tmp_re;
  real_T tmp_im;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  static const real_T dv7[33] = { 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0, -0.99518472667219693, -0.98078528040323043,
    -0.95694033573220882, -0.92387953251128674, -0.881921264348355,
    -0.83146961230254524, -0.773010453362737, -0.70710678118654757,
    -0.63439328416364549, -0.55557023301960218, -0.47139673682599764,
    -0.38268343236508978, -0.29028467725446233, -0.19509032201612825,
    -0.0980171403295606, -0.0 };

  static const real_T dv8[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0 };

  emxArray_real_T *b_x;
  emxArray_creal_T *c_x;
  int32_T varargin_1[3];
  const mxArray *y;
  static const int32_T iv110[2] = { 1, 21 };

  const mxArray *m22;
  char_T cv124[21];
  static const char_T cv125[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T sz[3];
  emxArray_creal_T *b_y;
  const mxArray *c_y;
  static const int32_T iv111[2] = { 1, 40 };

  char_T cv126[40];
  static const char_T cv127[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ir_emlrtRSI;
  memcpy(&inputIn3D[0], &x[0], sizeof(creal_T) << 6);
  st.site = &jr_emlrtRSI;
  b_st.site = &nr_emlrtRSI;
  c_st.site = &id_emlrtRSI;
  ix = 0;
  ju = 0;
  iy = 0;
  for (i = 0; i < 63; i++) {
    postFFT[iy] = inputIn3D[ix];
    ib = 64;
    overflow = TRUE;
    while (overflow) {
      if (ib >= 0) {
        ib = (int32_T)((uint32_T)ib >> 1);
      } else {
        ib = ~(int32_T)((uint32_T)~ib >> 1);
      }

      ju ^= ib;
      overflow = ((ju & ib) == 0);
    }

    iy = ju;
    ix++;
  }

  postFFT[iy] = inputIn3D[ix];
  for (i = 0; i < 64; i += 2) {
    tmp_re = postFFT[i + 1].re;
    tmp_im = postFFT[i + 1].im;
    postFFT[i + 1].re = postFFT[i].re - postFFT[i + 1].re;
    postFFT[i + 1].im = postFFT[i].im - postFFT[i + 1].im;
    postFFT[i].re += tmp_re;
    postFFT[i].im += tmp_im;
  }

  ju = 2;
  iDelta2 = 4;
  k = 16;
  iheight = 61;
  while (k > 0) {
    for (i = 0; i < iheight; i += iDelta2) {
      ib = i + ju;
      tmp_re = postFFT[ib].re;
      tmp_im = postFFT[ib].im;
      postFFT[i + ju].re = postFFT[i].re - postFFT[ib].re;
      postFFT[i + ju].im = postFFT[i].im - postFFT[ib].im;
      postFFT[i].re += tmp_re;
      postFFT[i].im += tmp_im;
    }

    ib = 1;
    for (iy = k; iy < 32; iy += k) {
      i = ib;
      ix = ib + iheight;
      while (i < ix) {
        tmp_re = dv8[iy] * postFFT[i + ju].re - dv7[iy] * postFFT[i + ju].im;
        tmp_im = dv8[iy] * postFFT[i + ju].im + dv7[iy] * postFFT[i + ju].re;
        postFFT[i + ju].re = postFFT[i].re - tmp_re;
        postFFT[i + ju].im = postFFT[i].im - tmp_im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      ib++;
    }

    ix = k;
    k = (int32_T)((uint32_T)ix >> 1);
    ju = iDelta2;
    iDelta2 <<= 1;
    iheight -= ju;
  }

  st.site = &kr_emlrtRSI;
  b_st.site = &sr_emlrtRSI;
  iy = 0;
  ib = 32;
  for (k = 0; k < 32; k++) {
    tmp_re = postFFT[iy].re;
    tmp_im = postFFT[iy].im;
    postFFT[iy] = postFFT[ib];
    postFFT[ib].re = tmp_re;
    postFFT[ib].im = tmp_im;
    c_st.site = &ed_emlrtRSI;
    iy++;
    c_st.site = &fd_emlrtRSI;
    ib++;
  }

  emxInit_real_T(&b_st, &b_x, 1, &pb_emlrtRTEI, TRUE);
  st.site = &lr_emlrtRSI;
  ix = b_x->size[0];
  b_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)b_x, ix, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  iy = obj->pDataLinearIndices->size[0];
  for (ix = 0; ix < iy; ix++) {
    b_x->data[ix] = obj->pDataLinearIndices->data[ix];
  }

  b_emxInit_creal_T(&st, &c_x, 1, &pb_emlrtRTEI, TRUE);
  st.site = &lr_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  st.site = &lr_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  st.site = &mr_emlrtRSI;
  ix = c_x->size[0];
  c_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)c_x, ix, (int32_T)sizeof(creal_T),
                    &pb_emlrtRTEI);
  iy = obj->pDataLinearIndices->size[0];
  for (ix = 0; ix < iy; ix++) {
    tmp_re = obj->pDataLinearIndices->data[ix];
    ib = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &d_emlrtDCI, &st);
    c_x->data[ix].re = postFFT[emlrtDynamicBoundsCheckFastR2012b(ib, 1, 64,
      &y_emlrtBCI, &st) - 1].re;
    tmp_re = obj->pDataLinearIndices->data[ix];
    ib = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &d_emlrtDCI, &st);
    c_x->data[ix].im = postFFT[emlrtDynamicBoundsCheckFastR2012b(ib, 1, 64,
      &y_emlrtBCI, &st) - 1].im;
  }

  varargin_1[0] = b_x->size[0];
  varargin_1[1] = 1;
  varargin_1[2] = 1;
  b_st.site = &xr_emlrtRSI;
  c_st.site = &yr_emlrtRSI;
  emxFree_real_T(&b_x);
  c_st.site = &yr_emlrtRSI;
  c_st.site = &as_emlrtRSI;
  tmp_re = 1.0;
  for (k = 0; k < 3; k++) {
    if (varargin_1[k] <= 0) {
      tmp_re = 0.0;
    } else {
      tmp_re *= (real_T)varargin_1[k];
    }
  }

  c_st.site = &as_emlrtRSI;
  if (2.147483647E+9 >= tmp_re) {
  } else {
    y = NULL;
    m22 = mxCreateCharArray(2, iv110);
    for (i = 0; i < 21; i++) {
      cv124[i] = cv125[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 21, m22, cv124);
    emlrtAssign(&y, m22);
    c_st.site = &as_emlrtRSI;
    d_st.site = &iu_emlrtRSI;
    b_error(&c_st, b_message(&d_st, y, &pb_emlrtMCI), &qb_emlrtMCI);
  }

  for (ix = 0; ix < 3; ix++) {
    sz[ix] = varargin_1[ix];
  }

  b_st.site = &wr_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  iy = c_x->size[0];
  if (1 > iy) {
    iy = 1;
  }

  b_st.site = &wr_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  if (c_x->size[0] < iy) {
  } else {
    iy = c_x->size[0];
  }

  if (sz[0] > iy) {
    b_st.site = &vr_emlrtRSI;
    c_eml_error(&b_st);
  }

  if (1 > iy) {
    b_st.site = &vr_emlrtRSI;
    c_eml_error(&b_st);
  }

  emxInit_creal_T(&st, &b_y, 3, &pb_emlrtRTEI, TRUE);
  ix = b_y->size[0] * b_y->size[1] * b_y->size[2];
  b_y->size[0] = sz[0];
  b_y->size[1] = 1;
  b_y->size[2] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)b_y, ix, (int32_T)sizeof(creal_T),
                    &qb_emlrtRTEI);
  b_st.site = &ur_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  if (c_x->size[0] == sz[0]) {
  } else {
    c_y = NULL;
    m22 = mxCreateCharArray(2, iv111);
    for (i = 0; i < 40; i++) {
      cv126[i] = cv127[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m22, cv126);
    emlrtAssign(&c_y, m22);
    b_st.site = &ur_emlrtRSI;
    e_st.site = &hu_emlrtRSI;
    b_error(&b_st, b_message(&e_st, c_y, &lb_emlrtMCI), &mb_emlrtMCI);
  }

  b_st.site = &tr_emlrtRSI;
  c_st.site = &uf_emlrtRSI;
  if (1 > c_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (c_x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &vf_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k + 1 <= c_x->size[0]; k++) {
    b_y->data[k] = c_x->data[k];
  }

  emxFree_creal_T(&c_x);
  ix = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = b_y->size[0];
  varargout_1->size[1] = b_y->size[1];
  varargout_1->size[2] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)varargout_1, ix, (int32_T)sizeof
                    (creal_T), &pb_emlrtRTEI);
  iy = b_y->size[0] * b_y->size[1] * b_y->size[2];
  for (ix = 0; ix < iy; ix++) {
    varargout_1->data[ix] = b_y->data[ix];
  }

  emxFree_creal_T(&b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_OFDMDemodulator_stepImpl(testPHYReceiveStackData *SD, const emlrtStack
  *sp, const OFDMDemodulator_1 *obj, const creal_T x[960], emxArray_creal_T
  *varargout_1, creal_T varargout_2[48])
{
  creal_T postFFT[768];
  int32_T ix;
  int32_T chanStart;
  int32_T i1;
  int32_T i2;
  int32_T i;
  int32_T b_ix;
  boolean_T overflow;
  int32_T c_ix;
  real_T tmp_re;
  real_T tmp_im;
  int32_T ib;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  int32_T ihi;
  static const real_T dv9[33] = { 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0, -0.99518472667219693, -0.98078528040323043,
    -0.95694033573220882, -0.92387953251128674, -0.881921264348355,
    -0.83146961230254524, -0.773010453362737, -0.70710678118654757,
    -0.63439328416364549, -0.55557023301960218, -0.47139673682599764,
    -0.38268343236508978, -0.29028467725446233, -0.19509032201612825,
    -0.0980171403295606, -0.0 };

  static const real_T dv10[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0 };

  emxArray_real_T *b_x;
  emxArray_creal_T *c_x;
  real_T varargin_1[3];
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv112[2] = { 1, 57 };

  const mxArray *m23;
  char_T cv128[57];
  static const char_T cv129[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  static const int32_T iv113[2] = { 1, 21 };

  char_T cv130[21];
  static const char_T cv131[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T sz[3];
  emxArray_creal_T *e_y;
  const mxArray *f_y;
  static const int32_T iv114[2] = { 1, 40 };

  char_T cv132[40];
  static const char_T cv133[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  creal_T d_x[48];
  static const int16_T iv115[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ir_emlrtRSI;
  memcpy(&SD->u1.f1.inputIn3D[0], &x[0], 960U * sizeof(creal_T));
  st.site = &jr_emlrtRSI;
  b_st.site = &nr_emlrtRSI;
  c_st.site = &id_emlrtRSI;
  ix = 0;
  for (chanStart = 0; chanStart < 706; chanStart += 64) {
    i1 = 0;
    i2 = chanStart;
    for (i = 0; i < 63; i++) {
      if (ix >= 0) {
        b_ix = (int32_T)((uint32_T)ix >> 6);
      } else {
        b_ix = ~(int32_T)((uint32_T)~ix >> 6);
      }

      postFFT[i2] = SD->u1.f1.inputIn3D[(ix % 64 + 80 * b_ix) + 16];
      i2 = 64;
      overflow = TRUE;
      while (overflow) {
        if (i2 >= 0) {
          i2 = (int32_T)((uint32_T)i2 >> 1);
        } else {
          i2 = ~(int32_T)((uint32_T)~i2 >> 1);
        }

        i1 ^= i2;
        overflow = ((i1 & i2) == 0);
      }

      i2 = chanStart + i1;
      ix++;
    }

    if (ix >= 0) {
      c_ix = (int32_T)((uint32_T)ix >> 6);
    } else {
      c_ix = ~(int32_T)((uint32_T)~ix >> 6);
    }

    postFFT[i2] = SD->u1.f1.inputIn3D[(ix % 64 + 80 * c_ix) + 16];
    ix++;
    for (i = chanStart; i <= chanStart + 62; i += 2) {
      tmp_re = postFFT[i + 1].re;
      tmp_im = postFFT[i + 1].im;
      postFFT[i + 1].re = postFFT[i].re - postFFT[i + 1].re;
      postFFT[i + 1].im = postFFT[i].im - postFFT[i + 1].im;
      postFFT[i].re += tmp_re;
      postFFT[i].im += tmp_im;
    }

    ib = 2;
    iDelta2 = 4;
    k = 16;
    iheight = 61;
    while (k > 0) {
      i = chanStart;
      ihi = chanStart + iheight;
      while (i < ihi) {
        i2 = i + ib;
        tmp_re = postFFT[i2].re;
        tmp_im = postFFT[i2].im;
        postFFT[i + ib].re = postFFT[i].re - postFFT[i2].re;
        postFFT[i + ib].im = postFFT[i].im - postFFT[i2].im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      i2 = chanStart + 1;
      for (i1 = k; i1 < 32; i1 += k) {
        i = i2;
        ihi = i2 + iheight;
        while (i < ihi) {
          tmp_re = dv10[i1] * postFFT[i + ib].re - dv9[i1] * postFFT[i + ib].im;
          tmp_im = dv10[i1] * postFFT[i + ib].im + dv9[i1] * postFFT[i + ib].re;
          postFFT[i + ib].re = postFFT[i].re - tmp_re;
          postFFT[i + ib].im = postFFT[i].im - tmp_im;
          postFFT[i].re += tmp_re;
          postFFT[i].im += tmp_im;
          i += iDelta2;
        }

        i2++;
      }

      ib = k;
      k = (int32_T)((uint32_T)ib >> 1);
      ib = iDelta2;
      iDelta2 <<= 1;
      iheight -= ib;
    }
  }

  st.site = &kr_emlrtRSI;
  b_st.site = &sr_emlrtRSI;
  i2 = 0;
  for (i = 0; i < 12; i++) {
    i1 = i2;
    c_st.site = &wi_emlrtRSI;
    c_st.site = &xi_emlrtRSI;
    c_st.site = &yi_emlrtRSI;
    i2 += 64;
    c_st.site = &aj_emlrtRSI;
    ib = i1 + 32;
    for (k = 0; k < 32; k++) {
      tmp_re = postFFT[i1].re;
      tmp_im = postFFT[i1].im;
      postFFT[i1] = postFFT[ib];
      postFFT[ib].re = tmp_re;
      postFFT[ib].im = tmp_im;
      c_st.site = &ed_emlrtRSI;
      i1++;
      c_st.site = &fd_emlrtRSI;
      ib++;
    }
  }

  emxInit_real_T(&b_st, &b_x, 1, &pb_emlrtRTEI, TRUE);
  st.site = &lr_emlrtRSI;
  ib = b_x->size[0];
  b_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)b_x, ib, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  i2 = obj->pDataLinearIndices->size[0];
  for (ib = 0; ib < i2; ib++) {
    b_x->data[ib] = obj->pDataLinearIndices->data[ib];
  }

  b_emxInit_creal_T(&st, &c_x, 1, &pb_emlrtRTEI, TRUE);
  st.site = &lr_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  st.site = &lr_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  st.site = &mr_emlrtRSI;
  ib = c_x->size[0];
  c_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)c_x, ib, (int32_T)sizeof(creal_T),
                    &pb_emlrtRTEI);
  i2 = obj->pDataLinearIndices->size[0];
  for (ib = 0; ib < i2; ib++) {
    tmp_re = obj->pDataLinearIndices->data[ib];
    i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &d_emlrtDCI, &st);
    c_x->data[ib].re = postFFT[emlrtDynamicBoundsCheckFastR2012b(i1, 1, 768,
      &ab_emlrtBCI, &st) - 1].re;
    tmp_re = obj->pDataLinearIndices->data[ib];
    i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &d_emlrtDCI, &st);
    c_x->data[ib].im = postFFT[emlrtDynamicBoundsCheckFastR2012b(i1, 1, 768,
      &ab_emlrtBCI, &st) - 1].im;
  }

  varargin_1[0] = (real_T)b_x->size[0] / 12.0;
  varargin_1[1] = 12.0;
  varargin_1[2] = 1.0;
  b_st.site = &xr_emlrtRSI;
  c_st.site = &yr_emlrtRSI;
  k = 0;
  emxFree_real_T(&b_x);
  do {
    exitg1 = 0;
    if (k < 3) {
      if (varargin_1[k] != muDoubleScalarFloor(varargin_1[k])) {
        overflow = FALSE;
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      overflow = TRUE;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (overflow) {
    c_st.site = &yr_emlrtRSI;
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    y = NULL;
    m23 = mxCreateCharArray(2, iv112);
    for (i = 0; i < 57; i++) {
      cv128[i] = cv129[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 57, m23, cv128);
    emlrtAssign(&y, m23);
    b_y = NULL;
    m23 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m23) = MIN_int32_T;
    emlrtAssign(&b_y, m23);
    c_y = NULL;
    m23 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m23) = MAX_int32_T;
    emlrtAssign(&c_y, m23);
    c_st.site = &yr_emlrtRSI;
    d_st.site = &lu_emlrtRSI;
    b_error(&c_st, c_message(&d_st, y, b_y, c_y, &nb_emlrtMCI), &ob_emlrtMCI);
  }

  c_st.site = &as_emlrtRSI;
  tmp_re = 1.0;
  for (k = 0; k < 3; k++) {
    if (varargin_1[k] <= 0.0) {
      tmp_re = 0.0;
    } else {
      tmp_re *= varargin_1[k];
    }
  }

  c_st.site = &as_emlrtRSI;
  if (2.147483647E+9 >= tmp_re) {
  } else {
    d_y = NULL;
    m23 = mxCreateCharArray(2, iv113);
    for (i = 0; i < 21; i++) {
      cv130[i] = cv131[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 21, m23, cv130);
    emlrtAssign(&d_y, m23);
    c_st.site = &as_emlrtRSI;
    d_st.site = &iu_emlrtRSI;
    b_error(&c_st, b_message(&d_st, d_y, &pb_emlrtMCI), &qb_emlrtMCI);
  }

  for (ib = 0; ib < 3; ib++) {
    sz[ib] = (int32_T)varargin_1[ib];
  }

  b_st.site = &wr_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  i2 = c_x->size[0];
  if (1 > i2) {
    i2 = 1;
  }

  b_st.site = &wr_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  if (c_x->size[0] < i2) {
  } else {
    i2 = c_x->size[0];
  }

  if (sz[0] > i2) {
    b_st.site = &vr_emlrtRSI;
    c_eml_error(&b_st);
  }

  if (12 > i2) {
    b_st.site = &vr_emlrtRSI;
    c_eml_error(&b_st);
  }

  emxInit_creal_T(&st, &e_y, 3, &pb_emlrtRTEI, TRUE);
  ib = e_y->size[0] * e_y->size[1] * e_y->size[2];
  e_y->size[0] = sz[0];
  e_y->size[1] = 12;
  e_y->size[2] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)e_y, ib, (int32_T)sizeof(creal_T),
                    &qb_emlrtRTEI);
  b_st.site = &ur_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  if (c_x->size[0] == sz[0] * 12) {
  } else {
    f_y = NULL;
    m23 = mxCreateCharArray(2, iv114);
    for (i = 0; i < 40; i++) {
      cv132[i] = cv133[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m23, cv132);
    emlrtAssign(&f_y, m23);
    b_st.site = &ur_emlrtRSI;
    e_st.site = &hu_emlrtRSI;
    b_error(&b_st, b_message(&e_st, f_y, &lb_emlrtMCI), &mb_emlrtMCI);
  }

  b_st.site = &tr_emlrtRSI;
  c_st.site = &uf_emlrtRSI;
  if (1 > c_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (c_x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &vf_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k + 1 <= c_x->size[0]; k++) {
    e_y->data[k] = c_x->data[k];
  }

  emxFree_creal_T(&c_x);
  ib = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = e_y->size[0];
  varargout_1->size[1] = e_y->size[1];
  varargout_1->size[2] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)varargout_1, ib, (int32_T)sizeof
                    (creal_T), &pb_emlrtRTEI);
  i2 = e_y->size[0] * e_y->size[1] * e_y->size[2];
  for (ib = 0; ib < i2; ib++) {
    varargout_1->data[ib] = e_y->data[ib];
  }

  emxFree_creal_T(&e_y);
  st.site = &vs_emlrtRSI;
  for (ib = 0; ib < 48; ib++) {
    d_x[ib] = postFFT[iv115[ib]];
  }

  memcpy(&varargout_2[0], &d_x[0], 48U * sizeof(creal_T));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (OFDMDemodulator.c) */
