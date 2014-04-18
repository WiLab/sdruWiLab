/*
 * testPHYReceive_api.c
 *
 * Code generation for function 'testPHYReceive_api'
 *
 * C source code generated on: Thu Apr 17 22:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "testPHYReceive_api.h"
#include "generateOFDMSignal_TX2.h"
#include "testPHYReceive_mexutil.h"
#include <stdio.h>

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(ResolvedFunctionInfo u[727]);
static void b_info_helper(ResolvedFunctionInfo info[727]);
static void c_info_helper(ResolvedFunctionInfo info[727]);
static void d_info_helper(ResolvedFunctionInfo info[727]);
static void e_info_helper(ResolvedFunctionInfo info[727]);
static void f_info_helper(ResolvedFunctionInfo info[727]);
static void g_info_helper(ResolvedFunctionInfo info[727]);
static void h_info_helper(ResolvedFunctionInfo info[727]);
static void i_info_helper(ResolvedFunctionInfo info[727]);
static void info_helper(ResolvedFunctionInfo info[727]);
static void j_info_helper(ResolvedFunctionInfo info[727]);
static void k_info_helper(ResolvedFunctionInfo info[727]);
static void l_info_helper(ResolvedFunctionInfo info[727]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(ResolvedFunctionInfo u[727])
{
  const mxArray *y;
  int32_T iv131[1];
  int32_T i29;
  ResolvedFunctionInfo *r2;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m31;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  y = NULL;
  iv131[0] = 727;
  emlrtAssign(&y, mxCreateStructArray(1, iv131, 0, NULL));
  for (i29 = 0; i29 < 727; i29++) {
    r2 = &u[i29];
    b_u = r2->context;
    b_y = NULL;
    m31 = mxCreateString(b_u);
    emlrtAssign(&b_y, m31);
    emlrtAddField(y, b_y, "context", i29);
    b_u = r2->name;
    c_y = NULL;
    m31 = mxCreateString(b_u);
    emlrtAssign(&c_y, m31);
    emlrtAddField(y, c_y, "name", i29);
    b_u = r2->dominantType;
    d_y = NULL;
    m31 = mxCreateString(b_u);
    emlrtAssign(&d_y, m31);
    emlrtAddField(y, d_y, "dominantType", i29);
    b_u = r2->resolved;
    e_y = NULL;
    m31 = mxCreateString(b_u);
    emlrtAssign(&e_y, m31);
    emlrtAddField(y, e_y, "resolved", i29);
    c_u = r2->fileTimeLo;
    f_y = NULL;
    m31 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m31) = c_u;
    emlrtAssign(&f_y, m31);
    emlrtAddField(y, f_y, "fileTimeLo", i29);
    c_u = r2->fileTimeHi;
    g_y = NULL;
    m31 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m31) = c_u;
    emlrtAssign(&g_y, m31);
    emlrtAddField(y, g_y, "fileTimeHi", i29);
    c_u = r2->mFileTimeLo;
    h_y = NULL;
    m31 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m31) = c_u;
    emlrtAssign(&h_y, m31);
    emlrtAddField(y, h_y, "mFileTimeLo", i29);
    c_u = r2->mFileTimeHi;
    i_y = NULL;
    m31 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m31) = c_u;
    emlrtAssign(&i_y, m31);
    emlrtAddField(y, i_y, "mFileTimeHi", i29);
  }

  return y;
}

static void b_info_helper(ResolvedFunctionInfo info[727])
{
  info[64].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[64].name = "coder.internal.errorIf";
  info[64].dominantType = "char";
  info[64].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[64].fileTimeLo = 1334093538U;
  info[64].fileTimeHi = 0U;
  info[64].mFileTimeLo = 0U;
  info[64].mFileTimeHi = 0U;
  info[65].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[65].name = "mrdivide";
  info[65].dominantType = "double";
  info[65].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[65].fileTimeLo = 1357973148U;
  info[65].fileTimeHi = 0U;
  info[65].mFileTimeLo = 1319751566U;
  info[65].mFileTimeHi = 0U;
  info[66].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[66].name = "sqrt";
  info[66].dominantType = "double";
  info[66].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[66].fileTimeLo = 1343851986U;
  info[66].fileTimeHi = 0U;
  info[66].mFileTimeLo = 0U;
  info[66].mFileTimeHi = 0U;
  info[67].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[67].name = "eml_error";
  info[67].dominantType = "char";
  info[67].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[67].fileTimeLo = 1343851958U;
  info[67].fileTimeHi = 0U;
  info[67].mFileTimeLo = 0U;
  info[67].mFileTimeHi = 0U;
  info[68].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[68].name = "eml_scalar_sqrt";
  info[68].dominantType = "double";
  info[68].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m";
  info[68].fileTimeLo = 1286840338U;
  info[68].fileTimeHi = 0U;
  info[68].mFileTimeLo = 0U;
  info[68].mFileTimeHi = 0U;
  info[69].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[69].name = "mrdivide";
  info[69].dominantType = "double";
  info[69].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[69].fileTimeLo = 1357973148U;
  info[69].fileTimeHi = 0U;
  info[69].mFileTimeLo = 1319751566U;
  info[69].mFileTimeHi = 0U;
  info[70].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[70].name = "any";
  info[70].dominantType = "logical";
  info[70].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[70].fileTimeLo = 1286840434U;
  info[70].fileTimeHi = 0U;
  info[70].mFileTimeLo = 0U;
  info[70].mFileTimeHi = 0U;
  info[71].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[71].name = "eml_all_or_any";
  info[71].dominantType = "char";
  info[71].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[71].fileTimeLo = 1286840294U;
  info[71].fileTimeHi = 0U;
  info[71].mFileTimeLo = 0U;
  info[71].mFileTimeHi = 0U;
  info[72].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[72].name = "isequal";
  info[72].dominantType = "double";
  info[72].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[72].fileTimeLo = 1286840358U;
  info[72].fileTimeHi = 0U;
  info[72].mFileTimeLo = 0U;
  info[72].mFileTimeHi = 0U;
  info[73].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[73].name = "eml_isequal_core";
  info[73].dominantType = "double";
  info[73].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  info[73].fileTimeLo = 1286840386U;
  info[73].fileTimeHi = 0U;
  info[73].mFileTimeLo = 0U;
  info[73].mFileTimeHi = 0U;
  info[74].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[74].name = "eml_const_nonsingleton_dim";
  info[74].dominantType = "logical";
  info[74].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[74].fileTimeLo = 1286840296U;
  info[74].fileTimeHi = 0U;
  info[74].mFileTimeLo = 0U;
  info[74].mFileTimeHi = 0U;
  info[75].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[75].name = "isnan";
  info[75].dominantType = "logical";
  info[75].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[75].fileTimeLo = 1286840360U;
  info[75].fileTimeHi = 0U;
  info[75].mFileTimeLo = 0U;
  info[75].mFileTimeHi = 0U;
  info[76].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[76].name = "sum";
  info[76].dominantType = "double";
  info[76].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[76].fileTimeLo = 1314758212U;
  info[76].fileTimeHi = 0U;
  info[76].mFileTimeLo = 0U;
  info[76].mFileTimeHi = 0U;
  info[77].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[77].name = "isequal";
  info[77].dominantType = "double";
  info[77].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[77].fileTimeLo = 1286840358U;
  info[77].fileTimeHi = 0U;
  info[77].mFileTimeLo = 0U;
  info[77].mFileTimeHi = 0U;
  info[78].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[78].name = "eml_const_nonsingleton_dim";
  info[78].dominantType = "double";
  info[78].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[78].fileTimeLo = 1286840296U;
  info[78].fileTimeHi = 0U;
  info[78].mFileTimeLo = 0U;
  info[78].mFileTimeHi = 0U;
  info[79].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[79].name = "eml_scalar_eg";
  info[79].dominantType = "double";
  info[79].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[79].fileTimeLo = 1286840396U;
  info[79].fileTimeHi = 0U;
  info[79].mFileTimeLo = 0U;
  info[79].mFileTimeHi = 0U;
  info[80].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[80].name = "eml_index_class";
  info[80].dominantType = "";
  info[80].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[80].fileTimeLo = 1323192178U;
  info[80].fileTimeHi = 0U;
  info[80].mFileTimeLo = 0U;
  info[80].mFileTimeHi = 0U;
  info[81].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[81].name = "isnan";
  info[81].dominantType = "logical";
  info[81].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[81].fileTimeLo = 1286840360U;
  info[81].fileTimeHi = 0U;
  info[81].mFileTimeLo = 0U;
  info[81].mFileTimeHi = 0U;
  info[82].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[82].name = "colon";
  info[82].dominantType = "double";
  info[82].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[82].fileTimeLo = 1348213528U;
  info[82].fileTimeHi = 0U;
  info[82].mFileTimeLo = 0U;
  info[82].mFileTimeHi = 0U;
  info[83].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[83].name = "colon";
  info[83].dominantType = "double";
  info[83].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[83].fileTimeLo = 1348213528U;
  info[83].fileTimeHi = 0U;
  info[83].mFileTimeLo = 0U;
  info[83].mFileTimeHi = 0U;
  info[84].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[84].name = "isfinite";
  info[84].dominantType = "double";
  info[84].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[84].fileTimeLo = 1286840358U;
  info[84].fileTimeHi = 0U;
  info[84].mFileTimeLo = 0U;
  info[84].mFileTimeHi = 0U;
  info[85].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[85].name = "floor";
  info[85].dominantType = "double";
  info[85].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[85].fileTimeLo = 1343851980U;
  info[85].fileTimeHi = 0U;
  info[85].mFileTimeLo = 0U;
  info[85].mFileTimeHi = 0U;
  info[86].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!maxabs";
  info[86].name = "abs";
  info[86].dominantType = "double";
  info[86].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[86].fileTimeLo = 1343851966U;
  info[86].fileTimeHi = 0U;
  info[86].mFileTimeLo = 0U;
  info[86].mFileTimeHi = 0U;
  info[87].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[87].name = "eml_scalar_abs";
  info[87].dominantType = "double";
  info[87].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[87].fileTimeLo = 1286840312U;
  info[87].fileTimeHi = 0U;
  info[87].mFileTimeLo = 0U;
  info[87].mFileTimeHi = 0U;
  info[88].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon";
  info[88].name = "eps";
  info[88].dominantType = "double";
  info[88].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[88].fileTimeLo = 1326749596U;
  info[88].fileTimeHi = 0U;
  info[88].mFileTimeLo = 0U;
  info[88].mFileTimeHi = 0U;
  info[89].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[89].name = "eml_mantissa_nbits";
  info[89].dominantType = "char";
  info[89].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m";
  info[89].fileTimeLo = 1307672842U;
  info[89].fileTimeHi = 0U;
  info[89].mFileTimeLo = 0U;
  info[89].mFileTimeHi = 0U;
  info[90].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m";
  info[90].name = "eml_float_model";
  info[90].dominantType = "char";
  info[90].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[90].fileTimeLo = 1326749596U;
  info[90].fileTimeHi = 0U;
  info[90].mFileTimeLo = 0U;
  info[90].mFileTimeHi = 0U;
  info[91].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[91].name = "eml_realmin";
  info[91].dominantType = "char";
  info[91].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m";
  info[91].fileTimeLo = 1307672844U;
  info[91].fileTimeHi = 0U;
  info[91].mFileTimeLo = 0U;
  info[91].mFileTimeHi = 0U;
  info[92].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m";
  info[92].name = "eml_float_model";
  info[92].dominantType = "char";
  info[92].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[92].fileTimeLo = 1326749596U;
  info[92].fileTimeHi = 0U;
  info[92].mFileTimeLo = 0U;
  info[92].mFileTimeHi = 0U;
  info[93].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[93].name = "eml_realmin_denormal";
  info[93].dominantType = "char";
  info[93].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin_denormal.m";
  info[93].fileTimeLo = 1326749598U;
  info[93].fileTimeHi = 0U;
  info[93].mFileTimeLo = 0U;
  info[93].mFileTimeHi = 0U;
  info[94].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin_denormal.m";
  info[94].name = "eml_float_model";
  info[94].dominantType = "char";
  info[94].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[94].fileTimeLo = 1326749596U;
  info[94].fileTimeHi = 0U;
  info[94].mFileTimeLo = 0U;
  info[94].mFileTimeHi = 0U;
  info[95].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[95].name = "abs";
  info[95].dominantType = "double";
  info[95].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[95].fileTimeLo = 1343851966U;
  info[95].fileTimeHi = 0U;
  info[95].mFileTimeLo = 0U;
  info[95].mFileTimeHi = 0U;
  info[96].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[96].name = "isfinite";
  info[96].dominantType = "double";
  info[96].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[96].fileTimeLo = 1286840358U;
  info[96].fileTimeHi = 0U;
  info[96].mFileTimeLo = 0U;
  info[96].mFileTimeHi = 0U;
  info[97].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange";
  info[97].name = "realmax";
  info[97].dominantType = "char";
  info[97].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[97].fileTimeLo = 1307672842U;
  info[97].fileTimeHi = 0U;
  info[97].mFileTimeLo = 0U;
  info[97].mFileTimeHi = 0U;
  info[98].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[98].name = "mrdivide";
  info[98].dominantType = "double";
  info[98].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[98].fileTimeLo = 1357973148U;
  info[98].fileTimeHi = 0U;
  info[98].mFileTimeLo = 1319751566U;
  info[98].mFileTimeHi = 0U;
  info[99].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[99].name = "floor";
  info[99].dominantType = "double";
  info[99].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[99].fileTimeLo = 1343851980U;
  info[99].fileTimeHi = 0U;
  info[99].mFileTimeLo = 0U;
  info[99].mFileTimeHi = 0U;
  info[100].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[100].name = "eml_index_class";
  info[100].dominantType = "";
  info[100].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[100].fileTimeLo = 1323192178U;
  info[100].fileTimeHi = 0U;
  info[100].mFileTimeLo = 0U;
  info[100].mFileTimeHi = 0U;
  info[101].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon";
  info[101].name = "intmax";
  info[101].dominantType = "char";
  info[101].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[101].fileTimeLo = 1311276916U;
  info[101].fileTimeHi = 0U;
  info[101].mFileTimeLo = 0U;
  info[101].mFileTimeHi = 0U;
  info[102].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[102].name = "find";
  info[102].dominantType = "logical";
  info[102].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[102].fileTimeLo = 1303167806U;
  info[102].fileTimeHi = 0U;
  info[102].mFileTimeLo = 0U;
  info[102].mFileTimeHi = 0U;
  info[103].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[103].name = "eml_index_class";
  info[103].dominantType = "";
  info[103].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[103].fileTimeLo = 1323192178U;
  info[103].fileTimeHi = 0U;
  info[103].mFileTimeLo = 0U;
  info[103].mFileTimeHi = 0U;
  info[104].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[104].name = "eml_scalar_eg";
  info[104].dominantType = "logical";
  info[104].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[104].fileTimeLo = 1286840396U;
  info[104].fileTimeHi = 0U;
  info[104].mFileTimeLo = 0U;
  info[104].mFileTimeHi = 0U;
  info[105].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[105].name = "eml_int_forloop_overflow_check";
  info[105].dominantType = "";
  info[105].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[105].fileTimeLo = 1346531940U;
  info[105].fileTimeHi = 0U;
  info[105].mFileTimeLo = 0U;
  info[105].mFileTimeHi = 0U;
  info[106].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper";
  info[106].name = "intmax";
  info[106].dominantType = "char";
  info[106].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[106].fileTimeLo = 1311276916U;
  info[106].fileTimeHi = 0U;
  info[106].mFileTimeLo = 0U;
  info[106].mFileTimeHi = 0U;
  info[107].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find";
  info[107].name = "eml_index_plus";
  info[107].dominantType = "double";
  info[107].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[107].fileTimeLo = 1286840378U;
  info[107].fileTimeHi = 0U;
  info[107].mFileTimeLo = 0U;
  info[107].mFileTimeHi = 0U;
  info[108].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[108].name = "eml_index_class";
  info[108].dominantType = "";
  info[108].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[108].fileTimeLo = 1323192178U;
  info[108].fileTimeHi = 0U;
  info[108].mFileTimeLo = 0U;
  info[108].mFileTimeHi = 0U;
  info[109].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[109].name = "matlab.system.coder.SystemCore";
  info[109].dominantType = "";
  info[109].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[109].fileTimeLo = 1357971318U;
  info[109].fileTimeHi = 0U;
  info[109].mFileTimeLo = 0U;
  info[109].mFileTimeHi = 0U;
  info[110].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[110].name = "length";
  info[110].dominantType = "logical";
  info[110].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[110].fileTimeLo = 1303167806U;
  info[110].fileTimeHi = 0U;
  info[110].mFileTimeLo = 0U;
  info[110].mFileTimeHi = 0U;
  info[111].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[111].name = "ifftshift";
  info[111].dominantType = "double";
  info[111].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifftshift.m";
  info[111].fileTimeLo = 1286840294U;
  info[111].fileTimeHi = 0U;
  info[111].mFileTimeLo = 0U;
  info[111].mFileTimeHi = 0U;
  info[112].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifftshift.m";
  info[112].name = "eml_assert_valid_dim";
  info[112].dominantType = "double";
  info[112].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[112].fileTimeLo = 1286840294U;
  info[112].fileTimeHi = 0U;
  info[112].mFileTimeLo = 0U;
  info[112].mFileTimeHi = 0U;
  info[113].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[113].name = "eml_scalar_floor";
  info[113].dominantType = "double";
  info[113].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[113].fileTimeLo = 1286840326U;
  info[113].fileTimeHi = 0U;
  info[113].mFileTimeLo = 0U;
  info[113].mFileTimeHi = 0U;
  info[114].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[114].name = "eml_index_class";
  info[114].dominantType = "";
  info[114].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[114].fileTimeLo = 1323192178U;
  info[114].fileTimeHi = 0U;
  info[114].mFileTimeLo = 0U;
  info[114].mFileTimeHi = 0U;
  info[115].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[115].name = "intmax";
  info[115].dominantType = "char";
  info[115].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[115].fileTimeLo = 1311276916U;
  info[115].fileTimeHi = 0U;
  info[115].mFileTimeLo = 0U;
  info[115].mFileTimeHi = 0U;
  info[116].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifftshift.m";
  info[116].name = "eml_ifftshift";
  info[116].dominantType = "double";
  info[116].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m";
  info[116].fileTimeLo = 1286840378U;
  info[116].fileTimeHi = 0U;
  info[116].mFileTimeLo = 0U;
  info[116].mFileTimeHi = 0U;
  info[117].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m";
  info[117].name = "eml_index_rdivide";
  info[117].dominantType = "double";
  info[117].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[117].fileTimeLo = 1286840380U;
  info[117].fileTimeHi = 0U;
  info[117].mFileTimeLo = 0U;
  info[117].mFileTimeHi = 0U;
  info[118].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[118].name = "eml_index_class";
  info[118].dominantType = "";
  info[118].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[118].fileTimeLo = 1323192178U;
  info[118].fileTimeHi = 0U;
  info[118].mFileTimeLo = 0U;
  info[118].mFileTimeHi = 0U;
  info[119].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m";
  info[119].name = "eml_index_times";
  info[119].dominantType = "double";
  info[119].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[119].fileTimeLo = 1286840380U;
  info[119].fileTimeHi = 0U;
  info[119].mFileTimeLo = 0U;
  info[119].mFileTimeHi = 0U;
  info[120].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[120].name = "eml_index_class";
  info[120].dominantType = "";
  info[120].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[120].fileTimeLo = 1323192178U;
  info[120].fileTimeHi = 0U;
  info[120].mFileTimeLo = 0U;
  info[120].mFileTimeHi = 0U;
  info[121].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m";
  info[121].name = "eml_fftshift";
  info[121].dominantType = "double";
  info[121].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[121].fileTimeLo = 1286840376U;
  info[121].fileTimeHi = 0U;
  info[121].mFileTimeLo = 0U;
  info[121].mFileTimeHi = 0U;
  info[122].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[122].name = "eml_index_rdivide";
  info[122].dominantType = "double";
  info[122].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[122].fileTimeLo = 1286840380U;
  info[122].fileTimeHi = 0U;
  info[122].mFileTimeLo = 0U;
  info[122].mFileTimeHi = 0U;
  info[123].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[123].name = "eml_matrix_vstride";
  info[123].dominantType = "double";
  info[123].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[123].fileTimeLo = 1286840388U;
  info[123].fileTimeHi = 0U;
  info[123].mFileTimeLo = 0U;
  info[123].mFileTimeHi = 0U;
  info[124].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[124].name = "eml_index_minus";
  info[124].dominantType = "double";
  info[124].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[124].fileTimeLo = 1286840378U;
  info[124].fileTimeHi = 0U;
  info[124].mFileTimeLo = 0U;
  info[124].mFileTimeHi = 0U;
  info[125].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[125].name = "eml_index_class";
  info[125].dominantType = "";
  info[125].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[125].fileTimeLo = 1323192178U;
  info[125].fileTimeHi = 0U;
  info[125].mFileTimeLo = 0U;
  info[125].mFileTimeHi = 0U;
  info[126].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[126].name = "eml_size_prod";
  info[126].dominantType = "double";
  info[126].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[126].fileTimeLo = 1286840398U;
  info[126].fileTimeHi = 0U;
  info[126].mFileTimeLo = 0U;
  info[126].mFileTimeHi = 0U;
  info[127].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[127].name = "eml_index_class";
  info[127].dominantType = "";
  info[127].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[127].fileTimeLo = 1323192178U;
  info[127].fileTimeHi = 0U;
  info[127].mFileTimeLo = 0U;
  info[127].mFileTimeHi = 0U;
}

static void c_info_helper(ResolvedFunctionInfo info[727])
{
  info[128].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[128].name = "eml_matrix_npages";
  info[128].dominantType = "double";
  info[128].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[128].fileTimeLo = 1286840386U;
  info[128].fileTimeHi = 0U;
  info[128].mFileTimeLo = 0U;
  info[128].mFileTimeHi = 0U;
  info[129].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[129].name = "eml_index_plus";
  info[129].dominantType = "double";
  info[129].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[129].fileTimeLo = 1286840378U;
  info[129].fileTimeHi = 0U;
  info[129].mFileTimeLo = 0U;
  info[129].mFileTimeHi = 0U;
  info[130].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[130].name = "eml_index_class";
  info[130].dominantType = "";
  info[130].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[130].fileTimeLo = 1323192178U;
  info[130].fileTimeHi = 0U;
  info[130].mFileTimeLo = 0U;
  info[130].mFileTimeHi = 0U;
  info[131].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[131].name = "eml_size_prod";
  info[131].dominantType = "double";
  info[131].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[131].fileTimeLo = 1286840398U;
  info[131].fileTimeHi = 0U;
  info[131].mFileTimeLo = 0U;
  info[131].mFileTimeHi = 0U;
  info[132].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[132].name = "eml_index_times";
  info[132].dominantType = "double";
  info[132].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[132].fileTimeLo = 1286840380U;
  info[132].fileTimeHi = 0U;
  info[132].mFileTimeLo = 0U;
  info[132].mFileTimeHi = 0U;
  info[133].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[133].name = "eml_index_minus";
  info[133].dominantType = "double";
  info[133].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[133].fileTimeLo = 1286840378U;
  info[133].fileTimeHi = 0U;
  info[133].mFileTimeLo = 0U;
  info[133].mFileTimeHi = 0U;
  info[134].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[134].name = "eml_index_times";
  info[134].dominantType = "coder.internal.indexInt";
  info[134].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[134].fileTimeLo = 1286840380U;
  info[134].fileTimeHi = 0U;
  info[134].mFileTimeLo = 0U;
  info[134].mFileTimeHi = 0U;
  info[135].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[135].name = "eml_index_times";
  info[135].dominantType = "double";
  info[135].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[135].fileTimeLo = 1286840380U;
  info[135].fileTimeHi = 0U;
  info[135].mFileTimeLo = 0U;
  info[135].mFileTimeHi = 0U;
  info[136].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[136].name = "eml_index_class";
  info[136].dominantType = "";
  info[136].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[136].fileTimeLo = 1323192178U;
  info[136].fileTimeHi = 0U;
  info[136].mFileTimeLo = 0U;
  info[136].mFileTimeHi = 0U;
  info[137].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[137].name = "eml_index_plus";
  info[137].dominantType = "coder.internal.indexInt";
  info[137].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[137].fileTimeLo = 1286840378U;
  info[137].fileTimeHi = 0U;
  info[137].mFileTimeLo = 0U;
  info[137].mFileTimeHi = 0U;
  info[138].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[138].name = "eml_index_plus";
  info[138].dominantType = "double";
  info[138].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[138].fileTimeLo = 1286840378U;
  info[138].fileTimeHi = 0U;
  info[138].mFileTimeLo = 0U;
  info[138].mFileTimeHi = 0U;
  info[139].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[139].name = "eml_int_forloop_overflow_check";
  info[139].dominantType = "";
  info[139].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[139].fileTimeLo = 1346531940U;
  info[139].fileTimeHi = 0U;
  info[139].mFileTimeLo = 0U;
  info[139].mFileTimeHi = 0U;
  info[140].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[140].name = "ifft";
  info[140].dominantType = "double";
  info[140].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifft.m";
  info[140].fileTimeLo = 1286840292U;
  info[140].fileTimeHi = 0U;
  info[140].mFileTimeLo = 0U;
  info[140].mFileTimeHi = 0U;
  info[141].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifft.m";
  info[141].name = "eml_fft";
  info[141].dominantType = "char";
  info[141].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[141].fileTimeLo = 1286840374U;
  info[141].fileTimeHi = 0U;
  info[141].mFileTimeLo = 0U;
  info[141].mFileTimeHi = 0U;
  info[142].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[142].name = "eml_assert_valid_dim";
  info[142].dominantType = "double";
  info[142].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[142].fileTimeLo = 1286840294U;
  info[142].fileTimeHi = 0U;
  info[142].mFileTimeLo = 0U;
  info[142].mFileTimeHi = 0U;
  info[143].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[143].name = "eml_index_class";
  info[143].dominantType = "";
  info[143].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[143].fileTimeLo = 1323192178U;
  info[143].fileTimeHi = 0U;
  info[143].mFileTimeLo = 0U;
  info[143].mFileTimeHi = 0U;
  info[144].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[144].name = "eml_unsigned_class";
  info[144].dominantType = "char";
  info[144].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[144].fileTimeLo = 1323192180U;
  info[144].fileTimeHi = 0U;
  info[144].mFileTimeLo = 0U;
  info[144].mFileTimeHi = 0U;
  info[145].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[145].name = "eml_index_class";
  info[145].dominantType = "";
  info[145].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[145].fileTimeLo = 1323192178U;
  info[145].fileTimeHi = 0U;
  info[145].mFileTimeLo = 0U;
  info[145].mFileTimeHi = 0U;
  info[146].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[146].name = "eml_size_ispow2";
  info[146].dominantType = "coder.internal.indexInt";
  info[146].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[146].fileTimeLo = 1286840398U;
  info[146].fileTimeHi = 0U;
  info[146].mFileTimeLo = 0U;
  info[146].mFileTimeHi = 0U;
  info[147].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[147].name = "eml_unsigned_class";
  info[147].dominantType = "char";
  info[147].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[147].fileTimeLo = 1323192180U;
  info[147].fileTimeHi = 0U;
  info[147].mFileTimeLo = 0U;
  info[147].mFileTimeHi = 0U;
  info[148].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[148].name = "eml_scalar_eg";
  info[148].dominantType = "double";
  info[148].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[148].fileTimeLo = 1286840396U;
  info[148].fileTimeHi = 0U;
  info[148].mFileTimeLo = 0U;
  info[148].mFileTimeHi = 0U;
  info[149].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[149].name = "eml_index_class";
  info[149].dominantType = "";
  info[149].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[149].fileTimeLo = 1323192178U;
  info[149].fileTimeHi = 0U;
  info[149].mFileTimeLo = 0U;
  info[149].mFileTimeHi = 0U;
  info[150].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[150].name = "min";
  info[150].dominantType = "double";
  info[150].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[150].fileTimeLo = 1311276918U;
  info[150].fileTimeHi = 0U;
  info[150].mFileTimeLo = 0U;
  info[150].mFileTimeHi = 0U;
  info[151].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[151].name = "eml_min_or_max";
  info[151].dominantType = "char";
  info[151].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[151].fileTimeLo = 1334093090U;
  info[151].fileTimeHi = 0U;
  info[151].mFileTimeLo = 0U;
  info[151].mFileTimeHi = 0U;
  info[152].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[152].name = "eml_scalar_eg";
  info[152].dominantType = "double";
  info[152].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[152].fileTimeLo = 1286840396U;
  info[152].fileTimeHi = 0U;
  info[152].mFileTimeLo = 0U;
  info[152].mFileTimeHi = 0U;
  info[153].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[153].name = "eml_scalexp_alloc";
  info[153].dominantType = "double";
  info[153].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[153].fileTimeLo = 1352446460U;
  info[153].fileTimeHi = 0U;
  info[153].mFileTimeLo = 0U;
  info[153].mFileTimeHi = 0U;
  info[154].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[154].name = "eml_index_class";
  info[154].dominantType = "";
  info[154].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[154].fileTimeLo = 1323192178U;
  info[154].fileTimeHi = 0U;
  info[154].mFileTimeLo = 0U;
  info[154].mFileTimeHi = 0U;
  info[155].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[155].name = "eml_scalar_eg";
  info[155].dominantType = "double";
  info[155].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[155].fileTimeLo = 1286840396U;
  info[155].fileTimeHi = 0U;
  info[155].mFileTimeLo = 0U;
  info[155].mFileTimeHi = 0U;
  info[156].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[156].name = "eml_relop";
  info[156].dominantType = "function_handle";
  info[156].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[156].fileTimeLo = 1342472782U;
  info[156].fileTimeHi = 0U;
  info[156].mFileTimeLo = 0U;
  info[156].mFileTimeHi = 0U;
  info[157].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[157].name = "coder.internal.indexIntRelop";
  info[157].dominantType = "";
  info[157].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[157].fileTimeLo = 1326749922U;
  info[157].fileTimeHi = 0U;
  info[157].mFileTimeLo = 0U;
  info[157].mFileTimeHi = 0U;
  info[158].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntClass";
  info[158].name = "eml_float_model";
  info[158].dominantType = "char";
  info[158].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[158].fileTimeLo = 1326749596U;
  info[158].fileTimeHi = 0U;
  info[158].mFileTimeLo = 0U;
  info[158].mFileTimeHi = 0U;
  info[159].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass";
  info[159].name = "intmin";
  info[159].dominantType = "char";
  info[159].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[159].fileTimeLo = 1311276918U;
  info[159].fileTimeHi = 0U;
  info[159].mFileTimeLo = 0U;
  info[159].mFileTimeHi = 0U;
  info[160].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[160].name = "isnan";
  info[160].dominantType = "double";
  info[160].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[160].fileTimeLo = 1286840360U;
  info[160].fileTimeHi = 0U;
  info[160].mFileTimeLo = 0U;
  info[160].mFileTimeHi = 0U;
  info[161].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[161].name = "eml_index_minus";
  info[161].dominantType = "double";
  info[161].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[161].fileTimeLo = 1286840378U;
  info[161].fileTimeHi = 0U;
  info[161].mFileTimeLo = 0U;
  info[161].mFileTimeHi = 0U;
  info[162].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[162].name = "max";
  info[162].dominantType = "coder.internal.indexInt";
  info[162].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[162].fileTimeLo = 1311276916U;
  info[162].fileTimeHi = 0U;
  info[162].mFileTimeLo = 0U;
  info[162].mFileTimeHi = 0U;
  info[163].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[163].name = "eml_min_or_max";
  info[163].dominantType = "char";
  info[163].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[163].fileTimeLo = 1334093090U;
  info[163].fileTimeHi = 0U;
  info[163].mFileTimeLo = 0U;
  info[163].mFileTimeHi = 0U;
  info[164].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[164].name = "eml_scalar_eg";
  info[164].dominantType = "coder.internal.indexInt";
  info[164].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[164].fileTimeLo = 1286840396U;
  info[164].fileTimeHi = 0U;
  info[164].mFileTimeLo = 0U;
  info[164].mFileTimeHi = 0U;
  info[165].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[165].name = "eml_scalexp_alloc";
  info[165].dominantType = "coder.internal.indexInt";
  info[165].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[165].fileTimeLo = 1352446460U;
  info[165].fileTimeHi = 0U;
  info[165].mFileTimeLo = 0U;
  info[165].mFileTimeHi = 0U;
  info[166].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[166].name = "eml_scalar_eg";
  info[166].dominantType = "coder.internal.indexInt";
  info[166].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[166].fileTimeLo = 1286840396U;
  info[166].fileTimeHi = 0U;
  info[166].mFileTimeLo = 0U;
  info[166].mFileTimeHi = 0U;
  info[167].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[167].name = "eml_index_minus";
  info[167].dominantType = "coder.internal.indexInt";
  info[167].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[167].fileTimeLo = 1286840378U;
  info[167].fileTimeHi = 0U;
  info[167].mFileTimeLo = 0U;
  info[167].mFileTimeHi = 0U;
  info[168].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[168].name = "eml_index_rdivide";
  info[168].dominantType = "coder.internal.indexInt";
  info[168].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[168].fileTimeLo = 1286840380U;
  info[168].fileTimeHi = 0U;
  info[168].mFileTimeLo = 0U;
  info[168].mFileTimeHi = 0U;
  info[169].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[169].name = "eml_index_rdivide";
  info[169].dominantType = "double";
  info[169].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[169].fileTimeLo = 1286840380U;
  info[169].fileTimeHi = 0U;
  info[169].mFileTimeLo = 0U;
  info[169].mFileTimeHi = 0U;
  info[170].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[170].name = "eml_index_times";
  info[170].dominantType = "coder.internal.indexInt";
  info[170].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[170].fileTimeLo = 1286840380U;
  info[170].fileTimeHi = 0U;
  info[170].mFileTimeLo = 0U;
  info[170].mFileTimeHi = 0U;
  info[171].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[171].name = "mtimes";
  info[171].dominantType = "double";
  info[171].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[171].fileTimeLo = 1289541292U;
  info[171].fileTimeHi = 0U;
  info[171].mFileTimeLo = 0U;
  info[171].mFileTimeHi = 0U;
  info[172].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[172].name = "mrdivide";
  info[172].dominantType = "double";
  info[172].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[172].fileTimeLo = 1357973148U;
  info[172].fileTimeHi = 0U;
  info[172].mFileTimeLo = 1319751566U;
  info[172].mFileTimeHi = 0U;
  info[173].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[173].name = "eml_index_plus";
  info[173].dominantType = "double";
  info[173].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[173].fileTimeLo = 1286840378U;
  info[173].fileTimeHi = 0U;
  info[173].mFileTimeLo = 0U;
  info[173].mFileTimeHi = 0U;
  info[174].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[174].name = "eml_index_rdivide";
  info[174].dominantType = "double";
  info[174].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[174].fileTimeLo = 1286840380U;
  info[174].fileTimeHi = 0U;
  info[174].mFileTimeLo = 0U;
  info[174].mFileTimeHi = 0U;
  info[175].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[175].name = "eml_int_forloop_overflow_check";
  info[175].dominantType = "";
  info[175].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[175].fileTimeLo = 1346531940U;
  info[175].fileTimeHi = 0U;
  info[175].mFileTimeLo = 0U;
  info[175].mFileTimeHi = 0U;
  info[176].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[176].name = "mtimes";
  info[176].dominantType = "double";
  info[176].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[176].fileTimeLo = 1289541292U;
  info[176].fileTimeHi = 0U;
  info[176].mFileTimeLo = 0U;
  info[176].mFileTimeHi = 0U;
  info[177].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[177].name = "cos";
  info[177].dominantType = "double";
  info[177].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  info[177].fileTimeLo = 1343851972U;
  info[177].fileTimeHi = 0U;
  info[177].mFileTimeLo = 0U;
  info[177].mFileTimeHi = 0U;
  info[178].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  info[178].name = "eml_scalar_cos";
  info[178].dominantType = "double";
  info[178].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m";
  info[178].fileTimeLo = 1286840322U;
  info[178].fileTimeHi = 0U;
  info[178].mFileTimeLo = 0U;
  info[178].mFileTimeHi = 0U;
  info[179].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[179].name = "eml_index_minus";
  info[179].dominantType = "double";
  info[179].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[179].fileTimeLo = 1286840378U;
  info[179].fileTimeHi = 0U;
  info[179].mFileTimeLo = 0U;
  info[179].mFileTimeHi = 0U;
  info[180].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[180].name = "eml_index_minus";
  info[180].dominantType = "coder.internal.indexInt";
  info[180].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[180].fileTimeLo = 1286840378U;
  info[180].fileTimeHi = 0U;
  info[180].mFileTimeLo = 0U;
  info[180].mFileTimeHi = 0U;
  info[181].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table";
  info[181].name = "sin";
  info[181].dominantType = "double";
  info[181].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  info[181].fileTimeLo = 1343851986U;
  info[181].fileTimeHi = 0U;
  info[181].mFileTimeLo = 0U;
  info[181].mFileTimeHi = 0U;
  info[182].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  info[182].name = "eml_scalar_sin";
  info[182].dominantType = "double";
  info[182].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m";
  info[182].fileTimeLo = 1286840336U;
  info[182].fileTimeHi = 0U;
  info[182].mFileTimeLo = 0U;
  info[182].mFileTimeHi = 0U;
  info[183].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[183].name = "eml_index_class";
  info[183].dominantType = "";
  info[183].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[183].fileTimeLo = 1323192178U;
  info[183].fileTimeHi = 0U;
  info[183].mFileTimeLo = 0U;
  info[183].mFileTimeHi = 0U;
  info[184].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[184].name = "eml_index_times";
  info[184].dominantType = "double";
  info[184].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[184].fileTimeLo = 1286840380U;
  info[184].fileTimeHi = 0U;
  info[184].mFileTimeLo = 0U;
  info[184].mFileTimeHi = 0U;
  info[185].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[185].name = "eml_index_plus";
  info[185].dominantType = "double";
  info[185].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[185].fileTimeLo = 1286840378U;
  info[185].fileTimeHi = 0U;
  info[185].mFileTimeLo = 0U;
  info[185].mFileTimeHi = 0U;
  info[186].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[186].name = "eml_int_forloop_overflow_check";
  info[186].dominantType = "";
  info[186].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[186].fileTimeLo = 1346531940U;
  info[186].fileTimeHi = 0U;
  info[186].mFileTimeLo = 0U;
  info[186].mFileTimeHi = 0U;
  info[187].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table";
  info[187].name = "eml_index_minus";
  info[187].dominantType = "coder.internal.indexInt";
  info[187].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[187].fileTimeLo = 1286840378U;
  info[187].fileTimeHi = 0U;
  info[187].mFileTimeLo = 0U;
  info[187].mFileTimeHi = 0U;
  info[188].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!ucls";
  info[188].name = "eml_index_class";
  info[188].dominantType = "";
  info[188].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[188].fileTimeLo = 1323192178U;
  info[188].fileTimeHi = 0U;
  info[188].mFileTimeLo = 0U;
  info[188].mFileTimeHi = 0U;
  info[189].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!ucls";
  info[189].name = "eml_unsigned_class";
  info[189].dominantType = "char";
  info[189].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[189].fileTimeLo = 1323192180U;
  info[189].fileTimeHi = 0U;
  info[189].mFileTimeLo = 0U;
  info[189].mFileTimeHi = 0U;
  info[190].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[190].name = "eml_int_forloop_overflow_check";
  info[190].dominantType = "";
  info[190].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[190].fileTimeLo = 1346531940U;
  info[190].fileTimeHi = 0U;
  info[190].mFileTimeLo = 0U;
  info[190].mFileTimeHi = 0U;
  info[191].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[191].name = "eml_index_plus";
  info[191].dominantType = "double";
  info[191].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[191].fileTimeLo = 1286840378U;
  info[191].fileTimeHi = 0U;
  info[191].mFileTimeLo = 0U;
  info[191].mFileTimeHi = 0U;
}

static void d_info_helper(ResolvedFunctionInfo info[727])
{
  info[192].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!eml_fft_bitrevidx";
  info[192].name = "eml_index_class";
  info[192].dominantType = "";
  info[192].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[192].fileTimeLo = 1323192178U;
  info[192].fileTimeHi = 0U;
  info[192].mFileTimeLo = 0U;
  info[192].mFileTimeHi = 0U;
  info[193].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[193].name = "eml_index_plus";
  info[193].dominantType = "coder.internal.indexInt";
  info[193].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[193].fileTimeLo = 1286840378U;
  info[193].fileTimeHi = 0U;
  info[193].mFileTimeLo = 0U;
  info[193].mFileTimeHi = 0U;
  info[194].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig";
  info[194].name = "eml_index_times";
  info[194].dominantType = "double";
  info[194].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[194].fileTimeLo = 1286840380U;
  info[194].fileTimeHi = 0U;
  info[194].mFileTimeLo = 0U;
  info[194].mFileTimeHi = 0U;
  info[195].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[195].name = "cat";
  info[195].dominantType = "double";
  info[195].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[195].fileTimeLo = 1307672838U;
  info[195].fileTimeHi = 0U;
  info[195].mFileTimeLo = 0U;
  info[195].mFileTimeHi = 0U;
  info[196].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[196].name = "eml_assert_valid_dim";
  info[196].dominantType = "double";
  info[196].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[196].fileTimeLo = 1286840294U;
  info[196].fileTimeHi = 0U;
  info[196].mFileTimeLo = 0U;
  info[196].mFileTimeHi = 0U;
  info[197].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[197].name = "eml_index_class";
  info[197].dominantType = "";
  info[197].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[197].fileTimeLo = 1323192178U;
  info[197].fileTimeHi = 0U;
  info[197].mFileTimeLo = 0U;
  info[197].mFileTimeHi = 0U;
  info[198].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m!is_static_empty";
  info[198].name = "isequal";
  info[198].dominantType = "double";
  info[198].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[198].fileTimeLo = 1286840358U;
  info[198].fileTimeHi = 0U;
  info[198].mFileTimeLo = 0U;
  info[198].mFileTimeHi = 0U;
  info[199].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m!cattype";
  info[199].name = "eml_scalar_eg";
  info[199].dominantType = "double";
  info[199].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[199].fileTimeLo = 1286840396U;
  info[199].fileTimeHi = 0U;
  info[199].mFileTimeLo = 0U;
  info[199].mFileTimeHi = 0U;
  info[200].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[200].name = "eml_matrix_vstride";
  info[200].dominantType = "double";
  info[200].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[200].fileTimeLo = 1286840388U;
  info[200].fileTimeHi = 0U;
  info[200].mFileTimeLo = 0U;
  info[200].mFileTimeHi = 0U;
  info[201].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[201].name = "eml_size_prod";
  info[201].dominantType = "logical";
  info[201].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[201].fileTimeLo = 1286840398U;
  info[201].fileTimeHi = 0U;
  info[201].mFileTimeLo = 0U;
  info[201].mFileTimeHi = 0U;
  info[202].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[202].name = "eml_matrix_npages";
  info[202].dominantType = "double";
  info[202].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[202].fileTimeLo = 1286840386U;
  info[202].fileTimeHi = 0U;
  info[202].mFileTimeLo = 0U;
  info[202].mFileTimeHi = 0U;
  info[203].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[203].name = "eml_size_prod";
  info[203].dominantType = "logical";
  info[203].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[203].fileTimeLo = 1286840398U;
  info[203].fileTimeHi = 0U;
  info[203].mFileTimeLo = 0U;
  info[203].mFileTimeHi = 0U;
  info[204].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[204].name = "eml_index_minus";
  info[204].dominantType = "coder.internal.indexInt";
  info[204].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[204].fileTimeLo = 1286840378U;
  info[204].fileTimeHi = 0U;
  info[204].mFileTimeLo = 0U;
  info[204].mFileTimeHi = 0U;
  info[205].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[205].name = "eml_index_plus";
  info[205].dominantType = "coder.internal.indexInt";
  info[205].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[205].fileTimeLo = 1286840378U;
  info[205].fileTimeHi = 0U;
  info[205].mFileTimeLo = 0U;
  info[205].mFileTimeHi = 0U;
  info[206].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[206].name = "eml_index_times";
  info[206].dominantType = "coder.internal.indexInt";
  info[206].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[206].fileTimeLo = 1286840380U;
  info[206].fileTimeHi = 0U;
  info[206].mFileTimeLo = 0U;
  info[206].mFileTimeHi = 0U;
  info[207].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m";
  info[207].name = "eml_int_forloop_overflow_check";
  info[207].dominantType = "";
  info[207].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[207].fileTimeLo = 1346531940U;
  info[207].fileTimeHi = 0U;
  info[207].mFileTimeLo = 0U;
  info[207].mFileTimeHi = 0U;
  info[208].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[208].name = "mtimes";
  info[208].dominantType = "double";
  info[208].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[208].fileTimeLo = 1289541292U;
  info[208].fileTimeHi = 0U;
  info[208].mFileTimeLo = 0U;
  info[208].mFileTimeHi = 0U;
  info[209].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[209].name = "reshape";
  info[209].dominantType = "double";
  info[209].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[209].fileTimeLo = 1286840368U;
  info[209].fileTimeHi = 0U;
  info[209].mFileTimeLo = 0U;
  info[209].mFileTimeHi = 0U;
  info[210].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[210].name = "eml_index_class";
  info[210].dominantType = "";
  info[210].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[210].fileTimeLo = 1323192178U;
  info[210].fileTimeHi = 0U;
  info[210].mFileTimeLo = 0U;
  info[210].mFileTimeHi = 0U;
  info[211].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size";
  info[211].name = "eml_index_class";
  info[211].dominantType = "";
  info[211].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[211].fileTimeLo = 1323192178U;
  info[211].fileTimeHi = 0U;
  info[211].mFileTimeLo = 0U;
  info[211].mFileTimeHi = 0U;
  info[212].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size";
  info[212].name = "eml_assert_valid_size_arg";
  info[212].dominantType = "double";
  info[212].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[212].fileTimeLo = 1286840294U;
  info[212].fileTimeHi = 0U;
  info[212].mFileTimeLo = 0U;
  info[212].mFileTimeHi = 0U;
  info[213].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[213].name = "eml_scalar_eg";
  info[213].dominantType = "double";
  info[213].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[213].fileTimeLo = 1286840396U;
  info[213].fileTimeHi = 0U;
  info[213].mFileTimeLo = 0U;
  info[213].mFileTimeHi = 0U;
  info[214].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[214].name = "eml_int_forloop_overflow_check";
  info[214].dominantType = "";
  info[214].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[214].fileTimeLo = 1346531940U;
  info[214].fileTimeHi = 0U;
  info[214].mFileTimeLo = 0U;
  info[214].mFileTimeHi = 0U;
  info[215].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[215].name = "mtimes";
  info[215].dominantType = "double";
  info[215].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[215].fileTimeLo = 1289541292U;
  info[215].fileTimeHi = 0U;
  info[215].mFileTimeLo = 0U;
  info[215].mFileTimeHi = 0U;
  info[216].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[216].name = "OFDMletters2bits";
  info[216].dominantType = "char";
  info[216].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m";
  info[216].fileTimeLo = 1397752622U;
  info[216].fileTimeHi = 0U;
  info[216].mFileTimeLo = 0U;
  info[216].mFileTimeHi = 0U;
  info[217].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m";
  info[217].name = "length";
  info[217].dominantType = "char";
  info[217].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[217].fileTimeLo = 1303167806U;
  info[217].fileTimeHi = 0U;
  info[217].mFileTimeLo = 0U;
  info[217].mFileTimeHi = 0U;
  info[218].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m";
  info[218].name = "dec2bin";
  info[218].dominantType = "char";
  info[218].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m";
  info[218].fileTimeLo = 1346531990U;
  info[218].fileTimeHi = 0U;
  info[218].mFileTimeLo = 0U;
  info[218].mFileTimeHi = 0U;
  info[219].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m";
  info[219].name = "eml_index_class";
  info[219].dominantType = "";
  info[219].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[219].fileTimeLo = 1323192178U;
  info[219].fileTimeHi = 0U;
  info[219].mFileTimeLo = 0U;
  info[219].mFileTimeHi = 0U;
  info[220].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin";
  info[220].name = "eml_index_class";
  info[220].dominantType = "";
  info[220].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[220].fileTimeLo = 1323192178U;
  info[220].fileTimeHi = 0U;
  info[220].mFileTimeLo = 0U;
  info[220].mFileTimeHi = 0U;
  info[221].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!char_nbits";
  info[221].name = "eml_index_class";
  info[221].dominantType = "";
  info[221].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[221].fileTimeLo = 1323192178U;
  info[221].fileTimeHi = 0U;
  info[221].mFileTimeLo = 0U;
  info[221].mFileTimeHi = 0U;
  info[222].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin";
  info[222].name = "eml_int_forloop_overflow_check";
  info[222].dominantType = "";
  info[222].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[222].fileTimeLo = 1346531940U;
  info[222].fileTimeHi = 0U;
  info[222].mFileTimeLo = 0U;
  info[222].mFileTimeHi = 0U;
  info[223].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin";
  info[223].name = "bitget";
  info[223].dominantType = "uint16";
  info[223].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[223].fileTimeLo = 1344493636U;
  info[223].fileTimeHi = 0U;
  info[223].mFileTimeLo = 0U;
  info[223].mFileTimeHi = 0U;
  info[224].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[224].name = "eml_scalar_eg";
  info[224].dominantType = "uint16";
  info[224].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[224].fileTimeLo = 1286840396U;
  info[224].fileTimeHi = 0U;
  info[224].mFileTimeLo = 0U;
  info[224].mFileTimeHi = 0U;
  info[225].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[225].name = "eml_scalexp_alloc";
  info[225].dominantType = "uint16";
  info[225].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[225].fileTimeLo = 1352446460U;
  info[225].fileTimeHi = 0U;
  info[225].mFileTimeLo = 0U;
  info[225].mFileTimeHi = 0U;
  info[226].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[226].name = "eml_int_nbits";
  info[226].dominantType = "char";
  info[226].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_nbits.m";
  info[226].fileTimeLo = 1323192178U;
  info[226].fileTimeHi = 0U;
  info[226].mFileTimeLo = 0U;
  info[226].mFileTimeHi = 0U;
  info[227].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[227].name = "floor";
  info[227].dominantType = "coder.internal.indexInt";
  info[227].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[227].fileTimeLo = 1343851980U;
  info[227].fileTimeHi = 0U;
  info[227].mFileTimeLo = 0U;
  info[227].mFileTimeHi = 0U;
  info[228].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[228].name = "eml_scalar_floor";
  info[228].dominantType = "coder.internal.indexInt";
  info[228].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[228].fileTimeLo = 1286840326U;
  info[228].fileTimeHi = 0U;
  info[228].mFileTimeLo = 0U;
  info[228].mFileTimeHi = 0U;
  info[229].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m";
  info[229].name = "eml_error";
  info[229].dominantType = "uint8";
  info[229].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[229].fileTimeLo = 1343851958U;
  info[229].fileTimeHi = 0U;
  info[229].mFileTimeLo = 0U;
  info[229].mFileTimeHi = 0U;
  info[230].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin";
  info[230].name = "eml_index_minus";
  info[230].dominantType = "coder.internal.indexInt";
  info[230].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[230].fileTimeLo = 1286840378U;
  info[230].fileTimeHi = 0U;
  info[230].mFileTimeLo = 0U;
  info[230].mFileTimeHi = 0U;
  info[231].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin";
  info[231].name = "eml_index_plus";
  info[231].dominantType = "double";
  info[231].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[231].fileTimeLo = 1286840378U;
  info[231].fileTimeHi = 0U;
  info[231].mFileTimeLo = 0U;
  info[231].mFileTimeHi = 0U;
  info[232].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim";
  info[232].name = "eml_index_class";
  info[232].dominantType = "";
  info[232].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[232].fileTimeLo = 1323192178U;
  info[232].fileTimeHi = 0U;
  info[232].mFileTimeLo = 0U;
  info[232].mFileTimeHi = 0U;
  info[233].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim";
  info[233].name = "eml_index_minus";
  info[233].dominantType = "coder.internal.indexInt";
  info[233].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[233].fileTimeLo = 1286840378U;
  info[233].fileTimeHi = 0U;
  info[233].mFileTimeLo = 0U;
  info[233].mFileTimeHi = 0U;
  info[234].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim";
  info[234].name = "eml_index_plus";
  info[234].dominantType = "double";
  info[234].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[234].fileTimeLo = 1286840378U;
  info[234].fileTimeHi = 0U;
  info[234].mFileTimeLo = 0U;
  info[234].mFileTimeHi = 0U;
  info[235].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim";
  info[235].name = "eml_int_forloop_overflow_check";
  info[235].dominantType = "";
  info[235].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[235].fileTimeLo = 1346531940U;
  info[235].fileTimeHi = 0U;
  info[235].mFileTimeLo = 0U;
  info[235].mFileTimeHi = 0U;
  info[236].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[236].name = "reshape";
  info[236].dominantType = "double";
  info[236].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[236].fileTimeLo = 1286840368U;
  info[236].fileTimeHi = 0U;
  info[236].mFileTimeLo = 0U;
  info[236].mFileTimeHi = 0U;
  info[237].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!varargin_nempty";
  info[237].name = "eml_index_class";
  info[237].dominantType = "";
  info[237].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[237].fileTimeLo = 1323192178U;
  info[237].fileTimeHi = 0U;
  info[237].mFileTimeLo = 0U;
  info[237].mFileTimeHi = 0U;
  info[238].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size";
  info[238].name = "eml_index_prod";
  info[238].dominantType = "coder.internal.indexInt";
  info[238].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[238].fileTimeLo = 1286840380U;
  info[238].fileTimeHi = 0U;
  info[238].mFileTimeLo = 0U;
  info[238].mFileTimeHi = 0U;
  info[239].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[239].name = "eml_index_class";
  info[239].dominantType = "";
  info[239].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[239].fileTimeLo = 1323192178U;
  info[239].fileTimeHi = 0U;
  info[239].mFileTimeLo = 0U;
  info[239].mFileTimeHi = 0U;
  info[240].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[240].name = "eml_int_forloop_overflow_check";
  info[240].dominantType = "";
  info[240].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[240].fileTimeLo = 1346531940U;
  info[240].fileTimeHi = 0U;
  info[240].mFileTimeLo = 0U;
  info[240].mFileTimeHi = 0U;
  info[241].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[241].name = "eml_index_times";
  info[241].dominantType = "coder.internal.indexInt";
  info[241].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[241].fileTimeLo = 1286840380U;
  info[241].fileTimeHi = 0U;
  info[241].mFileTimeLo = 0U;
  info[241].mFileTimeHi = 0U;
  info[242].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[242].name = "matlab.system.coder.System";
  info[242].dominantType = "unknown";
  info[242].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[242].fileTimeLo = 1357971318U;
  info[242].fileTimeHi = 0U;
  info[242].mFileTimeLo = 0U;
  info[242].mFileTimeHi = 0U;
  info[243].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[243].name = "matlab.system.mixin.coder.Nondirect";
  info[243].dominantType = "unknown";
  info[243].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[243].fileTimeLo = 1357971320U;
  info[243].fileTimeHi = 0U;
  info[243].mFileTimeLo = 0U;
  info[243].mFileTimeHi = 0U;
  info[244].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[244].name = "matlab.system.mixin.Nondirect";
  info[244].dominantType = "unknown";
  info[244].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/Nondirect.p";
  info[244].fileTimeLo = 1357962382U;
  info[244].fileTimeHi = 0U;
  info[244].mFileTimeLo = 0U;
  info[244].mFileTimeHi = 0U;
  info[245].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[245].name = "commcodegen.CRCGenerator";
  info[245].dominantType = "int32";
  info[245].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[245].fileTimeLo = 1358405060U;
  info[245].fileTimeHi = 0U;
  info[245].mFileTimeLo = 0U;
  info[245].mFileTimeHi = 0U;
  info[246].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[246].name = "createsystemobjectv2";
  info[246].dominantType = "";
  info[246].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[246].fileTimeLo = 1343851958U;
  info[246].fileTimeHi = 0U;
  info[246].mFileTimeLo = 0U;
  info[246].mFileTimeHi = 0U;
  info[247].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[247].name = "length";
  info[247].dominantType = "cell";
  info[247].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[247].fileTimeLo = 1303167806U;
  info[247].fileTimeHi = 0U;
  info[247].mFileTimeLo = 0U;
  info[247].mFileTimeHi = 0U;
  info[248].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[248].name = "matlab.system.isSystemObject";
  info[248].dominantType = "double";
  info[248].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p";
  info[248].fileTimeLo = 1357962380U;
  info[248].fileTimeHi = 0U;
  info[248].mFileTimeLo = 0U;
  info[248].mFileTimeHi = 0U;
  info[249].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[249].name = "matlab.system.coder.System";
  info[249].dominantType = "";
  info[249].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[249].fileTimeLo = 1357971318U;
  info[249].fileTimeHi = 0U;
  info[249].mFileTimeLo = 0U;
  info[249].mFileTimeHi = 0U;
  info[250].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[250].name = "matlab.system.setProp";
  info[250].dominantType = "commcodegen.CRCGenerator";
  info[250].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[250].fileTimeLo = 1357962380U;
  info[250].fileTimeHi = 0U;
  info[250].mFileTimeLo = 0U;
  info[250].mFileTimeHi = 0U;
  info[251].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[251].name = "matlab.system.pvParse";
  info[251].dominantType = "commcodegen.CRCGenerator";
  info[251].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[251].fileTimeLo = 1357962380U;
  info[251].fileTimeHi = 0U;
  info[251].mFileTimeLo = 0U;
  info[251].mFileTimeHi = 0U;
  info[252].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[252].name = "commcodegen.CRCGenerator";
  info[252].dominantType = "";
  info[252].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[252].fileTimeLo = 1358405060U;
  info[252].fileTimeHi = 0U;
  info[252].mFileTimeLo = 0U;
  info[252].mFileTimeHi = 0U;
  info[253].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[253].name = "matlab.system.coder.SystemProp";
  info[253].dominantType = "";
  info[253].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[253].fileTimeLo = 1357971320U;
  info[253].fileTimeHi = 0U;
  info[253].mFileTimeLo = 0U;
  info[253].mFileTimeHi = 0U;
  info[254].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[254].name = "get";
  info[254].dominantType = "comm.CRCGenerator";
  info[254].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[254].fileTimeLo = 1349900344U;
  info[254].fileTimeHi = 0U;
  info[254].mFileTimeLo = 0U;
  info[254].mFileTimeHi = 0U;
  info[255].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[255].name = "getNumInputs";
  info[255].dominantType = "comm.CRCGenerator";
  info[255].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[255].fileTimeLo = 1349900348U;
  info[255].fileTimeHi = 0U;
  info[255].mFileTimeLo = 0U;
  info[255].mFileTimeHi = 0U;
}

static void e_info_helper(ResolvedFunctionInfo info[727])
{
  info[256].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[256].name = "checkSystemObjectInput";
  info[256].dominantType = "comm.CRCGenerator";
  info[256].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[256].fileTimeLo = 1349900346U;
  info[256].fileTimeHi = 0U;
  info[256].mFileTimeLo = 0U;
  info[256].mFileTimeHi = 0U;
  info[257].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[257].name = "setup";
  info[257].dominantType = "comm.CRCGenerator";
  info[257].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[257].fileTimeLo = 1349900350U;
  info[257].fileTimeHi = 0U;
  info[257].mFileTimeLo = 0U;
  info[257].mFileTimeHi = 0U;
  info[258].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[258].name = "checkSystemObjectInput";
  info[258].dominantType = "comm.CRCGenerator";
  info[258].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[258].fileTimeLo = 1349900346U;
  info[258].fileTimeHi = 0U;
  info[258].mFileTimeLo = 0U;
  info[258].mFileTimeHi = 0U;
  info[259].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[259].name = "reset";
  info[259].dominantType = "comm.CRCGenerator";
  info[259].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[259].fileTimeLo = 1349900350U;
  info[259].fileTimeHi = 0U;
  info[259].mFileTimeLo = 0U;
  info[259].mFileTimeHi = 0U;
  info[260].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[260].name = "checkSystemObjectInput";
  info[260].dominantType = "comm.CRCGenerator";
  info[260].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[260].fileTimeLo = 1349900346U;
  info[260].fileTimeHi = 0U;
  info[260].mFileTimeLo = 0U;
  info[260].mFileTimeHi = 0U;
  info[261].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[261].name = "getNumOutputs";
  info[261].dominantType = "comm.CRCGenerator";
  info[261].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[261].fileTimeLo = 1349900348U;
  info[261].fileTimeHi = 0U;
  info[261].mFileTimeLo = 0U;
  info[261].mFileTimeHi = 0U;
  info[262].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[262].name = "checkSystemObjectInput";
  info[262].dominantType = "comm.CRCGenerator";
  info[262].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[262].fileTimeLo = 1349900346U;
  info[262].fileTimeHi = 0U;
  info[262].mFileTimeLo = 0U;
  info[262].mFileTimeHi = 0U;
  info[263].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[263].name = "output";
  info[263].dominantType = "comm.CRCGenerator";
  info[263].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[263].fileTimeLo = 1349900348U;
  info[263].fileTimeHi = 0U;
  info[263].mFileTimeLo = 0U;
  info[263].mFileTimeHi = 0U;
  info[264].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[264].name = "checkSystemObjectInput";
  info[264].dominantType = "comm.CRCGenerator";
  info[264].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[264].fileTimeLo = 1349900346U;
  info[264].fileTimeHi = 0U;
  info[264].mFileTimeLo = 0U;
  info[264].mFileTimeHi = 0U;
  info[265].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[265].name = "update";
  info[265].dominantType = "comm.CRCGenerator";
  info[265].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[265].fileTimeLo = 1349900352U;
  info[265].fileTimeHi = 0U;
  info[265].mFileTimeLo = 0U;
  info[265].mFileTimeHi = 0U;
  info[266].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[266].name = "checkSystemObjectInput";
  info[266].dominantType = "comm.CRCGenerator";
  info[266].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[266].fileTimeLo = 1349900346U;
  info[266].fileTimeHi = 0U;
  info[266].mFileTimeLo = 0U;
  info[266].mFileTimeHi = 0U;
  info[267].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[267].name = "matlab.system.coder.System";
  info[267].dominantType = "unknown";
  info[267].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[267].fileTimeLo = 1357971318U;
  info[267].fileTimeHi = 0U;
  info[267].mFileTimeLo = 0U;
  info[267].mFileTimeHi = 0U;
  info[268].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[268].name = "matlab.system.mixin.coder.Nondirect";
  info[268].dominantType = "unknown";
  info[268].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[268].fileTimeLo = 1357971320U;
  info[268].fileTimeHi = 0U;
  info[268].mFileTimeLo = 0U;
  info[268].mFileTimeHi = 0U;
  info[269].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[269].name = "commcodegen.BPSKModulator";
  info[269].dominantType = "int32";
  info[269].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[269].fileTimeLo = 1358405060U;
  info[269].fileTimeHi = 0U;
  info[269].mFileTimeLo = 0U;
  info[269].mFileTimeHi = 0U;
  info[270].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[270].name = "createsystemobjectv2";
  info[270].dominantType = "";
  info[270].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[270].fileTimeLo = 1343851958U;
  info[270].fileTimeHi = 0U;
  info[270].mFileTimeLo = 0U;
  info[270].mFileTimeHi = 0U;
  info[271].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[271].name = "commcodegen.BPSKModulator";
  info[271].dominantType = "";
  info[271].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[271].fileTimeLo = 1358405060U;
  info[271].fileTimeHi = 0U;
  info[271].mFileTimeLo = 0U;
  info[271].mFileTimeHi = 0U;
  info[272].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[272].name = "matlab.system.coder.SystemProp";
  info[272].dominantType = "";
  info[272].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[272].fileTimeLo = 1357971320U;
  info[272].fileTimeHi = 0U;
  info[272].mFileTimeLo = 0U;
  info[272].mFileTimeHi = 0U;
  info[273].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[273].name = "get";
  info[273].dominantType = "comm.BPSKModulator";
  info[273].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[273].fileTimeLo = 1349900344U;
  info[273].fileTimeHi = 0U;
  info[273].mFileTimeLo = 0U;
  info[273].mFileTimeHi = 0U;
  info[274].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[274].name = "getNumInputs";
  info[274].dominantType = "comm.BPSKModulator";
  info[274].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[274].fileTimeLo = 1349900348U;
  info[274].fileTimeHi = 0U;
  info[274].mFileTimeLo = 0U;
  info[274].mFileTimeHi = 0U;
  info[275].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[275].name = "checkSystemObjectInput";
  info[275].dominantType = "comm.BPSKModulator";
  info[275].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[275].fileTimeLo = 1349900346U;
  info[275].fileTimeHi = 0U;
  info[275].mFileTimeLo = 0U;
  info[275].mFileTimeHi = 0U;
  info[276].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[276].name = "setup";
  info[276].dominantType = "comm.BPSKModulator";
  info[276].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[276].fileTimeLo = 1349900350U;
  info[276].fileTimeHi = 0U;
  info[276].mFileTimeLo = 0U;
  info[276].mFileTimeHi = 0U;
  info[277].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[277].name = "checkSystemObjectInput";
  info[277].dominantType = "comm.BPSKModulator";
  info[277].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[277].fileTimeLo = 1349900346U;
  info[277].fileTimeHi = 0U;
  info[277].mFileTimeLo = 0U;
  info[277].mFileTimeHi = 0U;
  info[278].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[278].name = "reset";
  info[278].dominantType = "comm.BPSKModulator";
  info[278].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[278].fileTimeLo = 1349900350U;
  info[278].fileTimeHi = 0U;
  info[278].mFileTimeLo = 0U;
  info[278].mFileTimeHi = 0U;
  info[279].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[279].name = "checkSystemObjectInput";
  info[279].dominantType = "comm.BPSKModulator";
  info[279].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[279].fileTimeLo = 1349900346U;
  info[279].fileTimeHi = 0U;
  info[279].mFileTimeLo = 0U;
  info[279].mFileTimeHi = 0U;
  info[280].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[280].name = "getNumOutputs";
  info[280].dominantType = "comm.BPSKModulator";
  info[280].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[280].fileTimeLo = 1349900348U;
  info[280].fileTimeHi = 0U;
  info[280].mFileTimeLo = 0U;
  info[280].mFileTimeHi = 0U;
  info[281].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[281].name = "checkSystemObjectInput";
  info[281].dominantType = "comm.BPSKModulator";
  info[281].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[281].fileTimeLo = 1349900346U;
  info[281].fileTimeHi = 0U;
  info[281].mFileTimeLo = 0U;
  info[281].mFileTimeHi = 0U;
  info[282].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[282].name = "output";
  info[282].dominantType = "comm.BPSKModulator";
  info[282].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[282].fileTimeLo = 1349900348U;
  info[282].fileTimeHi = 0U;
  info[282].mFileTimeLo = 0U;
  info[282].mFileTimeHi = 0U;
  info[283].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[283].name = "checkSystemObjectInput";
  info[283].dominantType = "comm.BPSKModulator";
  info[283].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[283].fileTimeLo = 1349900346U;
  info[283].fileTimeHi = 0U;
  info[283].mFileTimeLo = 0U;
  info[283].mFileTimeHi = 0U;
  info[284].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[284].name = "update";
  info[284].dominantType = "comm.BPSKModulator";
  info[284].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[284].fileTimeLo = 1349900352U;
  info[284].fileTimeHi = 0U;
  info[284].mFileTimeLo = 0U;
  info[284].mFileTimeHi = 0U;
  info[285].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[285].name = "checkSystemObjectInput";
  info[285].dominantType = "comm.BPSKModulator";
  info[285].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[285].fileTimeLo = 1349900346U;
  info[285].fileTimeHi = 0U;
  info[285].mFileTimeLo = 0U;
  info[285].mFileTimeHi = 0U;
  info[286].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[286].name = "length";
  info[286].dominantType = "double";
  info[286].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[286].fileTimeLo = 1303167806U;
  info[286].fileTimeHi = 0U;
  info[286].mFileTimeLo = 0U;
  info[286].mFileTimeHi = 0U;
  info[287].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[287].name = "mod";
  info[287].dominantType = "double";
  info[287].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[287].fileTimeLo = 1343851982U;
  info[287].fileTimeHi = 0U;
  info[287].mFileTimeLo = 0U;
  info[287].mFileTimeHi = 0U;
  info[288].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[288].name = "eml_scalar_eg";
  info[288].dominantType = "double";
  info[288].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[288].fileTimeLo = 1286840396U;
  info[288].fileTimeHi = 0U;
  info[288].mFileTimeLo = 0U;
  info[288].mFileTimeHi = 0U;
  info[289].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[289].name = "eml_scalexp_alloc";
  info[289].dominantType = "double";
  info[289].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[289].fileTimeLo = 1352446460U;
  info[289].fileTimeHi = 0U;
  info[289].mFileTimeLo = 0U;
  info[289].mFileTimeHi = 0U;
  info[290].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[290].name = "eml_scalar_eg";
  info[290].dominantType = "double";
  info[290].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[290].fileTimeLo = 1286840396U;
  info[290].fileTimeHi = 0U;
  info[290].mFileTimeLo = 0U;
  info[290].mFileTimeHi = 0U;
  info[291].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[291].name = "eml_scalar_floor";
  info[291].dominantType = "double";
  info[291].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[291].fileTimeLo = 1286840326U;
  info[291].fileTimeHi = 0U;
  info[291].mFileTimeLo = 0U;
  info[291].mFileTimeHi = 0U;
  info[292].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[292].name = "eml_scalar_round";
  info[292].dominantType = "double";
  info[292].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m";
  info[292].fileTimeLo = 1307672838U;
  info[292].fileTimeHi = 0U;
  info[292].mFileTimeLo = 0U;
  info[292].mFileTimeHi = 0U;
  info[293].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[293].name = "eml_scalar_abs";
  info[293].dominantType = "double";
  info[293].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[293].fileTimeLo = 1286840312U;
  info[293].fileTimeHi = 0U;
  info[293].mFileTimeLo = 0U;
  info[293].mFileTimeHi = 0U;
  info[294].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[294].name = "eps";
  info[294].dominantType = "char";
  info[294].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[294].fileTimeLo = 1326749596U;
  info[294].fileTimeHi = 0U;
  info[294].mFileTimeLo = 0U;
  info[294].mFileTimeHi = 0U;
  info[295].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[295].name = "eml_is_float_class";
  info[295].dominantType = "char";
  info[295].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[295].fileTimeLo = 1286840382U;
  info[295].fileTimeHi = 0U;
  info[295].mFileTimeLo = 0U;
  info[295].mFileTimeHi = 0U;
  info[296].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[296].name = "eml_eps";
  info[296].dominantType = "char";
  info[296].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[296].fileTimeLo = 1326749596U;
  info[296].fileTimeHi = 0U;
  info[296].mFileTimeLo = 0U;
  info[296].mFileTimeHi = 0U;
  info[297].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[297].name = "eml_float_model";
  info[297].dominantType = "char";
  info[297].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[297].fileTimeLo = 1326749596U;
  info[297].fileTimeHi = 0U;
  info[297].mFileTimeLo = 0U;
  info[297].mFileTimeHi = 0U;
  info[298].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod";
  info[298].name = "mtimes";
  info[298].dominantType = "double";
  info[298].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[298].fileTimeLo = 1289541292U;
  info[298].fileTimeHi = 0U;
  info[298].mFileTimeLo = 0U;
  info[298].mFileTimeHi = 0U;
  info[299].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[299].name = "createsystemobjectv2";
  info[299].dominantType = "";
  info[299].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[299].fileTimeLo = 1343851958U;
  info[299].fileTimeHi = 0U;
  info[299].mFileTimeLo = 0U;
  info[299].mFileTimeHi = 0U;
  info[300].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[300].name = "step";
  info[300].dominantType = "comm.PNSequence";
  info[300].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[300].fileTimeLo = 1349900350U;
  info[300].fileTimeHi = 0U;
  info[300].mFileTimeLo = 0U;
  info[300].mFileTimeHi = 0U;
  info[301].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[301].name = "checkSystemObjectInput";
  info[301].dominantType = "comm.PNSequence";
  info[301].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[301].fileTimeLo = 1349900346U;
  info[301].fileTimeHi = 0U;
  info[301].mFileTimeLo = 0U;
  info[301].mFileTimeHi = 0U;
  info[302].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[302].name = "repmat";
  info[302].dominantType = "double";
  info[302].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[302].fileTimeLo = 1352446460U;
  info[302].fileTimeHi = 0U;
  info[302].mFileTimeLo = 0U;
  info[302].mFileTimeHi = 0U;
  info[303].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[303].name = "eml_scalar_eg";
  info[303].dominantType = "double";
  info[303].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[303].fileTimeLo = 1286840396U;
  info[303].fileTimeHi = 0U;
  info[303].mFileTimeLo = 0U;
  info[303].mFileTimeHi = 0U;
  info[304].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[304].name = "eml_index_prod";
  info[304].dominantType = "double";
  info[304].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[304].fileTimeLo = 1286840380U;
  info[304].fileTimeHi = 0U;
  info[304].mFileTimeLo = 0U;
  info[304].mFileTimeHi = 0U;
  info[305].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[305].name = "eml_int_forloop_overflow_check";
  info[305].dominantType = "";
  info[305].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[305].fileTimeLo = 1346531940U;
  info[305].fileTimeHi = 0U;
  info[305].mFileTimeLo = 0U;
  info[305].mFileTimeHi = 0U;
  info[306].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[306].name = "eml_index_plus";
  info[306].dominantType = "coder.internal.indexInt";
  info[306].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[306].fileTimeLo = 1286840378U;
  info[306].fileTimeHi = 0U;
  info[306].mFileTimeLo = 0U;
  info[306].mFileTimeHi = 0U;
  info[307].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[307].name = "unique";
  info[307].dominantType = "double";
  info[307].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m";
  info[307].fileTimeLo = 1344493640U;
  info[307].fileTimeHi = 0U;
  info[307].mFileTimeLo = 0U;
  info[307].mFileTimeHi = 0U;
  info[308].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[308].name = "eml_index_class";
  info[308].dominantType = "";
  info[308].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[308].fileTimeLo = 1323192178U;
  info[308].fileTimeHi = 0U;
  info[308].mFileTimeLo = 0U;
  info[308].mFileTimeHi = 0U;
  info[309].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[309].name = "eml_sort_idx";
  info[309].dominantType = "double";
  info[309].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[309].fileTimeLo = 1305339604U;
  info[309].fileTimeHi = 0U;
  info[309].mFileTimeLo = 0U;
  info[309].mFileTimeHi = 0U;
  info[310].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[310].name = "eml_index_class";
  info[310].dominantType = "";
  info[310].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[310].fileTimeLo = 1323192178U;
  info[310].fileTimeHi = 0U;
  info[310].mFileTimeLo = 0U;
  info[310].mFileTimeHi = 0U;
  info[311].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[311].name = "eml_size_ispow2";
  info[311].dominantType = "coder.internal.indexInt";
  info[311].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m";
  info[311].fileTimeLo = 1286840398U;
  info[311].fileTimeHi = 0U;
  info[311].mFileTimeLo = 0U;
  info[311].mFileTimeHi = 0U;
  info[312].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[312].name = "eml_index_plus";
  info[312].dominantType = "coder.internal.indexInt";
  info[312].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[312].fileTimeLo = 1286840378U;
  info[312].fileTimeHi = 0U;
  info[312].mFileTimeLo = 0U;
  info[312].mFileTimeHi = 0U;
  info[313].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[313].name = "eml_int_forloop_overflow_check";
  info[313].dominantType = "";
  info[313].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[313].fileTimeLo = 1346531940U;
  info[313].fileTimeHi = 0U;
  info[313].mFileTimeLo = 0U;
  info[313].mFileTimeHi = 0U;
  info[314].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[314].name = "eml_index_minus";
  info[314].dominantType = "double";
  info[314].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[314].fileTimeLo = 1286840378U;
  info[314].fileTimeHi = 0U;
  info[314].mFileTimeLo = 0U;
  info[314].mFileTimeHi = 0U;
  info[315].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[315].name = "eml_index_plus";
  info[315].dominantType = "double";
  info[315].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[315].fileTimeLo = 1286840378U;
  info[315].fileTimeHi = 0U;
  info[315].mFileTimeLo = 0U;
  info[315].mFileTimeHi = 0U;
  info[316].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[316].name = "eml_sort_le";
  info[316].dominantType = "double";
  info[316].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m";
  info[316].fileTimeLo = 1292212110U;
  info[316].fileTimeHi = 0U;
  info[316].mFileTimeLo = 0U;
  info[316].mFileTimeHi = 0U;
  info[317].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m!eml_sort_ascending_le";
  info[317].name = "eml_relop";
  info[317].dominantType = "function_handle";
  info[317].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[317].fileTimeLo = 1342472782U;
  info[317].fileTimeHi = 0U;
  info[317].mFileTimeLo = 0U;
  info[317].mFileTimeHi = 0U;
  info[318].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m!eml_sort_ascending_le";
  info[318].name = "isnan";
  info[318].dominantType = "double";
  info[318].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[318].fileTimeLo = 1286840360U;
  info[318].fileTimeHi = 0U;
  info[318].mFileTimeLo = 0U;
  info[318].mFileTimeHi = 0U;
  info[319].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[319].name = "eml_index_times";
  info[319].dominantType = "double";
  info[319].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[319].fileTimeLo = 1286840380U;
  info[319].fileTimeHi = 0U;
  info[319].mFileTimeLo = 0U;
  info[319].mFileTimeHi = 0U;
}

static void f_info_helper(ResolvedFunctionInfo info[727])
{
  info[320].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m";
  info[320].name = "eml_index_minus";
  info[320].dominantType = "coder.internal.indexInt";
  info[320].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[320].fileTimeLo = 1286840378U;
  info[320].fileTimeHi = 0U;
  info[320].mFileTimeLo = 0U;
  info[320].mFileTimeHi = 0U;
  info[321].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[321].name = "eml_scalar_eg";
  info[321].dominantType = "double";
  info[321].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[321].fileTimeLo = 1286840396U;
  info[321].fileTimeHi = 0U;
  info[321].mFileTimeLo = 0U;
  info[321].mFileTimeHi = 0U;
  info[322].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[322].name = "eml_int_forloop_overflow_check";
  info[322].dominantType = "";
  info[322].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[322].fileTimeLo = 1346531940U;
  info[322].fileTimeHi = 0U;
  info[322].mFileTimeLo = 0U;
  info[322].mFileTimeHi = 0U;
  info[323].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[323].name = "eml_index_class";
  info[323].dominantType = "";
  info[323].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[323].fileTimeLo = 1323192178U;
  info[323].fileTimeHi = 0U;
  info[323].mFileTimeLo = 0U;
  info[323].mFileTimeHi = 0U;
  info[324].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[324].name = "isinf";
  info[324].dominantType = "double";
  info[324].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[324].fileTimeLo = 1286840360U;
  info[324].fileTimeHi = 0U;
  info[324].mFileTimeLo = 0U;
  info[324].mFileTimeHi = 0U;
  info[325].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[325].name = "eml_index_plus";
  info[325].dominantType = "double";
  info[325].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[325].fileTimeLo = 1286840378U;
  info[325].fileTimeHi = 0U;
  info[325].mFileTimeLo = 0U;
  info[325].mFileTimeHi = 0U;
  info[326].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[326].name = "eml_index_minus";
  info[326].dominantType = "double";
  info[326].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[326].fileTimeLo = 1286840378U;
  info[326].fileTimeHi = 0U;
  info[326].mFileTimeLo = 0U;
  info[326].mFileTimeHi = 0U;
  info[327].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[327].name = "isnan";
  info[327].dominantType = "double";
  info[327].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[327].fileTimeLo = 1286840360U;
  info[327].fileTimeHi = 0U;
  info[327].mFileTimeLo = 0U;
  info[327].mFileTimeHi = 0U;
  info[328].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites";
  info[328].name = "eml_index_minus";
  info[328].dominantType = "coder.internal.indexInt";
  info[328].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[328].fileTimeLo = 1286840378U;
  info[328].fileTimeHi = 0U;
  info[328].mFileTimeLo = 0U;
  info[328].mFileTimeHi = 0U;
  info[329].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[329].name = "eml_index_plus";
  info[329].dominantType = "coder.internal.indexInt";
  info[329].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[329].fileTimeLo = 1286840378U;
  info[329].fileTimeHi = 0U;
  info[329].mFileTimeLo = 0U;
  info[329].mFileTimeHi = 0U;
  info[330].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[330].name = "eml_index_plus";
  info[330].dominantType = "double";
  info[330].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[330].fileTimeLo = 1286840378U;
  info[330].fileTimeHi = 0U;
  info[330].mFileTimeLo = 0U;
  info[330].mFileTimeHi = 0U;
  info[331].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[331].name = "eml_safe_eq";
  info[331].dominantType = "double";
  info[331].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[331].fileTimeLo = 1348213518U;
  info[331].fileTimeHi = 0U;
  info[331].mFileTimeLo = 0U;
  info[331].mFileTimeHi = 0U;
  info[332].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[332].name = "abs";
  info[332].dominantType = "double";
  info[332].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[332].fileTimeLo = 1343851966U;
  info[332].fileTimeHi = 0U;
  info[332].mFileTimeLo = 0U;
  info[332].mFileTimeHi = 0U;
  info[333].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[333].name = "mrdivide";
  info[333].dominantType = "double";
  info[333].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[333].fileTimeLo = 1357973148U;
  info[333].fileTimeHi = 0U;
  info[333].mFileTimeLo = 1319751566U;
  info[333].mFileTimeHi = 0U;
  info[334].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[334].name = "eps";
  info[334].dominantType = "double";
  info[334].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[334].fileTimeLo = 1326749596U;
  info[334].fileTimeHi = 0U;
  info[334].mFileTimeLo = 0U;
  info[334].mFileTimeHi = 0U;
  info[335].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[335].name = "eml_guarded_nan";
  info[335].dominantType = "";
  info[335].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[335].fileTimeLo = 1286840376U;
  info[335].fileTimeHi = 0U;
  info[335].mFileTimeLo = 0U;
  info[335].mFileTimeHi = 0U;
  info[336].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[336].name = "isinf";
  info[336].dominantType = "double";
  info[336].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[336].fileTimeLo = 1286840360U;
  info[336].fileTimeHi = 0U;
  info[336].mFileTimeLo = 0U;
  info[336].mFileTimeHi = 0U;
  info[337].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector";
  info[337].name = "eml_index_minus";
  info[337].dominantType = "double";
  info[337].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[337].fileTimeLo = 1286840378U;
  info[337].fileTimeHi = 0U;
  info[337].mFileTimeLo = 0U;
  info[337].mFileTimeHi = 0U;
  info[338].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[338].name = "length";
  info[338].dominantType = "double";
  info[338].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[338].fileTimeLo = 1303167806U;
  info[338].fileTimeHi = 0U;
  info[338].mFileTimeLo = 0U;
  info[338].mFileTimeHi = 0U;
  info[339].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[339].name = "coder.internal.errorIf";
  info[339].dominantType = "char";
  info[339].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[339].fileTimeLo = 1334093538U;
  info[339].fileTimeHi = 0U;
  info[339].mFileTimeLo = 0U;
  info[339].mFileTimeHi = 0U;
  info[340].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[340].name = "ismatrix";
  info[340].dominantType = "double";
  info[340].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m";
  info[340].fileTimeLo = 1331326458U;
  info[340].fileTimeHi = 0U;
  info[340].mFileTimeLo = 0U;
  info[340].mFileTimeHi = 0U;
  info[341].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[341].name = "mrdivide";
  info[341].dominantType = "double";
  info[341].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[341].fileTimeLo = 1357973148U;
  info[341].fileTimeHi = 0U;
  info[341].mFileTimeLo = 1319751566U;
  info[341].mFileTimeHi = 0U;
  info[342].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[342].name = "repmat";
  info[342].dominantType = "double";
  info[342].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[342].fileTimeLo = 1352446460U;
  info[342].fileTimeHi = 0U;
  info[342].mFileTimeLo = 0U;
  info[342].mFileTimeHi = 0U;
  info[343].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[343].name = "colon";
  info[343].dominantType = "double";
  info[343].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[343].fileTimeLo = 1348213528U;
  info[343].fileTimeHi = 0U;
  info[343].mFileTimeLo = 0U;
  info[343].mFileTimeHi = 0U;
  info[344].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[344].name = "repmat";
  info[344].dominantType = "double";
  info[344].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[344].fileTimeLo = 1352446460U;
  info[344].fileTimeHi = 0U;
  info[344].mFileTimeLo = 0U;
  info[344].mFileTimeHi = 0U;
  info[345].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[345].name = "mtimes";
  info[345].dominantType = "double";
  info[345].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[345].fileTimeLo = 1289541292U;
  info[345].fileTimeHi = 0U;
  info[345].mFileTimeLo = 0U;
  info[345].mFileTimeHi = 0U;
  info[346].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[346].name = "sub2ind";
  info[346].dominantType = "double";
  info[346].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m";
  info[346].fileTimeLo = 1286840370U;
  info[346].fileTimeHi = 0U;
  info[346].mFileTimeLo = 0U;
  info[346].mFileTimeHi = 0U;
  info[347].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m";
  info[347].name = "eml_index_class";
  info[347].dominantType = "";
  info[347].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[347].fileTimeLo = 1323192178U;
  info[347].fileTimeHi = 0U;
  info[347].mFileTimeLo = 0U;
  info[347].mFileTimeHi = 0U;
  info[348].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[348].name = "min";
  info[348].dominantType = "double";
  info[348].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[348].fileTimeLo = 1311276918U;
  info[348].fileTimeHi = 0U;
  info[348].mFileTimeLo = 0U;
  info[348].mFileTimeHi = 0U;
  info[349].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!allinrange";
  info[349].name = "coder.internal.indexIntRelop";
  info[349].dominantType = "";
  info[349].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[349].fileTimeLo = 1326749922U;
  info[349].fileTimeHi = 0U;
  info[349].mFileTimeLo = 0U;
  info[349].mFileTimeHi = 0U;
  info[350].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[350].name = "isequal";
  info[350].dominantType = "double";
  info[350].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[350].fileTimeLo = 1286840358U;
  info[350].fileTimeHi = 0U;
  info[350].mFileTimeLo = 0U;
  info[350].mFileTimeHi = 0U;
  info[351].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar";
  info[351].name = "isnan";
  info[351].dominantType = "double";
  info[351].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[351].fileTimeLo = 1286840360U;
  info[351].fileTimeHi = 0U;
  info[351].mFileTimeLo = 0U;
  info[351].mFileTimeHi = 0U;
  info[352].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!prodsub";
  info[352].name = "eml_index_class";
  info[352].dominantType = "";
  info[352].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[352].fileTimeLo = 1323192178U;
  info[352].fileTimeHi = 0U;
  info[352].mFileTimeLo = 0U;
  info[352].mFileTimeHi = 0U;
  info[353].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!prodsub";
  info[353].name = "eml_index_times";
  info[353].dominantType = "coder.internal.indexInt";
  info[353].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[353].fileTimeLo = 1286840380U;
  info[353].fileTimeHi = 0U;
  info[353].mFileTimeLo = 0U;
  info[353].mFileTimeHi = 0U;
  info[354].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[354].name = "eml_index_class";
  info[354].dominantType = "";
  info[354].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[354].fileTimeLo = 1323192178U;
  info[354].fileTimeHi = 0U;
  info[354].mFileTimeLo = 0U;
  info[354].mFileTimeHi = 0U;
  info[355].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[355].name = "eml_index_minus";
  info[355].dominantType = "double";
  info[355].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[355].fileTimeLo = 1286840378U;
  info[355].fileTimeHi = 0U;
  info[355].mFileTimeLo = 0U;
  info[355].mFileTimeHi = 0U;
  info[356].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[356].name = "eml_index_times";
  info[356].dominantType = "coder.internal.indexInt";
  info[356].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[356].fileTimeLo = 1286840380U;
  info[356].fileTimeHi = 0U;
  info[356].mFileTimeLo = 0U;
  info[356].mFileTimeHi = 0U;
  info[357].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[357].name = "eml_index_plus";
  info[357].dominantType = "coder.internal.indexInt";
  info[357].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[357].fileTimeLo = 1286840378U;
  info[357].fileTimeHi = 0U;
  info[357].mFileTimeLo = 0U;
  info[357].mFileTimeHi = 0U;
  info[358].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind";
  info[358].name = "eml_scalar_eg";
  info[358].dominantType = "double";
  info[358].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[358].fileTimeLo = 1286840396U;
  info[358].fileTimeHi = 0U;
  info[358].mFileTimeLo = 0U;
  info[358].mFileTimeHi = 0U;
  info[359].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[359].name = "OFDMBase";
  info[359].dominantType = "unknown";
  info[359].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[359].fileTimeLo = 1397789457U;
  info[359].fileTimeHi = 0U;
  info[359].mFileTimeLo = 0U;
  info[359].mFileTimeHi = 0U;
  info[360].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[360].name = "OFDMDemodulator";
  info[360].dominantType = "OFDMModulator";
  info[360].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[360].fileTimeLo = 1397789457U;
  info[360].fileTimeHi = 0U;
  info[360].mFileTimeLo = 0U;
  info[360].mFileTimeHi = 0U;
  info[361].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[361].name = "sum";
  info[361].dominantType = "double";
  info[361].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[361].fileTimeLo = 1314758212U;
  info[361].fileTimeHi = 0U;
  info[361].mFileTimeLo = 0U;
  info[361].mFileTimeHi = 0U;
  info[362].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[362].name = "colon";
  info[362].dominantType = "double";
  info[362].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[362].fileTimeLo = 1348213528U;
  info[362].fileTimeHi = 0U;
  info[362].mFileTimeLo = 0U;
  info[362].mFileTimeHi = 0U;
  info[363].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m";
  info[363].name = "generateOFDMSignal";
  info[363].dominantType = "double";
  info[363].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[363].fileTimeLo = 1397752493U;
  info[363].fileTimeHi = 0U;
  info[363].mFileTimeLo = 0U;
  info[363].mFileTimeHi = 0U;
  info[364].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[364].name = "OFDMModulator";
  info[364].dominantType = "char";
  info[364].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[364].fileTimeLo = 1397789457U;
  info[364].fileTimeHi = 0U;
  info[364].mFileTimeLo = 0U;
  info[364].mFileTimeHi = 0U;
  info[365].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[365].name = "mrdivide";
  info[365].dominantType = "double";
  info[365].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[365].fileTimeLo = 1357973148U;
  info[365].fileTimeHi = 0U;
  info[365].mFileTimeLo = 1319751566U;
  info[365].mFileTimeHi = 0U;
  info[366].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[366].name = "sqrt";
  info[366].dominantType = "double";
  info[366].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[366].fileTimeLo = 1343851986U;
  info[366].fileTimeHi = 0U;
  info[366].mFileTimeLo = 0U;
  info[366].mFileTimeHi = 0U;
  info[367].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[367].name = "mtimes";
  info[367].dominantType = "double";
  info[367].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[367].fileTimeLo = 1289541292U;
  info[367].fileTimeHi = 0U;
  info[367].mFileTimeLo = 0U;
  info[367].mFileTimeHi = 0U;
  info[368].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[368].name = "OFDMletters2bits";
  info[368].dominantType = "char";
  info[368].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMletters2bits.m";
  info[368].fileTimeLo = 1397752622U;
  info[368].fileTimeHi = 0U;
  info[368].mFileTimeLo = 0U;
  info[368].mFileTimeHi = 0U;
  info[369].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[369].name = "reshape";
  info[369].dominantType = "double";
  info[369].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[369].fileTimeLo = 1286840368U;
  info[369].fileTimeHi = 0U;
  info[369].mFileTimeLo = 0U;
  info[369].mFileTimeHi = 0U;
  info[370].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[370].name = "commcodegen.CRCGenerator";
  info[370].dominantType = "int32";
  info[370].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p";
  info[370].fileTimeLo = 1358405060U;
  info[370].fileTimeHi = 0U;
  info[370].mFileTimeLo = 0U;
  info[370].mFileTimeHi = 0U;
  info[371].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[371].name = "commcodegen.BPSKModulator";
  info[371].dominantType = "int32";
  info[371].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p";
  info[371].fileTimeLo = 1358405060U;
  info[371].fileTimeHi = 0U;
  info[371].mFileTimeLo = 0U;
  info[371].mFileTimeHi = 0U;
  info[372].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[372].name = "length";
  info[372].dominantType = "double";
  info[372].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[372].fileTimeLo = 1303167806U;
  info[372].fileTimeHi = 0U;
  info[372].mFileTimeLo = 0U;
  info[372].mFileTimeHi = 0U;
  info[373].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[373].name = "mod";
  info[373].dominantType = "double";
  info[373].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[373].fileTimeLo = 1343851982U;
  info[373].fileTimeHi = 0U;
  info[373].mFileTimeLo = 0U;
  info[373].mFileTimeHi = 0U;
  info[374].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[374].name = "randi";
  info[374].dominantType = "double";
  info[374].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[374].fileTimeLo = 1320911042U;
  info[374].fileTimeHi = 0U;
  info[374].mFileTimeLo = 0U;
  info[374].mFileTimeHi = 0U;
  info[375].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[375].name = "length";
  info[375].dominantType = "char";
  info[375].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[375].fileTimeLo = 1303167806U;
  info[375].fileTimeHi = 0U;
  info[375].mFileTimeLo = 0U;
  info[375].mFileTimeHi = 0U;
  info[376].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[376].name = "createsystemobjectv2";
  info[376].dominantType = "";
  info[376].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[376].fileTimeLo = 1343851958U;
  info[376].fileTimeHi = 0U;
  info[376].mFileTimeLo = 0U;
  info[376].mFileTimeHi = 0U;
  info[377].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[377].name = "step";
  info[377].dominantType = "comm.PNSequence";
  info[377].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m";
  info[377].fileTimeLo = 1349900350U;
  info[377].fileTimeHi = 0U;
  info[377].mFileTimeLo = 0U;
  info[377].mFileTimeHi = 0U;
  info[378].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[378].name = "repmat";
  info[378].dominantType = "double";
  info[378].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[378].fileTimeLo = 1352446460U;
  info[378].fileTimeHi = 0U;
  info[378].mFileTimeLo = 0U;
  info[378].mFileTimeHi = 0U;
  info[379].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[379].name = "OFDMDemodulator";
  info[379].dominantType = "OFDMModulator";
  info[379].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[379].fileTimeLo = 1397789457U;
  info[379].fileTimeHi = 0U;
  info[379].mFileTimeLo = 0U;
  info[379].mFileTimeHi = 0U;
  info[380].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[380].name = "sum";
  info[380].dominantType = "double";
  info[380].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[380].fileTimeLo = 1314758212U;
  info[380].fileTimeHi = 0U;
  info[380].mFileTimeLo = 0U;
  info[380].mFileTimeHi = 0U;
  info[381].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal.m";
  info[381].name = "colon";
  info[381].dominantType = "double";
  info[381].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[381].fileTimeLo = 1348213528U;
  info[381].fileTimeHi = 0U;
  info[381].mFileTimeLo = 0U;
  info[381].mFileTimeHi = 0U;
  info[382].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m";
  info[382].name = "initializeOFDMSyncMemory_sdr";
  info[382].dominantType = "OFDMDemodulator";
  info[382].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/initializeOFDMSyncMemory_sdr.m";
  info[382].fileTimeLo = 1397752622U;
  info[382].fileTimeHi = 0U;
  info[382].mFileTimeLo = 0U;
  info[382].mFileTimeHi = 0U;
  info[383].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/initializeOFDMSyncMemory_sdr.m";
  info[383].name = "sum";
  info[383].dominantType = "double";
  info[383].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[383].fileTimeLo = 1314758212U;
  info[383].fileTimeHi = 0U;
  info[383].mFileTimeLo = 0U;
  info[383].mFileTimeHi = 0U;
}

static void g_info_helper(ResolvedFunctionInfo info[727])
{
  info[384].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[384].name = "matlab.System";
  info[384].dominantType = "unknown";
  info[384].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[384].fileTimeLo = 1357962380U;
  info[384].fileTimeHi = 0U;
  info[384].mFileTimeLo = 0U;
  info[384].mFileTimeHi = 0U;
  info[385].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m";
  info[385].name = "comm.AGC";
  info[385].dominantType = "char";
  info[385].resolved = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[385].fileTimeLo = 1355611432U;
  info[385].fileTimeHi = 0U;
  info[385].mFileTimeLo = 0U;
  info[385].mFileTimeHi = 0U;
  info[386].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[386].name = "matlab.system.pvParse";
  info[386].dominantType = "comm.AGC";
  info[386].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[386].fileTimeLo = 1357962380U;
  info[386].fileTimeHi = 0U;
  info[386].mFileTimeLo = 0U;
  info[386].mFileTimeHi = 0U;
  info[387].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[387].name = "coder.internal.cell";
  info[387].dominantType = "char";
  info[387].resolved =
    "[IXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/cell.p";
  info[387].fileTimeLo = 1357973172U;
  info[387].fileTimeHi = 0U;
  info[387].mFileTimeLo = 0U;
  info[387].mFileTimeHi = 0U;
  info[388].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[388].name = "validateattributes";
  info[388].dominantType = "coder.internal.cell";
  info[388].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[388].fileTimeLo = 1352446462U;
  info[388].fileTimeHi = 0U;
  info[388].mFileTimeLo = 0U;
  info[388].mFileTimeHi = 0U;
  info[389].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[389].name = "char";
  info[389].dominantType = "char";
  info[389].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[389].fileTimeLo = 1319751568U;
  info[389].fileTimeHi = 0U;
  info[389].mFileTimeLo = 0U;
  info[389].mFileTimeHi = 0U;
  info[390].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral";
  info[390].name = "isfinite";
  info[390].dominantType = "double";
  info[390].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[390].fileTimeLo = 1286840358U;
  info[390].fileTimeHi = 0U;
  info[390].mFileTimeLo = 0U;
  info[390].mFileTimeHi = 0U;
  info[391].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral";
  info[391].name = "floor";
  info[391].dominantType = "double";
  info[391].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[391].fileTimeLo = 1343851980U;
  info[391].fileTimeHi = 0U;
  info[391].mFileTimeLo = 0U;
  info[391].mFileTimeHi = 0U;
  info[392].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[392].name = "isfinite";
  info[392].dominantType = "";
  info[392].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[392].fileTimeLo = 1286840358U;
  info[392].fileTimeHi = 0U;
  info[392].mFileTimeLo = 0U;
  info[392].mFileTimeHi = 0U;
  info[393].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!all";
  info[393].name = "isfinite";
  info[393].dominantType = "double";
  info[393].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[393].fileTimeLo = 1286840358U;
  info[393].fileTimeHi = 0U;
  info[393].mFileTimeLo = 0U;
  info[393].mFileTimeHi = 0U;
  info[394].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!notisnan";
  info[394].name = "isnan";
  info[394].dominantType = "double";
  info[394].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[394].fileTimeLo = 1286840360U;
  info[394].fileTimeHi = 0U;
  info[394].mFileTimeLo = 0U;
  info[394].mFileTimeHi = 0U;
  info[395].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[395].name = "matlab.System";
  info[395].dominantType = "unknown";
  info[395].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[395].fileTimeLo = 1357962380U;
  info[395].fileTimeHi = 0U;
  info[395].mFileTimeLo = 0U;
  info[395].mFileTimeHi = 0U;
  info[396].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[396].name = "comm.internal.SDRuBase";
  info[396].dominantType = "unknown";
  info[396].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[396].fileTimeLo = 1397789456U;
  info[396].fileTimeHi = 0U;
  info[396].mFileTimeLo = 0U;
  info[396].mFileTimeHi = 0U;
  info[397].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m";
  info[397].name = "comm.SDRuReceiver";
  info[397].dominantType = "char";
  info[397].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[397].fileTimeLo = 1397789456U;
  info[397].fileTimeHi = 0U;
  info[397].mFileTimeLo = 0U;
  info[397].mFileTimeHi = 0U;
  info[398].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[398].name = "coder.internal.getHostName";
  info[398].dominantType = "char";
  info[398].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/getHostName.m";
  info[398].fileTimeLo = 1327440774U;
  info[398].fileTimeHi = 0U;
  info[398].mFileTimeLo = 0U;
  info[398].mFileTimeHi = 0U;
  info[399].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[399].name = "randi";
  info[399].dominantType = "double";
  info[399].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[399].fileTimeLo = 1320911042U;
  info[399].fileTimeHi = 0U;
  info[399].mFileTimeLo = 0U;
  info[399].mFileTimeHi = 0U;
  info[400].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[400].name = "char";
  info[400].dominantType = "double";
  info[400].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[400].fileTimeLo = 1319751568U;
  info[400].fileTimeHi = 0U;
  info[400].mFileTimeLo = 0U;
  info[400].mFileTimeHi = 0U;
  info[401].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[401].name = "matlab.system.setProp";
  info[401].dominantType = "comm.SDRuReceiver";
  info[401].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[401].fileTimeLo = 1357962380U;
  info[401].fileTimeHi = 0U;
  info[401].mFileTimeLo = 0U;
  info[401].mFileTimeHi = 0U;
  info[402].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[402].name = "checkIPAddressFormat";
  info[402].dominantType = "char";
  info[402].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[402].fileTimeLo = 1397789456U;
  info[402].fileTimeHi = 0U;
  info[402].mFileTimeLo = 0U;
  info[402].mFileTimeHi = 0U;
  info[403].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[403].name = "nargchk";
  info[403].dominantType = "double";
  info[403].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m";
  info[403].fileTimeLo = 1286840418U;
  info[403].fileTimeHi = 0U;
  info[403].mFileTimeLo = 0U;
  info[403].mFileTimeHi = 0U;
  info[404].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m";
  info[404].name = "floor";
  info[404].dominantType = "double";
  info[404].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[404].fileTimeLo = 1343851980U;
  info[404].fileTimeHi = 0U;
  info[404].mFileTimeLo = 0U;
  info[404].mFileTimeHi = 0U;
  info[405].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[405].name = "coder.internal.errorIf";
  info[405].dominantType = "char";
  info[405].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[405].fileTimeLo = 1334093538U;
  info[405].fileTimeHi = 0U;
  info[405].mFileTimeLo = 0U;
  info[405].mFileTimeHi = 0U;
  info[406].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[406].name = "isrow";
  info[406].dominantType = "char";
  info[406].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[406].fileTimeLo = 1346531960U;
  info[406].fileTimeHi = 0U;
  info[406].mFileTimeLo = 0U;
  info[406].mFileTimeHi = 0U;
  info[407].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[407].name = "find";
  info[407].dominantType = "logical";
  info[407].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[407].fileTimeLo = 1303167806U;
  info[407].fileTimeHi = 0U;
  info[407].mFileTimeLo = 0U;
  info[407].mFileTimeHi = 0U;
  info[408].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[408].name = "length";
  info[408].dominantType = "double";
  info[408].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[408].fileTimeLo = 1303167806U;
  info[408].fileTimeHi = 0U;
  info[408].mFileTimeLo = 0U;
  info[408].mFileTimeHi = 0U;
  info[409].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m";
  info[409].name = "length";
  info[409].dominantType = "char";
  info[409].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[409].fileTimeLo = 1303167806U;
  info[409].fileTimeHi = 0U;
  info[409].mFileTimeLo = 0U;
  info[409].mFileTimeHi = 0U;
  info[410].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m!checkNumeric";
  info[410].name = "any";
  info[410].dominantType = "logical";
  info[410].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m";
  info[410].fileTimeLo = 1286840434U;
  info[410].fileTimeHi = 0U;
  info[410].mFileTimeLo = 0U;
  info[410].mFileTimeHi = 0U;
  info[411].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[411].name = "eml_matrix_vstride";
  info[411].dominantType = "double";
  info[411].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[411].fileTimeLo = 1286840388U;
  info[411].fileTimeHi = 0U;
  info[411].mFileTimeLo = 0U;
  info[411].mFileTimeHi = 0U;
  info[412].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[412].name = "eml_index_minus";
  info[412].dominantType = "double";
  info[412].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[412].fileTimeLo = 1286840378U;
  info[412].fileTimeHi = 0U;
  info[412].mFileTimeLo = 0U;
  info[412].mFileTimeHi = 0U;
  info[413].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[413].name = "eml_index_times";
  info[413].dominantType = "coder.internal.indexInt";
  info[413].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[413].fileTimeLo = 1286840380U;
  info[413].fileTimeHi = 0U;
  info[413].mFileTimeLo = 0U;
  info[413].mFileTimeHi = 0U;
  info[414].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[414].name = "eml_matrix_npages";
  info[414].dominantType = "double";
  info[414].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[414].fileTimeLo = 1286840386U;
  info[414].fileTimeHi = 0U;
  info[414].mFileTimeLo = 0U;
  info[414].mFileTimeHi = 0U;
  info[415].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[415].name = "eml_index_class";
  info[415].dominantType = "";
  info[415].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[415].fileTimeLo = 1323192178U;
  info[415].fileTimeHi = 0U;
  info[415].mFileTimeLo = 0U;
  info[415].mFileTimeHi = 0U;
  info[416].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[416].name = "eml_index_plus";
  info[416].dominantType = "coder.internal.indexInt";
  info[416].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[416].fileTimeLo = 1286840378U;
  info[416].fileTimeHi = 0U;
  info[416].mFileTimeLo = 0U;
  info[416].mFileTimeHi = 0U;
  info[417].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[417].name = "eml_index_plus";
  info[417].dominantType = "double";
  info[417].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[417].fileTimeLo = 1286840378U;
  info[417].fileTimeHi = 0U;
  info[417].mFileTimeLo = 0U;
  info[417].mFileTimeHi = 0U;
  info[418].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[418].name = "eml_int_forloop_overflow_check";
  info[418].dominantType = "";
  info[418].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[418].fileTimeLo = 1346531940U;
  info[418].fileTimeHi = 0U;
  info[418].mFileTimeLo = 0U;
  info[418].mFileTimeHi = 0U;
  info[419].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/checkIPAddressFormat.m!checkNumeric";
  info[419].name = "coder.internal.errorIf";
  info[419].dominantType = "char";
  info[419].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[419].fileTimeLo = 1334093538U;
  info[419].fileTimeHi = 0U;
  info[419].mFileTimeLo = 0U;
  info[419].mFileTimeHi = 0U;
  info[420].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[420].name = "matlab.system.pvParse";
  info[420].dominantType = "comm.SDRuReceiver";
  info[420].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[420].fileTimeLo = 1357962380U;
  info[420].fileTimeHi = 0U;
  info[420].mFileTimeLo = 0U;
  info[420].mFileTimeHi = 0U;
  info[421].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[421].name = "coder.internal.warning";
  info[421].dominantType = "char";
  info[421].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[421].fileTimeLo = 1311277408U;
  info[421].fileTimeHi = 0U;
  info[421].mFileTimeLo = 0U;
  info[421].mFileTimeHi = 0U;
  info[422].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[422].name = "eml_warning";
  info[422].dominantType = "char";
  info[422].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m";
  info[422].fileTimeLo = 1286840402U;
  info[422].fileTimeHi = 0U;
  info[422].mFileTimeLo = 0U;
  info[422].mFileTimeHi = 0U;
  info[423].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[423].name = "repmat";
  info[423].dominantType = "char";
  info[423].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[423].fileTimeLo = 1352446460U;
  info[423].fileTimeHi = 0U;
  info[423].mFileTimeLo = 0U;
  info[423].mFileTimeHi = 0U;
  info[424].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[424].name = "matlab.system.coder.System";
  info[424].dominantType = "unknown";
  info[424].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[424].fileTimeLo = 1357971318U;
  info[424].fileTimeHi = 0U;
  info[424].mFileTimeLo = 0U;
  info[424].mFileTimeHi = 0U;
  info[425].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[425].name = "matlab.system.mixin.coder.Nondirect";
  info[425].dominantType = "unknown";
  info[425].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[425].fileTimeLo = 1357971320U;
  info[425].fileTimeHi = 0U;
  info[425].mFileTimeLo = 0U;
  info[425].mFileTimeHi = 0U;
  info[426].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m";
  info[426].name = "commcodegen.CRCDetector";
  info[426].dominantType = "int32";
  info[426].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[426].fileTimeLo = 1358405060U;
  info[426].fileTimeHi = 0U;
  info[426].mFileTimeLo = 0U;
  info[426].mFileTimeHi = 0U;
  info[427].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[427].name = "createsystemobjectv2";
  info[427].dominantType = "";
  info[427].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[427].fileTimeLo = 1343851958U;
  info[427].fileTimeHi = 0U;
  info[427].mFileTimeLo = 0U;
  info[427].mFileTimeHi = 0U;
  info[428].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[428].name = "matlab.system.setProp";
  info[428].dominantType = "commcodegen.CRCDetector";
  info[428].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p";
  info[428].fileTimeLo = 1357962380U;
  info[428].fileTimeHi = 0U;
  info[428].mFileTimeLo = 0U;
  info[428].mFileTimeHi = 0U;
  info[429].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[429].name = "matlab.system.pvParse";
  info[429].dominantType = "commcodegen.CRCDetector";
  info[429].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[429].fileTimeLo = 1357962380U;
  info[429].fileTimeHi = 0U;
  info[429].mFileTimeLo = 0U;
  info[429].mFileTimeHi = 0U;
  info[430].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[430].name = "commcodegen.CRCDetector";
  info[430].dominantType = "";
  info[430].resolved =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[430].fileTimeLo = 1358405060U;
  info[430].fileTimeHi = 0U;
  info[430].mFileTimeLo = 0U;
  info[430].mFileTimeHi = 0U;
  info[431].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[431].name = "matlab.system.coder.SystemProp";
  info[431].dominantType = "";
  info[431].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[431].fileTimeLo = 1357971320U;
  info[431].fileTimeHi = 0U;
  info[431].mFileTimeLo = 0U;
  info[431].mFileTimeHi = 0U;
  info[432].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[432].name = "get";
  info[432].dominantType = "comm.CRCDetector";
  info[432].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[432].fileTimeLo = 1349900344U;
  info[432].fileTimeHi = 0U;
  info[432].mFileTimeLo = 0U;
  info[432].mFileTimeHi = 0U;
  info[433].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m";
  info[433].name = "mtimes";
  info[433].dominantType = "double";
  info[433].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[433].fileTimeLo = 1289541292U;
  info[433].fileTimeHi = 0U;
  info[433].mFileTimeLo = 0U;
  info[433].mFileTimeHi = 0U;
  info[434].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m";
  info[434].name = "floor";
  info[434].dominantType = "double";
  info[434].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[434].fileTimeLo = 1343851980U;
  info[434].fileTimeHi = 0U;
  info[434].mFileTimeLo = 0U;
  info[434].mFileTimeHi = 0U;
  info[435].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m";
  info[435].name = "fprintf";
  info[435].dominantType = "char";
  info[435].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  info[435].fileTimeLo = 1354862384U;
  info[435].fileTimeHi = 0U;
  info[435].mFileTimeLo = 0U;
  info[435].mFileTimeHi = 0U;
  info[436].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  info[436].name = "isequal";
  info[436].dominantType = "char";
  info[436].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[436].fileTimeLo = 1286840358U;
  info[436].fileTimeHi = 0U;
  info[436].mFileTimeLo = 0U;
  info[436].mFileTimeHi = 0U;
  info[437].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[437].name = "eml_isequal_core";
  info[437].dominantType = "char";
  info[437].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  info[437].fileTimeLo = 1286840386U;
  info[437].fileTimeHi = 0U;
  info[437].mFileTimeLo = 0U;
  info[437].mFileTimeHi = 0U;
  info[438].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar";
  info[438].name = "isnan";
  info[438].dominantType = "char";
  info[438].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[438].fileTimeLo = 1286840360U;
  info[438].fileTimeHi = 0U;
  info[438].mFileTimeLo = 0U;
  info[438].mFileTimeHi = 0U;
  info[439].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  info[439].name = "fprintf";
  info[439].dominantType = "double";
  info[439].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  info[439].fileTimeLo = 1354862384U;
  info[439].fileTimeHi = 0U;
  info[439].mFileTimeLo = 0U;
  info[439].mFileTimeHi = 0U;
  info[440].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m";
  info[440].name = "PHYReceive";
  info[440].dominantType = "comm.AGC";
  info[440].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m";
  info[440].fileTimeLo = 1397789457U;
  info[440].fileTimeHi = 0U;
  info[440].mFileTimeLo = 0U;
  info[440].mFileTimeHi = 0U;
  info[441].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[441].name = "coder.internal.assert";
  info[441].dominantType = "char";
  info[441].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  info[441].fileTimeLo = 1334093538U;
  info[441].fileTimeHi = 0U;
  info[441].mFileTimeLo = 0U;
  info[441].mFileTimeHi = 0U;
  info[442].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[442].name = "length";
  info[442].dominantType = "char";
  info[442].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[442].fileTimeLo = 1303167806U;
  info[442].fileTimeHi = 0U;
  info[442].mFileTimeLo = 0U;
  info[442].mFileTimeHi = 0U;
  info[443].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[443].name = "all";
  info[443].dominantType = "logical";
  info[443].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[443].fileTimeLo = 1286840434U;
  info[443].fileTimeHi = 0U;
  info[443].mFileTimeLo = 0U;
  info[443].mFileTimeHi = 0U;
  info[444].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m";
  info[444].name = "eml_all_or_any";
  info[444].dominantType = "char";
  info[444].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m";
  info[444].fileTimeLo = 1286840294U;
  info[444].fileTimeHi = 0U;
  info[444].mFileTimeLo = 0U;
  info[444].mFileTimeHi = 0U;
  info[445].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[445].name = "DataPortDataTypeCapiEnumT";
  info[445].dominantType = "";
  info[445].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/DataPortDataTypeCapiEnumT.m";
  info[445].fileTimeLo = 1397789457U;
  info[445].fileTimeHi = 0U;
  info[445].mFileTimeLo = 0U;
  info[445].mFileTimeHi = 0U;
  info[446].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[446].name = "openDataConnection";
  info[446].dominantType = "BoardIdCapiEnumT";
  info[446].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[446].fileTimeLo = 1397789457U;
  info[446].fileTimeHi = 0U;
  info[446].mFileTimeLo = 0U;
  info[446].mFileTimeHi = 0U;
  info[447].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/openDataConnection.m";
  info[447].name = "mapiPrivate";
  info[447].dominantType = "BoardIdCapiEnumT";
  info[447].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[447].fileTimeLo = 1397789457U;
  info[447].fileTimeHi = 0U;
  info[447].mFileTimeLo = 0U;
  info[447].mFileTimeHi = 0U;
}

static void h_info_helper(ResolvedFunctionInfo info[727])
{
  info[448].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[448].name = "UsrpErrorCapiEnumT";
  info[448].dominantType = "double";
  info[448].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[448].fileTimeLo = 1397789457U;
  info[448].fileTimeHi = 0U;
  info[448].mFileTimeLo = 0U;
  info[448].mFileTimeHi = 0U;
  info[449].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[449].name = "char";
  info[449].dominantType = "double";
  info[449].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[449].fileTimeLo = 1319751568U;
  info[449].fileTimeHi = 0U;
  info[449].mFileTimeLo = 0U;
  info[449].mFileTimeHi = 0U;
  info[450].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[450].name = "mpower";
  info[450].dominantType = "double";
  info[450].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[450].fileTimeLo = 1286840442U;
  info[450].fileTimeHi = 0U;
  info[450].mFileTimeLo = 0U;
  info[450].mFileTimeHi = 0U;
  info[451].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[451].name = "mrdivide";
  info[451].dominantType = "double";
  info[451].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[451].fileTimeLo = 1357973148U;
  info[451].fileTimeHi = 0U;
  info[451].mFileTimeLo = 1319751566U;
  info[451].mFileTimeHi = 0U;
  info[452].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[452].name = "UsrpReportMethodEnumT";
  info[452].dominantType = "";
  info[452].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[452].fileTimeLo = 1397789457U;
  info[452].fileTimeHi = 0U;
  info[452].mFileTimeLo = 0U;
  info[452].mFileTimeHi = 0U;
  info[453].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[453].name = "reportSDRuStatus";
  info[453].dominantType = "UsrpErrorCapiEnumT";
  info[453].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[453].fileTimeLo = 1397789456U;
  info[453].fileTimeHi = 0U;
  info[453].mFileTimeLo = 0U;
  info[453].mFileTimeHi = 0U;
  info[454].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[454].name = "coder.internal.errorIf";
  info[454].dominantType = "char";
  info[454].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[454].fileTimeLo = 1334093538U;
  info[454].fileTimeHi = 0U;
  info[454].mFileTimeLo = 0U;
  info[454].mFileTimeHi = 0U;
  info[455].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[455].name = "isrow";
  info[455].dominantType = "char";
  info[455].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[455].fileTimeLo = 1346531960U;
  info[455].fileTimeHi = 0U;
  info[455].mFileTimeLo = 0U;
  info[455].mFileTimeHi = 0U;
  info[456].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[456].name = "UsrpErrorCapiEnumT";
  info[456].dominantType = "";
  info[456].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[456].fileTimeLo = 1397789457U;
  info[456].fileTimeHi = 0U;
  info[456].mFileTimeLo = 0U;
  info[456].mFileTimeHi = 0U;
  info[457].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[457].name = "UsrpReportMethodEnumT";
  info[457].dominantType = "";
  info[457].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m";
  info[457].fileTimeLo = 1397789457U;
  info[457].fileTimeHi = 0U;
  info[457].mFileTimeLo = 0U;
  info[457].mFileTimeHi = 0U;
  info[458].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[458].name = "coder.internal.warning";
  info[458].dominantType = "char";
  info[458].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m";
  info[458].fileTimeLo = 1311277408U;
  info[458].fileTimeHi = 0U;
  info[458].mFileTimeLo = 0U;
  info[458].mFileTimeHi = 0U;
  info[459].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/reportSDRuStatus.m";
  info[459].name = "getSDRuDriverVersion";
  info[459].dominantType = "";
  info[459].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[459].fileTimeLo = 1397789457U;
  info[459].fileTimeHi = 0U;
  info[459].mFileTimeLo = 0U;
  info[459].mFileTimeHi = 0U;
  info[460].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m";
  info[460].name = "mapiPrivate";
  info[460].dominantType = "char";
  info[460].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[460].fileTimeLo = 1397789457U;
  info[460].fileTimeHi = 0U;
  info[460].mFileTimeLo = 0U;
  info[460].mFileTimeHi = 0U;
  info[461].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/+internal/SDRuBase.p";
  info[461].name = "UsrpErrorCapiEnumT";
  info[461].dominantType = "";
  info[461].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[461].fileTimeLo = 1397789457U;
  info[461].fileTimeHi = 0U;
  info[461].mFileTimeLo = 0U;
  info[461].mFileTimeHi = 0U;
  info[462].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[462].name = "receiveData";
  info[462].dominantType = "DataPortDataTypeCapiEnumT";
  info[462].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/receiveData.m";
  info[462].fileTimeLo = 1397789457U;
  info[462].fileTimeHi = 0U;
  info[462].mFileTimeLo = 0U;
  info[462].mFileTimeHi = 0U;
  info[463].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/receiveData.m";
  info[463].name = "mapiPrivate";
  info[463].dominantType = "DataPortDataTypeCapiEnumT";
  info[463].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m";
  info[463].fileTimeLo = 1397789457U;
  info[463].fileTimeHi = 0U;
  info[463].mFileTimeLo = 0U;
  info[463].mFileTimeHi = 0U;
  info[464].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[464].name = "UsrpErrorCapiEnumT";
  info[464].dominantType = "";
  info[464].resolved =
    "[N]/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m";
  info[464].fileTimeLo = 1397789457U;
  info[464].fileTimeHi = 0U;
  info[464].mFileTimeLo = 0U;
  info[464].mFileTimeHi = 0U;
  info[465].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[465].name = "error";
  info[465].dominantType = "char";
  info[465].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/error.m";
  info[465].fileTimeLo = 1319751566U;
  info[465].fileTimeHi = 0U;
  info[465].mFileTimeLo = 0U;
  info[465].mFileTimeHi = 0U;
  info[466].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p";
  info[466].name = "mtimes";
  info[466].dominantType = "double";
  info[466].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[466].fileTimeLo = 1289541292U;
  info[466].fileTimeHi = 0U;
  info[466].mFileTimeLo = 0U;
  info[466].mFileTimeHi = 0U;
  info[467].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m";
  info[467].name = "sum";
  info[467].dominantType = "double";
  info[467].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[467].fileTimeLo = 1314758212U;
  info[467].fileTimeHi = 0U;
  info[467].mFileTimeLo = 0U;
  info[467].mFileTimeHi = 0U;
  info[468].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[468].name = "eml_int_forloop_overflow_check";
  info[468].dominantType = "";
  info[468].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[468].fileTimeLo = 1346531940U;
  info[468].fileTimeHi = 0U;
  info[468].mFileTimeLo = 0U;
  info[468].mFileTimeHi = 0U;
  info[469].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[469].name = "iscolumn";
  info[469].dominantType = "double";
  info[469].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/iscolumn.m";
  info[469].fileTimeLo = 1346531958U;
  info[469].fileTimeHi = 0U;
  info[469].mFileTimeLo = 0U;
  info[469].mFileTimeHi = 0U;
  info[470].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m";
  info[470].name = "eml_is_positive_integer_scalar";
  info[470].dominantType = "double";
  info[470].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[470].fileTimeLo = 1309472796U;
  info[470].fileTimeHi = 0U;
  info[470].mFileTimeLo = 0U;
  info[470].mFileTimeHi = 0U;
  info[471].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[471].name = "floor";
  info[471].dominantType = "double";
  info[471].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[471].fileTimeLo = 1343851980U;
  info[471].fileTimeHi = 0U;
  info[471].mFileTimeLo = 0U;
  info[471].mFileTimeHi = 0U;
  info[472].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[472].name = "isinf";
  info[472].dominantType = "double";
  info[472].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[472].fileTimeLo = 1286840360U;
  info[472].fileTimeHi = 0U;
  info[472].mFileTimeLo = 0U;
  info[472].mFileTimeHi = 0U;
  info[473].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[473].name = "mrdivide";
  info[473].dominantType = "double";
  info[473].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[473].fileTimeLo = 1357973148U;
  info[473].fileTimeHi = 0U;
  info[473].mFileTimeLo = 1319751566U;
  info[473].mFileTimeHi = 0U;
  info[474].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[474].name = "mpower";
  info[474].dominantType = "double";
  info[474].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[474].fileTimeLo = 1286840442U;
  info[474].fileTimeHi = 0U;
  info[474].mFileTimeLo = 0U;
  info[474].mFileTimeHi = 0U;
  info[475].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[475].name = "eps";
  info[475].dominantType = "";
  info[475].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[475].fileTimeLo = 1326749596U;
  info[475].fileTimeHi = 0U;
  info[475].mFileTimeLo = 0U;
  info[475].mFileTimeHi = 0U;
  info[476].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[476].name = "sqrt";
  info[476].dominantType = "double";
  info[476].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m";
  info[476].fileTimeLo = 1343851986U;
  info[476].fileTimeHi = 0U;
  info[476].mFileTimeLo = 0U;
  info[476].mFileTimeHi = 0U;
  info[477].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[477].name = "strncmp";
  info[477].dominantType = "char";
  info[477].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strncmp.m";
  info[477].fileTimeLo = 1328879522U;
  info[477].fileTimeHi = 0U;
  info[477].mFileTimeLo = 0U;
  info[477].mFileTimeHi = 0U;
  info[478].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strncmp.m";
  info[478].name = "min";
  info[478].dominantType = "double";
  info[478].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[478].fileTimeLo = 1311276918U;
  info[478].fileTimeHi = 0U;
  info[478].mFileTimeLo = 0U;
  info[478].mFileTimeHi = 0U;
  info[479].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[479].name = "length";
  info[479].dominantType = "double";
  info[479].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[479].fileTimeLo = 1303167806U;
  info[479].fileTimeHi = 0U;
  info[479].mFileTimeLo = 0U;
  info[479].mFileTimeHi = 0U;
  info[480].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[480].name = "mod";
  info[480].dominantType = "double";
  info[480].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[480].fileTimeLo = 1343851982U;
  info[480].fileTimeHi = 0U;
  info[480].mFileTimeLo = 0U;
  info[480].mFileTimeHi = 0U;
  info[481].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[481].name = "coder.internal.errorIf";
  info[481].dominantType = "char";
  info[481].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[481].fileTimeLo = 1334093538U;
  info[481].fileTimeHi = 0U;
  info[481].mFileTimeLo = 0U;
  info[481].mFileTimeHi = 0U;
  info[482].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[482].name = "mtimes";
  info[482].dominantType = "double";
  info[482].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[482].fileTimeLo = 1289541292U;
  info[482].fileTimeHi = 0U;
  info[482].mFileTimeLo = 0U;
  info[482].mFileTimeHi = 0U;
  info[483].context = "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m";
  info[483].name = "colon";
  info[483].dominantType = "double";
  info[483].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[483].fileTimeLo = 1348213528U;
  info[483].fileTimeHi = 0U;
  info[483].mFileTimeLo = 0U;
  info[483].mFileTimeHi = 0U;
  info[484].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!rectifier";
  info[484].name = "abs";
  info[484].dominantType = "double";
  info[484].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[484].fileTimeLo = 1343851966U;
  info[484].fileTimeHi = 0U;
  info[484].mFileTimeLo = 0U;
  info[484].mFileTimeHi = 0U;
  info[485].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[485].name = "eml_dlapy2";
  info[485].dominantType = "double";
  info[485].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_dlapy2.m";
  info[485].fileTimeLo = 1350432254U;
  info[485].fileTimeHi = 0U;
  info[485].mFileTimeLo = 0U;
  info[485].mFileTimeHi = 0U;
  info[486].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!rectifier";
  info[486].name = "mean";
  info[486].dominantType = "double";
  info[486].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[486].fileTimeLo = 1286840294U;
  info[486].fileTimeHi = 0U;
  info[486].mFileTimeLo = 0U;
  info[486].mFileTimeHi = 0U;
  info[487].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[487].name = "isequal";
  info[487].dominantType = "double";
  info[487].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[487].fileTimeLo = 1286840358U;
  info[487].fileTimeHi = 0U;
  info[487].mFileTimeLo = 0U;
  info[487].mFileTimeHi = 0U;
  info[488].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[488].name = "eml_const_nonsingleton_dim";
  info[488].dominantType = "double";
  info[488].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[488].fileTimeLo = 1286840296U;
  info[488].fileTimeHi = 0U;
  info[488].mFileTimeLo = 0U;
  info[488].mFileTimeHi = 0U;
  info[489].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[489].name = "sum";
  info[489].dominantType = "double";
  info[489].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[489].fileTimeLo = 1314758212U;
  info[489].fileTimeHi = 0U;
  info[489].mFileTimeLo = 0U;
  info[489].mFileTimeHi = 0U;
  info[490].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[490].name = "eml_assert_valid_dim";
  info[490].dominantType = "double";
  info[490].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[490].fileTimeLo = 1286840294U;
  info[490].fileTimeHi = 0U;
  info[490].mFileTimeLo = 0U;
  info[490].mFileTimeHi = 0U;
  info[491].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[491].name = "rdivide";
  info[491].dominantType = "double";
  info[491].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[491].fileTimeLo = 1346531988U;
  info[491].fileTimeHi = 0U;
  info[491].mFileTimeLo = 0U;
  info[491].mFileTimeHi = 0U;
  info[492].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!squarelaw";
  info[492].name = "abs";
  info[492].dominantType = "double";
  info[492].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[492].fileTimeLo = 1343851966U;
  info[492].fileTimeHi = 0U;
  info[492].mFileTimeLo = 0U;
  info[492].mFileTimeHi = 0U;
  info[493].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!squarelaw";
  info[493].name = "power";
  info[493].dominantType = "double";
  info[493].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[493].fileTimeLo = 1348213530U;
  info[493].fileTimeHi = 0U;
  info[493].mFileTimeLo = 0U;
  info[493].mFileTimeHi = 0U;
  info[494].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[494].name = "mtimes";
  info[494].dominantType = "double";
  info[494].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[494].fileTimeLo = 1289541292U;
  info[494].fileTimeHi = 0U;
  info[494].mFileTimeLo = 0U;
  info[494].mFileTimeHi = 0U;
  info[495].context =
    "[IXE]$matlabroot$/toolbox/comm/comm/+comm/AGC.m!squarelaw";
  info[495].name = "mean";
  info[495].dominantType = "double";
  info[495].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[495].fileTimeLo = 1286840294U;
  info[495].fileTimeHi = 0U;
  info[495].mFileTimeLo = 0U;
  info[495].mFileTimeHi = 0U;
  info[496].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m";
  info[496].name = "locateOFDMFrame_sdr";
  info[496].dominantType = "double";
  info[496].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m";
  info[496].fileTimeLo = 1397789472U;
  info[496].fileTimeHi = 0U;
  info[496].mFileTimeLo = 0U;
  info[496].mFileTimeHi = 0U;
  info[497].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m";
  info[497].name = "length";
  info[497].dominantType = "double";
  info[497].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[497].fileTimeLo = 1303167806U;
  info[497].fileTimeHi = 0U;
  info[497].mFileTimeLo = 0U;
  info[497].mFileTimeHi = 0U;
  info[498].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m";
  info[498].name = "mrdivide";
  info[498].dominantType = "double";
  info[498].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[498].fileTimeLo = 1357973148U;
  info[498].fileTimeHi = 0U;
  info[498].mFileTimeLo = 1319751566U;
  info[498].mFileTimeHi = 0U;
  info[499].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m";
  info[499].name = "ceil";
  info[499].dominantType = "double";
  info[499].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m";
  info[499].fileTimeLo = 1343851972U;
  info[499].fileTimeHi = 0U;
  info[499].mFileTimeLo = 0U;
  info[499].mFileTimeHi = 0U;
  info[500].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m";
  info[500].name = "eml_scalar_ceil";
  info[500].dominantType = "double";
  info[500].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_ceil.m";
  info[500].fileTimeLo = 1286840320U;
  info[500].fileTimeHi = 0U;
  info[500].mFileTimeLo = 0U;
  info[500].mFileTimeHi = 0U;
  info[501].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m";
  info[501].name = "xcorr";
  info[501].dominantType = "double";
  info[501].resolved = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m";
  info[501].fileTimeLo = 1286808770U;
  info[501].fileTimeHi = 0U;
  info[501].mFileTimeLo = 0U;
  info[501].mFileTimeHi = 0U;
  info[502].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m";
  info[502].name = "max";
  info[502].dominantType = "double";
  info[502].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[502].fileTimeLo = 1311276916U;
  info[502].fileTimeHi = 0U;
  info[502].mFileTimeLo = 0U;
  info[502].mFileTimeHi = 0U;
  info[503].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!local_xcorr";
  info[503].name = "max";
  info[503].dominantType = "double";
  info[503].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[503].fileTimeLo = 1311276916U;
  info[503].fileTimeHi = 0U;
  info[503].mFileTimeLo = 0U;
  info[503].mFileTimeHi = 0U;
  info[504].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!crosscorr";
  info[504].name = "eml_scalar_eg";
  info[504].dominantType = "double";
  info[504].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[504].fileTimeLo = 1286840396U;
  info[504].fileTimeHi = 0U;
  info[504].mFileTimeLo = 0U;
  info[504].mFileTimeHi = 0U;
  info[505].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!crosscorr";
  info[505].name = "mtimes";
  info[505].dominantType = "double";
  info[505].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[505].fileTimeLo = 1289541292U;
  info[505].fileTimeHi = 0U;
  info[505].mFileTimeLo = 0U;
  info[505].mFileTimeHi = 0U;
  info[506].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!crosscorr";
  info[506].name = "min";
  info[506].dominantType = "double";
  info[506].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[506].fileTimeLo = 1311276918U;
  info[506].fileTimeHi = 0U;
  info[506].mFileTimeLo = 0U;
  info[506].mFileTimeHi = 0U;
  info[507].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!crosscorr";
  info[507].name = "eml_conjtimes";
  info[507].dominantType = "double";
  info[507].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_conjtimes.m";
  info[507].fileTimeLo = 1286840296U;
  info[507].fileTimeHi = 0U;
  info[507].mFileTimeLo = 0U;
  info[507].mFileTimeHi = 0U;
  info[508].context = "[IXE]$matlabroot$/toolbox/signal/eml/xcorr.m!local_xcorr";
  info[508].name = "colon";
  info[508].dominantType = "double";
  info[508].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[508].fileTimeLo = 1348213528U;
  info[508].fileTimeHi = 0U;
  info[508].mFileTimeLo = 0U;
  info[508].mFileTimeHi = 0U;
  info[509].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[509].name = "isnan";
  info[509].dominantType = "double";
  info[509].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[509].fileTimeLo = 1286840360U;
  info[509].fileTimeHi = 0U;
  info[509].mFileTimeLo = 0U;
  info[509].mFileTimeHi = 0U;
  info[510].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[510].name = "eml_index_class";
  info[510].dominantType = "";
  info[510].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[510].fileTimeLo = 1323192178U;
  info[510].fileTimeHi = 0U;
  info[510].mFileTimeLo = 0U;
  info[510].mFileTimeHi = 0U;
  info[511].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[511].name = "eml_guarded_nan";
  info[511].dominantType = "char";
  info[511].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[511].fileTimeLo = 1286840376U;
  info[511].fileTimeHi = 0U;
  info[511].mFileTimeLo = 0U;
  info[511].mFileTimeHi = 0U;
}

static void i_info_helper(ResolvedFunctionInfo info[727])
{
  info[512].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[512].name = "isinf";
  info[512].dominantType = "double";
  info[512].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[512].fileTimeLo = 1286840360U;
  info[512].fileTimeHi = 0U;
  info[512].mFileTimeLo = 0U;
  info[512].mFileTimeHi = 0U;
  info[513].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[513].name = "floor";
  info[513].dominantType = "double";
  info[513].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[513].fileTimeLo = 1343851980U;
  info[513].fileTimeHi = 0U;
  info[513].mFileTimeLo = 0U;
  info[513].mFileTimeHi = 0U;
  info[514].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[514].name = "mtimes";
  info[514].dominantType = "double";
  info[514].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[514].fileTimeLo = 1289541292U;
  info[514].fileTimeHi = 0U;
  info[514].mFileTimeLo = 0U;
  info[514].mFileTimeHi = 0U;
  info[515].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[515].name = "abs";
  info[515].dominantType = "double";
  info[515].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[515].fileTimeLo = 1343851966U;
  info[515].fileTimeHi = 0U;
  info[515].mFileTimeLo = 0U;
  info[515].mFileTimeHi = 0U;
  info[516].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[516].name = "eps";
  info[516].dominantType = "char";
  info[516].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[516].fileTimeLo = 1326749596U;
  info[516].fileTimeHi = 0U;
  info[516].mFileTimeLo = 0U;
  info[516].mFileTimeHi = 0U;
  info[517].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[517].name = "intmax";
  info[517].dominantType = "char";
  info[517].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[517].fileTimeLo = 1311276916U;
  info[517].fileTimeHi = 0U;
  info[517].mFileTimeLo = 0U;
  info[517].mFileTimeHi = 0U;
  info[518].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length";
  info[518].name = "coder.internal.indexIntRelop";
  info[518].dominantType = "";
  info[518].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[518].fileTimeLo = 1326749922U;
  info[518].fileTimeHi = 0U;
  info[518].mFileTimeLo = 0U;
  info[518].mFileTimeHi = 0U;
  info[519].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[519].name = "eml_index_minus";
  info[519].dominantType = "double";
  info[519].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[519].fileTimeLo = 1286840378U;
  info[519].fileTimeHi = 0U;
  info[519].mFileTimeLo = 0U;
  info[519].mFileTimeHi = 0U;
  info[520].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[520].name = "eml_index_rdivide";
  info[520].dominantType = "double";
  info[520].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m";
  info[520].fileTimeLo = 1286840380U;
  info[520].fileTimeHi = 0U;
  info[520].mFileTimeLo = 0U;
  info[520].mFileTimeHi = 0U;
  info[521].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[521].name = "eml_int_forloop_overflow_check";
  info[521].dominantType = "";
  info[521].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[521].fileTimeLo = 1346531940U;
  info[521].fileTimeHi = 0U;
  info[521].mFileTimeLo = 0U;
  info[521].mFileTimeHi = 0U;
  info[522].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[522].name = "mtimes";
  info[522].dominantType = "double";
  info[522].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[522].fileTimeLo = 1289541292U;
  info[522].fileTimeHi = 0U;
  info[522].mFileTimeLo = 0U;
  info[522].mFileTimeHi = 0U;
  info[523].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[523].name = "eml_index_times";
  info[523].dominantType = "double";
  info[523].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[523].fileTimeLo = 1286840380U;
  info[523].fileTimeHi = 0U;
  info[523].mFileTimeLo = 0U;
  info[523].mFileTimeHi = 0U;
  info[524].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[524].name = "eml_index_plus";
  info[524].dominantType = "double";
  info[524].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[524].fileTimeLo = 1286840378U;
  info[524].fileTimeHi = 0U;
  info[524].mFileTimeLo = 0U;
  info[524].mFileTimeHi = 0U;
  info[525].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon";
  info[525].name = "eml_index_minus";
  info[525].dominantType = "coder.internal.indexInt";
  info[525].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[525].fileTimeLo = 1286840378U;
  info[525].fileTimeHi = 0U;
  info[525].mFileTimeLo = 0U;
  info[525].mFileTimeHi = 0U;
  info[526].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m";
  info[526].name = "abs";
  info[526].dominantType = "double";
  info[526].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[526].fileTimeLo = 1343851966U;
  info[526].fileTimeHi = 0U;
  info[526].mFileTimeLo = 0U;
  info[526].mFileTimeHi = 0U;
  info[527].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m";
  info[527].name = "power";
  info[527].dominantType = "double";
  info[527].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[527].fileTimeLo = 1348213530U;
  info[527].fileTimeHi = 0U;
  info[527].mFileTimeLo = 0U;
  info[527].mFileTimeHi = 0U;
  info[528].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m";
  info[528].name = "rdivide";
  info[528].dominantType = "double";
  info[528].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[528].fileTimeLo = 1346531988U;
  info[528].fileTimeHi = 0U;
  info[528].mFileTimeLo = 0U;
  info[528].mFileTimeHi = 0U;
  info[529].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  info[529].name = "isequal";
  info[529].dominantType = "double";
  info[529].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[529].fileTimeLo = 1286840358U;
  info[529].fileTimeHi = 0U;
  info[529].mFileTimeLo = 0U;
  info[529].mFileTimeHi = 0U;
  info[530].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[530].name = "max";
  info[530].dominantType = "double";
  info[530].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[530].fileTimeLo = 1311276916U;
  info[530].fileTimeHi = 0U;
  info[530].mFileTimeLo = 0U;
  info[530].mFileTimeHi = 0U;
  info[531].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[531].name = "eml_const_nonsingleton_dim";
  info[531].dominantType = "double";
  info[531].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[531].fileTimeLo = 1286840296U;
  info[531].fileTimeHi = 0U;
  info[531].mFileTimeLo = 0U;
  info[531].mFileTimeHi = 0U;
  info[532].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[532].name = "eml_scalar_eg";
  info[532].dominantType = "double";
  info[532].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[532].fileTimeLo = 1286840396U;
  info[532].fileTimeHi = 0U;
  info[532].mFileTimeLo = 0U;
  info[532].mFileTimeHi = 0U;
  info[533].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[533].name = "eml_index_class";
  info[533].dominantType = "";
  info[533].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[533].fileTimeLo = 1323192178U;
  info[533].fileTimeHi = 0U;
  info[533].mFileTimeLo = 0U;
  info[533].mFileTimeHi = 0U;
  info[534].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[534].name = "eml_index_class";
  info[534].dominantType = "";
  info[534].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[534].fileTimeLo = 1323192178U;
  info[534].fileTimeHi = 0U;
  info[534].mFileTimeLo = 0U;
  info[534].mFileTimeHi = 0U;
  info[535].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[535].name = "isnan";
  info[535].dominantType = "double";
  info[535].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[535].fileTimeLo = 1286840360U;
  info[535].fileTimeHi = 0U;
  info[535].mFileTimeLo = 0U;
  info[535].mFileTimeHi = 0U;
  info[536].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[536].name = "eml_index_plus";
  info[536].dominantType = "coder.internal.indexInt";
  info[536].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[536].fileTimeLo = 1286840378U;
  info[536].fileTimeHi = 0U;
  info[536].mFileTimeLo = 0U;
  info[536].mFileTimeHi = 0U;
  info[537].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[537].name = "eml_int_forloop_overflow_check";
  info[537].dominantType = "";
  info[537].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[537].fileTimeLo = 1346531940U;
  info[537].fileTimeHi = 0U;
  info[537].mFileTimeLo = 0U;
  info[537].mFileTimeHi = 0U;
  info[538].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[538].name = "eml_relop";
  info[538].dominantType = "function_handle";
  info[538].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[538].fileTimeLo = 1342472782U;
  info[538].fileTimeHi = 0U;
  info[538].mFileTimeLo = 0U;
  info[538].mFileTimeHi = 0U;
  info[539].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[539].name = "mtimes";
  info[539].dominantType = "double";
  info[539].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[539].fileTimeLo = 1289541292U;
  info[539].fileTimeHi = 0U;
  info[539].mFileTimeLo = 0U;
  info[539].mFileTimeHi = 0U;
  info[540].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[540].name = "find";
  info[540].dominantType = "logical";
  info[540].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[540].fileTimeLo = 1303167806U;
  info[540].fileTimeHi = 0U;
  info[540].mFileTimeLo = 0U;
  info[540].mFileTimeHi = 0U;
  info[541].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[541].name = "mrdivide";
  info[541].dominantType = "double";
  info[541].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[541].fileTimeLo = 1357973148U;
  info[541].fileTimeHi = 0U;
  info[541].mFileTimeLo = 1319751566U;
  info[541].mFileTimeHi = 0U;
  info[542].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[542].name = "colon";
  info[542].dominantType = "double";
  info[542].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[542].fileTimeLo = 1348213528U;
  info[542].fileTimeHi = 0U;
  info[542].mFileTimeLo = 0U;
  info[542].mFileTimeHi = 0U;
  info[543].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[543].name = "length";
  info[543].dominantType = "double";
  info[543].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[543].fileTimeLo = 1303167806U;
  info[543].fileTimeHi = 0U;
  info[543].mFileTimeLo = 0U;
  info[543].mFileTimeHi = 0U;
  info[544].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[544].name = "intersect";
  info[544].dominantType = "double";
  info[544].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/intersect.m";
  info[544].fileTimeLo = 1344493638U;
  info[544].fileTimeHi = 0U;
  info[544].mFileTimeLo = 0U;
  info[544].mFileTimeHi = 0U;
  info[545].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/intersect.m";
  info[545].name = "eml_setop";
  info[545].dominantType = "char";
  info[545].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m";
  info[545].fileTimeLo = 1344493638U;
  info[545].fileTimeHi = 0U;
  info[545].mFileTimeLo = 0U;
  info[545].mFileTimeHi = 0U;
  info[546].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!parse_flags";
  info[546].name = "upper";
  info[546].dominantType = "char";
  info[546].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/upper.m";
  info[546].fileTimeLo = 1327440710U;
  info[546].fileTimeHi = 0U;
  info[546].mFileTimeLo = 0U;
  info[546].mFileTimeHi = 0U;
  info[547].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/upper.m";
  info[547].name = "eml_string_transform";
  info[547].dominantType = "char";
  info[547].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_string_transform.m";
  info[547].fileTimeLo = 1327440710U;
  info[547].fileTimeHi = 0U;
  info[547].mFileTimeLo = 0U;
  info[547].mFileTimeHi = 0U;
  info[548].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_string_transform.m";
  info[548].name = "eml_assert_supported_string";
  info[548].dominantType = "char";
  info[548].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m";
  info[548].fileTimeLo = 1327440710U;
  info[548].fileTimeHi = 0U;
  info[548].mFileTimeLo = 0U;
  info[548].mFileTimeHi = 0U;
  info[549].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m!inrange";
  info[549].name = "eml_charmax";
  info[549].dominantType = "";
  info[549].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_charmax.m";
  info[549].fileTimeLo = 1327440710U;
  info[549].fileTimeHi = 0U;
  info[549].mFileTimeLo = 0U;
  info[549].mFileTimeHi = 0U;
  info[550].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_charmax.m";
  info[550].name = "intmax";
  info[550].dominantType = "char";
  info[550].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[550].fileTimeLo = 1311276916U;
  info[550].fileTimeHi = 0U;
  info[550].mFileTimeLo = 0U;
  info[550].mFileTimeHi = 0U;
  info[551].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_string_transform.m";
  info[551].name = "eml_charmax";
  info[551].dominantType = "";
  info[551].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_charmax.m";
  info[551].fileTimeLo = 1327440710U;
  info[551].fileTimeHi = 0U;
  info[551].mFileTimeLo = 0U;
  info[551].mFileTimeHi = 0U;
  info[552].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_string_transform.m";
  info[552].name = "colon";
  info[552].dominantType = "int8";
  info[552].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[552].fileTimeLo = 1348213528U;
  info[552].fileTimeHi = 0U;
  info[552].mFileTimeLo = 0U;
  info[552].mFileTimeHi = 0U;
  info[553].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[553].name = "colon";
  info[553].dominantType = "int8";
  info[553].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[553].fileTimeLo = 1348213528U;
  info[553].fileTimeHi = 0U;
  info[553].mFileTimeLo = 0U;
  info[553].mFileTimeHi = 0U;
  info[554].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[554].name = "floor";
  info[554].dominantType = "double";
  info[554].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[554].fileTimeLo = 1343851980U;
  info[554].fileTimeHi = 0U;
  info[554].mFileTimeLo = 0U;
  info[554].mFileTimeHi = 0U;
  info[555].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange";
  info[555].name = "intmin";
  info[555].dominantType = "char";
  info[555].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[555].fileTimeLo = 1311276918U;
  info[555].fileTimeHi = 0U;
  info[555].mFileTimeLo = 0U;
  info[555].mFileTimeHi = 0U;
  info[556].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange";
  info[556].name = "intmax";
  info[556].dominantType = "char";
  info[556].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[556].fileTimeLo = 1311276916U;
  info[556].fileTimeHi = 0U;
  info[556].mFileTimeLo = 0U;
  info[556].mFileTimeHi = 0U;
  info[557].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher";
  info[557].name = "intmin";
  info[557].dominantType = "char";
  info[557].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[557].fileTimeLo = 1311276918U;
  info[557].fileTimeHi = 0U;
  info[557].mFileTimeLo = 0U;
  info[557].mFileTimeHi = 0U;
  info[558].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher";
  info[558].name = "intmax";
  info[558].dominantType = "char";
  info[558].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[558].fileTimeLo = 1311276916U;
  info[558].fileTimeHi = 0U;
  info[558].mFileTimeLo = 0U;
  info[558].mFileTimeHi = 0U;
  info[559].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher";
  info[559].name = "eml_isa_uint";
  info[559].dominantType = "int8";
  info[559].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isa_uint.m";
  info[559].fileTimeLo = 1286840384U;
  info[559].fileTimeHi = 0U;
  info[559].mFileTimeLo = 0U;
  info[559].mFileTimeHi = 0U;
  info[560].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[560].name = "eml_unsigned_class";
  info[560].dominantType = "char";
  info[560].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[560].fileTimeLo = 1323192180U;
  info[560].fileTimeHi = 0U;
  info[560].mFileTimeLo = 0U;
  info[560].mFileTimeHi = 0U;
  info[561].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[561].name = "eml_index_class";
  info[561].dominantType = "";
  info[561].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[561].fileTimeLo = 1323192178U;
  info[561].fileTimeHi = 0U;
  info[561].mFileTimeLo = 0U;
  info[561].mFileTimeHi = 0U;
  info[562].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[562].name = "intmax";
  info[562].dominantType = "char";
  info[562].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[562].fileTimeLo = 1311276916U;
  info[562].fileTimeHi = 0U;
  info[562].mFileTimeLo = 0U;
  info[562].mFileTimeHi = 0U;
  info[563].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[563].name = "eml_isa_uint";
  info[563].dominantType = "int8";
  info[563].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isa_uint.m";
  info[563].fileTimeLo = 1286840384U;
  info[563].fileTimeHi = 0U;
  info[563].mFileTimeLo = 0U;
  info[563].mFileTimeHi = 0U;
  info[564].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[564].name = "eml_index_plus";
  info[564].dominantType = "double";
  info[564].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[564].fileTimeLo = 1286840378U;
  info[564].fileTimeHi = 0U;
  info[564].mFileTimeLo = 0U;
  info[564].mFileTimeHi = 0U;
  info[565].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_signed_integer_colon";
  info[565].name = "eml_int_forloop_overflow_check";
  info[565].dominantType = "";
  info[565].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[565].fileTimeLo = 1346531940U;
  info[565].fileTimeHi = 0U;
  info[565].mFileTimeLo = 0U;
  info[565].mFileTimeHi = 0U;
  info[566].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_string_transform.m";
  info[566].name = "char";
  info[566].dominantType = "int8";
  info[566].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[566].fileTimeLo = 1319751568U;
  info[566].fileTimeHi = 0U;
  info[566].mFileTimeLo = 0U;
  info[566].mFileTimeHi = 0U;
  info[567].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[567].name = "eml_index_class";
  info[567].dominantType = "";
  info[567].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[567].fileTimeLo = 1323192178U;
  info[567].fileTimeHi = 0U;
  info[567].mFileTimeLo = 0U;
  info[567].mFileTimeHi = 0U;
  info[568].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[568].name = "eml_scalar_eg";
  info[568].dominantType = "double";
  info[568].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[568].fileTimeLo = 1286840396U;
  info[568].fileTimeHi = 0U;
  info[568].mFileTimeLo = 0U;
  info[568].mFileTimeHi = 0U;
  info[569].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[569].name = "min";
  info[569].dominantType = "coder.internal.indexInt";
  info[569].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[569].fileTimeLo = 1311276918U;
  info[569].fileTimeHi = 0U;
  info[569].mFileTimeLo = 0U;
  info[569].mFileTimeHi = 0U;
  info[570].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[570].name = "issorted";
  info[570].dominantType = "double";
  info[570].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/issorted.m";
  info[570].fileTimeLo = 1286840294U;
  info[570].fileTimeHi = 0U;
  info[570].mFileTimeLo = 0U;
  info[570].mFileTimeHi = 0U;
  info[571].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/issorted.m";
  info[571].name = "eml_index_minus";
  info[571].dominantType = "double";
  info[571].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[571].fileTimeLo = 1286840378U;
  info[571].fileTimeHi = 0U;
  info[571].mFileTimeLo = 0U;
  info[571].mFileTimeHi = 0U;
  info[572].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/issorted.m";
  info[572].name = "eml_int_forloop_overflow_check";
  info[572].dominantType = "";
  info[572].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[572].fileTimeLo = 1346531940U;
  info[572].fileTimeHi = 0U;
  info[572].mFileTimeLo = 0U;
  info[572].mFileTimeHi = 0U;
  info[573].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/issorted.m";
  info[573].name = "eml_index_plus";
  info[573].dominantType = "double";
  info[573].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[573].fileTimeLo = 1286840378U;
  info[573].fileTimeHi = 0U;
  info[573].mFileTimeLo = 0U;
  info[573].mFileTimeHi = 0U;
  info[574].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/issorted.m";
  info[574].name = "eml_sort_le";
  info[574].dominantType = "double";
  info[574].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m";
  info[574].fileTimeLo = 1292212110U;
  info[574].fileTimeHi = 0U;
  info[574].mFileTimeLo = 0U;
  info[574].mFileTimeHi = 0U;
  info[575].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[575].name = "eml_error";
  info[575].dominantType = "char";
  info[575].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[575].fileTimeLo = 1343851958U;
  info[575].fileTimeHi = 0U;
  info[575].mFileTimeLo = 0U;
  info[575].mFileTimeHi = 0U;
}

static void info_helper(ResolvedFunctionInfo info[727])
{
  info[0].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m";
  info[0].name = "CreateTXRX";
  info[0].dominantType = "";
  info[0].resolved =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m";
  info[0].fileTimeLo = 1397789457U;
  info[0].fileTimeHi = 0U;
  info[0].mFileTimeLo = 0U;
  info[0].mFileTimeHi = 0U;
  info[1].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m";
  info[1].name = "mrdivide";
  info[1].dominantType = "double";
  info[1].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[1].fileTimeLo = 1357973148U;
  info[1].fileTimeHi = 0U;
  info[1].mFileTimeLo = 1319751566U;
  info[1].mFileTimeHi = 0U;
  info[2].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[2].name = "rdivide";
  info[2].dominantType = "double";
  info[2].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[2].fileTimeLo = 1346531988U;
  info[2].fileTimeHi = 0U;
  info[2].mFileTimeLo = 0U;
  info[2].mFileTimeHi = 0U;
  info[3].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[3].name = "eml_scalexp_compatible";
  info[3].dominantType = "double";
  info[3].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  info[3].fileTimeLo = 1286840396U;
  info[3].fileTimeHi = 0U;
  info[3].mFileTimeLo = 0U;
  info[3].mFileTimeHi = 0U;
  info[4].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[4].name = "eml_div";
  info[4].dominantType = "double";
  info[4].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  info[4].fileTimeLo = 1313369410U;
  info[4].fileTimeHi = 0U;
  info[4].mFileTimeLo = 0U;
  info[4].mFileTimeHi = 0U;
  info[5].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/CreateTXRX.m";
  info[5].name = "generateOFDMSignal_TX2";
  info[5].dominantType = "char";
  info[5].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[5].fileTimeLo = 1397752622U;
  info[5].fileTimeHi = 0U;
  info[5].mFileTimeLo = 0U;
  info[5].mFileTimeHi = 0U;
  info[6].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[6].name = "length";
  info[6].dominantType = "char";
  info[6].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[6].fileTimeLo = 1303167806U;
  info[6].fileTimeHi = 0U;
  info[6].mFileTimeLo = 0U;
  info[6].mFileTimeHi = 0U;
  info[7].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[7].name = "mpower";
  info[7].dominantType = "double";
  info[7].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[7].fileTimeLo = 1286840442U;
  info[7].fileTimeHi = 0U;
  info[7].mFileTimeLo = 0U;
  info[7].mFileTimeHi = 0U;
  info[8].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  info[8].name = "power";
  info[8].dominantType = "double";
  info[8].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[8].fileTimeLo = 1348213530U;
  info[8].fileTimeHi = 0U;
  info[8].mFileTimeLo = 0U;
  info[8].mFileTimeHi = 0U;
  info[9].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[9].name = "eml_scalar_eg";
  info[9].dominantType = "double";
  info[9].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[9].fileTimeLo = 1286840396U;
  info[9].fileTimeHi = 0U;
  info[9].mFileTimeLo = 0U;
  info[9].mFileTimeHi = 0U;
  info[10].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[10].name = "eml_scalexp_alloc";
  info[10].dominantType = "double";
  info[10].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[10].fileTimeLo = 1352446460U;
  info[10].fileTimeHi = 0U;
  info[10].mFileTimeLo = 0U;
  info[10].mFileTimeHi = 0U;
  info[11].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  info[11].name = "floor";
  info[11].dominantType = "double";
  info[11].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[11].fileTimeLo = 1343851980U;
  info[11].fileTimeHi = 0U;
  info[11].mFileTimeLo = 0U;
  info[11].mFileTimeHi = 0U;
  info[12].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[12].name = "eml_scalar_floor";
  info[12].dominantType = "double";
  info[12].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[12].fileTimeLo = 1286840326U;
  info[12].fileTimeHi = 0U;
  info[12].mFileTimeLo = 0U;
  info[12].mFileTimeHi = 0U;
  info[13].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  info[13].name = "eml_scalar_eg";
  info[13].dominantType = "double";
  info[13].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[13].fileTimeLo = 1286840396U;
  info[13].fileTimeHi = 0U;
  info[13].mFileTimeLo = 0U;
  info[13].mFileTimeHi = 0U;
  info[14].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[14].name = "randi";
  info[14].dominantType = "double";
  info[14].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[14].fileTimeLo = 1320911042U;
  info[14].fileTimeHi = 0U;
  info[14].mFileTimeLo = 0U;
  info[14].mFileTimeHi = 0U;
  info[15].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[15].name = "eml_assert_valid_size_arg";
  info[15].dominantType = "double";
  info[15].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[15].fileTimeLo = 1286840294U;
  info[15].fileTimeHi = 0U;
  info[15].mFileTimeLo = 0U;
  info[15].mFileTimeHi = 0U;
  info[16].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isintegral";
  info[16].name = "isinf";
  info[16].dominantType = "double";
  info[16].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[16].fileTimeLo = 1286840360U;
  info[16].fileTimeHi = 0U;
  info[16].mFileTimeLo = 0U;
  info[16].mFileTimeHi = 0U;
  info[17].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!numel_for_size";
  info[17].name = "mtimes";
  info[17].dominantType = "double";
  info[17].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[17].fileTimeLo = 1289541292U;
  info[17].fileTimeHi = 0U;
  info[17].mFileTimeLo = 0U;
  info[17].mFileTimeHi = 0U;
  info[18].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[18].name = "eml_index_class";
  info[18].dominantType = "";
  info[18].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[18].fileTimeLo = 1323192178U;
  info[18].fileTimeHi = 0U;
  info[18].mFileTimeLo = 0U;
  info[18].mFileTimeHi = 0U;
  info[19].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[19].name = "intmax";
  info[19].dominantType = "char";
  info[19].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[19].fileTimeLo = 1311276916U;
  info[19].fileTimeHi = 0U;
  info[19].mFileTimeLo = 0U;
  info[19].mFileTimeHi = 0U;
  info[20].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[20].name = "rand";
  info[20].dominantType = "double";
  info[20].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[20].fileTimeLo = 1313369422U;
  info[20].fileTimeHi = 0U;
  info[20].mFileTimeLo = 0U;
  info[20].mFileTimeHi = 0U;
  info[21].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m";
  info[21].name = "eml_is_rand_extrinsic";
  info[21].dominantType = "";
  info[21].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/eml_is_rand_extrinsic.m";
  info[21].fileTimeLo = 1334093090U;
  info[21].fileTimeHi = 0U;
  info[21].mFileTimeLo = 0U;
  info[21].mFileTimeHi = 0U;
  info[22].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[22].name = "mtimes";
  info[22].dominantType = "double";
  info[22].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[22].fileTimeLo = 1289541292U;
  info[22].fileTimeHi = 0U;
  info[22].mFileTimeLo = 0U;
  info[22].mFileTimeHi = 0U;
  info[23].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m";
  info[23].name = "floor";
  info[23].dominantType = "double";
  info[23].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[23].fileTimeLo = 1343851980U;
  info[23].fileTimeHi = 0U;
  info[23].mFileTimeLo = 0U;
  info[23].mFileTimeHi = 0U;
  info[24].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[24].name = "char";
  info[24].dominantType = "double";
  info[24].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[24].fileTimeLo = 1319751568U;
  info[24].fileTimeHi = 0U;
  info[24].mFileTimeLo = 0U;
  info[24].mFileTimeHi = 0U;
  info[25].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[25].name = "repmat";
  info[25].dominantType = "char";
  info[25].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[25].fileTimeLo = 1352446460U;
  info[25].fileTimeHi = 0U;
  info[25].mFileTimeLo = 0U;
  info[25].mFileTimeHi = 0U;
  info[26].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[26].name = "eml_assert_valid_size_arg";
  info[26].dominantType = "double";
  info[26].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[26].fileTimeLo = 1286840294U;
  info[26].fileTimeHi = 0U;
  info[26].mFileTimeLo = 0U;
  info[26].mFileTimeHi = 0U;
  info[27].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[27].name = "eml_index_class";
  info[27].dominantType = "";
  info[27].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[27].fileTimeLo = 1323192178U;
  info[27].fileTimeHi = 0U;
  info[27].mFileTimeLo = 0U;
  info[27].mFileTimeHi = 0U;
  info[28].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[28].name = "eml_index_minus";
  info[28].dominantType = "coder.internal.indexInt";
  info[28].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[28].fileTimeLo = 1286840378U;
  info[28].fileTimeHi = 0U;
  info[28].mFileTimeLo = 0U;
  info[28].mFileTimeHi = 0U;
  info[29].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[29].name = "eml_index_class";
  info[29].dominantType = "";
  info[29].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[29].fileTimeLo = 1323192178U;
  info[29].fileTimeHi = 0U;
  info[29].mFileTimeLo = 0U;
  info[29].mFileTimeHi = 0U;
  info[30].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[30].name = "matlab.system.coder.SystemProp";
  info[30].dominantType = "unknown";
  info[30].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[30].fileTimeLo = 1357971320U;
  info[30].fileTimeHi = 0U;
  info[30].mFileTimeLo = 0U;
  info[30].mFileTimeHi = 0U;
  info[31].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[31].name = "matlab.system.coder.SystemCore";
  info[31].dominantType = "unknown";
  info[31].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p";
  info[31].fileTimeLo = 1357971318U;
  info[31].fileTimeHi = 0U;
  info[31].mFileTimeLo = 0U;
  info[31].mFileTimeHi = 0U;
  info[32].context = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[32].name = "matlab.system.coder.System";
  info[32].dominantType = "unknown";
  info[32].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[32].fileTimeLo = 1357971318U;
  info[32].fileTimeHi = 0U;
  info[32].mFileTimeLo = 0U;
  info[32].mFileTimeHi = 0U;
  info[33].context = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[33].name = "matlab.system.System";
  info[33].dominantType = "unknown";
  info[33].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/System.p";
  info[33].fileTimeLo = 1357962380U;
  info[33].fileTimeHi = 0U;
  info[33].mFileTimeLo = 0U;
  info[33].mFileTimeHi = 0U;
  info[34].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[34].name = "matlab.System";
  info[34].dominantType = "unknown";
  info[34].resolved = "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p";
  info[34].fileTimeLo = 1357962380U;
  info[34].fileTimeHi = 0U;
  info[34].mFileTimeLo = 0U;
  info[34].mFileTimeHi = 0U;
  info[35].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[35].name = "matlab.system.mixin.coder.Propagates";
  info[35].dominantType = "unknown";
  info[35].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Propagates.p";
  info[35].fileTimeLo = 1357971320U;
  info[35].fileTimeHi = 0U;
  info[35].mFileTimeLo = 0U;
  info[35].mFileTimeHi = 0U;
  info[36].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[36].name = "matlab.system.mixin.Propagates";
  info[36].dominantType = "unknown";
  info[36].resolved =
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/Propagates.p";
  info[36].fileTimeLo = 1357962382U;
  info[36].fileTimeHi = 0U;
  info[36].mFileTimeLo = 0U;
  info[36].mFileTimeHi = 0U;
  info[37].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[37].name = "OFDMBase";
  info[37].dominantType = "unknown";
  info[37].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[37].fileTimeLo = 1397789457U;
  info[37].fileTimeHi = 0U;
  info[37].mFileTimeLo = 0U;
  info[37].mFileTimeHi = 0U;
  info[38].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/generateOFDMSignal_TX2.m";
  info[38].name = "OFDMModulator";
  info[38].dominantType = "char";
  info[38].resolved =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMModulator.m";
  info[38].fileTimeLo = 1397789457U;
  info[38].fileTimeHi = 0U;
  info[38].mFileTimeLo = 0U;
  info[38].mFileTimeHi = 0U;
  info[39].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[39].name = "matlab.system.coder.SystemProp";
  info[39].dominantType = "";
  info[39].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[39].fileTimeLo = 1357971320U;
  info[39].fileTimeHi = 0U;
  info[39].mFileTimeLo = 0U;
  info[39].mFileTimeHi = 0U;
  info[40].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[40].name = "matlab.system.isSystemObject";
  info[40].dominantType = "char";
  info[40].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p";
  info[40].fileTimeLo = 1357962380U;
  info[40].fileTimeHi = 0U;
  info[40].mFileTimeLo = 0U;
  info[40].mFileTimeHi = 0U;
  info[41].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[41].name = "length";
  info[41].dominantType = "cell";
  info[41].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[41].fileTimeLo = 1303167806U;
  info[41].fileTimeHi = 0U;
  info[41].mFileTimeLo = 0U;
  info[41].mFileTimeHi = 0U;
  info[42].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[42].name = "matlab.system.pvParse";
  info[42].dominantType = "OFDMModulator";
  info[42].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[42].fileTimeLo = 1357962380U;
  info[42].fileTimeHi = 0U;
  info[42].mFileTimeLo = 0U;
  info[42].mFileTimeHi = 0U;
  info[43].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[43].name = "length";
  info[43].dominantType = "cell";
  info[43].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[43].fileTimeLo = 1303167806U;
  info[43].fileTimeHi = 0U;
  info[43].mFileTimeLo = 0U;
  info[43].mFileTimeHi = 0U;
  info[44].context =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[44].name = "rem";
  info[44].dominantType = "double";
  info[44].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[44].fileTimeLo = 1343851984U;
  info[44].fileTimeHi = 0U;
  info[44].mFileTimeLo = 0U;
  info[44].mFileTimeHi = 0U;
  info[45].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[45].name = "eml_scalar_eg";
  info[45].dominantType = "double";
  info[45].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[45].fileTimeLo = 1286840396U;
  info[45].fileTimeHi = 0U;
  info[45].mFileTimeLo = 0U;
  info[45].mFileTimeHi = 0U;
  info[46].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m";
  info[46].name = "eml_scalexp_alloc";
  info[46].dominantType = "double";
  info[46].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[46].fileTimeLo = 1352446460U;
  info[46].fileTimeHi = 0U;
  info[46].mFileTimeLo = 0U;
  info[46].mFileTimeHi = 0U;
  info[47].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[47].name = "log2";
  info[47].dominantType = "double";
  info[47].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m";
  info[47].fileTimeLo = 1343851982U;
  info[47].fileTimeHi = 0U;
  info[47].mFileTimeLo = 0U;
  info[47].mFileTimeHi = 0U;
  info[48].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m";
  info[48].name = "eml_error";
  info[48].dominantType = "char";
  info[48].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[48].fileTimeLo = 1343851958U;
  info[48].fileTimeHi = 0U;
  info[48].mFileTimeLo = 0U;
  info[48].mFileTimeHi = 0U;
  info[49].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_log2";
  info[49].name = "realmax";
  info[49].dominantType = "char";
  info[49].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[49].fileTimeLo = 1307672842U;
  info[49].fileTimeHi = 0U;
  info[49].mFileTimeLo = 0U;
  info[49].mFileTimeHi = 0U;
  info[50].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m";
  info[50].name = "eml_realmax";
  info[50].dominantType = "char";
  info[50].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[50].fileTimeLo = 1326749596U;
  info[50].fileTimeHi = 0U;
  info[50].mFileTimeLo = 0U;
  info[50].mFileTimeHi = 0U;
  info[51].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[51].name = "eml_float_model";
  info[51].dominantType = "char";
  info[51].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[51].fileTimeLo = 1326749596U;
  info[51].fileTimeHi = 0U;
  info[51].mFileTimeLo = 0U;
  info[51].mFileTimeHi = 0U;
  info[52].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m";
  info[52].name = "mtimes";
  info[52].dominantType = "double";
  info[52].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[52].fileTimeLo = 1289541292U;
  info[52].fileTimeHi = 0U;
  info[52].mFileTimeLo = 0U;
  info[52].mFileTimeHi = 0U;
  info[53].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_log2";
  info[53].name = "mrdivide";
  info[53].dominantType = "double";
  info[53].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[53].fileTimeLo = 1357973148U;
  info[53].fileTimeHi = 0U;
  info[53].mFileTimeLo = 1319751566U;
  info[53].mFileTimeHi = 0U;
  info[54].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[54].name = "eml_guarded_inf";
  info[54].dominantType = "char";
  info[54].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_inf.m";
  info[54].fileTimeLo = 1286840376U;
  info[54].fileTimeHi = 0U;
  info[54].mFileTimeLo = 0U;
  info[54].mFileTimeHi = 0U;
  info[55].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_inf.m";
  info[55].name = "eml_is_float_class";
  info[55].dominantType = "char";
  info[55].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[55].fileTimeLo = 1286840382U;
  info[55].fileTimeHi = 0U;
  info[55].mFileTimeLo = 0U;
  info[55].mFileTimeHi = 0U;
  info[56].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[56].name = "eml_guarded_nan";
  info[56].dominantType = "char";
  info[56].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[56].fileTimeLo = 1286840376U;
  info[56].fileTimeHi = 0U;
  info[56].mFileTimeLo = 0U;
  info[56].mFileTimeHi = 0U;
  info[57].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m";
  info[57].name = "eml_is_float_class";
  info[57].dominantType = "char";
  info[57].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[57].fileTimeLo = 1286840382U;
  info[57].fileTimeHi = 0U;
  info[57].mFileTimeLo = 0U;
  info[57].mFileTimeHi = 0U;
  info[58].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[58].name = "isfinite";
  info[58].dominantType = "double";
  info[58].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[58].fileTimeLo = 1286840358U;
  info[58].fileTimeHi = 0U;
  info[58].mFileTimeLo = 0U;
  info[58].mFileTimeHi = 0U;
  info[59].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[59].name = "isinf";
  info[59].dominantType = "double";
  info[59].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[59].fileTimeLo = 1286840360U;
  info[59].fileTimeHi = 0U;
  info[59].mFileTimeLo = 0U;
  info[59].mFileTimeHi = 0U;
  info[60].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[60].name = "isnan";
  info[60].dominantType = "double";
  info[60].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[60].fileTimeLo = 1286840360U;
  info[60].fileTimeHi = 0U;
  info[60].mFileTimeLo = 0U;
  info[60].mFileTimeHi = 0U;
  info[61].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_frexp";
  info[61].name = "isfinite";
  info[61].dominantType = "double";
  info[61].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m";
  info[61].fileTimeLo = 1286840358U;
  info[61].fileTimeHi = 0U;
  info[61].mFileTimeLo = 0U;
  info[61].mFileTimeHi = 0U;
  info[62].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2";
  info[62].name = "mrdivide";
  info[62].dominantType = "double";
  info[62].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[62].fileTimeLo = 1357973148U;
  info[62].fileTimeHi = 0U;
  info[62].mFileTimeLo = 1319751566U;
  info[62].mFileTimeHi = 0U;
  info[63].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMBase.m";
  info[63].name = "floor";
  info[63].dominantType = "double";
  info[63].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[63].fileTimeLo = 1343851980U;
  info[63].fileTimeHi = 0U;
  info[63].mFileTimeLo = 0U;
  info[63].mFileTimeHi = 0U;
}

static void j_info_helper(ResolvedFunctionInfo info[727])
{
  info[576].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!skip_to_last_equal_value";
  info[576].name = "eml_index_class";
  info[576].dominantType = "";
  info[576].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[576].fileTimeLo = 1323192178U;
  info[576].fileTimeHi = 0U;
  info[576].mFileTimeLo = 0U;
  info[576].mFileTimeHi = 0U;
  info[577].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!skip_to_last_equal_value";
  info[577].name = "eml_index_plus";
  info[577].dominantType = "double";
  info[577].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[577].fileTimeLo = 1286840378U;
  info[577].fileTimeHi = 0U;
  info[577].mFileTimeLo = 0U;
  info[577].mFileTimeHi = 0U;
  info[578].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!skip_to_last_equal_value";
  info[578].name = "eml_safe_eq";
  info[578].dominantType = "double";
  info[578].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[578].fileTimeLo = 1348213518U;
  info[578].fileTimeHi = 0U;
  info[578].mFileTimeLo = 0U;
  info[578].mFileTimeHi = 0U;
  info[579].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[579].name = "eml_safe_eq";
  info[579].dominantType = "double";
  info[579].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m";
  info[579].fileTimeLo = 1348213518U;
  info[579].fileTimeHi = 0U;
  info[579].mFileTimeLo = 0U;
  info[579].mFileTimeHi = 0U;
  info[580].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[580].name = "eml_index_plus";
  info[580].dominantType = "double";
  info[580].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[580].fileTimeLo = 1286840378U;
  info[580].fileTimeHi = 0U;
  info[580].mFileTimeLo = 0U;
  info[580].mFileTimeHi = 0U;
  info[581].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_setop.m!do_vectors";
  info[581].name = "eml_sort_lt";
  info[581].dominantType = "double";
  info[581].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_lt.m";
  info[581].fileTimeLo = 1292212110U;
  info[581].fileTimeHi = 0U;
  info[581].mFileTimeLo = 0U;
  info[581].mFileTimeHi = 0U;
  info[582].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_lt.m";
  info[582].name = "eml_relop";
  info[582].dominantType = "function_handle";
  info[582].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[582].fileTimeLo = 1342472782U;
  info[582].fileTimeHi = 0U;
  info[582].mFileTimeLo = 0U;
  info[582].mFileTimeHi = 0U;
  info[583].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_lt.m";
  info[583].name = "isnan";
  info[583].dominantType = "double";
  info[583].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[583].fileTimeLo = 1286840360U;
  info[583].fileTimeHi = 0U;
  info[583].mFileTimeLo = 0U;
  info[583].mFileTimeHi = 0U;
  info[584].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/locateOFDMFrame_sdr.m!locateShortpreamble";
  info[584].name = "eml_li_find";
  info[584].dominantType = "";
  info[584].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m";
  info[584].fileTimeLo = 1286840386U;
  info[584].fileTimeHi = 0U;
  info[584].mFileTimeLo = 0U;
  info[584].mFileTimeHi = 0U;
  info[585].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m";
  info[585].name = "eml_index_class";
  info[585].dominantType = "";
  info[585].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[585].fileTimeLo = 1323192178U;
  info[585].fileTimeHi = 0U;
  info[585].mFileTimeLo = 0U;
  info[585].mFileTimeHi = 0U;
  info[586].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m!compute_nones";
  info[586].name = "eml_index_class";
  info[586].dominantType = "";
  info[586].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[586].fileTimeLo = 1323192178U;
  info[586].fileTimeHi = 0U;
  info[586].mFileTimeLo = 0U;
  info[586].mFileTimeHi = 0U;
  info[587].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m!compute_nones";
  info[587].name = "eml_int_forloop_overflow_check";
  info[587].dominantType = "";
  info[587].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[587].fileTimeLo = 1346531940U;
  info[587].fileTimeHi = 0U;
  info[587].mFileTimeLo = 0U;
  info[587].mFileTimeHi = 0U;
  info[588].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m!compute_nones";
  info[588].name = "eml_index_plus";
  info[588].dominantType = "double";
  info[588].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[588].fileTimeLo = 1286840378U;
  info[588].fileTimeHi = 0U;
  info[588].mFileTimeLo = 0U;
  info[588].mFileTimeHi = 0U;
  info[589].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m";
  info[589].name = "eml_int_forloop_overflow_check";
  info[589].dominantType = "";
  info[589].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[589].fileTimeLo = 1346531940U;
  info[589].fileTimeHi = 0U;
  info[589].mFileTimeLo = 0U;
  info[589].mFileTimeHi = 0U;
  info[590].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_li_find.m";
  info[590].name = "eml_index_plus";
  info[590].dominantType = "double";
  info[590].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[590].fileTimeLo = 1286840378U;
  info[590].fileTimeHi = 0U;
  info[590].mFileTimeLo = 0U;
  info[590].mFileTimeHi = 0U;
  info[591].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m";
  info[591].name = "length";
  info[591].dominantType = "double";
  info[591].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[591].fileTimeLo = 1303167806U;
  info[591].fileTimeHi = 0U;
  info[591].mFileTimeLo = 0U;
  info[591].mFileTimeHi = 0U;
  info[592].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m";
  info[592].name = "coarseOFDMFreqEst_sdr";
  info[592].dominantType = "struct";
  info[592].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m";
  info[592].fileTimeLo = 1397752622U;
  info[592].fileTimeHi = 0U;
  info[592].mFileTimeLo = 0U;
  info[592].mFileTimeHi = 0U;
  info[593].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m";
  info[593].name = "mrdivide";
  info[593].dominantType = "double";
  info[593].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[593].fileTimeLo = 1357973148U;
  info[593].fileTimeHi = 0U;
  info[593].mFileTimeLo = 1319751566U;
  info[593].mFileTimeHi = 0U;
  info[594].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m";
  info[594].name = "mtimes";
  info[594].dominantType = "double";
  info[594].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[594].fileTimeLo = 1289541292U;
  info[594].fileTimeHi = 0U;
  info[594].mFileTimeLo = 0U;
  info[594].mFileTimeHi = 0U;
  info[595].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m";
  info[595].name = "sum";
  info[595].dominantType = "double";
  info[595].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[595].fileTimeLo = 1314758212U;
  info[595].fileTimeHi = 0U;
  info[595].mFileTimeLo = 0U;
  info[595].mFileTimeHi = 0U;
  info[596].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m";
  info[596].name = "angle";
  info[596].dominantType = "double";
  info[596].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/angle.m";
  info[596].fileTimeLo = 1343851970U;
  info[596].fileTimeHi = 0U;
  info[596].mFileTimeLo = 0U;
  info[596].mFileTimeHi = 0U;
  info[597].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/angle.m";
  info[597].name = "eml_scalar_angle";
  info[597].dominantType = "double";
  info[597].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_angle.m";
  info[597].fileTimeLo = 1286840316U;
  info[597].fileTimeHi = 0U;
  info[597].mFileTimeLo = 0U;
  info[597].mFileTimeHi = 0U;
  info[598].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_angle.m";
  info[598].name = "eml_scalar_atan2";
  info[598].dominantType = "double";
  info[598].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_atan2.m";
  info[598].fileTimeLo = 1286840320U;
  info[598].fileTimeHi = 0U;
  info[598].mFileTimeLo = 0U;
  info[598].mFileTimeHi = 0U;
  info[599].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[599].name = "mean";
  info[599].dominantType = "double";
  info[599].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[599].fileTimeLo = 1286840294U;
  info[599].fileTimeHi = 0U;
  info[599].mFileTimeLo = 0U;
  info[599].mFileTimeHi = 0U;
  info[600].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[600].name = "mrdivide";
  info[600].dominantType = "double";
  info[600].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[600].fileTimeLo = 1357973148U;
  info[600].fileTimeHi = 0U;
  info[600].mFileTimeLo = 1319751566U;
  info[600].mFileTimeHi = 0U;
  info[601].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[601].name = "length";
  info[601].dominantType = "double";
  info[601].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[601].fileTimeLo = 1303167806U;
  info[601].fileTimeHi = 0U;
  info[601].mFileTimeLo = 0U;
  info[601].mFileTimeHi = 0U;
  info[602].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[602].name = "colon";
  info[602].dominantType = "double";
  info[602].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[602].fileTimeLo = 1348213528U;
  info[602].fileTimeHi = 0U;
  info[602].mFileTimeLo = 0U;
  info[602].mFileTimeHi = 0U;
  info[603].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[603].name = "mtimes";
  info[603].dominantType = "double";
  info[603].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[603].fileTimeLo = 1289541292U;
  info[603].fileTimeHi = 0U;
  info[603].mFileTimeLo = 0U;
  info[603].mFileTimeHi = 0U;
  info[604].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m!freqCorrectOFDM";
  info[604].name = "exp";
  info[604].dominantType = "double";
  info[604].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/exp.m";
  info[604].fileTimeLo = 1343851980U;
  info[604].fileTimeHi = 0U;
  info[604].mFileTimeLo = 0U;
  info[604].mFileTimeHi = 0U;
  info[605].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/exp.m";
  info[605].name = "eml_scalar_exp";
  info[605].dominantType = "double";
  info[605].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  info[605].fileTimeLo = 1301350064U;
  info[605].fileTimeHi = 0U;
  info[605].mFileTimeLo = 0U;
  info[605].mFileTimeHi = 0U;
  info[606].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m";
  info[606].name = "mrdivide";
  info[606].dominantType = "double";
  info[606].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[606].fileTimeLo = 1357973148U;
  info[606].fileTimeHi = 0U;
  info[606].mFileTimeLo = 1319751566U;
  info[606].mFileTimeHi = 0U;
  info[607].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m";
  info[607].name = "equalizeOFDM";
  info[607].dominantType = "OFDMDemodulator";
  info[607].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m";
  info[607].fileTimeLo = 1397752622U;
  info[607].fileTimeHi = 0U;
  info[607].mFileTimeLo = 0U;
  info[607].mFileTimeHi = 0U;
  info[608].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m";
  info[608].name = "length";
  info[608].dominantType = "double";
  info[608].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[608].fileTimeLo = 1303167806U;
  info[608].fileTimeHi = 0U;
  info[608].mFileTimeLo = 0U;
  info[608].mFileTimeHi = 0U;
  info[609].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m";
  info[609].name = "mtimes";
  info[609].dominantType = "double";
  info[609].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[609].fileTimeLo = 1289541292U;
  info[609].fileTimeHi = 0U;
  info[609].mFileTimeLo = 0U;
  info[609].mFileTimeHi = 0U;
  info[610].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[610].name = "colon";
  info[610].dominantType = "double";
  info[610].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[610].fileTimeLo = 1348213528U;
  info[610].fileTimeHi = 0U;
  info[610].mFileTimeLo = 0U;
  info[610].mFileTimeHi = 0U;
  info[611].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[611].name = "find";
  info[611].dominantType = "logical";
  info[611].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m";
  info[611].fileTimeLo = 1303167806U;
  info[611].fileTimeHi = 0U;
  info[611].mFileTimeLo = 0U;
  info[611].mFileTimeHi = 0U;
  info[612].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[612].name = "reshape";
  info[612].dominantType = "double";
  info[612].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[612].fileTimeLo = 1286840368U;
  info[612].fileTimeHi = 0U;
  info[612].mFileTimeLo = 0U;
  info[612].mFileTimeHi = 0U;
  info[613].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[613].name = "fft";
  info[613].dominantType = "double";
  info[613].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fft.m";
  info[613].fileTimeLo = 1286840288U;
  info[613].fileTimeHi = 0U;
  info[613].mFileTimeLo = 0U;
  info[613].mFileTimeHi = 0U;
  info[614].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fft.m";
  info[614].name = "eml_fft";
  info[614].dominantType = "char";
  info[614].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m";
  info[614].fileTimeLo = 1286840374U;
  info[614].fileTimeHi = 0U;
  info[614].mFileTimeLo = 0U;
  info[614].mFileTimeHi = 0U;
  info[615].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[615].name = "fftshift";
  info[615].dominantType = "double";
  info[615].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fftshift.m";
  info[615].fileTimeLo = 1286840290U;
  info[615].fileTimeHi = 0U;
  info[615].mFileTimeLo = 0U;
  info[615].mFileTimeHi = 0U;
  info[616].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fftshift.m";
  info[616].name = "eml_assert_valid_dim";
  info[616].dominantType = "double";
  info[616].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[616].fileTimeLo = 1286840294U;
  info[616].fileTimeHi = 0U;
  info[616].mFileTimeLo = 0U;
  info[616].mFileTimeHi = 0U;
  info[617].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/fftshift.m";
  info[617].name = "eml_fftshift";
  info[617].dominantType = "double";
  info[617].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m";
  info[617].fileTimeLo = 1286840376U;
  info[617].fileTimeHi = 0U;
  info[617].mFileTimeLo = 0U;
  info[617].mFileTimeHi = 0U;
  info[618].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[618].name = "length";
  info[618].dominantType = "double";
  info[618].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[618].fileTimeLo = 1303167806U;
  info[618].fileTimeHi = 0U;
  info[618].mFileTimeLo = 0U;
  info[618].mFileTimeHi = 0U;
  info[619].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[619].name = "mrdivide";
  info[619].dominantType = "double";
  info[619].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[619].fileTimeLo = 1357973148U;
  info[619].fileTimeHi = 0U;
  info[619].mFileTimeLo = 1319751566U;
  info[619].mFileTimeHi = 0U;
  info[620].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[620].name = "eml_assert_valid_size_arg";
  info[620].dominantType = "double";
  info[620].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[620].fileTimeLo = 1286840294U;
  info[620].fileTimeHi = 0U;
  info[620].mFileTimeLo = 0U;
  info[620].mFileTimeHi = 0U;
  info[621].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[621].name = "coder.internal.indexIntRelop";
  info[621].dominantType = "";
  info[621].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[621].fileTimeLo = 1326749922U;
  info[621].fileTimeHi = 0U;
  info[621].mFileTimeLo = 0U;
  info[621].mFileTimeHi = 0U;
  info[622].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[622].name = "max";
  info[622].dominantType = "double";
  info[622].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[622].fileTimeLo = 1311276916U;
  info[622].fileTimeHi = 0U;
  info[622].mFileTimeLo = 0U;
  info[622].mFileTimeHi = 0U;
  info[623].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[623].name = "isnan";
  info[623].dominantType = "coder.internal.indexInt";
  info[623].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[623].fileTimeLo = 1286840360U;
  info[623].fileTimeHi = 0U;
  info[623].mFileTimeLo = 0U;
  info[623].mFileTimeHi = 0U;
  info[624].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[624].name = "eml_error";
  info[624].dominantType = "char";
  info[624].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  info[624].fileTimeLo = 1343851958U;
  info[624].fileTimeHi = 0U;
  info[624].mFileTimeLo = 0U;
  info[624].mFileTimeHi = 0U;
  info[625].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[625].name = "coder.internal.indexIntRelop";
  info[625].dominantType = "";
  info[625].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[625].fileTimeLo = 1326749922U;
  info[625].fileTimeHi = 0U;
  info[625].mFileTimeLo = 0U;
  info[625].mFileTimeHi = 0U;
  info[626].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m!preambleFDE";
  info[626].name = "sum";
  info[626].dominantType = "double";
  info[626].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[626].fileTimeLo = 1314758212U;
  info[626].fileTimeHi = 0U;
  info[626].mFileTimeLo = 0U;
  info[626].mFileTimeHi = 0U;
  info[627].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m!preambleFDE";
  info[627].name = "rdivide";
  info[627].dominantType = "double";
  info[627].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[627].fileTimeLo = 1346531988U;
  info[627].fileTimeHi = 0U;
  info[627].mFileTimeLo = 0U;
  info[627].mFileTimeHi = 0U;
  info[628].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[628].name = "eml_scalar_eg";
  info[628].dominantType = "double";
  info[628].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[628].fileTimeLo = 1286840396U;
  info[628].fileTimeHi = 0U;
  info[628].mFileTimeLo = 0U;
  info[628].mFileTimeHi = 0U;
  info[629].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[629].name = "eml_scalexp_alloc";
  info[629].dominantType = "double";
  info[629].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[629].fileTimeLo = 1352446460U;
  info[629].fileTimeHi = 0U;
  info[629].mFileTimeLo = 0U;
  info[629].mFileTimeHi = 0U;
  info[630].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[630].name = "isequal";
  info[630].dominantType = "double";
  info[630].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[630].fileTimeLo = 1286840358U;
  info[630].fileTimeHi = 0U;
  info[630].mFileTimeLo = 0U;
  info[630].mFileTimeHi = 0U;
  info[631].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[631].name = "abs";
  info[631].dominantType = "double";
  info[631].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[631].fileTimeLo = 1343851966U;
  info[631].fileTimeHi = 0U;
  info[631].mFileTimeLo = 0U;
  info[631].mFileTimeHi = 0U;
  info[632].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m!eml_fldiv";
  info[632].name = "mtimes";
  info[632].dominantType = "double";
  info[632].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[632].fileTimeLo = 1289541292U;
  info[632].fileTimeHi = 0U;
  info[632].mFileTimeLo = 0U;
  info[632].mFileTimeHi = 0U;
  info[633].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m!preambleFDE";
  info[633].name = "abs";
  info[633].dominantType = "double";
  info[633].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[633].fileTimeLo = 1343851966U;
  info[633].fileTimeHi = 0U;
  info[633].mFileTimeLo = 0U;
  info[633].mFileTimeHi = 0U;
  info[634].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m!preambleFDE";
  info[634].name = "power";
  info[634].dominantType = "double";
  info[634].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[634].fileTimeLo = 1348213530U;
  info[634].fileTimeHi = 0U;
  info[634].mFileTimeLo = 0U;
  info[634].mFileTimeHi = 0U;
  info[635].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m!preambleFDE";
  info[635].name = "mean";
  info[635].dominantType = "double";
  info[635].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[635].fileTimeLo = 1286840294U;
  info[635].fileTimeHi = 0U;
  info[635].mFileTimeLo = 0U;
  info[635].mFileTimeHi = 0U;
  info[636].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[636].name = "eml_assert_valid_dim";
  info[636].dominantType = "double";
  info[636].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[636].fileTimeLo = 1286840294U;
  info[636].fileTimeHi = 0U;
  info[636].mFileTimeLo = 0U;
  info[636].mFileTimeHi = 0U;
  info[637].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[637].name = "eml_matrix_vstride";
  info[637].dominantType = "double";
  info[637].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[637].fileTimeLo = 1286840388U;
  info[637].fileTimeHi = 0U;
  info[637].mFileTimeLo = 0U;
  info[637].mFileTimeHi = 0U;
  info[638].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[638].name = "eml_matrix_npages";
  info[638].dominantType = "double";
  info[638].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[638].fileTimeLo = 1286840386U;
  info[638].fileTimeHi = 0U;
  info[638].mFileTimeLo = 0U;
  info[638].mFileTimeHi = 0U;
  info[639].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[639].name = "eml_index_plus";
  info[639].dominantType = "double";
  info[639].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[639].fileTimeLo = 1286840378U;
  info[639].fileTimeHi = 0U;
  info[639].mFileTimeLo = 0U;
  info[639].mFileTimeHi = 0U;
}

static void k_info_helper(ResolvedFunctionInfo info[727])
{
  info[640].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[640].name = "eml_index_plus";
  info[640].dominantType = "coder.internal.indexInt";
  info[640].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[640].fileTimeLo = 1286840378U;
  info[640].fileTimeHi = 0U;
  info[640].mFileTimeLo = 0U;
  info[640].mFileTimeHi = 0U;
  info[641].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[641].name = "ismatrix";
  info[641].dominantType = "double";
  info[641].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m";
  info[641].fileTimeLo = 1331326458U;
  info[641].fileTimeHi = 0U;
  info[641].mFileTimeLo = 0U;
  info[641].mFileTimeHi = 0U;
  info[642].context =
    "[C]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/OFDMDemodulator.m";
  info[642].name = "repmat";
  info[642].dominantType = "double";
  info[642].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[642].fileTimeLo = 1352446460U;
  info[642].fileTimeHi = 0U;
  info[642].mFileTimeLo = 0U;
  info[642].mFileTimeHi = 0U;
  info[643].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m";
  info[643].name = "repmat";
  info[643].dominantType = "double";
  info[643].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[643].fileTimeLo = 1352446460U;
  info[643].fileTimeHi = 0U;
  info[643].mFileTimeLo = 0U;
  info[643].mFileTimeHi = 0U;
  info[644].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m!pilotFDE";
  info[644].name = "rdivide";
  info[644].dominantType = "double";
  info[644].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[644].fileTimeLo = 1346531988U;
  info[644].fileTimeHi = 0U;
  info[644].mFileTimeLo = 0U;
  info[644].mFileTimeHi = 0U;
  info[645].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m!pilotFDE";
  info[645].name = "abs";
  info[645].dominantType = "double";
  info[645].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[645].fileTimeLo = 1343851966U;
  info[645].fileTimeHi = 0U;
  info[645].mFileTimeLo = 0U;
  info[645].mFileTimeHi = 0U;
  info[646].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m!pilotFDE";
  info[646].name = "power";
  info[646].dominantType = "double";
  info[646].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  info[646].fileTimeLo = 1348213530U;
  info[646].fileTimeHi = 0U;
  info[646].mFileTimeLo = 0U;
  info[646].mFileTimeHi = 0U;
  info[647].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/equalizeOFDM.m!pilotFDE";
  info[647].name = "resample";
  info[647].dominantType = "double";
  info[647].resolved = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[647].fileTimeLo = 1286808762U;
  info[647].fileTimeHi = 0U;
  info[647].mFileTimeLo = 0U;
  info[647].mFileTimeHi = 0U;
  info[648].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[648].name = "eml_is_positive_integer_scalar";
  info[648].dominantType = "double";
  info[648].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[648].fileTimeLo = 1309472796U;
  info[648].fileTimeHi = 0U;
  info[648].mFileTimeLo = 0U;
  info[648].mFileTimeHi = 0U;
  info[649].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[649].name = "mrdivide";
  info[649].dominantType = "double";
  info[649].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[649].fileTimeLo = 1357973148U;
  info[649].fileTimeHi = 0U;
  info[649].mFileTimeLo = 1319751566U;
  info[649].mFileTimeHi = 0U;
  info[650].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[650].name = "eml_is_positive_integer_scalar";
  info[650].dominantType = "double";
  info[650].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[650].fileTimeLo = 1309472796U;
  info[650].fileTimeHi = 0U;
  info[650].mFileTimeLo = 0U;
  info[650].mFileTimeHi = 0U;
  info[651].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[651].name = "length";
  info[651].dominantType = "double";
  info[651].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[651].fileTimeLo = 1303167806U;
  info[651].fileTimeHi = 0U;
  info[651].mFileTimeLo = 0U;
  info[651].mFileTimeHi = 0U;
  info[652].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[652].name = "max";
  info[652].dominantType = "double";
  info[652].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[652].fileTimeLo = 1311276916U;
  info[652].fileTimeHi = 0U;
  info[652].mFileTimeLo = 0U;
  info[652].mFileTimeHi = 0U;
  info[653].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[653].name = "mrdivide";
  info[653].dominantType = "double";
  info[653].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[653].fileTimeLo = 1357973148U;
  info[653].fileTimeHi = 0U;
  info[653].mFileTimeLo = 1319751566U;
  info[653].mFileTimeHi = 0U;
  info[654].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[654].name = "mtimes";
  info[654].dominantType = "double";
  info[654].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[654].fileTimeLo = 1289541292U;
  info[654].fileTimeHi = 0U;
  info[654].mFileTimeLo = 0U;
  info[654].mFileTimeHi = 0U;
  info[655].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[655].name = "firls";
  info[655].dominantType = "double";
  info[655].resolved = "[IXE]$matlabroot$/toolbox/signal/eml/firls.m";
  info[655].fileTimeLo = 1286808742U;
  info[655].fileTimeHi = 0U;
  info[655].mFileTimeLo = 0U;
  info[655].mFileTimeHi = 0U;
  info[656].context = "[IXE]$matlabroot$/toolbox/signal/eml/firls.m";
  info[656].name = "eml_assert_all_constant";
  info[656].dominantType = "double";
  info[656].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_all_constant.m";
  info[656].fileTimeLo = 1286840294U;
  info[656].fileTimeHi = 0U;
  info[656].mFileTimeLo = 0U;
  info[656].mFileTimeHi = 0U;
  info[657].context =
    "[IXE]$matlabroot$/toolbox/signal/eml/resample.m!design_filter";
  info[657].name = "kaiser";
  info[657].dominantType = "double";
  info[657].resolved = "[IXE]$matlabroot$/toolbox/signal/eml/kaiser.m";
  info[657].fileTimeLo = 1286808754U;
  info[657].fileTimeHi = 0U;
  info[657].mFileTimeLo = 0U;
  info[657].mFileTimeHi = 0U;
  info[658].context = "[IXE]$matlabroot$/toolbox/signal/eml/kaiser.m";
  info[658].name = "eml_assert_all_constant";
  info[658].dominantType = "double";
  info[658].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_all_constant.m";
  info[658].fileTimeLo = 1286840294U;
  info[658].fileTimeHi = 0U;
  info[658].mFileTimeLo = 0U;
  info[658].mFileTimeHi = 0U;
  info[659].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[659].name = "eml_const_nonsingleton_dim";
  info[659].dominantType = "double";
  info[659].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[659].fileTimeLo = 1286840296U;
  info[659].fileTimeHi = 0U;
  info[659].mFileTimeLo = 0U;
  info[659].mFileTimeHi = 0U;
  info[660].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[660].name = "length";
  info[660].dominantType = "double";
  info[660].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[660].fileTimeLo = 1303167806U;
  info[660].fileTimeHi = 0U;
  info[660].mFileTimeLo = 0U;
  info[660].mFileTimeHi = 0U;
  info[661].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[661].name = "upfirdn";
  info[661].dominantType = "double";
  info[661].resolved = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[661].fileTimeLo = 1350433050U;
  info[661].fileTimeHi = 0U;
  info[661].mFileTimeLo = 0U;
  info[661].mFileTimeHi = 0U;
  info[662].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[662].name = "coder.internal.errorIf";
  info[662].dominantType = "char";
  info[662].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m";
  info[662].fileTimeLo = 1334093538U;
  info[662].fileTimeHi = 0U;
  info[662].mFileTimeLo = 0U;
  info[662].mFileTimeHi = 0U;
  info[663].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[663].name = "eml_is_positive_integer_scalar";
  info[663].dominantType = "double";
  info[663].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_positive_integer_scalar.m";
  info[663].fileTimeLo = 1309472796U;
  info[663].fileTimeHi = 0U;
  info[663].mFileTimeLo = 0U;
  info[663].mFileTimeHi = 0U;
  info[664].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[664].name = "length";
  info[664].dominantType = "double";
  info[664].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[664].fileTimeLo = 1303167806U;
  info[664].fileTimeHi = 0U;
  info[664].mFileTimeLo = 0U;
  info[664].mFileTimeHi = 0U;
  info[665].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[665].name = "mtimes";
  info[665].dominantType = "double";
  info[665].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[665].fileTimeLo = 1289541292U;
  info[665].fileTimeHi = 0U;
  info[665].mFileTimeLo = 0U;
  info[665].mFileTimeHi = 0U;
  info[666].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[666].name = "mod";
  info[666].dominantType = "double";
  info[666].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m";
  info[666].fileTimeLo = 1343851982U;
  info[666].fileTimeHi = 0U;
  info[666].mFileTimeLo = 0U;
  info[666].mFileTimeHi = 0U;
  info[667].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[667].name = "mrdivide";
  info[667].dominantType = "double";
  info[667].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[667].fileTimeLo = 1357973148U;
  info[667].fileTimeHi = 0U;
  info[667].mFileTimeLo = 1319751566U;
  info[667].mFileTimeHi = 0U;
  info[668].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[668].name = "ceil";
  info[668].dominantType = "double";
  info[668].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m";
  info[668].fileTimeLo = 1343851972U;
  info[668].fileTimeHi = 0U;
  info[668].mFileTimeLo = 0U;
  info[668].mFileTimeHi = 0U;
  info[669].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[669].name = "max";
  info[669].dominantType = "double";
  info[669].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[669].fileTimeLo = 1311276916U;
  info[669].fileTimeHi = 0U;
  info[669].mFileTimeLo = 0U;
  info[669].mFileTimeHi = 0U;
  info[670].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[670].name = "matlab.system.coder.System";
  info[670].dominantType = "unknown";
  info[670].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p";
  info[670].fileTimeLo = 1357971318U;
  info[670].fileTimeHi = 0U;
  info[670].mFileTimeLo = 0U;
  info[670].mFileTimeHi = 0U;
  info[671].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[671].name = "matlab.system.mixin.coder.Nondirect";
  info[671].dominantType = "unknown";
  info[671].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p";
  info[671].fileTimeLo = 1357971320U;
  info[671].fileTimeHi = 0U;
  info[671].mFileTimeLo = 0U;
  info[671].mFileTimeHi = 0U;
  info[672].context = "[IXE]$matlabroot$/toolbox/signal/eml/upfirdn.m";
  info[672].name = "dspcodegen.FIRRateConverter";
  info[672].dominantType = "int32";
  info[672].resolved =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[672].fileTimeLo = 1358403902U;
  info[672].fileTimeHi = 0U;
  info[672].mFileTimeLo = 0U;
  info[672].mFileTimeHi = 0U;
  info[673].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[673].name = "createsystemobjectv2";
  info[673].dominantType = "";
  info[673].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m";
  info[673].fileTimeLo = 1343851958U;
  info[673].fileTimeHi = 0U;
  info[673].mFileTimeLo = 0U;
  info[673].mFileTimeHi = 0U;
  info[674].context =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[674].name = "matlab.system.pvParse";
  info[674].dominantType = "dspcodegen.FIRRateConverter";
  info[674].resolved =
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p";
  info[674].fileTimeLo = 1357962380U;
  info[674].fileTimeHi = 0U;
  info[674].mFileTimeLo = 0U;
  info[674].mFileTimeHi = 0U;
  info[675].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[675].name = "dspcodegen.FIRRateConverter";
  info[675].dominantType = "";
  info[675].resolved =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[675].fileTimeLo = 1358403902U;
  info[675].fileTimeHi = 0U;
  info[675].mFileTimeLo = 0U;
  info[675].mFileTimeHi = 0U;
  info[676].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[676].name = "matlab.system.coder.SystemProp";
  info[676].dominantType = "";
  info[676].resolved =
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p";
  info[676].fileTimeLo = 1357971320U;
  info[676].fileTimeHi = 0U;
  info[676].mFileTimeLo = 0U;
  info[676].mFileTimeHi = 0U;
  info[677].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[677].name = "get";
  info[677].dominantType = "dsp.FIRRateConverter";
  info[677].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m";
  info[677].fileTimeLo = 1349900344U;
  info[677].fileTimeHi = 0U;
  info[677].mFileTimeLo = 0U;
  info[677].mFileTimeHi = 0U;
  info[678].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[678].name = "getNumInputs";
  info[678].dominantType = "dsp.FIRRateConverter";
  info[678].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[678].fileTimeLo = 1349900348U;
  info[678].fileTimeHi = 0U;
  info[678].mFileTimeLo = 0U;
  info[678].mFileTimeHi = 0U;
  info[679].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[679].name = "checkSystemObjectInput";
  info[679].dominantType = "dsp.FIRRateConverter";
  info[679].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[679].fileTimeLo = 1349900346U;
  info[679].fileTimeHi = 0U;
  info[679].mFileTimeLo = 0U;
  info[679].mFileTimeHi = 0U;
  info[680].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[680].name = "setup";
  info[680].dominantType = "dsp.FIRRateConverter";
  info[680].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[680].fileTimeLo = 1349900350U;
  info[680].fileTimeHi = 0U;
  info[680].mFileTimeLo = 0U;
  info[680].mFileTimeHi = 0U;
  info[681].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[681].name = "checkSystemObjectInput";
  info[681].dominantType = "dsp.FIRRateConverter";
  info[681].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[681].fileTimeLo = 1349900346U;
  info[681].fileTimeHi = 0U;
  info[681].mFileTimeLo = 0U;
  info[681].mFileTimeHi = 0U;
  info[682].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[682].name = "reset";
  info[682].dominantType = "dsp.FIRRateConverter";
  info[682].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[682].fileTimeLo = 1349900350U;
  info[682].fileTimeHi = 0U;
  info[682].mFileTimeLo = 0U;
  info[682].mFileTimeHi = 0U;
  info[683].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[683].name = "checkSystemObjectInput";
  info[683].dominantType = "dsp.FIRRateConverter";
  info[683].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[683].fileTimeLo = 1349900346U;
  info[683].fileTimeHi = 0U;
  info[683].mFileTimeLo = 0U;
  info[683].mFileTimeHi = 0U;
  info[684].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[684].name = "getNumOutputs";
  info[684].dominantType = "dsp.FIRRateConverter";
  info[684].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[684].fileTimeLo = 1349900348U;
  info[684].fileTimeHi = 0U;
  info[684].mFileTimeLo = 0U;
  info[684].mFileTimeHi = 0U;
  info[685].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[685].name = "checkSystemObjectInput";
  info[685].dominantType = "dsp.FIRRateConverter";
  info[685].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[685].fileTimeLo = 1349900346U;
  info[685].fileTimeHi = 0U;
  info[685].mFileTimeLo = 0U;
  info[685].mFileTimeHi = 0U;
  info[686].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[686].name = "output";
  info[686].dominantType = "dsp.FIRRateConverter";
  info[686].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[686].fileTimeLo = 1349900348U;
  info[686].fileTimeHi = 0U;
  info[686].mFileTimeLo = 0U;
  info[686].mFileTimeHi = 0U;
  info[687].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[687].name = "checkSystemObjectInput";
  info[687].dominantType = "dsp.FIRRateConverter";
  info[687].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[687].fileTimeLo = 1349900346U;
  info[687].fileTimeHi = 0U;
  info[687].mFileTimeLo = 0U;
  info[687].mFileTimeHi = 0U;
  info[688].context =
    "[IXC]$matlabroot$/toolbox/dsp/dsp/+dspcodegen/FIRRateConverter.p";
  info[688].name = "update";
  info[688].dominantType = "dsp.FIRRateConverter";
  info[688].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[688].fileTimeLo = 1349900352U;
  info[688].fileTimeHi = 0U;
  info[688].mFileTimeLo = 0U;
  info[688].mFileTimeHi = 0U;
  info[689].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[689].name = "checkSystemObjectInput";
  info[689].dominantType = "dsp.FIRRateConverter";
  info[689].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[689].fileTimeLo = 1349900346U;
  info[689].fileTimeHi = 0U;
  info[689].mFileTimeLo = 0U;
  info[689].mFileTimeHi = 0U;
  info[690].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m!intlength";
  info[690].name = "eml_index_class";
  info[690].dominantType = "";
  info[690].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[690].fileTimeLo = 1323192178U;
  info[690].fileTimeHi = 0U;
  info[690].mFileTimeLo = 0U;
  info[690].mFileTimeHi = 0U;
  info[691].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[691].name = "mtimes";
  info[691].dominantType = "double";
  info[691].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[691].fileTimeLo = 1289541292U;
  info[691].fileTimeHi = 0U;
  info[691].mFileTimeLo = 0U;
  info[691].mFileTimeHi = 0U;
  info[692].context = "[IXE]$matlabroot$/toolbox/signal/eml/resample.m";
  info[692].name = "ceil";
  info[692].dominantType = "double";
  info[692].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m";
  info[692].fileTimeLo = 1343851972U;
  info[692].fileTimeHi = 0U;
  info[692].mFileTimeLo = 0U;
  info[692].mFileTimeHi = 0U;
  info[693].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m";
  info[693].name = "demodOFDMSubcarriers_sdr";
  info[693].dominantType = "struct";
  info[693].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/demodOFDMSubcarriers_sdr.m";
  info[693].fileTimeLo = 1397752622U;
  info[693].fileTimeHi = 0U;
  info[693].mFileTimeLo = 0U;
  info[693].mFileTimeHi = 0U;
  info[694].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/demodOFDMSubcarriers_sdr.m";
  info[694].name = "mtimes";
  info[694].dominantType = "double";
  info[694].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[694].fileTimeLo = 1289541292U;
  info[694].fileTimeHi = 0U;
  info[694].mFileTimeLo = 0U;
  info[694].mFileTimeHi = 0U;
  info[695].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/demodOFDMSubcarriers_sdr.m";
  info[695].name = "reshape";
  info[695].dominantType = "double";
  info[695].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[695].fileTimeLo = 1286840368U;
  info[695].fileTimeHi = 0U;
  info[695].mFileTimeLo = 0U;
  info[695].mFileTimeHi = 0U;
  info[696].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[696].name = "getNumInputs";
  info[696].dominantType = "comm.CRCDetector";
  info[696].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[696].fileTimeLo = 1349900348U;
  info[696].fileTimeHi = 0U;
  info[696].mFileTimeLo = 0U;
  info[696].mFileTimeHi = 0U;
  info[697].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m";
  info[697].name = "checkSystemObjectInput";
  info[697].dominantType = "comm.CRCDetector";
  info[697].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[697].fileTimeLo = 1349900346U;
  info[697].fileTimeHi = 0U;
  info[697].mFileTimeLo = 0U;
  info[697].mFileTimeHi = 0U;
  info[698].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[698].name = "setup";
  info[698].dominantType = "comm.CRCDetector";
  info[698].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[698].fileTimeLo = 1349900350U;
  info[698].fileTimeHi = 0U;
  info[698].mFileTimeLo = 0U;
  info[698].mFileTimeHi = 0U;
  info[699].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m";
  info[699].name = "checkSystemObjectInput";
  info[699].dominantType = "comm.CRCDetector";
  info[699].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[699].fileTimeLo = 1349900346U;
  info[699].fileTimeHi = 0U;
  info[699].mFileTimeLo = 0U;
  info[699].mFileTimeHi = 0U;
  info[700].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[700].name = "reset";
  info[700].dominantType = "comm.CRCDetector";
  info[700].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[700].fileTimeLo = 1349900350U;
  info[700].fileTimeHi = 0U;
  info[700].mFileTimeLo = 0U;
  info[700].mFileTimeHi = 0U;
  info[701].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m";
  info[701].name = "checkSystemObjectInput";
  info[701].dominantType = "comm.CRCDetector";
  info[701].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[701].fileTimeLo = 1349900346U;
  info[701].fileTimeHi = 0U;
  info[701].mFileTimeLo = 0U;
  info[701].mFileTimeHi = 0U;
  info[702].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[702].name = "getNumOutputs";
  info[702].dominantType = "comm.CRCDetector";
  info[702].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[702].fileTimeLo = 1349900348U;
  info[702].fileTimeHi = 0U;
  info[702].mFileTimeLo = 0U;
  info[702].mFileTimeHi = 0U;
  info[703].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m";
  info[703].name = "checkSystemObjectInput";
  info[703].dominantType = "comm.CRCDetector";
  info[703].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[703].fileTimeLo = 1349900346U;
  info[703].fileTimeHi = 0U;
  info[703].mFileTimeLo = 0U;
  info[703].mFileTimeHi = 0U;
}

static void l_info_helper(ResolvedFunctionInfo info[727])
{
  info[704].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[704].name = "output";
  info[704].dominantType = "comm.CRCDetector";
  info[704].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[704].fileTimeLo = 1349900348U;
  info[704].fileTimeHi = 0U;
  info[704].mFileTimeLo = 0U;
  info[704].mFileTimeHi = 0U;
  info[705].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m";
  info[705].name = "checkSystemObjectInput";
  info[705].dominantType = "comm.CRCDetector";
  info[705].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[705].fileTimeLo = 1349900346U;
  info[705].fileTimeHi = 0U;
  info[705].mFileTimeLo = 0U;
  info[705].mFileTimeHi = 0U;
  info[706].context =
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p";
  info[706].name = "update";
  info[706].dominantType = "comm.CRCDetector";
  info[706].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[706].fileTimeLo = 1349900352U;
  info[706].fileTimeHi = 0U;
  info[706].mFileTimeLo = 0U;
  info[706].mFileTimeHi = 0U;
  info[707].context = "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m";
  info[707].name = "checkSystemObjectInput";
  info[707].dominantType = "comm.CRCDetector";
  info[707].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m";
  info[707].fileTimeLo = 1349900346U;
  info[707].fileTimeHi = 0U;
  info[707].mFileTimeLo = 0U;
  info[707].mFileTimeHi = 0U;
  info[708].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m";
  info[708].name = "OFDMbits2letters";
  info[708].dominantType = "logical";
  info[708].resolved =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMbits2letters.m";
  info[708].fileTimeLo = 1397752622U;
  info[708].fileTimeHi = 0U;
  info[708].mFileTimeLo = 0U;
  info[708].mFileTimeHi = 0U;
  info[709].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMbits2letters.m";
  info[709].name = "length";
  info[709].dominantType = "logical";
  info[709].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[709].fileTimeLo = 1303167806U;
  info[709].fileTimeHi = 0U;
  info[709].mFileTimeLo = 0U;
  info[709].mFileTimeHi = 0U;
  info[710].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMbits2letters.m";
  info[710].name = "mrdivide";
  info[710].dominantType = "double";
  info[710].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[710].fileTimeLo = 1357973148U;
  info[710].fileTimeHi = 0U;
  info[710].mFileTimeLo = 1319751566U;
  info[710].mFileTimeHi = 0U;
  info[711].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMbits2letters.m";
  info[711].name = "floor";
  info[711].dominantType = "double";
  info[711].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[711].fileTimeLo = 1343851980U;
  info[711].fileTimeHi = 0U;
  info[711].mFileTimeLo = 0U;
  info[711].mFileTimeHi = 0U;
  info[712].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMbits2letters.m";
  info[712].name = "mtimes";
  info[712].dominantType = "double";
  info[712].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[712].fileTimeLo = 1289541292U;
  info[712].fileTimeHi = 0U;
  info[712].mFileTimeLo = 0U;
  info[712].mFileTimeHi = 0U;
  info[713].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMbits2letters.m";
  info[713].name = "reshape";
  info[713].dominantType = "double";
  info[713].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[713].fileTimeLo = 1286840368U;
  info[713].fileTimeHi = 0U;
  info[713].mFileTimeLo = 0U;
  info[713].mFileTimeHi = 0U;
  info[714].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[714].name = "eml_index_prod";
  info[714].dominantType = "coder.internal.indexInt";
  info[714].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[714].fileTimeLo = 1286840380U;
  info[714].fileTimeHi = 0U;
  info[714].mFileTimeLo = 0U;
  info[714].mFileTimeHi = 0U;
  info[715].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m";
  info[715].name = "eml_scalar_eg";
  info[715].dominantType = "logical";
  info[715].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[715].fileTimeLo = 1286840396U;
  info[715].fileTimeHi = 0U;
  info[715].mFileTimeLo = 0U;
  info[715].mFileTimeHi = 0U;
  info[716].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMbits2letters.m";
  info[716].name = "dec2bin";
  info[716].dominantType = "logical";
  info[716].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m";
  info[716].fileTimeLo = 1346531990U;
  info[716].fileTimeHi = 0U;
  info[716].mFileTimeLo = 0U;
  info[716].mFileTimeHi = 0U;
  info[717].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMbits2letters.m";
  info[717].name = "bin2dec";
  info[717].dominantType = "char";
  info[717].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/bin2dec.m";
  info[717].fileTimeLo = 1311276924U;
  info[717].fileTimeHi = 0U;
  info[717].mFileTimeLo = 0U;
  info[717].mFileTimeHi = 0U;
  info[718].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/bin2dec.m";
  info[718].name = "eml_mantissa_nbits";
  info[718].dominantType = "char";
  info[718].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m";
  info[718].fileTimeLo = 1307672842U;
  info[718].fileTimeHi = 0U;
  info[718].mFileTimeLo = 0U;
  info[718].mFileTimeHi = 0U;
  info[719].context =
    "[PE]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/OFDMbits2letters.m";
  info[719].name = "char";
  info[719].dominantType = "double";
  info[719].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[719].fileTimeLo = 1319751568U;
  info[719].fileTimeHi = 0U;
  info[719].mFileTimeLo = 0U;
  info[719].mFileTimeHi = 0U;
  info[720].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m";
  info[720].name = "char";
  info[720].dominantType = "double";
  info[720].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m";
  info[720].fileTimeLo = 1319751568U;
  info[720].fileTimeHi = 0U;
  info[720].mFileTimeLo = 0U;
  info[720].mFileTimeHi = 0U;
  info[721].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/PHYReceive.m";
  info[721].name = "strfind";
  info[721].dominantType = "char";
  info[721].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strfind.m";
  info[721].fileTimeLo = 1346531990U;
  info[721].fileTimeHi = 0U;
  info[721].mFileTimeLo = 0U;
  info[721].mFileTimeHi = 0U;
  info[722].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strfind.m";
  info[722].name = "isrow";
  info[722].dominantType = "char";
  info[722].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m";
  info[722].fileTimeLo = 1346531960U;
  info[722].fileTimeHi = 0U;
  info[722].mFileTimeLo = 0U;
  info[722].mFileTimeHi = 0U;
  info[723].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strfind.m!eml_strfind";
  info[723].name = "eml_int_forloop_overflow_check";
  info[723].dominantType = "";
  info[723].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[723].fileTimeLo = 1346531940U;
  info[723].fileTimeHi = 0U;
  info[723].mFileTimeLo = 0U;
  info[723].mFileTimeHi = 0U;
  info[724].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strfind.m!eml_trim_array";
  info[724].name = "eml_int_forloop_overflow_check";
  info[724].dominantType = "";
  info[724].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[724].fileTimeLo = 1346531940U;
  info[724].fileTimeHi = 0U;
  info[724].mFileTimeLo = 0U;
  info[724].mFileTimeHi = 0U;
  info[725].context =
    "[E]/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/testPHYReceive.m";
  info[725].name = "eml_strcmp";
  info[725].dominantType = "";
  info[725].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_strcmp.m";
  info[725].fileTimeLo = 1286840400U;
  info[725].fileTimeHi = 0U;
  info[725].mFileTimeLo = 0U;
  info[725].mFileTimeHi = 0U;
  info[726].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m!check_type";
  info[726].name = "coder.internal.assert";
  info[726].dominantType = "char";
  info[726].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  info[726].fileTimeLo = 1334093538U;
  info[726].fileTimeHi = 0U;
  info[726].mFileTimeLo = 0U;
  info[726].mFileTimeHi = 0U;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[727];
  nameCaptureInfo = NULL;
  info_helper(info);
  b_info_helper(info);
  c_info_helper(info);
  d_info_helper(info);
  e_info_helper(info);
  f_info_helper(info);
  g_info_helper(info);
  h_info_helper(info);
  i_info_helper(info);
  j_info_helper(info);
  k_info_helper(info);
  l_info_helper(info);
  emlrtAssign(&nameCaptureInfo, b_emlrt_marshallOut(info));
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

void testPHYReceive_api(testPHYReceiveStackData *SD, const mxArray * const prhs
  [1], const mxArray *plhs[1])
{
  real_T decimation;

  /* Marshall function inputs */
  decimation = emlrt_marshallIn(emlrtAliasP(prhs[0]), "decimation");

  /* Invoke the target function */
  decimation = testPHYReceive(SD, decimation);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(decimation);
}

/* End of code generation (testPHYReceive_api.c) */
