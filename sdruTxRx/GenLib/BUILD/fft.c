/*
 * fft.c
 *
 * Code generation for function 'fft'
 *
 * C source code generated on: Thu Jul  3 10:46:49 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "fft.h"
#include <stdio.h>

/* Function Definitions */
void fft(const creal_T x[64], creal_T y[64])
{
  int32_T ix;
  int32_T ju;
  int32_T iy;
  int32_T i;
  boolean_T tst;
  real_T temp_re;
  real_T temp_im;
  int32_T iDelta;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  static const real_T dv11[33] = { 0.0, -0.0980171403295606,
    -0.19509032201612825, -0.29028467725446233, -0.38268343236508978,
    -0.47139673682599764, -0.55557023301960218, -0.63439328416364549,
    -0.70710678118654757, -0.773010453362737, -0.83146961230254524,
    -0.881921264348355, -0.92387953251128674, -0.95694033573220882,
    -0.98078528040323043, -0.99518472667219693, -1.0, -0.99518472667219693,
    -0.98078528040323043, -0.95694033573220882, -0.92387953251128674,
    -0.881921264348355, -0.83146961230254524, -0.773010453362737,
    -0.70710678118654757, -0.63439328416364549, -0.55557023301960218,
    -0.47139673682599764, -0.38268343236508978, -0.29028467725446233,
    -0.19509032201612825, -0.0980171403295606, -0.0 };

  static const real_T dv12[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
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

  ix = 0;
  ju = 0;
  iy = 0;
  for (i = 0; i < 63; i++) {
    y[iy] = x[ix];
    iy = 64;
    tst = TRUE;
    while (tst) {
      iy >>= 1;
      ju ^= iy;
      tst = ((ju & iy) == 0);
    }

    iy = ju;
    ix++;
  }

  y[iy] = x[ix];
  for (i = 0; i < 64; i += 2) {
    temp_re = y[i + 1].re;
    temp_im = y[i + 1].im;
    y[i + 1].re = y[i].re - y[i + 1].re;
    y[i + 1].im = y[i].im - y[i + 1].im;
    y[i].re += temp_re;
    y[i].im += temp_im;
  }

  iDelta = 2;
  iDelta2 = 4;
  k = 16;
  iheight = 61;
  while (k > 0) {
    for (i = 0; i < iheight; i += iDelta2) {
      iy = i + iDelta;
      temp_re = y[iy].re;
      temp_im = y[iy].im;
      y[i + iDelta].re = y[i].re - y[iy].re;
      y[i + iDelta].im = y[i].im - y[iy].im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }

    iy = 1;
    for (ix = k; ix < 32; ix += k) {
      i = iy;
      ju = iy + iheight;
      while (i < ju) {
        temp_re = dv12[ix] * y[i + iDelta].re - dv11[ix] * y[i + iDelta].im;
        temp_im = dv12[ix] * y[i + iDelta].im + dv11[ix] * y[i + iDelta].re;
        y[i + iDelta].re = y[i].re - temp_re;
        y[i + iDelta].im = y[i].im - temp_im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += iDelta2;
      }

      iy++;
    }

    k /= 2;
    iDelta = iDelta2;
    iDelta2 <<= 1;
    iheight -= iDelta;
  }
}

/* End of code generation (fft.c) */
