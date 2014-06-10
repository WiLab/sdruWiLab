/*
 * testFileSourceSink.c
 *
 * Code generation for function 'testFileSourceSink'
 *
 * C source code generated on: Thu Feb 27 11:25:03 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testFileSourceSink.h"
#include "mod.h"
#include "testFileSourceSink_emxutil.h"
#include "fprintf.h"
#include "testFileSourceSink_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 9, "testFileSourceSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/testFileSourceSink.m" };

static emlrtRSInfo b_emlrtRSI = { 12, "testFileSourceSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/testFileSourceSink.m" };

static emlrtRSInfo c_emlrtRSI = { 16, "testFileSourceSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/testFileSourceSink.m" };

static emlrtRSInfo d_emlrtRSI = { 24, "testFileSourceSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/testFileSourceSink.m" };

static emlrtRSInfo e_emlrtRSI = { 25, "testFileSourceSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/testFileSourceSink.m" };

static emlrtRSInfo f_emlrtRSI = { 17, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtRSInfo g_emlrtRSI = { 27, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtRSInfo h_emlrtRSI = { 28, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtRSInfo o_emlrtRSI = { 19, "repmat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo t_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo u_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo w_emlrtRSI = { 11, "fileSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSink.m" };

static emlrtRSInfo x_emlrtRSI = { 44, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtRSInfo y_emlrtRSI = { 76, "strfind",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/strfun/strfind.m" };

static emlrtMCInfo emlrtMCI = { 10, 7, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtMCInfo b_emlrtMCI = { 11, 1, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtMCInfo c_emlrtMCI = { 12, 1, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtMCInfo d_emlrtMCI = { 14, 17, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtMCInfo e_emlrtMCI = { 14, 11, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtMCInfo f_emlrtMCI = { 18, 13, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtMCInfo g_emlrtMCI = { 18, 8, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtMCInfo h_emlrtMCI = { 22, 1, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtMCInfo i_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo j_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo k_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo l_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo m_emlrtMCI = { 27, 7, "fileSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSink.m" };

static emlrtMCInfo n_emlrtMCI = { 28, 1, "fileSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSink.m" };

static emlrtMCInfo o_emlrtMCI = { 29, 1, "fileSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSink.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 10, "testFileSourceSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/testFileSourceSink.m" };

static emlrtRTEInfo c_emlrtRTEI = { 9, 1, "testFileSourceSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/testFileSourceSink.m" };

static emlrtRTEInfo d_emlrtRTEI = { 12, 1, "testFileSourceSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/testFileSourceSink.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 15, 21, "data", "testFileSourceSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/testFileSourceSink.m", 0 };

static emlrtECInfo emlrtECI = { -1, 15, 5, "testFileSourceSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/testFileSourceSink.m" };

static emlrtDCInfo emlrtDCI = { 17, 27, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m", 4 };

static emlrtBCInfo b_emlrtBCI = { 1, 70, 15, 15, "data", "fileSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSink.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 42, 22, "repmat",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/repmat.m", 4 };

static emlrtRSInfo db_emlrtRSI = { 29, "fileSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSink.m" };

static emlrtRSInfo eb_emlrtRSI = { 22, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtRSInfo fb_emlrtRSI = { 28, "fileSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSink.m" };

static emlrtRSInfo gb_emlrtRSI = { 27, "fileSink",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSink.m" };

static emlrtRSInfo hb_emlrtRSI = { 10, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtRSInfo ib_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo jb_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo kb_emlrtRSI = { 18, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtRSInfo lb_emlrtRSI = { 14, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtRSInfo mb_emlrtRSI = { 12, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

static emlrtRSInfo nb_emlrtRSI = { 11, "fileSource",
  "/Users/travis/Git/sdruWiLab/sdruMIS/fileSource.m" };

/* Function Declarations */
static const mxArray *b_char(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location);
static int32_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void b_fclose(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                     *location);
static const mxArray *b_fopen(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *b_fread(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_fseek(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, emlrtMCInfo *location);
static const mxArray *b_ftell(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void b_fwrite(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                     emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_transpose,
  const char_T *identifier, emxArray_char_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y);
static int32_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_int32,
  const char_T *identifier);
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static int32_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret);
static const mxArray *int32(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *
  location);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *transpose(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_char(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m7;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m7, 1, &pArray, "char", TRUE, location);
}

static int32_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void b_fclose(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                     *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "fclose", TRUE, location);
}

static const mxArray *b_fopen(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m3;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m3, 2, pArrays, "fopen", TRUE, location);
}

static const mxArray *b_fread(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m6;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m6, 2, pArrays, "fread", TRUE, location);
}

static void b_fseek(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  emlrtCallMATLABR2012b(sp, 0, NULL, 3, pArrays, "fseek", TRUE, location);
}

static const mxArray *b_ftell(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m4;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m4, 1, &pArray, "ftell", TRUE, location);
}

static void b_fwrite(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                     emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "fwrite", TRUE, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m10;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m10, 1, &pArray, "message", TRUE,
    location);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_transpose,
  const char_T *identifier, emxArray_char_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(b_transpose), &thisId, y);
  emlrtDestroyArray(&b_transpose);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static int32_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_int32,
  const char_T *identifier)
{
  int32_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_int32), &thisId);
  emlrtDestroyArray(&b_int32);
  return y;
}

static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", TRUE, location);
}

static int32_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", FALSE, 0U, 0);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret)
{
  int32_T iv12[2];
  boolean_T bv0[2];
  int32_T i2;
  static const boolean_T bv1[2] = { FALSE, TRUE };

  int32_T iv13[2];
  for (i2 = 0; i2 < 2; i2++) {
    iv12[i2] = 1 + -2 * i2;
    bv0[i2] = bv1[i2];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", FALSE, 2U, iv12, bv0, iv13);
  i2 = ret->size[0] * ret->size[1];
  ret->size[0] = iv13[0];
  ret->size[1] = iv13[1];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i2, (int32_T)sizeof(char_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 1, FALSE);
  emlrtDestroyArray(&src);
}

static const mxArray *int32(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *
  location)
{
  const mxArray *pArray;
  const mxArray *m5;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 1, &pArray, "int32", TRUE, location);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m9;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m9, 3, pArrays, "message", TRUE, location);
}

static const mxArray *transpose(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m8;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m8, 1, &pArray, "transpose", TRUE,
    location);
}

void testFileSourceSink(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 9 };

  const mxArray *m0;
  char_T cv0[9];
  int32_T i;
  static const char_T cv1[9] = { 'm', 'o', 'n', 'e', 't', '.', 'j', 'p', 'g' };

  const mxArray *b_y;
  const mxArray *fid = NULL;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  int32_T filelen;
  const mxArray *g_y;
  static const int32_T iv1[2] = { 1, 4 };

  char_T cv2[4];
  static const char_T cv3[4] = { 'c', 'h', 'a', 'r' };

  emxArray_char_T *data;
  real_T n;
  boolean_T b_n;
  boolean_T guard2 = FALSE;
  boolean_T b0;
  boolean_T b1;
  const mxArray *h_y;
  static const int32_T iv2[2] = { 1, 28 };

  char_T cv4[28];
  static const char_T cv5[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *i_y;
  const mxArray *j_y;
  real_T a;
  const mxArray *k_y;
  static const int32_T iv3[2] = { 1, 21 };

  char_T cv6[21];
  static const char_T cv7[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T iv4[2];
  int32_T iv5[2];
  int32_T i0;
  emxArray_char_T *r0;
  int32_T match_idx;
  static const char_T cv8[3] = { 'E', 'N', 'D' };

  int32_T packet;
  emxArray_char_T *b_data;
  boolean_T exitg1;
  uint32_T b_packet;
  int32_T i1;
  char_T c_message[70];
  int32_T done;
  int8_T matches[70];
  static const char_T cv9[6] = { 'E', 'N', 'D', '-', '-', '-' };

  int8_T match_out_data[70];
  int8_T val_data[70];
  boolean_T guard1 = FALSE;
  char_T message_data[70];
  const mxArray *l_y;
  static const int32_T iv6[2] = { 1, 13 };

  char_T cv10[13];
  static const char_T cv11[13] = { 'm', 'o', 'n', 'e', 't', '_', 'h', 'a', 't',
    '.', 'j', 'p', 'g' };

  const mxArray *m_y;
  static const int32_T iv7[2] = { 1, 2 };

  char_T cv12[2];
  static const char_T cv13[2] = { 'a', '+' };

  const mxArray *b_fid = NULL;
  int32_T u_size[2];
  char_T u_data[70];
  const mxArray *n_y;
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
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Get data to transmit from file, output must be multiple of message size */
  /*  fileSource also adds EOF stubs to determine end of file */
  st.site = &emlrtRSI;

  /*  Get file to tx */
  /* data = fileSource2(filename); */
  /*  Write message to file */
  y = NULL;
  m0 = mxCreateCharArray(2, iv0);
  for (i = 0; i < 9; i++) {
    cv0[i] = cv1[i];
  }

  emlrtInitCharArrayR2013a(&st, 9, m0, cv0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = emlrtCreateString1('r');
  emlrtAssign(&b_y, m0);
  b_st.site = &hb_emlrtRSI;
  emlrtAssign(&fid, b_fopen(&b_st, y, b_y, &emlrtMCI));
  c_y = NULL;
  m0 = mxCreateDoubleScalar(0.0);
  emlrtAssign(&c_y, m0);
  d_y = NULL;
  m0 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&d_y, m0);
  b_st.site = &nb_emlrtRSI;
  b_fseek(&b_st, emlrtAlias(fid), c_y, d_y, &b_emlrtMCI);
  e_y = NULL;
  m0 = mxCreateDoubleScalar(0.0);
  emlrtAssign(&e_y, m0);
  f_y = NULL;
  m0 = mxCreateDoubleScalar(-1.0);
  emlrtAssign(&f_y, m0);
  b_st.site = &mb_emlrtRSI;
  b_fseek(&b_st, emlrtAlias(fid), e_y, f_y, &c_emlrtMCI);
  b_st.site = &lb_emlrtRSI;
  filelen = emlrt_marshallIn(&b_st, int32(&b_st, b_ftell(&b_st, emlrtAlias(fid),
    &d_emlrtMCI), &e_emlrtMCI), "int32");

  /*  Call ftell(f) which will return the length of the file in bytes */
  /*  (as current file position is at the end of the file). */
  b_st.site = &f_emlrtRSI;
  emlrtNonNegativeCheckFastR2012b(filelen, &emlrtDCI, &b_st);

  /* (1:int32(filelen)) */
  g_y = NULL;
  m0 = mxCreateCharArray(2, iv1);
  for (i = 0; i < 4; i++) {
    cv2[i] = cv3[i];
  }

  emxInit_char_T(&st, &data, 2, &c_emlrtRTEI, TRUE);
  emlrtInitCharArrayR2013a(&st, 4, m0, cv2);
  emlrtAssign(&g_y, m0);
  b_st.site = &kb_emlrtRSI;
  c_emlrt_marshallIn(&st, transpose(&b_st, b_char(&b_st, b_fread(&b_st,
    emlrtAlias(fid), g_y, &f_emlrtMCI), &g_emlrtMCI), &g_emlrtMCI), "transpose",
                     data);
  b_st.site = &eb_emlrtRSI;
  b_fclose(&b_st, emlrtAlias(fid), &h_emlrtMCI);

  /*  Pad data */
  b_st.site = &g_emlrtRSI;
  b_st.site = &g_emlrtRSI;
  if (b_mod(data->size[1]) > 0.0) {
    b_st.site = &h_emlrtRSI;
    b_st.site = &h_emlrtRSI;
    c_st.site = &h_emlrtRSI;
    n = 67.0 - b_mod(data->size[1]);
    c_st.site = &o_emlrtRSI;
    d_st.site = &t_emlrtRSI;
    if (n != muDoubleScalarFloor(n)) {
      b_n = FALSE;
    } else {
      b_n = TRUE;
    }

    guard2 = FALSE;
    if (b_n) {
      d_st.site = &t_emlrtRSI;
      if (2.147483647E+9 < n) {
        b0 = FALSE;
      } else {
        b0 = TRUE;
      }

      if (b0) {
        b1 = TRUE;
      } else {
        guard2 = TRUE;
      }
    } else {
      guard2 = TRUE;
    }

    if (guard2 == TRUE) {
      b1 = FALSE;
    }

    if (b1) {
    } else {
      h_y = NULL;
      m0 = mxCreateCharArray(2, iv2);
      for (i = 0; i < 28; i++) {
        cv4[i] = cv5[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 28, m0, cv4);
      emlrtAssign(&h_y, m0);
      i_y = NULL;
      m0 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
      *(int32_T *)mxGetData(m0) = MIN_int32_T;
      emlrtAssign(&i_y, m0);
      j_y = NULL;
      m0 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
      *(int32_T *)mxGetData(m0) = MAX_int32_T;
      emlrtAssign(&j_y, m0);
      d_st.site = &t_emlrtRSI;
      e_st.site = &jb_emlrtRSI;
      error(&d_st, message(&e_st, h_y, i_y, j_y, &i_emlrtMCI), &j_emlrtMCI);
    }

    d_st.site = &u_emlrtRSI;
    if (n <= 0.0) {
      a = 0.0;
    } else {
      a = n;
    }

    d_st.site = &u_emlrtRSI;
    if (2.147483647E+9 >= a) {
    } else {
      k_y = NULL;
      m0 = mxCreateCharArray(2, iv3);
      for (i = 0; i < 21; i++) {
        cv6[i] = cv7[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 21, m0, cv6);
      emlrtAssign(&k_y, m0);
      d_st.site = &u_emlrtRSI;
      e_st.site = &ib_emlrtRSI;
      error(&d_st, b_message(&e_st, k_y, &k_emlrtMCI), &l_emlrtMCI);
    }

    iv4[0] = 1;
    iv4[1] = (int32_T)n;
    for (i0 = 0; i0 < 2; i0++) {
      iv5[i0] = (int32_T)emlrtNonNegativeCheckFastR2012b(iv4[i0], &b_emlrtDCI,
        &b_st);
    }

    emxInit_char_T(&b_st, &r0, 2, &emlrtRTEI, TRUE);
    filelen = data->size[1] + 3;
    i = iv5[1];
    i0 = data->size[0] * data->size[1];
    data->size[1] = filelen + iv5[1];
    emxEnsureCapacity(&st, (emxArray__common *)data, i0, (int32_T)sizeof(char_T),
                      &emlrtRTEI);
    i0 = r0->size[0] * r0->size[1];
    r0->size[0] = 1;
    r0->size[1] = iv5[1];
    emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(char_T),
                      &emlrtRTEI);
    match_idx = iv5[1];
    for (i0 = 0; i0 < match_idx; i0++) {
      r0->data[r0->size[0] * i0] = '-';
    }

    for (i0 = 0; i0 < 3; i0++) {
      data->data[(filelen + i0) - 3] = cv8[i0];
    }

    for (i0 = 0; i0 < i; i0++) {
      data->data[filelen + i0] = r0->data[i0];
    }

    emxFree_char_T(&r0);
  } else {
    /* Add stubframe for EOF */
    filelen = data->size[1];
    i0 = data->size[0] * data->size[1];
    data->size[1] = filelen + 70;
    emxEnsureCapacity(&st, (emxArray__common *)data, i0, (int32_T)sizeof(char_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < 3; i0++) {
      data->data[filelen + i0] = cv8[i0];
    }

    for (i0 = 0; i0 < 67; i0++) {
      data->data[(filelen + i0) + 3] = '-';
    }
  }

  emlrtDestroyArray(&fid);
  st.site = &b_emlrtRSI;
  i0 = (int32_T)(((real_T)data->size[1] + 69.0) / 70.0);
  emlrtForLoopVectorCheckR2012b(1.0, 70.0, data->size[1], mxDOUBLE_CLASS, i0,
    &d_emlrtRTEI, sp);
  packet = 0;
  emxInit_char_T(sp, &b_data, 2, &emlrtRTEI, TRUE);
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (packet <= i0 - 1)) {
    b_packet = 1U + packet * 70U;

    /*  Pull out message */
    if (b_packet > b_packet - 4294967227U) {
      i1 = 1;
      i = 1;
    } else {
      i1 = data->size[1];
      i = (int32_T)b_packet;
      i1 = emlrtDynamicBoundsCheckFastR2012b(i, 1, i1, &emlrtBCI, sp);
      i = data->size[1];
      filelen = (int32_T)(b_packet - 4294967227U);
      i = emlrtDynamicBoundsCheckFastR2012b(filelen, 1, i, &emlrtBCI, sp) + 1;
    }

    filelen = i - i1;
    emlrtSizeEqCheck1DFastR2012b(70, filelen, &emlrtECI, sp);
    filelen = b_data->size[0] * b_data->size[1];
    b_data->size[0] = 1;
    b_data->size[1] = i - i1;
    emxEnsureCapacity(sp, (emxArray__common *)b_data, filelen, (int32_T)sizeof
                      (char_T), &emlrtRTEI);
    match_idx = i - i1;
    for (i = 0; i < match_idx; i++) {
      b_data->data[b_data->size[0] * i] = data->data[(i1 + i) - 1];
    }

    for (i1 = 0; i1 < 70; i1++) {
      c_message[i1] = b_data->data[i1];
    }

    st.site = &c_emlrtRSI;

    /*  fileSink: Takes in data originally created by the function 'fileSource' */
    /*  which assumes the data is arranged as chars.  The EOF is triggered by */
    /*  an addition of three characters END at the end of the message */
    done = 0;

    /*  File complete flag */
    /*  End of file? */
    b_st.site = &w_emlrtRSI;
    c_st.site = &x_emlrtRSI;
    match_idx = 0;
    for (i = 0; i < 65; i++) {
      filelen = 1;
      while ((filelen <= 6) && (c_message[(i + filelen) - 1] == cv9[filelen - 1]))
      {
        filelen++;
      }

      if (filelen > 6) {
        matches[match_idx] = (int8_T)(i + 1);
        match_idx++;
      }
    }

    d_st.site = &y_emlrtRSI;
    for (i = 0; i + 1 <= match_idx; i++) {
      match_out_data[i] = matches[i];
    }

    for (i1 = 0; i1 < match_idx; i1++) {
      val_data[i1] = match_out_data[i1];
    }

    /*  Strip message */
    guard1 = FALSE;
    if (!(match_idx == 0)) {
      if (1 > val_data[0] - 1) {
        match_idx = 0;
      } else {
        i1 = val_data[0] - 1;
        match_idx = emlrtDynamicBoundsCheckFastR2012b(i1, 1, 70, &b_emlrtBCI,
          &st);
      }

      for (i1 = 0; i1 < match_idx; i1++) {
        message_data[i1] = c_message[i1];
      }

      done = 1;

      /*  Stub frame found, skip writing to file (save some time) */
      if (val_data[0] == 1) {
      } else {
        /*  Frame full of data     */
        guard1 = TRUE;
      }
    } else {
      match_idx = 70;
      memcpy(&message_data[0], &c_message[0], 70U * sizeof(char_T));
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      /*  Write message to file */
      l_y = NULL;
      m0 = mxCreateCharArray(2, iv6);
      for (i = 0; i < 13; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&st, 13, m0, cv10);
      emlrtAssign(&l_y, m0);
      m_y = NULL;
      m0 = mxCreateCharArray(2, iv7);
      for (i = 0; i < 2; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&st, 2, m0, cv12);
      emlrtAssign(&m_y, m0);
      b_st.site = &gb_emlrtRSI;
      emlrtAssign(&b_fid, b_fopen(&b_st, l_y, m_y, &m_emlrtMCI));
      u_size[0] = 1;
      u_size[1] = match_idx;
      for (i1 = 0; i1 < match_idx; i1++) {
        u_data[i1] = message_data[i1];
      }

      n_y = NULL;
      m0 = mxCreateCharArray(2, u_size);
      emlrtInitCharArrayR2013a(&st, u_size[1], m0, (char_T *)&u_data);
      emlrtAssign(&n_y, m0);
      b_st.site = &fb_emlrtRSI;
      b_fwrite(&b_st, emlrtAlias(b_fid), n_y, &n_emlrtMCI);
      b_st.site = &db_emlrtRSI;
      b_fclose(&b_st, emlrtAlias(b_fid), &o_emlrtMCI);
    }

    emlrtDestroyArray(&b_fid);
    if (done != 0) {
      exitg1 = TRUE;
    } else {
      packet++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_char_T(&b_data);
  emxFree_char_T(&data);
  st.site = &d_emlrtRSI;
  b_fprintf(&st);
  st.site = &e_emlrtRSI;
  d_fprintf(&st);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (testFileSourceSink.c) */
