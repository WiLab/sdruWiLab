/*
 * fft.c
 *
 * Code generation for function 'fft'
 *
 * C source code generated on: Thu Mar  6 22:22:40 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "fft.h"
#include "testMACTransmitter_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo od_emlrtRSI = { 101, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo pd_emlrtRSI = { 102, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo qd_emlrtRSI = { 103, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo rd_emlrtRSI = { 104, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo sd_emlrtRSI = { 106, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo td_emlrtRSI = { 114, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ud_emlrtRSI = { 115, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo vd_emlrtRSI = { 116, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo wd_emlrtRSI = { 129, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo xd_emlrtRSI = { 131, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo yd_emlrtRSI = { 133, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ae_emlrtRSI = { 132, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo be_emlrtRSI = { 134, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ce_emlrtRSI = { 135, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo de_emlrtRSI = { 138, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ee_emlrtRSI = { 139, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo fe_emlrtRSI = { 170, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ge_emlrtRSI = { 171, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo he_emlrtRSI = { 191, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ie_emlrtRSI = { 193, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo je_emlrtRSI = { 195, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ke_emlrtRSI = { 194, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo le_emlrtRSI = { 196, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo me_emlrtRSI = { 197, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo ne_emlrtRSI = { 199, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo oe_emlrtRSI = { 200, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo pe_emlrtRSI = { 202, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo qe_emlrtRSI = { 204, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo re_emlrtRSI = { 205, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo nj_emlrtRSI = { 108, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo oj_emlrtRSI = { 111, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo pj_emlrtRSI = { 113, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo up_emlrtRSI = { 83, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo vp_emlrtRSI = { 84, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo wp_emlrtRSI = { 95, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 66, 1, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

/* Function Definitions */
void fft(const emlrtStack *sp, const emxArray_creal_T *x, emxArray_creal_T *y)
{
  uint32_T sz[2];
  int32_T iy;
  int32_T b_iy;
  int32_T c_iy;
  int32_T lastChan;
  int32_T ix;
  boolean_T b5;
  int32_T chanStart;
  int32_T ju;
  int32_T i;
  boolean_T tst;
  boolean_T b_chanStart;
  real_T temp_re;
  real_T temp_im;
  int32_T iDelta;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  int32_T ihi;
  static const real_T dv8[33] = { 0.0, -0.0980171403295606, -0.19509032201612825,
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

  static const real_T dv9[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
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

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  st.site = &tp_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  for (iy = 0; iy < 2; iy++) {
    sz[iy] = (uint32_T)x->size[iy];
  }

  iy = y->size[0] * y->size[1];
  y->size[0] = 64;
  y->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)y, iy, (int32_T)sizeof(creal_T),
                    &gb_emlrtRTEI);
  if (x->size[1] == 0) {
  } else {
    c_st.site = &up_emlrtRSI;
    c_st.site = &vp_emlrtRSI;
    c_st.site = &vp_emlrtRSI;
    iy = x->size[1] << 6;
    if (iy < 0) {
      b_iy = 63;
    } else {
      b_iy = 0;
    }

    iy += b_iy;
    if (iy >= 0) {
      c_iy = (int32_T)((uint32_T)iy >> 6);
    } else {
      c_iy = ~(int32_T)((uint32_T)~iy >> 6);
    }

    lastChan = (c_iy - 1) << 6;
    ix = 0;
    c_st.site = &wp_emlrtRSI;
    if (0 > lastChan) {
      b5 = FALSE;
    } else {
      b5 = (lastChan > 2147483583);
    }

    if (b5) {
      d_st.site = &eg_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (chanStart = 0; chanStart <= lastChan; chanStart += 64) {
      ju = 0;
      iy = chanStart;
      for (i = 0; i < 63; i++) {
        c_st.site = &od_emlrtRSI;
        c_st.site = &od_emlrtRSI;
        y->data[iy] = x->data[ix];
        c_st.site = &pd_emlrtRSI;
        iy = 64;
        tst = TRUE;
        while (tst) {
          if (iy >= 0) {
            iy = (int32_T)((uint32_T)iy >> 1);
          } else {
            iy = ~(int32_T)((uint32_T)~iy >> 1);
          }

          ju ^= iy;
          tst = ((ju & iy) == 0);
        }

        c_st.site = &qd_emlrtRSI;
        iy = chanStart + ju;
        c_st.site = &rd_emlrtRSI;
        ix++;
      }

      c_st.site = &sd_emlrtRSI;
      c_st.site = &sd_emlrtRSI;
      y->data[iy] = x->data[ix];
      c_st.site = &nj_emlrtRSI;
      ix++;
      c_st.site = &oj_emlrtRSI;
      c_st.site = &pj_emlrtRSI;
      if (chanStart > chanStart + 62) {
        b_chanStart = FALSE;
      } else {
        b_chanStart = (chanStart + 62 > 2147483645);
      }

      if (b_chanStart) {
        d_st.site = &eg_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (i = chanStart; i <= chanStart + 62; i += 2) {
        c_st.site = &td_emlrtRSI;
        temp_re = y->data[i + 1].re;
        temp_im = y->data[i + 1].im;
        c_st.site = &ud_emlrtRSI;
        c_st.site = &ud_emlrtRSI;
        y->data[i + 1].re = y->data[i].re - y->data[i + 1].re;
        y->data[i + 1].im = y->data[i].im - y->data[i + 1].im;
        c_st.site = &vd_emlrtRSI;
        c_st.site = &vd_emlrtRSI;
        y->data[i].re += temp_re;
        y->data[i].im += temp_im;
      }

      iDelta = 2;
      iDelta2 = 4;
      k = 16;
      iheight = 61;
      while (k > 0) {
        i = chanStart;
        c_st.site = &wd_emlrtRSI;
        ihi = chanStart + iheight;
        while (i < ihi) {
          c_st.site = &xd_emlrtRSI;
          iy = i + iDelta;
          c_st.site = &xd_emlrtRSI;
          temp_re = y->data[iy].re;
          temp_im = y->data[iy].im;
          c_st.site = &ae_emlrtRSI;
          c_st.site = &ae_emlrtRSI;
          c_st.site = &yd_emlrtRSI;
          y->data[i + iDelta].re = y->data[i].re - y->data[iy].re;
          y->data[i + iDelta].im = y->data[i].im - y->data[iy].im;
          c_st.site = &be_emlrtRSI;
          c_st.site = &be_emlrtRSI;
          y->data[i].re += temp_re;
          y->data[i].im += temp_im;
          c_st.site = &ce_emlrtRSI;
          i += iDelta2;
        }

        c_st.site = &de_emlrtRSI;
        iy = chanStart + 1;
        c_st.site = &ee_emlrtRSI;
        for (ju = k; ju < 32; ju += k) {
          c_st.site = &fe_emlrtRSI;
          c_st.site = &ge_emlrtRSI;
          i = iy;
          c_st.site = &he_emlrtRSI;
          ihi = iy + iheight;
          while (i < ihi) {
            c_st.site = &ie_emlrtRSI;
            c_st.site = &ie_emlrtRSI;
            c_st.site = &ie_emlrtRSI;
            temp_re = dv9[ju] * y->data[i + iDelta].re - dv8[ju] * y->data[i +
              iDelta].im;
            temp_im = dv9[ju] * y->data[i + iDelta].im + dv8[ju] * y->data[i +
              iDelta].re;
            c_st.site = &ke_emlrtRSI;
            c_st.site = &ke_emlrtRSI;
            c_st.site = &je_emlrtRSI;
            y->data[i + iDelta].re = y->data[i].re - temp_re;
            y->data[i + iDelta].im = y->data[i].im - temp_im;
            c_st.site = &le_emlrtRSI;
            c_st.site = &le_emlrtRSI;
            y->data[i].re += temp_re;
            y->data[i].im += temp_im;
            c_st.site = &me_emlrtRSI;
            i += iDelta2;
          }

          c_st.site = &ne_emlrtRSI;
          iy++;
          c_st.site = &oe_emlrtRSI;
        }

        c_st.site = &pe_emlrtRSI;
        iy = k;
        k = (int32_T)((uint32_T)iy >> 1);
        iDelta = iDelta2;
        c_st.site = &qe_emlrtRSI;
        iDelta2 <<= 1;
        c_st.site = &re_emlrtRSI;
        iheight -= iDelta;
      }
    }
  }
}

/* End of code generation (fft.c) */
