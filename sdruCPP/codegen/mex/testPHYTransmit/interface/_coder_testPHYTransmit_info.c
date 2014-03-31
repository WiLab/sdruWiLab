/*
 * _coder_testPHYTransmit_info.c
 *
 * Code generation for function 'testPHYTransmit'
 *
 * C source code generated on: Thu Feb 27 11:47:48 2014
 *
 */

/* Include files */
#include "_coder_testPHYTransmit_info.h"

/* Function Declarations */
static void info_helper(const mxArray **info);
static const mxArray *emlrt_marshallOut(const char * u);
static const mxArray *b_emlrt_marshallOut(uint32_T u);
static void b_info_helper(const mxArray **info);
static void c_info_helper(const mxArray **info);
static void d_info_helper(const mxArray **info);
static void e_info_helper(const mxArray **info);
static void f_info_helper(const mxArray **info);
static void g_info_helper(const mxArray **info);
static void h_info_helper(const mxArray **info);
static void i_info_helper(const mxArray **info);

/* Function Definitions */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  nameCaptureInfo = NULL;
  emlrtAssign(&nameCaptureInfo, mxCreateStructMatrix(515, 1, 0, NULL));
  info_helper(&nameCaptureInfo);
  b_info_helper(&nameCaptureInfo);
  c_info_helper(&nameCaptureInfo);
  d_info_helper(&nameCaptureInfo);
  e_info_helper(&nameCaptureInfo);
  f_info_helper(&nameCaptureInfo);
  g_info_helper(&nameCaptureInfo);
  h_info_helper(&nameCaptureInfo);
  i_info_helper(&nameCaptureInfo);
  emlrtNameCapturePostProcessR2013b(&nameCaptureInfo);
  return nameCaptureInfo;
}

static void info_helper(const mxArray **info)
{
  const mxArray *rhs0 = NULL;
  const mxArray *lhs0 = NULL;
  const mxArray *rhs1 = NULL;
  const mxArray *lhs1 = NULL;
  const mxArray *rhs2 = NULL;
  const mxArray *lhs2 = NULL;
  const mxArray *rhs3 = NULL;
  const mxArray *lhs3 = NULL;
  const mxArray *rhs4 = NULL;
  const mxArray *lhs4 = NULL;
  const mxArray *rhs5 = NULL;
  const mxArray *lhs5 = NULL;
  const mxArray *rhs6 = NULL;
  const mxArray *lhs6 = NULL;
  const mxArray *rhs7 = NULL;
  const mxArray *lhs7 = NULL;
  const mxArray *rhs8 = NULL;
  const mxArray *lhs8 = NULL;
  const mxArray *rhs9 = NULL;
  const mxArray *lhs9 = NULL;
  const mxArray *rhs10 = NULL;
  const mxArray *lhs10 = NULL;
  const mxArray *rhs11 = NULL;
  const mxArray *lhs11 = NULL;
  const mxArray *rhs12 = NULL;
  const mxArray *lhs12 = NULL;
  const mxArray *rhs13 = NULL;
  const mxArray *lhs13 = NULL;
  const mxArray *rhs14 = NULL;
  const mxArray *lhs14 = NULL;
  const mxArray *rhs15 = NULL;
  const mxArray *lhs15 = NULL;
  const mxArray *rhs16 = NULL;
  const mxArray *lhs16 = NULL;
  const mxArray *rhs17 = NULL;
  const mxArray *lhs17 = NULL;
  const mxArray *rhs18 = NULL;
  const mxArray *lhs18 = NULL;
  const mxArray *rhs19 = NULL;
  const mxArray *lhs19 = NULL;
  const mxArray *rhs20 = NULL;
  const mxArray *lhs20 = NULL;
  const mxArray *rhs21 = NULL;
  const mxArray *lhs21 = NULL;
  const mxArray *rhs22 = NULL;
  const mxArray *lhs22 = NULL;
  const mxArray *rhs23 = NULL;
  const mxArray *lhs23 = NULL;
  const mxArray *rhs24 = NULL;
  const mxArray *lhs24 = NULL;
  const mxArray *rhs25 = NULL;
  const mxArray *lhs25 = NULL;
  const mxArray *rhs26 = NULL;
  const mxArray *lhs26 = NULL;
  const mxArray *rhs27 = NULL;
  const mxArray *lhs27 = NULL;
  const mxArray *rhs28 = NULL;
  const mxArray *lhs28 = NULL;
  const mxArray *rhs29 = NULL;
  const mxArray *lhs29 = NULL;
  const mxArray *rhs30 = NULL;
  const mxArray *lhs30 = NULL;
  const mxArray *rhs31 = NULL;
  const mxArray *lhs31 = NULL;
  const mxArray *rhs32 = NULL;
  const mxArray *lhs32 = NULL;
  const mxArray *rhs33 = NULL;
  const mxArray *lhs33 = NULL;
  const mxArray *rhs34 = NULL;
  const mxArray *lhs34 = NULL;
  const mxArray *rhs35 = NULL;
  const mxArray *lhs35 = NULL;
  const mxArray *rhs36 = NULL;
  const mxArray *lhs36 = NULL;
  const mxArray *rhs37 = NULL;
  const mxArray *lhs37 = NULL;
  const mxArray *rhs38 = NULL;
  const mxArray *lhs38 = NULL;
  const mxArray *rhs39 = NULL;
  const mxArray *lhs39 = NULL;
  const mxArray *rhs40 = NULL;
  const mxArray *lhs40 = NULL;
  const mxArray *rhs41 = NULL;
  const mxArray *lhs41 = NULL;
  const mxArray *rhs42 = NULL;
  const mxArray *lhs42 = NULL;
  const mxArray *rhs43 = NULL;
  const mxArray *lhs43 = NULL;
  const mxArray *rhs44 = NULL;
  const mxArray *lhs44 = NULL;
  const mxArray *rhs45 = NULL;
  const mxArray *lhs45 = NULL;
  const mxArray *rhs46 = NULL;
  const mxArray *lhs46 = NULL;
  const mxArray *rhs47 = NULL;
  const mxArray *lhs47 = NULL;
  const mxArray *rhs48 = NULL;
  const mxArray *lhs48 = NULL;
  const mxArray *rhs49 = NULL;
  const mxArray *lhs49 = NULL;
  const mxArray *rhs50 = NULL;
  const mxArray *lhs50 = NULL;
  const mxArray *rhs51 = NULL;
  const mxArray *lhs51 = NULL;
  const mxArray *rhs52 = NULL;
  const mxArray *lhs52 = NULL;
  const mxArray *rhs53 = NULL;
  const mxArray *lhs53 = NULL;
  const mxArray *rhs54 = NULL;
  const mxArray *lhs54 = NULL;
  const mxArray *rhs55 = NULL;
  const mxArray *lhs55 = NULL;
  const mxArray *rhs56 = NULL;
  const mxArray *lhs56 = NULL;
  const mxArray *rhs57 = NULL;
  const mxArray *lhs57 = NULL;
  const mxArray *rhs58 = NULL;
  const mxArray *lhs58 = NULL;
  const mxArray *rhs59 = NULL;
  const mxArray *lhs59 = NULL;
  const mxArray *rhs60 = NULL;
  const mxArray *lhs60 = NULL;
  const mxArray *rhs61 = NULL;
  const mxArray *lhs61 = NULL;
  const mxArray *rhs62 = NULL;
  const mxArray *lhs62 = NULL;
  const mxArray *rhs63 = NULL;
  const mxArray *lhs63 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/testPHYTransmit.m"), "context", 0);
  emlrtAddField(*info, emlrt_marshallOut("CreateTXRX"), "name", 0);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 0);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "resolved", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(1393519546U), "fileTimeLo", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 0);
  emlrtAssign(&rhs0, emlrtCreateCellArray(0));
  emlrtAssign(&lhs0, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs0), "rhs", 0);
  emlrtAddField(*info, emlrtAliasP(lhs0), "lhs", 0);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "context", 1);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 1);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 1);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 1);
  emlrtAssign(&rhs1, emlrtCreateCellArray(0));
  emlrtAssign(&lhs1, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs1), "rhs", 1);
  emlrtAddField(*info, emlrtAliasP(lhs1), "lhs", 1);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context", 2);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 2);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 2);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731880U), "fileTimeLo", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 2);
  emlrtAssign(&rhs2, emlrtCreateCellArray(0));
  emlrtAssign(&lhs2, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs2), "rhs", 2);
  emlrtAddField(*info, emlrtAliasP(lhs2), "lhs", 2);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 3);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 3);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 3);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 3);
  emlrtAssign(&rhs3, emlrtCreateCellArray(0));
  emlrtAssign(&lhs3, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs3), "rhs", 3);
  emlrtAddField(*info, emlrtAliasP(lhs3), "lhs", 3);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 4);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_compatible"), "name", 4);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                "resolved", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 4);
  emlrtAssign(&rhs4, emlrtCreateCellArray(0));
  emlrtAssign(&lhs4, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs4), "rhs", 4);
  emlrtAddField(*info, emlrtAliasP(lhs4), "lhs", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 5);
  emlrtAddField(*info, emlrt_marshallOut("eml_div"), "name", 5);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 5);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731866U), "fileTimeLo", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 5);
  emlrtAssign(&rhs5, emlrtCreateCellArray(0));
  emlrtAssign(&lhs5, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs5), "rhs", 5);
  emlrtAddField(*info, emlrtAliasP(lhs5), "lhs", 5);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "context", 6);
  emlrtAddField(*info, emlrt_marshallOut("generateOFDMSignal_TX2"), "name", 6);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 6);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "resolved", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516424U), "fileTimeLo", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 6);
  emlrtAssign(&rhs6, emlrtCreateCellArray(0));
  emlrtAssign(&lhs6, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs6), "rhs", 6);
  emlrtAddField(*info, emlrtAliasP(lhs6), "lhs", 6);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 7);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 7);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 7);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 7);
  emlrtAssign(&rhs7, emlrtCreateCellArray(0));
  emlrtAssign(&lhs7, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs7), "rhs", 7);
  emlrtAddField(*info, emlrtAliasP(lhs7), "lhs", 7);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 8);
  emlrtAddField(*info, emlrt_marshallOut("mpower"), "name", 8);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 8);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "resolved", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 8);
  emlrtAssign(&rhs8, emlrtCreateCellArray(0));
  emlrtAssign(&lhs8, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs8), "rhs", 8);
  emlrtAddField(*info, emlrtAliasP(lhs8), "lhs", 8);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context", 9);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 9);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 9);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 9);
  emlrtAssign(&rhs9, emlrtCreateCellArray(0));
  emlrtAssign(&lhs9, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs9), "rhs", 9);
  emlrtAddField(*info, emlrtAliasP(lhs9), "lhs", 9);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context", 10);
  emlrtAddField(*info, emlrt_marshallOut("ismatrix"), "name", 10);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 10);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m"), "resolved",
                10);
  emlrtAddField(*info, b_emlrt_marshallOut(1331326458U), "fileTimeLo", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 10);
  emlrtAssign(&rhs10, emlrtCreateCellArray(0));
  emlrtAssign(&lhs10, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs10), "rhs", 10);
  emlrtAddField(*info, emlrtAliasP(lhs10), "lhs", 10);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context", 11);
  emlrtAddField(*info, emlrt_marshallOut("power"), "name", 11);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 11);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "resolved", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731880U), "fileTimeLo", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 11);
  emlrtAssign(&rhs11, emlrtCreateCellArray(0));
  emlrtAssign(&lhs11, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs11), "rhs", 11);
  emlrtAddField(*info, emlrtAliasP(lhs11), "lhs", 11);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "context", 12);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 12);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 12);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 12);
  emlrtAssign(&rhs12, emlrtCreateCellArray(0));
  emlrtAssign(&lhs12, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs12), "rhs", 12);
  emlrtAddField(*info, emlrtAliasP(lhs12), "lhs", 12);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                13);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 13);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 13);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                13);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 13);
  emlrtAssign(&rhs13, emlrtCreateCellArray(0));
  emlrtAssign(&lhs13, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs13), "rhs", 13);
  emlrtAddField(*info, emlrtAliasP(lhs13), "lhs", 13);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                14);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 14);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 14);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(1358207740U), "fileTimeLo", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 14);
  emlrtAssign(&rhs14, emlrtCreateCellArray(0));
  emlrtAssign(&lhs14, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs14), "rhs", 14);
  emlrtAddField(*info, emlrtAliasP(lhs14), "lhs", 14);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                15);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 15);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 15);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 15);
  emlrtAssign(&rhs15, emlrtCreateCellArray(0));
  emlrtAssign(&lhs15, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs15), "rhs", 15);
  emlrtAddField(*info, emlrtAliasP(lhs15), "lhs", 15);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context", 16);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 16);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 16);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 16);
  emlrtAssign(&rhs16, emlrtCreateCellArray(0));
  emlrtAssign(&lhs16, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs16), "rhs", 16);
  emlrtAddField(*info, emlrtAliasP(lhs16), "lhs", 16);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context", 17);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_floor"), "name", 17);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 17);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                "resolved", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840326U), "fileTimeLo", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 17);
  emlrtAssign(&rhs17, emlrtCreateCellArray(0));
  emlrtAssign(&lhs17, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs17), "rhs", 17);
  emlrtAddField(*info, emlrtAliasP(lhs17), "lhs", 17);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power"),
                "context", 18);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 18);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 18);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                18);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 18);
  emlrtAssign(&rhs18, emlrtCreateCellArray(0));
  emlrtAssign(&lhs18, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs18), "rhs", 18);
  emlrtAddField(*info, emlrtAliasP(lhs18), "lhs", 18);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 19);
  emlrtAddField(*info, emlrt_marshallOut("randi"), "name", 19);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 19);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m"), "resolved", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(1366183846U), "fileTimeLo", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 19);
  emlrtAssign(&rhs19, emlrtCreateCellArray(0));
  emlrtAssign(&lhs19, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs19), "rhs", 19);
  emlrtAddField(*info, emlrtAliasP(lhs19), "lhs", 19);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m"), "context", 20);
  emlrtAddField(*info, emlrt_marshallOut("eml_assert_valid_size_arg"), "name",
                20);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 20);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "resolved", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(1368204630U), "fileTimeLo", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 20);
  emlrtAssign(&rhs20, emlrtCreateCellArray(0));
  emlrtAssign(&lhs20, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs20), "rhs", 20);
  emlrtAddField(*info, emlrtAliasP(lhs20), "lhs", 20);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "context", 21);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 21);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 21);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 21);
  emlrtAssign(&rhs21, emlrtCreateCellArray(0));
  emlrtAssign(&lhs21, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs21), "rhs", 21);
  emlrtAddField(*info, emlrtAliasP(lhs21), "lhs", 21);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isintegral"),
                "context", 22);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 22);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 22);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 22);
  emlrtAssign(&rhs22, emlrtCreateCellArray(0));
  emlrtAssign(&lhs22, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs22), "rhs", 22);
  emlrtAddField(*info, emlrtAliasP(lhs22), "lhs", 22);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "context", 23);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 23);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 23);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 23);
  emlrtAssign(&rhs23, emlrtCreateCellArray(0));
  emlrtAssign(&lhs23, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs23), "rhs", 23);
  emlrtAddField(*info, emlrtAliasP(lhs23), "lhs", 23);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 24);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_integer_class"), "name", 24);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 24);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_integer_class.m"),
                "resolved", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840382U), "fileTimeLo", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 24);
  emlrtAssign(&rhs24, emlrtCreateCellArray(0));
  emlrtAssign(&lhs24, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs24), "rhs", 24);
  emlrtAddField(*info, emlrtAliasP(lhs24), "lhs", 24);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 25);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 25);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 25);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(1362283482U), "fileTimeLo", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 25);
  emlrtAssign(&rhs25, emlrtCreateCellArray(0));
  emlrtAssign(&lhs25, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs25), "rhs", 25);
  emlrtAddField(*info, emlrtAliasP(lhs25), "lhs", 25);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 26);
  emlrtAddField(*info, emlrt_marshallOut("intmin"), "name", 26);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 26);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "resolved", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(1362283482U), "fileTimeLo", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 26);
  emlrtAssign(&rhs26, emlrtCreateCellArray(0));
  emlrtAssign(&lhs26, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs26), "rhs", 26);
  emlrtAddField(*info, emlrtAliasP(lhs26), "lhs", 26);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 27);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexIntRelop"), "name",
                27);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 27);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749922U), "fileTimeLo", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 27);
  emlrtAssign(&rhs27, emlrtCreateCellArray(0));
  emlrtAssign(&lhs27, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs27), "rhs", 27);
  emlrtAddField(*info, emlrtAliasP(lhs27), "lhs", 27);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntClass"),
                "context", 28);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 28);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 28);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 28);
  emlrtAssign(&rhs28, emlrtCreateCellArray(0));
  emlrtAssign(&lhs28, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs28), "rhs", 28);
  emlrtAddField(*info, emlrtAliasP(lhs28), "lhs", 28);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass"),
                "context", 29);
  emlrtAddField(*info, emlrt_marshallOut("intmin"), "name", 29);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 29);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "resolved", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(1362283482U), "fileTimeLo", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 29);
  emlrtAssign(&rhs29, emlrtCreateCellArray(0));
  emlrtAssign(&lhs29, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs29), "rhs", 29);
  emlrtAddField(*info, emlrtAliasP(lhs29), "lhs", 29);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!numel_for_size"),
                "context", 30);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 30);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 30);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 30);
  emlrtAssign(&rhs30, emlrtCreateCellArray(0));
  emlrtAssign(&lhs30, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs30), "rhs", 30);
  emlrtAddField(*info, emlrtAliasP(lhs30), "lhs", 30);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m!common_checks"),
                "context", 31);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 31);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 31);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 31);
  emlrtAssign(&rhs31, emlrtCreateCellArray(0));
  emlrtAssign(&lhs31, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs31), "rhs", 31);
  emlrtAddField(*info, emlrtAliasP(lhs31), "lhs", 31);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "context", 32);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 32);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 32);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 32);
  emlrtAssign(&rhs32, emlrtCreateCellArray(0));
  emlrtAssign(&lhs32, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs32), "rhs", 32);
  emlrtAddField(*info, emlrtAliasP(lhs32), "lhs", 32);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "context", 33);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 33);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 33);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(1362283482U), "fileTimeLo", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 33);
  emlrtAssign(&rhs33, emlrtCreateCellArray(0));
  emlrtAssign(&lhs33, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs33), "rhs", 33);
  emlrtAddField(*info, emlrtAliasP(lhs33), "lhs", 33);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m"), "context", 34);
  emlrtAddField(*info, emlrt_marshallOut("rand"), "name", 34);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 34);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m"), "resolved", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(1366183844U), "fileTimeLo", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 34);
  emlrtAssign(&rhs34, emlrtCreateCellArray(0));
  emlrtAssign(&lhs34, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs34), "rhs", 34);
  emlrtAddField(*info, emlrtAliasP(lhs34), "lhs", 34);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/rand.m"), "context", 35);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_rand_extrinsic"), "name", 35);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 35);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/eml_is_rand_extrinsic.m"),
                "resolved", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(1368204632U), "fileTimeLo", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 35);
  emlrtAssign(&rhs35, emlrtCreateCellArray(0));
  emlrtAssign(&lhs35, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs35), "rhs", 35);
  emlrtAddField(*info, emlrtAliasP(lhs35), "lhs", 35);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m"), "context", 36);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 36);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 36);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 36);
  emlrtAssign(&rhs36, emlrtCreateCellArray(0));
  emlrtAssign(&lhs36, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs36), "rhs", 36);
  emlrtAddField(*info, emlrtAliasP(lhs36), "lhs", 36);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m"), "context", 37);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 37);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 37);
  emlrtAssign(&rhs37, emlrtCreateCellArray(0));
  emlrtAssign(&lhs37, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs37), "rhs", 37);
  emlrtAddField(*info, emlrtAliasP(lhs37), "lhs", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 38);
  emlrtAddField(*info, emlrt_marshallOut("char"), "name", 38);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 38);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m"), "resolved", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751568U), "fileTimeLo", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 38);
  emlrtAssign(&rhs38, emlrtCreateCellArray(0));
  emlrtAssign(&lhs38, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs38), "rhs", 38);
  emlrtAddField(*info, emlrtAliasP(lhs38), "lhs", 38);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 39);
  emlrtAddField(*info, emlrt_marshallOut("repmat"), "name", 39);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 39);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "resolved", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(1352446460U), "fileTimeLo", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 39);
  emlrtAssign(&rhs39, emlrtCreateCellArray(0));
  emlrtAssign(&lhs39, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs39), "rhs", 39);
  emlrtAddField(*info, emlrtAliasP(lhs39), "lhs", 39);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 40);
  emlrtAddField(*info, emlrt_marshallOut("eml_assert_valid_size_arg"), "name",
                40);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 40);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "resolved", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(1368204630U), "fileTimeLo", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 40);
  emlrtAssign(&rhs40, emlrtCreateCellArray(0));
  emlrtAssign(&lhs40, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs40), "rhs", 40);
  emlrtAddField(*info, emlrtAliasP(lhs40), "lhs", 40);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 41);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 41);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 41);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 41);
  emlrtAssign(&rhs41, emlrtCreateCellArray(0));
  emlrtAssign(&lhs41, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs41), "rhs", 41);
  emlrtAddField(*info, emlrtAliasP(lhs41), "lhs", 41);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 42);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 42);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 42);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 42);
  emlrtAssign(&rhs42, emlrtCreateCellArray(0));
  emlrtAssign(&lhs42, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs42), "rhs", 42);
  emlrtAddField(*info, emlrtAliasP(lhs42), "lhs", 42);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "context", 43);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 43);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 43);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 43);
  emlrtAssign(&rhs43, emlrtCreateCellArray(0));
  emlrtAssign(&lhs43, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs43), "rhs", 43);
  emlrtAddField(*info, emlrtAliasP(lhs43), "lhs", 43);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "context", 44);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemProp"),
                "name", 44);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "resolved", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(1373657594U), "fileTimeLo", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 44);
  emlrtAssign(&rhs44, emlrtCreateCellArray(0));
  emlrtAssign(&lhs44, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs44), "rhs", 44);
  emlrtAddField(*info, emlrtAliasP(lhs44), "lhs", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "context", 45);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemCore"),
                "name", 45);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 45);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "resolved", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(1373657594U), "fileTimeLo", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 45);
  emlrtAssign(&rhs45, emlrtCreateCellArray(0));
  emlrtAssign(&lhs45, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs45), "rhs", 45);
  emlrtAddField(*info, emlrtAliasP(lhs45), "lhs", 45);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 46);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.System"), "name",
                46);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 46);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "resolved", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327396U), "fileTimeLo", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 46);
  emlrtAssign(&rhs46, emlrtCreateCellArray(0));
  emlrtAssign(&lhs46, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs46), "rhs", 46);
  emlrtAddField(*info, emlrtAliasP(lhs46), "lhs", 46);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 47);
  emlrtAddField(*info, emlrt_marshallOut("matlab.System"), "name", 47);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/System.p"), "resolved", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 47);
  emlrtAssign(&rhs47, emlrtCreateCellArray(0));
  emlrtAssign(&lhs47, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs47), "rhs", 47);
  emlrtAddField(*info, emlrtAliasP(lhs47), "lhs", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 48);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.mixin.coder.Propagates"),
                "name", 48);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Propagates.p"),
                "resolved", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327398U), "fileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 48);
  emlrtAssign(&rhs48, emlrtCreateCellArray(0));
  emlrtAssign(&lhs48, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs48), "rhs", 48);
  emlrtAddField(*info, emlrtAliasP(lhs48), "lhs", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 49);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.mixin.Propagates"),
                "name", 49);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/Propagates.p"),
                "resolved", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 49);
  emlrtAssign(&rhs49, emlrtCreateCellArray(0));
  emlrtAssign(&lhs49, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs49), "rhs", 49);
  emlrtAddField(*info, emlrtAliasP(lhs49), "lhs", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 50);
  emlrtAddField(*info, emlrt_marshallOut("OFDMBase"), "name", 50);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "resolved", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516407U), "fileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 50);
  emlrtAssign(&rhs50, emlrtCreateCellArray(0));
  emlrtAssign(&lhs50, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs50), "rhs", 50);
  emlrtAddField(*info, emlrtAliasP(lhs50), "lhs", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 51);
  emlrtAddField(*info, emlrt_marshallOut("OFDMModulator"), "name", 51);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "resolved", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516424U), "fileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 51);
  emlrtAssign(&rhs51, emlrtCreateCellArray(0));
  emlrtAssign(&lhs51, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs51), "rhs", 51);
  emlrtAddField(*info, emlrtAliasP(lhs51), "lhs", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 52);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemProp"),
                "name", 52);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "resolved", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(1373657594U), "fileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 52);
  emlrtAssign(&rhs52, emlrtCreateCellArray(0));
  emlrtAssign(&lhs52, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs52), "rhs", 52);
  emlrtAddField(*info, emlrtAliasP(lhs52), "lhs", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 53);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.isSystemObject"), "name",
                53);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p"),
                "resolved", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 53);
  emlrtAssign(&rhs53, emlrtCreateCellArray(0));
  emlrtAssign(&lhs53, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs53), "rhs", 53);
  emlrtAddField(*info, emlrtAliasP(lhs53), "lhs", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 54);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 54);
  emlrtAddField(*info, emlrt_marshallOut("cell"), "dominantType", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 54);
  emlrtAssign(&rhs54, emlrtCreateCellArray(0));
  emlrtAssign(&lhs54, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs54), "rhs", 54);
  emlrtAddField(*info, emlrtAliasP(lhs54), "lhs", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 55);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.pvParse"), "name", 55);
  emlrtAddField(*info, emlrt_marshallOut("OFDMModulator"), "dominantType", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p"),
                "resolved", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 55);
  emlrtAssign(&rhs55, emlrtCreateCellArray(0));
  emlrtAssign(&lhs55, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs55), "rhs", 55);
  emlrtAddField(*info, emlrtAliasP(lhs55), "lhs", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p"),
                "context", 56);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 56);
  emlrtAddField(*info, emlrt_marshallOut("cell"), "dominantType", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 56);
  emlrtAssign(&rhs56, emlrtCreateCellArray(0));
  emlrtAssign(&lhs56, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs56), "rhs", 56);
  emlrtAddField(*info, emlrtAliasP(lhs56), "lhs", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p"),
                "context", 57);
  emlrtAddField(*info, emlrt_marshallOut("rem"), "name", 57);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m"), "resolved", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 57);
  emlrtAssign(&rhs57, emlrtCreateCellArray(0));
  emlrtAssign(&lhs57, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs57), "rhs", 57);
  emlrtAddField(*info, emlrtAliasP(lhs57), "lhs", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m"), "context", 58);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 58);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 58);
  emlrtAssign(&rhs58, emlrtCreateCellArray(0));
  emlrtAssign(&lhs58, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs58), "rhs", 58);
  emlrtAddField(*info, emlrtAliasP(lhs58), "lhs", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m"), "context", 59);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 59);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                59);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 59);
  emlrtAssign(&rhs59, emlrtCreateCellArray(0));
  emlrtAssign(&lhs59, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs59), "rhs", 59);
  emlrtAddField(*info, emlrtAliasP(lhs59), "lhs", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/rem.m"), "context", 60);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 60);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(1358207740U), "fileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 60);
  emlrtAssign(&rhs60, emlrtCreateCellArray(0));
  emlrtAssign(&lhs60, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs60), "rhs", 60);
  emlrtAddField(*info, emlrtAliasP(lhs60), "lhs", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 61);
  emlrtAddField(*info, emlrt_marshallOut("log2"), "name", 61);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m"), "resolved", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851982U), "fileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 61);
  emlrtAssign(&rhs61, emlrtCreateCellArray(0));
  emlrtAssign(&lhs61, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs61), "rhs", 61);
  emlrtAddField(*info, emlrtAliasP(lhs61), "lhs", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m"), "context", 62);
  emlrtAddField(*info, emlrt_marshallOut("eml_error"), "name", 62);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m"), "resolved", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851958U), "fileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 62);
  emlrtAssign(&rhs62, emlrtCreateCellArray(0));
  emlrtAssign(&lhs62, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs62), "rhs", 62);
  emlrtAddField(*info, emlrtAliasP(lhs62), "lhs", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_log2"),
                "context", 63);
  emlrtAddField(*info, emlrt_marshallOut("realmax"), "name", 63);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 63);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m"), "resolved", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(1307672842U), "fileTimeLo", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 63);
  emlrtAssign(&rhs63, emlrtCreateCellArray(0));
  emlrtAssign(&lhs63, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs63), "rhs", 63);
  emlrtAddField(*info, emlrtAliasP(lhs63), "lhs", 63);
  emlrtDestroyArray(&rhs0);
  emlrtDestroyArray(&lhs0);
  emlrtDestroyArray(&rhs1);
  emlrtDestroyArray(&lhs1);
  emlrtDestroyArray(&rhs2);
  emlrtDestroyArray(&lhs2);
  emlrtDestroyArray(&rhs3);
  emlrtDestroyArray(&lhs3);
  emlrtDestroyArray(&rhs4);
  emlrtDestroyArray(&lhs4);
  emlrtDestroyArray(&rhs5);
  emlrtDestroyArray(&lhs5);
  emlrtDestroyArray(&rhs6);
  emlrtDestroyArray(&lhs6);
  emlrtDestroyArray(&rhs7);
  emlrtDestroyArray(&lhs7);
  emlrtDestroyArray(&rhs8);
  emlrtDestroyArray(&lhs8);
  emlrtDestroyArray(&rhs9);
  emlrtDestroyArray(&lhs9);
  emlrtDestroyArray(&rhs10);
  emlrtDestroyArray(&lhs10);
  emlrtDestroyArray(&rhs11);
  emlrtDestroyArray(&lhs11);
  emlrtDestroyArray(&rhs12);
  emlrtDestroyArray(&lhs12);
  emlrtDestroyArray(&rhs13);
  emlrtDestroyArray(&lhs13);
  emlrtDestroyArray(&rhs14);
  emlrtDestroyArray(&lhs14);
  emlrtDestroyArray(&rhs15);
  emlrtDestroyArray(&lhs15);
  emlrtDestroyArray(&rhs16);
  emlrtDestroyArray(&lhs16);
  emlrtDestroyArray(&rhs17);
  emlrtDestroyArray(&lhs17);
  emlrtDestroyArray(&rhs18);
  emlrtDestroyArray(&lhs18);
  emlrtDestroyArray(&rhs19);
  emlrtDestroyArray(&lhs19);
  emlrtDestroyArray(&rhs20);
  emlrtDestroyArray(&lhs20);
  emlrtDestroyArray(&rhs21);
  emlrtDestroyArray(&lhs21);
  emlrtDestroyArray(&rhs22);
  emlrtDestroyArray(&lhs22);
  emlrtDestroyArray(&rhs23);
  emlrtDestroyArray(&lhs23);
  emlrtDestroyArray(&rhs24);
  emlrtDestroyArray(&lhs24);
  emlrtDestroyArray(&rhs25);
  emlrtDestroyArray(&lhs25);
  emlrtDestroyArray(&rhs26);
  emlrtDestroyArray(&lhs26);
  emlrtDestroyArray(&rhs27);
  emlrtDestroyArray(&lhs27);
  emlrtDestroyArray(&rhs28);
  emlrtDestroyArray(&lhs28);
  emlrtDestroyArray(&rhs29);
  emlrtDestroyArray(&lhs29);
  emlrtDestroyArray(&rhs30);
  emlrtDestroyArray(&lhs30);
  emlrtDestroyArray(&rhs31);
  emlrtDestroyArray(&lhs31);
  emlrtDestroyArray(&rhs32);
  emlrtDestroyArray(&lhs32);
  emlrtDestroyArray(&rhs33);
  emlrtDestroyArray(&lhs33);
  emlrtDestroyArray(&rhs34);
  emlrtDestroyArray(&lhs34);
  emlrtDestroyArray(&rhs35);
  emlrtDestroyArray(&lhs35);
  emlrtDestroyArray(&rhs36);
  emlrtDestroyArray(&lhs36);
  emlrtDestroyArray(&rhs37);
  emlrtDestroyArray(&lhs37);
  emlrtDestroyArray(&rhs38);
  emlrtDestroyArray(&lhs38);
  emlrtDestroyArray(&rhs39);
  emlrtDestroyArray(&lhs39);
  emlrtDestroyArray(&rhs40);
  emlrtDestroyArray(&lhs40);
  emlrtDestroyArray(&rhs41);
  emlrtDestroyArray(&lhs41);
  emlrtDestroyArray(&rhs42);
  emlrtDestroyArray(&lhs42);
  emlrtDestroyArray(&rhs43);
  emlrtDestroyArray(&lhs43);
  emlrtDestroyArray(&rhs44);
  emlrtDestroyArray(&lhs44);
  emlrtDestroyArray(&rhs45);
  emlrtDestroyArray(&lhs45);
  emlrtDestroyArray(&rhs46);
  emlrtDestroyArray(&lhs46);
  emlrtDestroyArray(&rhs47);
  emlrtDestroyArray(&lhs47);
  emlrtDestroyArray(&rhs48);
  emlrtDestroyArray(&lhs48);
  emlrtDestroyArray(&rhs49);
  emlrtDestroyArray(&lhs49);
  emlrtDestroyArray(&rhs50);
  emlrtDestroyArray(&lhs50);
  emlrtDestroyArray(&rhs51);
  emlrtDestroyArray(&lhs51);
  emlrtDestroyArray(&rhs52);
  emlrtDestroyArray(&lhs52);
  emlrtDestroyArray(&rhs53);
  emlrtDestroyArray(&lhs53);
  emlrtDestroyArray(&rhs54);
  emlrtDestroyArray(&lhs54);
  emlrtDestroyArray(&rhs55);
  emlrtDestroyArray(&lhs55);
  emlrtDestroyArray(&rhs56);
  emlrtDestroyArray(&lhs56);
  emlrtDestroyArray(&rhs57);
  emlrtDestroyArray(&lhs57);
  emlrtDestroyArray(&rhs58);
  emlrtDestroyArray(&lhs58);
  emlrtDestroyArray(&rhs59);
  emlrtDestroyArray(&lhs59);
  emlrtDestroyArray(&rhs60);
  emlrtDestroyArray(&lhs60);
  emlrtDestroyArray(&rhs61);
  emlrtDestroyArray(&lhs61);
  emlrtDestroyArray(&rhs62);
  emlrtDestroyArray(&lhs62);
  emlrtDestroyArray(&rhs63);
  emlrtDestroyArray(&lhs63);
}

static const mxArray *emlrt_marshallOut(const char * u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = mxCreateString(u);
  emlrtAssign(&y, m0);
  return y;
}

static const mxArray *b_emlrt_marshallOut(uint32_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)mxGetData(m1) = u;
  emlrtAssign(&y, m1);
  return y;
}

static void b_info_helper(const mxArray **info)
{
  const mxArray *rhs64 = NULL;
  const mxArray *lhs64 = NULL;
  const mxArray *rhs65 = NULL;
  const mxArray *lhs65 = NULL;
  const mxArray *rhs66 = NULL;
  const mxArray *lhs66 = NULL;
  const mxArray *rhs67 = NULL;
  const mxArray *lhs67 = NULL;
  const mxArray *rhs68 = NULL;
  const mxArray *lhs68 = NULL;
  const mxArray *rhs69 = NULL;
  const mxArray *lhs69 = NULL;
  const mxArray *rhs70 = NULL;
  const mxArray *lhs70 = NULL;
  const mxArray *rhs71 = NULL;
  const mxArray *lhs71 = NULL;
  const mxArray *rhs72 = NULL;
  const mxArray *lhs72 = NULL;
  const mxArray *rhs73 = NULL;
  const mxArray *lhs73 = NULL;
  const mxArray *rhs74 = NULL;
  const mxArray *lhs74 = NULL;
  const mxArray *rhs75 = NULL;
  const mxArray *lhs75 = NULL;
  const mxArray *rhs76 = NULL;
  const mxArray *lhs76 = NULL;
  const mxArray *rhs77 = NULL;
  const mxArray *lhs77 = NULL;
  const mxArray *rhs78 = NULL;
  const mxArray *lhs78 = NULL;
  const mxArray *rhs79 = NULL;
  const mxArray *lhs79 = NULL;
  const mxArray *rhs80 = NULL;
  const mxArray *lhs80 = NULL;
  const mxArray *rhs81 = NULL;
  const mxArray *lhs81 = NULL;
  const mxArray *rhs82 = NULL;
  const mxArray *lhs82 = NULL;
  const mxArray *rhs83 = NULL;
  const mxArray *lhs83 = NULL;
  const mxArray *rhs84 = NULL;
  const mxArray *lhs84 = NULL;
  const mxArray *rhs85 = NULL;
  const mxArray *lhs85 = NULL;
  const mxArray *rhs86 = NULL;
  const mxArray *lhs86 = NULL;
  const mxArray *rhs87 = NULL;
  const mxArray *lhs87 = NULL;
  const mxArray *rhs88 = NULL;
  const mxArray *lhs88 = NULL;
  const mxArray *rhs89 = NULL;
  const mxArray *lhs89 = NULL;
  const mxArray *rhs90 = NULL;
  const mxArray *lhs90 = NULL;
  const mxArray *rhs91 = NULL;
  const mxArray *lhs91 = NULL;
  const mxArray *rhs92 = NULL;
  const mxArray *lhs92 = NULL;
  const mxArray *rhs93 = NULL;
  const mxArray *lhs93 = NULL;
  const mxArray *rhs94 = NULL;
  const mxArray *lhs94 = NULL;
  const mxArray *rhs95 = NULL;
  const mxArray *lhs95 = NULL;
  const mxArray *rhs96 = NULL;
  const mxArray *lhs96 = NULL;
  const mxArray *rhs97 = NULL;
  const mxArray *lhs97 = NULL;
  const mxArray *rhs98 = NULL;
  const mxArray *lhs98 = NULL;
  const mxArray *rhs99 = NULL;
  const mxArray *lhs99 = NULL;
  const mxArray *rhs100 = NULL;
  const mxArray *lhs100 = NULL;
  const mxArray *rhs101 = NULL;
  const mxArray *lhs101 = NULL;
  const mxArray *rhs102 = NULL;
  const mxArray *lhs102 = NULL;
  const mxArray *rhs103 = NULL;
  const mxArray *lhs103 = NULL;
  const mxArray *rhs104 = NULL;
  const mxArray *lhs104 = NULL;
  const mxArray *rhs105 = NULL;
  const mxArray *lhs105 = NULL;
  const mxArray *rhs106 = NULL;
  const mxArray *lhs106 = NULL;
  const mxArray *rhs107 = NULL;
  const mxArray *lhs107 = NULL;
  const mxArray *rhs108 = NULL;
  const mxArray *lhs108 = NULL;
  const mxArray *rhs109 = NULL;
  const mxArray *lhs109 = NULL;
  const mxArray *rhs110 = NULL;
  const mxArray *lhs110 = NULL;
  const mxArray *rhs111 = NULL;
  const mxArray *lhs111 = NULL;
  const mxArray *rhs112 = NULL;
  const mxArray *lhs112 = NULL;
  const mxArray *rhs113 = NULL;
  const mxArray *lhs113 = NULL;
  const mxArray *rhs114 = NULL;
  const mxArray *lhs114 = NULL;
  const mxArray *rhs115 = NULL;
  const mxArray *lhs115 = NULL;
  const mxArray *rhs116 = NULL;
  const mxArray *lhs116 = NULL;
  const mxArray *rhs117 = NULL;
  const mxArray *lhs117 = NULL;
  const mxArray *rhs118 = NULL;
  const mxArray *lhs118 = NULL;
  const mxArray *rhs119 = NULL;
  const mxArray *lhs119 = NULL;
  const mxArray *rhs120 = NULL;
  const mxArray *lhs120 = NULL;
  const mxArray *rhs121 = NULL;
  const mxArray *lhs121 = NULL;
  const mxArray *rhs122 = NULL;
  const mxArray *lhs122 = NULL;
  const mxArray *rhs123 = NULL;
  const mxArray *lhs123 = NULL;
  const mxArray *rhs124 = NULL;
  const mxArray *lhs124 = NULL;
  const mxArray *rhs125 = NULL;
  const mxArray *lhs125 = NULL;
  const mxArray *rhs126 = NULL;
  const mxArray *lhs126 = NULL;
  const mxArray *rhs127 = NULL;
  const mxArray *lhs127 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m"), "context", 64);
  emlrtAddField(*info, emlrt_marshallOut("eml_realmax"), "name", 64);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m"), "resolved",
                64);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 64);
  emlrtAssign(&rhs64, emlrtCreateCellArray(0));
  emlrtAssign(&lhs64, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs64), "rhs", 64);
  emlrtAddField(*info, emlrtAliasP(lhs64), "lhs", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m"), "context",
                65);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 65);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 65);
  emlrtAssign(&rhs65, emlrtCreateCellArray(0));
  emlrtAssign(&lhs65, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs65), "rhs", 65);
  emlrtAddField(*info, emlrtAliasP(lhs65), "lhs", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m"), "context",
                66);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 66);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 66);
  emlrtAssign(&rhs66, emlrtCreateCellArray(0));
  emlrtAssign(&lhs66, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs66), "rhs", 66);
  emlrtAddField(*info, emlrtAliasP(lhs66), "lhs", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_log2"),
                "context", 67);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 67);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 67);
  emlrtAssign(&rhs67, emlrtCreateCellArray(0));
  emlrtAssign(&lhs67, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs67), "rhs", 67);
  emlrtAddField(*info, emlrtAliasP(lhs67), "lhs", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2"),
                "context", 68);
  emlrtAddField(*info, emlrt_marshallOut("eml_guarded_inf"), "name", 68);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_inf.m"),
                "resolved", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840376U), "fileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 68);
  emlrtAssign(&rhs68, emlrtCreateCellArray(0));
  emlrtAssign(&lhs68, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs68), "rhs", 68);
  emlrtAddField(*info, emlrtAliasP(lhs68), "lhs", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_inf.m"),
                "context", 69);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_float_class"), "name", 69);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m"),
                "resolved", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840382U), "fileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 69);
  emlrtAssign(&rhs69, emlrtCreateCellArray(0));
  emlrtAssign(&lhs69, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs69), "rhs", 69);
  emlrtAddField(*info, emlrtAliasP(lhs69), "lhs", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2"),
                "context", 70);
  emlrtAddField(*info, emlrt_marshallOut("eml_guarded_nan"), "name", 70);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m"),
                "resolved", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840376U), "fileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 70);
  emlrtAssign(&rhs70, emlrtCreateCellArray(0));
  emlrtAssign(&lhs70, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs70), "rhs", 70);
  emlrtAddField(*info, emlrtAliasP(lhs70), "lhs", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m"),
                "context", 71);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_float_class"), "name", 71);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m"),
                "resolved", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840382U), "fileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 71);
  emlrtAssign(&rhs71, emlrtCreateCellArray(0));
  emlrtAssign(&lhs71, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs71), "rhs", 71);
  emlrtAddField(*info, emlrtAliasP(lhs71), "lhs", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2"),
                "context", 72);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 72);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                72);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 72);
  emlrtAssign(&rhs72, emlrtCreateCellArray(0));
  emlrtAssign(&lhs72, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs72), "rhs", 72);
  emlrtAddField(*info, emlrtAliasP(lhs72), "lhs", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 73);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 73);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 73);
  emlrtAssign(&rhs73, emlrtCreateCellArray(0));
  emlrtAssign(&lhs73, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs73), "rhs", 73);
  emlrtAddField(*info, emlrtAliasP(lhs73), "lhs", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 74);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 74);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 74);
  emlrtAssign(&rhs74, emlrtCreateCellArray(0));
  emlrtAssign(&lhs74, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs74), "rhs", 74);
  emlrtAddField(*info, emlrtAliasP(lhs74), "lhs", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 75);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 75);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 75);
  emlrtAssign(&rhs75, emlrtCreateCellArray(0));
  emlrtAssign(&lhs75, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs75), "rhs", 75);
  emlrtAddField(*info, emlrtAliasP(lhs75), "lhs", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 76);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 76);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 76);
  emlrtAssign(&rhs76, emlrtCreateCellArray(0));
  emlrtAssign(&lhs76, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs76), "rhs", 76);
  emlrtAddField(*info, emlrtAliasP(lhs76), "lhs", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_frexp"),
                "context", 77);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 77);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                77);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 77);
  emlrtAssign(&rhs77, emlrtCreateCellArray(0));
  emlrtAssign(&lhs77, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs77), "rhs", 77);
  emlrtAddField(*info, emlrtAliasP(lhs77), "lhs", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/log2.m!scalar_real_log2"),
                "context", 78);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 78);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 78);
  emlrtAssign(&rhs78, emlrtCreateCellArray(0));
  emlrtAssign(&lhs78, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs78), "rhs", 78);
  emlrtAddField(*info, emlrtAliasP(lhs78), "lhs", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 79);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 79);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 79);
  emlrtAssign(&rhs79, emlrtCreateCellArray(0));
  emlrtAssign(&lhs79, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs79), "rhs", 79);
  emlrtAddField(*info, emlrtAliasP(lhs79), "lhs", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 80);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.errorIf"), "name", 80);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"),
                "resolved", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(1334093538U), "fileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 80);
  emlrtAssign(&rhs80, emlrtCreateCellArray(0));
  emlrtAssign(&lhs80, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs80), "rhs", 80);
  emlrtAddField(*info, emlrtAliasP(lhs80), "lhs", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 81);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 81);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 81);
  emlrtAssign(&rhs81, emlrtCreateCellArray(0));
  emlrtAssign(&lhs81, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs81), "rhs", 81);
  emlrtAddField(*info, emlrtAliasP(lhs81), "lhs", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 82);
  emlrtAddField(*info, emlrt_marshallOut("sqrt"), "name", 82);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m"), "resolved", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851986U), "fileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 82);
  emlrtAssign(&rhs82, emlrtCreateCellArray(0));
  emlrtAssign(&lhs82, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs82), "rhs", 82);
  emlrtAddField(*info, emlrtAliasP(lhs82), "lhs", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m"), "context", 83);
  emlrtAddField(*info, emlrt_marshallOut("eml_error"), "name", 83);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m"), "resolved", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851958U), "fileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 83);
  emlrtAssign(&rhs83, emlrtCreateCellArray(0));
  emlrtAssign(&lhs83, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs83), "rhs", 83);
  emlrtAddField(*info, emlrtAliasP(lhs83), "lhs", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m"), "context", 84);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_sqrt"), "name", 84);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m"),
                "resolved", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840338U), "fileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 84);
  emlrtAssign(&rhs84, emlrtCreateCellArray(0));
  emlrtAssign(&lhs84, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs84), "rhs", 84);
  emlrtAddField(*info, emlrtAliasP(lhs84), "lhs", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "context", 85);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemCore"),
                "name", 85);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "resolved", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(1373657594U), "fileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 85);
  emlrtAssign(&rhs85, emlrtCreateCellArray(0));
  emlrtAssign(&lhs85, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs85), "rhs", 85);
  emlrtAddField(*info, emlrtAliasP(lhs85), "lhs", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 86);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 86);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 86);
  emlrtAssign(&rhs86, emlrtCreateCellArray(0));
  emlrtAssign(&lhs86, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs86), "rhs", 86);
  emlrtAddField(*info, emlrtAliasP(lhs86), "lhs", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 87);
  emlrtAddField(*info, emlrt_marshallOut("any"), "name", 87);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m"), "resolved", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731876U), "fileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 87);
  emlrtAssign(&rhs87, emlrtCreateCellArray(0));
  emlrtAssign(&lhs87, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs87), "rhs", 87);
  emlrtAddField(*info, emlrtAliasP(lhs87), "lhs", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m"), "context", 88);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 88);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 88);
  emlrtAssign(&rhs88, emlrtCreateCellArray(0));
  emlrtAssign(&lhs88, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs88), "rhs", 88);
  emlrtAddField(*info, emlrtAliasP(lhs88), "lhs", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m"), "context", 89);
  emlrtAddField(*info, emlrt_marshallOut("eml_all_or_any"), "name", 89);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"),
                "resolved", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840294U), "fileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 89);
  emlrtAssign(&rhs89, emlrtCreateCellArray(0));
  emlrtAssign(&lhs89, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs89), "rhs", 89);
  emlrtAddField(*info, emlrtAliasP(lhs89), "lhs", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                90);
  emlrtAddField(*info, emlrt_marshallOut("isequal"), "name", 90);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 90);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "resolved", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840358U), "fileTimeLo", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 90);
  emlrtAssign(&rhs90, emlrtCreateCellArray(0));
  emlrtAssign(&lhs90, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs90), "rhs", 90);
  emlrtAddField(*info, emlrtAliasP(lhs90), "lhs", 90);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "context", 91);
  emlrtAddField(*info, emlrt_marshallOut("eml_isequal_core"), "name", 91);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 91);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"),
                "resolved", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840386U), "fileTimeLo", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 91);
  emlrtAssign(&rhs91, emlrtCreateCellArray(0));
  emlrtAssign(&lhs91, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs91), "rhs", 91);
  emlrtAddField(*info, emlrtAliasP(lhs91), "lhs", 91);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                92);
  emlrtAddField(*info, emlrt_marshallOut("eml_const_nonsingleton_dim"), "name",
                92);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 92);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m"),
                "resolved", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840296U), "fileTimeLo", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 92);
  emlrtAssign(&rhs92, emlrtCreateCellArray(0));
  emlrtAssign(&lhs92, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs92), "rhs", 92);
  emlrtAddField(*info, emlrtAliasP(lhs92), "lhs", 92);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                93);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 93);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 93);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 93);
  emlrtAssign(&rhs93, emlrtCreateCellArray(0));
  emlrtAssign(&lhs93, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs93), "rhs", 93);
  emlrtAddField(*info, emlrtAliasP(lhs93), "lhs", 93);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 94);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 94);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 94);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 94);
  emlrtAssign(&rhs94, emlrtCreateCellArray(0));
  emlrtAssign(&lhs94, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs94), "rhs", 94);
  emlrtAddField(*info, emlrtAliasP(lhs94), "lhs", 94);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 95);
  emlrtAddField(*info, emlrt_marshallOut("sum"), "name", 95);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 95);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "resolved", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 95);
  emlrtAssign(&rhs95, emlrtCreateCellArray(0));
  emlrtAssign(&lhs95, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs95), "rhs", 95);
  emlrtAddField(*info, emlrtAliasP(lhs95), "lhs", 95);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "context", 96);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 96);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 96);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 96);
  emlrtAssign(&rhs96, emlrtCreateCellArray(0));
  emlrtAssign(&lhs96, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs96), "rhs", 96);
  emlrtAddField(*info, emlrtAliasP(lhs96), "lhs", 96);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "context", 97);
  emlrtAddField(*info, emlrt_marshallOut("isequal"), "name", 97);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 97);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "resolved", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840358U), "fileTimeLo", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 97);
  emlrtAssign(&rhs97, emlrtCreateCellArray(0));
  emlrtAssign(&lhs97, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs97), "rhs", 97);
  emlrtAddField(*info, emlrtAliasP(lhs97), "lhs", 97);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "context", 98);
  emlrtAddField(*info, emlrt_marshallOut("eml_const_nonsingleton_dim"), "name",
                98);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 98);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m"),
                "resolved", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840296U), "fileTimeLo", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 98);
  emlrtAssign(&rhs98, emlrtCreateCellArray(0));
  emlrtAssign(&lhs98, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs98), "rhs", 98);
  emlrtAddField(*info, emlrtAliasP(lhs98), "lhs", 98);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "context", 99);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 99);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                99);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 99);
  emlrtAssign(&rhs99, emlrtCreateCellArray(0));
  emlrtAssign(&lhs99, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs99), "rhs", 99);
  emlrtAddField(*info, emlrtAliasP(lhs99), "lhs", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "context", 100);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 100);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 100);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 100);
  emlrtAssign(&rhs100, emlrtCreateCellArray(0));
  emlrtAssign(&lhs100, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs100), "rhs", 100);
  emlrtAddField(*info, emlrtAliasP(lhs100), "lhs", 100);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 101);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 101);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 101);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 101);
  emlrtAssign(&rhs101, emlrtCreateCellArray(0));
  emlrtAssign(&lhs101, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs101), "rhs", 101);
  emlrtAddField(*info, emlrtAliasP(lhs101), "lhs", 101);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 102);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 102);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 102);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 102);
  emlrtAssign(&rhs102, emlrtCreateCellArray(0));
  emlrtAssign(&lhs102, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs102), "rhs", 102);
  emlrtAddField(*info, emlrtAliasP(lhs102), "lhs", 102);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "context", 103);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 103);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 103);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 103);
  emlrtAssign(&rhs103, emlrtCreateCellArray(0));
  emlrtAssign(&lhs103, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs103), "rhs", 103);
  emlrtAddField(*info, emlrtAliasP(lhs103), "lhs", 103);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 104);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 104);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 104);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "resolved", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(1366183842U), "fileTimeLo", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 104);
  emlrtAssign(&rhs104, emlrtCreateCellArray(0));
  emlrtAssign(&lhs104, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs104), "rhs", 104);
  emlrtAddField(*info, emlrtAliasP(lhs104), "lhs", 104);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "context", 105);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 105);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 105);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "resolved", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(1366183842U), "fileTimeLo", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 105);
  emlrtAssign(&rhs105, emlrtCreateCellArray(0));
  emlrtAssign(&lhs105, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs105), "rhs", 105);
  emlrtAddField(*info, emlrtAliasP(lhs105), "lhs", 105);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "context", 106);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 106);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 106);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 106);
  emlrtAssign(&rhs106, emlrtCreateCellArray(0));
  emlrtAssign(&lhs106, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs106), "rhs", 106);
  emlrtAddField(*info, emlrtAliasP(lhs106), "lhs", 106);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon"),
                "context", 107);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 107);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 107);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                107);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 107);
  emlrtAssign(&rhs107, emlrtCreateCellArray(0));
  emlrtAssign(&lhs107, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs107), "rhs", 107);
  emlrtAddField(*info, emlrtAliasP(lhs107), "lhs", 107);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon"),
                "context", 108);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 108);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 108);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 108);
  emlrtAssign(&rhs108, emlrtCreateCellArray(0));
  emlrtAssign(&lhs108, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs108), "rhs", 108);
  emlrtAddField(*info, emlrtAliasP(lhs108), "lhs", 108);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!maxabs"), "context",
                109);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 109);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 109);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731852U), "fileTimeLo", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 109);
  emlrtAssign(&rhs109, emlrtCreateCellArray(0));
  emlrtAssign(&lhs109, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs109), "rhs", 109);
  emlrtAddField(*info, emlrtAliasP(lhs109), "lhs", 109);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "context", 110);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 110);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 110);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 110);
  emlrtAssign(&rhs110, emlrtCreateCellArray(0));
  emlrtAssign(&lhs110, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs110), "rhs", 110);
  emlrtAddField(*info, emlrtAliasP(lhs110), "lhs", 110);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "context", 111);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_abs"), "name", 111);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 111);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"),
                "resolved", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840312U), "fileTimeLo", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 111);
  emlrtAssign(&rhs111, emlrtCreateCellArray(0));
  emlrtAssign(&lhs111, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs111), "rhs", 111);
  emlrtAddField(*info, emlrtAliasP(lhs111), "lhs", 111);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon"),
                "context", 112);
  emlrtAddField(*info, emlrt_marshallOut("eps"), "name", 112);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 112);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "resolved", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 112);
  emlrtAssign(&rhs112, emlrtCreateCellArray(0));
  emlrtAssign(&lhs112, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs112), "rhs", 112);
  emlrtAddField(*info, emlrtAliasP(lhs112), "lhs", 112);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 113);
  emlrtAddField(*info, emlrt_marshallOut("eml_mantissa_nbits"), "name", 113);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 113);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m"),
                "resolved", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(1307672842U), "fileTimeLo", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 113);
  emlrtAssign(&rhs113, emlrtCreateCellArray(0));
  emlrtAssign(&lhs113, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs113), "rhs", 113);
  emlrtAddField(*info, emlrtAliasP(lhs113), "lhs", 113);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_mantissa_nbits.m"),
                "context", 114);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 114);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 114);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 114);
  emlrtAssign(&rhs114, emlrtCreateCellArray(0));
  emlrtAssign(&lhs114, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs114), "rhs", 114);
  emlrtAddField(*info, emlrtAliasP(lhs114), "lhs", 114);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 115);
  emlrtAddField(*info, emlrt_marshallOut("eml_realmin"), "name", 115);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 115);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m"), "resolved",
                115);
  emlrtAddField(*info, b_emlrt_marshallOut(1307672844U), "fileTimeLo", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 115);
  emlrtAssign(&rhs115, emlrtCreateCellArray(0));
  emlrtAssign(&lhs115, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs115), "rhs", 115);
  emlrtAddField(*info, emlrtAliasP(lhs115), "lhs", 115);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m"), "context",
                116);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 116);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 116);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 116);
  emlrtAssign(&rhs116, emlrtCreateCellArray(0));
  emlrtAssign(&lhs116, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs116), "rhs", 116);
  emlrtAddField(*info, emlrtAliasP(lhs116), "lhs", 116);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 117);
  emlrtAddField(*info, emlrt_marshallOut("eml_realmin_denormal"), "name", 117);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 117);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin_denormal.m"),
                "resolved", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749598U), "fileTimeLo", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 117);
  emlrtAssign(&rhs117, emlrtCreateCellArray(0));
  emlrtAssign(&lhs117, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs117), "rhs", 117);
  emlrtAddField(*info, emlrtAliasP(lhs117), "lhs", 117);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin_denormal.m"),
                "context", 118);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 118);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 118);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 118);
  emlrtAssign(&rhs118, emlrtCreateCellArray(0));
  emlrtAssign(&lhs118, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs118), "rhs", 118);
  emlrtAddField(*info, emlrtAliasP(lhs118), "lhs", 118);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 119);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 119);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 119);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731852U), "fileTimeLo", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 119);
  emlrtAssign(&rhs119, emlrtCreateCellArray(0));
  emlrtAssign(&lhs119, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs119), "rhs", 119);
  emlrtAddField(*info, emlrtAliasP(lhs119), "lhs", 119);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 120);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 120);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 120);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                120);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 120);
  emlrtAssign(&rhs120, emlrtCreateCellArray(0));
  emlrtAssign(&lhs120, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs120), "rhs", 120);
  emlrtAddField(*info, emlrtAliasP(lhs120), "lhs", 120);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange"),
                "context", 121);
  emlrtAddField(*info, emlrt_marshallOut("realmax"), "name", 121);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 121);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m"), "resolved",
                121);
  emlrtAddField(*info, b_emlrt_marshallOut(1307672842U), "fileTimeLo", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 121);
  emlrtAssign(&rhs121, emlrtCreateCellArray(0));
  emlrtAssign(&lhs121, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs121), "rhs", 121);
  emlrtAddField(*info, emlrtAliasP(lhs121), "lhs", 121);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 122);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 122);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 122);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 122);
  emlrtAssign(&rhs122, emlrtCreateCellArray(0));
  emlrtAssign(&lhs122, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs122), "rhs", 122);
  emlrtAddField(*info, emlrtAliasP(lhs122), "lhs", 122);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 123);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 123);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 123);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 123);
  emlrtAssign(&rhs123, emlrtCreateCellArray(0));
  emlrtAssign(&lhs123, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs123), "rhs", 123);
  emlrtAddField(*info, emlrtAliasP(lhs123), "lhs", 123);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 124);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 124);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 124);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 124);
  emlrtAssign(&rhs124, emlrtCreateCellArray(0));
  emlrtAssign(&lhs124, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs124), "rhs", 124);
  emlrtAddField(*info, emlrtAliasP(lhs124), "lhs", 124);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 125);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 125);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 125);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(1362283482U), "fileTimeLo", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 125);
  emlrtAssign(&rhs125, emlrtCreateCellArray(0));
  emlrtAssign(&lhs125, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs125), "rhs", 125);
  emlrtAddField(*info, emlrtAliasP(lhs125), "lhs", 125);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 126);
  emlrtAddField(*info, emlrt_marshallOut("find"), "name", 126);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 126);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m"), "resolved", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 126);
  emlrtAssign(&rhs126, emlrtCreateCellArray(0));
  emlrtAssign(&lhs126, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs126), "rhs", 126);
  emlrtAddField(*info, emlrtAliasP(lhs126), "lhs", 126);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find"),
                "context", 127);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 127);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 127);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 127);
  emlrtAssign(&rhs127, emlrtCreateCellArray(0));
  emlrtAssign(&lhs127, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs127), "rhs", 127);
  emlrtAddField(*info, emlrtAliasP(lhs127), "lhs", 127);
  emlrtDestroyArray(&rhs64);
  emlrtDestroyArray(&lhs64);
  emlrtDestroyArray(&rhs65);
  emlrtDestroyArray(&lhs65);
  emlrtDestroyArray(&rhs66);
  emlrtDestroyArray(&lhs66);
  emlrtDestroyArray(&rhs67);
  emlrtDestroyArray(&lhs67);
  emlrtDestroyArray(&rhs68);
  emlrtDestroyArray(&lhs68);
  emlrtDestroyArray(&rhs69);
  emlrtDestroyArray(&lhs69);
  emlrtDestroyArray(&rhs70);
  emlrtDestroyArray(&lhs70);
  emlrtDestroyArray(&rhs71);
  emlrtDestroyArray(&lhs71);
  emlrtDestroyArray(&rhs72);
  emlrtDestroyArray(&lhs72);
  emlrtDestroyArray(&rhs73);
  emlrtDestroyArray(&lhs73);
  emlrtDestroyArray(&rhs74);
  emlrtDestroyArray(&lhs74);
  emlrtDestroyArray(&rhs75);
  emlrtDestroyArray(&lhs75);
  emlrtDestroyArray(&rhs76);
  emlrtDestroyArray(&lhs76);
  emlrtDestroyArray(&rhs77);
  emlrtDestroyArray(&lhs77);
  emlrtDestroyArray(&rhs78);
  emlrtDestroyArray(&lhs78);
  emlrtDestroyArray(&rhs79);
  emlrtDestroyArray(&lhs79);
  emlrtDestroyArray(&rhs80);
  emlrtDestroyArray(&lhs80);
  emlrtDestroyArray(&rhs81);
  emlrtDestroyArray(&lhs81);
  emlrtDestroyArray(&rhs82);
  emlrtDestroyArray(&lhs82);
  emlrtDestroyArray(&rhs83);
  emlrtDestroyArray(&lhs83);
  emlrtDestroyArray(&rhs84);
  emlrtDestroyArray(&lhs84);
  emlrtDestroyArray(&rhs85);
  emlrtDestroyArray(&lhs85);
  emlrtDestroyArray(&rhs86);
  emlrtDestroyArray(&lhs86);
  emlrtDestroyArray(&rhs87);
  emlrtDestroyArray(&lhs87);
  emlrtDestroyArray(&rhs88);
  emlrtDestroyArray(&lhs88);
  emlrtDestroyArray(&rhs89);
  emlrtDestroyArray(&lhs89);
  emlrtDestroyArray(&rhs90);
  emlrtDestroyArray(&lhs90);
  emlrtDestroyArray(&rhs91);
  emlrtDestroyArray(&lhs91);
  emlrtDestroyArray(&rhs92);
  emlrtDestroyArray(&lhs92);
  emlrtDestroyArray(&rhs93);
  emlrtDestroyArray(&lhs93);
  emlrtDestroyArray(&rhs94);
  emlrtDestroyArray(&lhs94);
  emlrtDestroyArray(&rhs95);
  emlrtDestroyArray(&lhs95);
  emlrtDestroyArray(&rhs96);
  emlrtDestroyArray(&lhs96);
  emlrtDestroyArray(&rhs97);
  emlrtDestroyArray(&lhs97);
  emlrtDestroyArray(&rhs98);
  emlrtDestroyArray(&lhs98);
  emlrtDestroyArray(&rhs99);
  emlrtDestroyArray(&lhs99);
  emlrtDestroyArray(&rhs100);
  emlrtDestroyArray(&lhs100);
  emlrtDestroyArray(&rhs101);
  emlrtDestroyArray(&lhs101);
  emlrtDestroyArray(&rhs102);
  emlrtDestroyArray(&lhs102);
  emlrtDestroyArray(&rhs103);
  emlrtDestroyArray(&lhs103);
  emlrtDestroyArray(&rhs104);
  emlrtDestroyArray(&lhs104);
  emlrtDestroyArray(&rhs105);
  emlrtDestroyArray(&lhs105);
  emlrtDestroyArray(&rhs106);
  emlrtDestroyArray(&lhs106);
  emlrtDestroyArray(&rhs107);
  emlrtDestroyArray(&lhs107);
  emlrtDestroyArray(&rhs108);
  emlrtDestroyArray(&lhs108);
  emlrtDestroyArray(&rhs109);
  emlrtDestroyArray(&lhs109);
  emlrtDestroyArray(&rhs110);
  emlrtDestroyArray(&lhs110);
  emlrtDestroyArray(&rhs111);
  emlrtDestroyArray(&lhs111);
  emlrtDestroyArray(&rhs112);
  emlrtDestroyArray(&lhs112);
  emlrtDestroyArray(&rhs113);
  emlrtDestroyArray(&lhs113);
  emlrtDestroyArray(&rhs114);
  emlrtDestroyArray(&lhs114);
  emlrtDestroyArray(&rhs115);
  emlrtDestroyArray(&lhs115);
  emlrtDestroyArray(&rhs116);
  emlrtDestroyArray(&lhs116);
  emlrtDestroyArray(&rhs117);
  emlrtDestroyArray(&lhs117);
  emlrtDestroyArray(&rhs118);
  emlrtDestroyArray(&lhs118);
  emlrtDestroyArray(&rhs119);
  emlrtDestroyArray(&lhs119);
  emlrtDestroyArray(&rhs120);
  emlrtDestroyArray(&lhs120);
  emlrtDestroyArray(&rhs121);
  emlrtDestroyArray(&lhs121);
  emlrtDestroyArray(&rhs122);
  emlrtDestroyArray(&lhs122);
  emlrtDestroyArray(&rhs123);
  emlrtDestroyArray(&lhs123);
  emlrtDestroyArray(&rhs124);
  emlrtDestroyArray(&lhs124);
  emlrtDestroyArray(&rhs125);
  emlrtDestroyArray(&lhs125);
  emlrtDestroyArray(&rhs126);
  emlrtDestroyArray(&lhs126);
  emlrtDestroyArray(&rhs127);
  emlrtDestroyArray(&lhs127);
}

static void c_info_helper(const mxArray **info)
{
  const mxArray *rhs128 = NULL;
  const mxArray *lhs128 = NULL;
  const mxArray *rhs129 = NULL;
  const mxArray *lhs129 = NULL;
  const mxArray *rhs130 = NULL;
  const mxArray *lhs130 = NULL;
  const mxArray *rhs131 = NULL;
  const mxArray *lhs131 = NULL;
  const mxArray *rhs132 = NULL;
  const mxArray *lhs132 = NULL;
  const mxArray *rhs133 = NULL;
  const mxArray *lhs133 = NULL;
  const mxArray *rhs134 = NULL;
  const mxArray *lhs134 = NULL;
  const mxArray *rhs135 = NULL;
  const mxArray *lhs135 = NULL;
  const mxArray *rhs136 = NULL;
  const mxArray *lhs136 = NULL;
  const mxArray *rhs137 = NULL;
  const mxArray *lhs137 = NULL;
  const mxArray *rhs138 = NULL;
  const mxArray *lhs138 = NULL;
  const mxArray *rhs139 = NULL;
  const mxArray *lhs139 = NULL;
  const mxArray *rhs140 = NULL;
  const mxArray *lhs140 = NULL;
  const mxArray *rhs141 = NULL;
  const mxArray *lhs141 = NULL;
  const mxArray *rhs142 = NULL;
  const mxArray *lhs142 = NULL;
  const mxArray *rhs143 = NULL;
  const mxArray *lhs143 = NULL;
  const mxArray *rhs144 = NULL;
  const mxArray *lhs144 = NULL;
  const mxArray *rhs145 = NULL;
  const mxArray *lhs145 = NULL;
  const mxArray *rhs146 = NULL;
  const mxArray *lhs146 = NULL;
  const mxArray *rhs147 = NULL;
  const mxArray *lhs147 = NULL;
  const mxArray *rhs148 = NULL;
  const mxArray *lhs148 = NULL;
  const mxArray *rhs149 = NULL;
  const mxArray *lhs149 = NULL;
  const mxArray *rhs150 = NULL;
  const mxArray *lhs150 = NULL;
  const mxArray *rhs151 = NULL;
  const mxArray *lhs151 = NULL;
  const mxArray *rhs152 = NULL;
  const mxArray *lhs152 = NULL;
  const mxArray *rhs153 = NULL;
  const mxArray *lhs153 = NULL;
  const mxArray *rhs154 = NULL;
  const mxArray *lhs154 = NULL;
  const mxArray *rhs155 = NULL;
  const mxArray *lhs155 = NULL;
  const mxArray *rhs156 = NULL;
  const mxArray *lhs156 = NULL;
  const mxArray *rhs157 = NULL;
  const mxArray *lhs157 = NULL;
  const mxArray *rhs158 = NULL;
  const mxArray *lhs158 = NULL;
  const mxArray *rhs159 = NULL;
  const mxArray *lhs159 = NULL;
  const mxArray *rhs160 = NULL;
  const mxArray *lhs160 = NULL;
  const mxArray *rhs161 = NULL;
  const mxArray *lhs161 = NULL;
  const mxArray *rhs162 = NULL;
  const mxArray *lhs162 = NULL;
  const mxArray *rhs163 = NULL;
  const mxArray *lhs163 = NULL;
  const mxArray *rhs164 = NULL;
  const mxArray *lhs164 = NULL;
  const mxArray *rhs165 = NULL;
  const mxArray *lhs165 = NULL;
  const mxArray *rhs166 = NULL;
  const mxArray *lhs166 = NULL;
  const mxArray *rhs167 = NULL;
  const mxArray *lhs167 = NULL;
  const mxArray *rhs168 = NULL;
  const mxArray *lhs168 = NULL;
  const mxArray *rhs169 = NULL;
  const mxArray *lhs169 = NULL;
  const mxArray *rhs170 = NULL;
  const mxArray *lhs170 = NULL;
  const mxArray *rhs171 = NULL;
  const mxArray *lhs171 = NULL;
  const mxArray *rhs172 = NULL;
  const mxArray *lhs172 = NULL;
  const mxArray *rhs173 = NULL;
  const mxArray *lhs173 = NULL;
  const mxArray *rhs174 = NULL;
  const mxArray *lhs174 = NULL;
  const mxArray *rhs175 = NULL;
  const mxArray *lhs175 = NULL;
  const mxArray *rhs176 = NULL;
  const mxArray *lhs176 = NULL;
  const mxArray *rhs177 = NULL;
  const mxArray *lhs177 = NULL;
  const mxArray *rhs178 = NULL;
  const mxArray *lhs178 = NULL;
  const mxArray *rhs179 = NULL;
  const mxArray *lhs179 = NULL;
  const mxArray *rhs180 = NULL;
  const mxArray *lhs180 = NULL;
  const mxArray *rhs181 = NULL;
  const mxArray *lhs181 = NULL;
  const mxArray *rhs182 = NULL;
  const mxArray *lhs182 = NULL;
  const mxArray *rhs183 = NULL;
  const mxArray *lhs183 = NULL;
  const mxArray *rhs184 = NULL;
  const mxArray *lhs184 = NULL;
  const mxArray *rhs185 = NULL;
  const mxArray *lhs185 = NULL;
  const mxArray *rhs186 = NULL;
  const mxArray *lhs186 = NULL;
  const mxArray *rhs187 = NULL;
  const mxArray *lhs187 = NULL;
  const mxArray *rhs188 = NULL;
  const mxArray *lhs188 = NULL;
  const mxArray *rhs189 = NULL;
  const mxArray *lhs189 = NULL;
  const mxArray *rhs190 = NULL;
  const mxArray *lhs190 = NULL;
  const mxArray *rhs191 = NULL;
  const mxArray *lhs191 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find"),
                "context", 128);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 128);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 128);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                128);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 128);
  emlrtAssign(&rhs128, emlrtCreateCellArray(0));
  emlrtAssign(&lhs128, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs128), "rhs", 128);
  emlrtAddField(*info, emlrtAliasP(lhs128), "lhs", 128);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find"),
                "context", 129);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 129);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 129);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 129);
  emlrtAssign(&rhs129, emlrtCreateCellArray(0));
  emlrtAssign(&lhs129, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs129), "rhs", 129);
  emlrtAddField(*info, emlrtAliasP(lhs129), "lhs", 129);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper"),
                "context", 130);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 130);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 130);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(1362283482U), "fileTimeLo", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 130);
  emlrtAssign(&rhs130, emlrtCreateCellArray(0));
  emlrtAssign(&lhs130, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs130), "rhs", 130);
  emlrtAddField(*info, emlrtAliasP(lhs130), "lhs", 130);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m!eml_find"),
                "context", 131);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 131);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 131);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 131);
  emlrtAssign(&rhs131, emlrtCreateCellArray(0));
  emlrtAssign(&lhs131, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs131), "rhs", 131);
  emlrtAddField(*info, emlrtAliasP(lhs131), "lhs", 131);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"), "context",
                132);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 132);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 132);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 132);
  emlrtAssign(&rhs132, emlrtCreateCellArray(0));
  emlrtAssign(&lhs132, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs132), "rhs", 132);
  emlrtAddField(*info, emlrtAliasP(lhs132), "lhs", 132);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 133);
  emlrtAddField(*info, emlrt_marshallOut("ifftshift"), "name", 133);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 133);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifftshift.m"), "resolved",
                133);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840294U), "fileTimeLo", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 133);
  emlrtAssign(&rhs133, emlrtCreateCellArray(0));
  emlrtAssign(&lhs133, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs133), "rhs", 133);
  emlrtAddField(*info, emlrtAliasP(lhs133), "lhs", 133);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifftshift.m"), "context",
                134);
  emlrtAddField(*info, emlrt_marshallOut("eml_assert_valid_dim"), "name", 134);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 134);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m"),
                "resolved", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731866U), "fileTimeLo", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 134);
  emlrtAssign(&rhs134, emlrtCreateCellArray(0));
  emlrtAssign(&lhs134, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs134), "rhs", 134);
  emlrtAddField(*info, emlrtAliasP(lhs134), "lhs", 134);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m"),
                "context", 135);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 135);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 135);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 135);
  emlrtAssign(&rhs135, emlrtCreateCellArray(0));
  emlrtAssign(&lhs135, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs135), "rhs", 135);
  emlrtAddField(*info, emlrtAliasP(lhs135), "lhs", 135);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m"),
                "context", 136);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_floor"), "name", 136);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 136);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                "resolved", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840326U), "fileTimeLo", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 136);
  emlrtAssign(&rhs136, emlrtCreateCellArray(0));
  emlrtAssign(&lhs136, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs136), "rhs", 136);
  emlrtAddField(*info, emlrtAliasP(lhs136), "lhs", 136);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m"),
                "context", 137);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 137);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 137);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 137);
  emlrtAssign(&rhs137, emlrtCreateCellArray(0));
  emlrtAssign(&lhs137, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs137), "rhs", 137);
  emlrtAddField(*info, emlrtAliasP(lhs137), "lhs", 137);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m"),
                "context", 138);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 138);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 138);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(1362283482U), "fileTimeLo", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 138);
  emlrtAssign(&rhs138, emlrtCreateCellArray(0));
  emlrtAssign(&lhs138, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs138), "rhs", 138);
  emlrtAddField(*info, emlrtAliasP(lhs138), "lhs", 138);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifftshift.m"), "context",
                139);
  emlrtAddField(*info, emlrt_marshallOut("eml_ifftshift"), "name", 139);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 139);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m"), "resolved",
                139);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 139);
  emlrtAssign(&rhs139, emlrtCreateCellArray(0));
  emlrtAssign(&lhs139, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs139), "rhs", 139);
  emlrtAddField(*info, emlrtAliasP(lhs139), "lhs", 139);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m"), "context",
                140);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_rdivide"), "name", 140);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 140);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m"),
                "resolved", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 140);
  emlrtAssign(&rhs140, emlrtCreateCellArray(0));
  emlrtAssign(&lhs140, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs140), "rhs", 140);
  emlrtAddField(*info, emlrtAliasP(lhs140), "lhs", 140);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m"),
                "context", 141);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 141);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 141);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 141);
  emlrtAssign(&rhs141, emlrtCreateCellArray(0));
  emlrtAssign(&lhs141, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs141), "rhs", 141);
  emlrtAddField(*info, emlrtAliasP(lhs141), "lhs", 141);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m"), "context",
                142);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 142);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 142);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 142);
  emlrtAssign(&rhs142, emlrtCreateCellArray(0));
  emlrtAssign(&lhs142, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs142), "rhs", 142);
  emlrtAddField(*info, emlrtAliasP(lhs142), "lhs", 142);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "context", 143);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 143);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 143);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 143);
  emlrtAssign(&rhs143, emlrtCreateCellArray(0));
  emlrtAssign(&lhs143, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs143), "rhs", 143);
  emlrtAddField(*info, emlrtAliasP(lhs143), "lhs", 143);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_ifftshift.m"), "context",
                144);
  emlrtAddField(*info, emlrt_marshallOut("eml_fftshift"), "name", 144);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 144);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "resolved",
                144);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840376U), "fileTimeLo", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 144);
  emlrtAssign(&rhs144, emlrtCreateCellArray(0));
  emlrtAssign(&lhs144, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs144), "rhs", 144);
  emlrtAddField(*info, emlrtAliasP(lhs144), "lhs", 144);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "context",
                145);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_rdivide"), "name", 145);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 145);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m"),
                "resolved", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 145);
  emlrtAssign(&rhs145, emlrtCreateCellArray(0));
  emlrtAssign(&lhs145, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs145), "rhs", 145);
  emlrtAddField(*info, emlrtAliasP(lhs145), "lhs", 145);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "context",
                146);
  emlrtAddField(*info, emlrt_marshallOut("eml_matrix_vstride"), "name", 146);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 146);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m"),
                "resolved", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(1360303950U), "fileTimeLo", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 146);
  emlrtAssign(&rhs146, emlrtCreateCellArray(0));
  emlrtAssign(&lhs146, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs146), "rhs", 146);
  emlrtAddField(*info, emlrtAliasP(lhs146), "lhs", 146);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m"),
                "context", 147);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.prodsize"), "name", 147);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 147);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"),
                "resolved", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(1360304188U), "fileTimeLo", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 147);
  emlrtAssign(&rhs147, emlrtCreateCellArray(0));
  emlrtAssign(&lhs147, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs147), "rhs", 147);
  emlrtAddField(*info, emlrtAliasP(lhs147), "lhs", 147);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "context",
                148);
  emlrtAddField(*info, emlrt_marshallOut("eml_matrix_npages"), "name", 148);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 148);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m"),
                "resolved", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(1360303950U), "fileTimeLo", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 148);
  emlrtAssign(&rhs148, emlrtCreateCellArray(0));
  emlrtAssign(&lhs148, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs148), "rhs", 148);
  emlrtAddField(*info, emlrtAliasP(lhs148), "lhs", 148);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m"),
                "context", 149);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.prodsize"), "name", 149);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 149);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"),
                "resolved", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(1360304188U), "fileTimeLo", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 149);
  emlrtAssign(&rhs149, emlrtCreateCellArray(0));
  emlrtAssign(&lhs149, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs149), "rhs", 149);
  emlrtAddField(*info, emlrtAliasP(lhs149), "lhs", 149);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"),
                "context", 150);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 150);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 150);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 150);
  emlrtAssign(&rhs150, emlrtCreateCellArray(0));
  emlrtAssign(&lhs150, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs150), "rhs", 150);
  emlrtAddField(*info, emlrtAliasP(lhs150), "lhs", 150);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m!common_checks"),
                "context", 151);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 151);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 151);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 151);
  emlrtAssign(&rhs151, emlrtCreateCellArray(0));
  emlrtAssign(&lhs151, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs151), "rhs", 151);
  emlrtAddField(*info, emlrtAliasP(lhs151), "lhs", 151);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "context",
                152);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 152);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 152);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 152);
  emlrtAssign(&rhs152, emlrtCreateCellArray(0));
  emlrtAssign(&lhs152, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs152), "rhs", 152);
  emlrtAddField(*info, emlrtAliasP(lhs152), "lhs", 152);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "context",
                153);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 153);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 153);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 153);
  emlrtAssign(&rhs153, emlrtCreateCellArray(0));
  emlrtAssign(&lhs153, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs153), "rhs", 153);
  emlrtAddField(*info, emlrtAliasP(lhs153), "lhs", 153);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "context",
                154);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 154);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 154);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 154);
  emlrtAssign(&rhs154, emlrtCreateCellArray(0));
  emlrtAssign(&lhs154, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs154), "rhs", 154);
  emlrtAddField(*info, emlrtAliasP(lhs154), "lhs", 154);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "context",
                155);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 155);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 155);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 155);
  emlrtAssign(&rhs155, emlrtCreateCellArray(0));
  emlrtAssign(&lhs155, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs155), "rhs", 155);
  emlrtAddField(*info, emlrtAliasP(lhs155), "lhs", 155);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "context",
                156);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 156);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 156);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 156);
  emlrtAssign(&rhs156, emlrtCreateCellArray(0));
  emlrtAssign(&lhs156, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs156), "rhs", 156);
  emlrtAddField(*info, emlrtAliasP(lhs156), "lhs", 156);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "context",
                157);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 157);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 157);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 157);
  emlrtAssign(&rhs157, emlrtCreateCellArray(0));
  emlrtAssign(&lhs157, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs157), "rhs", 157);
  emlrtAddField(*info, emlrtAliasP(lhs157), "lhs", 157);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fftshift.m"), "context",
                158);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 158);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 158);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 158);
  emlrtAssign(&rhs158, emlrtCreateCellArray(0));
  emlrtAssign(&lhs158, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs158), "rhs", 158);
  emlrtAddField(*info, emlrtAliasP(lhs158), "lhs", 158);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 159);
  emlrtAddField(*info, emlrt_marshallOut("ifft"), "name", 159);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 159);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifft.m"), "resolved", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840292U), "fileTimeLo", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 159);
  emlrtAssign(&rhs159, emlrtCreateCellArray(0));
  emlrtAssign(&lhs159, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs159), "rhs", 159);
  emlrtAddField(*info, emlrtAliasP(lhs159), "lhs", 159);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/ifft.m"), "context", 160);
  emlrtAddField(*info, emlrt_marshallOut("eml_fft"), "name", 160);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 160);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m"), "resolved", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731868U), "fileTimeLo", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 160);
  emlrtAssign(&rhs160, emlrtCreateCellArray(0));
  emlrtAssign(&lhs160, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs160), "rhs", 160);
  emlrtAddField(*info, emlrtAliasP(lhs160), "lhs", 160);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m"), "context", 161);
  emlrtAddField(*info, emlrt_marshallOut("eml_assert_valid_dim"), "name", 161);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 161);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m"),
                "resolved", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731866U), "fileTimeLo", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 161);
  emlrtAssign(&rhs161, emlrtCreateCellArray(0));
  emlrtAssign(&lhs161, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs161), "rhs", 161);
  emlrtAddField(*info, emlrtAliasP(lhs161), "lhs", 161);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m"), "context", 162);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 162);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 162);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 162);
  emlrtAssign(&rhs162, emlrtCreateCellArray(0));
  emlrtAssign(&lhs162, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs162), "rhs", 162);
  emlrtAddField(*info, emlrtAliasP(lhs162), "lhs", 162);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m"), "context", 163);
  emlrtAddField(*info, emlrt_marshallOut("eml_unsigned_class"), "name", 163);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 163);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m"),
                "resolved", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192180U), "fileTimeLo", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 163);
  emlrtAssign(&rhs163, emlrtCreateCellArray(0));
  emlrtAssign(&lhs163, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs163), "rhs", 163);
  emlrtAddField(*info, emlrtAliasP(lhs163), "lhs", 163);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m"),
                "context", 164);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 164);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 164);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 164);
  emlrtAssign(&rhs164, emlrtCreateCellArray(0));
  emlrtAssign(&lhs164, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs164), "rhs", 164);
  emlrtAddField(*info, emlrtAliasP(lhs164), "lhs", 164);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m"), "context", 165);
  emlrtAddField(*info, emlrt_marshallOut("eml_size_ispow2"), "name", 165);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 165);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m"),
                "resolved", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731870U), "fileTimeLo", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 165);
  emlrtAssign(&rhs165, emlrtCreateCellArray(0));
  emlrtAssign(&lhs165, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs165), "rhs", 165);
  emlrtAddField(*info, emlrtAliasP(lhs165), "lhs", 165);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m"),
                "context", 166);
  emlrtAddField(*info, emlrt_marshallOut("eml_unsigned_class"), "name", 166);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 166);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m"),
                "resolved", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192180U), "fileTimeLo", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 166);
  emlrtAssign(&rhs166, emlrtCreateCellArray(0));
  emlrtAssign(&lhs166, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs166), "rhs", 166);
  emlrtAddField(*info, emlrtAliasP(lhs166), "lhs", 166);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 167);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 167);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 167);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                167);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 167);
  emlrtAssign(&rhs167, emlrtCreateCellArray(0));
  emlrtAssign(&lhs167, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs167), "rhs", 167);
  emlrtAddField(*info, emlrtAliasP(lhs167), "lhs", 167);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 168);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 168);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 168);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 168);
  emlrtAssign(&rhs168, emlrtCreateCellArray(0));
  emlrtAssign(&lhs168, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs168), "rhs", 168);
  emlrtAddField(*info, emlrtAliasP(lhs168), "lhs", 168);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 169);
  emlrtAddField(*info, emlrt_marshallOut("min"), "name", 169);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 169);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "resolved", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(1311276918U), "fileTimeLo", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 169);
  emlrtAssign(&rhs169, emlrtCreateCellArray(0));
  emlrtAssign(&lhs169, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs169), "rhs", 169);
  emlrtAddField(*info, emlrtAliasP(lhs169), "lhs", 169);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "context", 170);
  emlrtAddField(*info, emlrt_marshallOut("eml_min_or_max"), "name", 170);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 170);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                "resolved", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731870U), "fileTimeLo", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 170);
  emlrtAssign(&rhs170, emlrtCreateCellArray(0));
  emlrtAssign(&lhs170, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs170), "rhs", 170);
  emlrtAddField(*info, emlrtAliasP(lhs170), "lhs", 170);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 171);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 171);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 171);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                171);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 171);
  emlrtAssign(&rhs171, emlrtCreateCellArray(0));
  emlrtAssign(&lhs171, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs171), "rhs", 171);
  emlrtAddField(*info, emlrtAliasP(lhs171), "lhs", 171);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 172);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 172);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 172);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(1358207740U), "fileTimeLo", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 172);
  emlrtAssign(&rhs172, emlrtCreateCellArray(0));
  emlrtAssign(&lhs172, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs172), "rhs", 172);
  emlrtAddField(*info, emlrtAliasP(lhs172), "lhs", 172);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 173);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 173);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 173);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 173);
  emlrtAssign(&rhs173, emlrtCreateCellArray(0));
  emlrtAssign(&lhs173, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs173), "rhs", 173);
  emlrtAddField(*info, emlrtAliasP(lhs173), "lhs", 173);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 174);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 174);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 174);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                174);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 174);
  emlrtAssign(&rhs174, emlrtCreateCellArray(0));
  emlrtAssign(&lhs174, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs174), "rhs", 174);
  emlrtAddField(*info, emlrtAliasP(lhs174), "lhs", 174);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 175);
  emlrtAddField(*info, emlrt_marshallOut("eml_relop"), "name", 175);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 175);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m"), "resolved",
                175);
  emlrtAddField(*info, b_emlrt_marshallOut(1342472782U), "fileTimeLo", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 175);
  emlrtAssign(&rhs175, emlrtCreateCellArray(0));
  emlrtAssign(&lhs175, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs175), "rhs", 175);
  emlrtAddField(*info, emlrtAliasP(lhs175), "lhs", 175);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m"), "context", 176);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexIntRelop"), "name",
                176);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 176);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749922U), "fileTimeLo", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 176);
  emlrtAssign(&rhs176, emlrtCreateCellArray(0));
  emlrtAssign(&lhs176, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs176), "rhs", 176);
  emlrtAddField(*info, emlrtAliasP(lhs176), "lhs", 176);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 177);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 177);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 177);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 177);
  emlrtAssign(&rhs177, emlrtCreateCellArray(0));
  emlrtAssign(&lhs177, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs177), "rhs", 177);
  emlrtAddField(*info, emlrtAliasP(lhs177), "lhs", 177);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 178);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 178);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 178);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 178);
  emlrtAssign(&rhs178, emlrtCreateCellArray(0));
  emlrtAssign(&lhs178, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs178), "rhs", 178);
  emlrtAddField(*info, emlrtAliasP(lhs178), "lhs", 178);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 179);
  emlrtAddField(*info, emlrt_marshallOut("max"), "name", 179);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 179);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "resolved", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(1311276916U), "fileTimeLo", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 179);
  emlrtAssign(&rhs179, emlrtCreateCellArray(0));
  emlrtAssign(&lhs179, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs179), "rhs", 179);
  emlrtAddField(*info, emlrtAliasP(lhs179), "lhs", 179);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "context", 180);
  emlrtAddField(*info, emlrt_marshallOut("eml_min_or_max"), "name", 180);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 180);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                "resolved", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731870U), "fileTimeLo", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 180);
  emlrtAssign(&rhs180, emlrtCreateCellArray(0));
  emlrtAssign(&lhs180, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs180), "rhs", 180);
  emlrtAddField(*info, emlrtAliasP(lhs180), "lhs", 180);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 181);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 181);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 181);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                181);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 181);
  emlrtAssign(&rhs181, emlrtCreateCellArray(0));
  emlrtAssign(&lhs181, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs181), "rhs", 181);
  emlrtAddField(*info, emlrtAliasP(lhs181), "lhs", 181);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 182);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 182);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 182);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(1358207740U), "fileTimeLo", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 182);
  emlrtAssign(&rhs182, emlrtCreateCellArray(0));
  emlrtAssign(&lhs182, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs182), "rhs", 182);
  emlrtAddField(*info, emlrtAliasP(lhs182), "lhs", 182);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 183);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 183);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 183);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                183);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 183);
  emlrtAssign(&rhs183, emlrtCreateCellArray(0));
  emlrtAssign(&lhs183, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs183), "rhs", 183);
  emlrtAddField(*info, emlrtAliasP(lhs183), "lhs", 183);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 184);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 184);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 184);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 184);
  emlrtAssign(&rhs184, emlrtCreateCellArray(0));
  emlrtAssign(&lhs184, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs184), "rhs", 184);
  emlrtAddField(*info, emlrtAliasP(lhs184), "lhs", 184);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 185);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 185);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 185);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 185);
  emlrtAssign(&rhs185, emlrtCreateCellArray(0));
  emlrtAssign(&lhs185, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs185), "rhs", 185);
  emlrtAddField(*info, emlrtAliasP(lhs185), "lhs", 185);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 186);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_rdivide"), "name", 186);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 186);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m"),
                "resolved", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 186);
  emlrtAssign(&rhs186, emlrtCreateCellArray(0));
  emlrtAssign(&lhs186, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs186), "rhs", 186);
  emlrtAddField(*info, emlrtAliasP(lhs186), "lhs", 186);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 187);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_rdivide"), "name", 187);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 187);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m"),
                "resolved", 187);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 187);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 187);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 187);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 187);
  emlrtAssign(&rhs187, emlrtCreateCellArray(0));
  emlrtAssign(&lhs187, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs187), "rhs", 187);
  emlrtAddField(*info, emlrtAliasP(lhs187), "lhs", 187);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 188);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 188);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 188);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 188);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 188);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 188);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 188);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 188);
  emlrtAssign(&rhs188, emlrtCreateCellArray(0));
  emlrtAssign(&lhs188, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs188), "rhs", 188);
  emlrtAddField(*info, emlrtAliasP(lhs188), "lhs", 188);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 189);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 189);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 189);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 189);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 189);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 189);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 189);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 189);
  emlrtAssign(&rhs189, emlrtCreateCellArray(0));
  emlrtAssign(&lhs189, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs189), "rhs", 189);
  emlrtAddField(*info, emlrtAliasP(lhs189), "lhs", 189);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 190);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 190);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 190);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 190);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 190);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 190);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 190);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 190);
  emlrtAssign(&rhs190, emlrtCreateCellArray(0));
  emlrtAssign(&lhs190, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs190), "rhs", 190);
  emlrtAddField(*info, emlrtAliasP(lhs190), "lhs", 190);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table"),
                "context", 191);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 191);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 191);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 191);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 191);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 191);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 191);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 191);
  emlrtAssign(&rhs191, emlrtCreateCellArray(0));
  emlrtAssign(&lhs191, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs191), "rhs", 191);
  emlrtAddField(*info, emlrtAliasP(lhs191), "lhs", 191);
  emlrtDestroyArray(&rhs128);
  emlrtDestroyArray(&lhs128);
  emlrtDestroyArray(&rhs129);
  emlrtDestroyArray(&lhs129);
  emlrtDestroyArray(&rhs130);
  emlrtDestroyArray(&lhs130);
  emlrtDestroyArray(&rhs131);
  emlrtDestroyArray(&lhs131);
  emlrtDestroyArray(&rhs132);
  emlrtDestroyArray(&lhs132);
  emlrtDestroyArray(&rhs133);
  emlrtDestroyArray(&lhs133);
  emlrtDestroyArray(&rhs134);
  emlrtDestroyArray(&lhs134);
  emlrtDestroyArray(&rhs135);
  emlrtDestroyArray(&lhs135);
  emlrtDestroyArray(&rhs136);
  emlrtDestroyArray(&lhs136);
  emlrtDestroyArray(&rhs137);
  emlrtDestroyArray(&lhs137);
  emlrtDestroyArray(&rhs138);
  emlrtDestroyArray(&lhs138);
  emlrtDestroyArray(&rhs139);
  emlrtDestroyArray(&lhs139);
  emlrtDestroyArray(&rhs140);
  emlrtDestroyArray(&lhs140);
  emlrtDestroyArray(&rhs141);
  emlrtDestroyArray(&lhs141);
  emlrtDestroyArray(&rhs142);
  emlrtDestroyArray(&lhs142);
  emlrtDestroyArray(&rhs143);
  emlrtDestroyArray(&lhs143);
  emlrtDestroyArray(&rhs144);
  emlrtDestroyArray(&lhs144);
  emlrtDestroyArray(&rhs145);
  emlrtDestroyArray(&lhs145);
  emlrtDestroyArray(&rhs146);
  emlrtDestroyArray(&lhs146);
  emlrtDestroyArray(&rhs147);
  emlrtDestroyArray(&lhs147);
  emlrtDestroyArray(&rhs148);
  emlrtDestroyArray(&lhs148);
  emlrtDestroyArray(&rhs149);
  emlrtDestroyArray(&lhs149);
  emlrtDestroyArray(&rhs150);
  emlrtDestroyArray(&lhs150);
  emlrtDestroyArray(&rhs151);
  emlrtDestroyArray(&lhs151);
  emlrtDestroyArray(&rhs152);
  emlrtDestroyArray(&lhs152);
  emlrtDestroyArray(&rhs153);
  emlrtDestroyArray(&lhs153);
  emlrtDestroyArray(&rhs154);
  emlrtDestroyArray(&lhs154);
  emlrtDestroyArray(&rhs155);
  emlrtDestroyArray(&lhs155);
  emlrtDestroyArray(&rhs156);
  emlrtDestroyArray(&lhs156);
  emlrtDestroyArray(&rhs157);
  emlrtDestroyArray(&lhs157);
  emlrtDestroyArray(&rhs158);
  emlrtDestroyArray(&lhs158);
  emlrtDestroyArray(&rhs159);
  emlrtDestroyArray(&lhs159);
  emlrtDestroyArray(&rhs160);
  emlrtDestroyArray(&lhs160);
  emlrtDestroyArray(&rhs161);
  emlrtDestroyArray(&lhs161);
  emlrtDestroyArray(&rhs162);
  emlrtDestroyArray(&lhs162);
  emlrtDestroyArray(&rhs163);
  emlrtDestroyArray(&lhs163);
  emlrtDestroyArray(&rhs164);
  emlrtDestroyArray(&lhs164);
  emlrtDestroyArray(&rhs165);
  emlrtDestroyArray(&lhs165);
  emlrtDestroyArray(&rhs166);
  emlrtDestroyArray(&lhs166);
  emlrtDestroyArray(&rhs167);
  emlrtDestroyArray(&lhs167);
  emlrtDestroyArray(&rhs168);
  emlrtDestroyArray(&lhs168);
  emlrtDestroyArray(&rhs169);
  emlrtDestroyArray(&lhs169);
  emlrtDestroyArray(&rhs170);
  emlrtDestroyArray(&lhs170);
  emlrtDestroyArray(&rhs171);
  emlrtDestroyArray(&lhs171);
  emlrtDestroyArray(&rhs172);
  emlrtDestroyArray(&lhs172);
  emlrtDestroyArray(&rhs173);
  emlrtDestroyArray(&lhs173);
  emlrtDestroyArray(&rhs174);
  emlrtDestroyArray(&lhs174);
  emlrtDestroyArray(&rhs175);
  emlrtDestroyArray(&lhs175);
  emlrtDestroyArray(&rhs176);
  emlrtDestroyArray(&lhs176);
  emlrtDestroyArray(&rhs177);
  emlrtDestroyArray(&lhs177);
  emlrtDestroyArray(&rhs178);
  emlrtDestroyArray(&lhs178);
  emlrtDestroyArray(&rhs179);
  emlrtDestroyArray(&lhs179);
  emlrtDestroyArray(&rhs180);
  emlrtDestroyArray(&lhs180);
  emlrtDestroyArray(&rhs181);
  emlrtDestroyArray(&lhs181);
  emlrtDestroyArray(&rhs182);
  emlrtDestroyArray(&lhs182);
  emlrtDestroyArray(&rhs183);
  emlrtDestroyArray(&lhs183);
  emlrtDestroyArray(&rhs184);
  emlrtDestroyArray(&lhs184);
  emlrtDestroyArray(&rhs185);
  emlrtDestroyArray(&lhs185);
  emlrtDestroyArray(&rhs186);
  emlrtDestroyArray(&lhs186);
  emlrtDestroyArray(&rhs187);
  emlrtDestroyArray(&lhs187);
  emlrtDestroyArray(&rhs188);
  emlrtDestroyArray(&lhs188);
  emlrtDestroyArray(&rhs189);
  emlrtDestroyArray(&lhs189);
  emlrtDestroyArray(&rhs190);
  emlrtDestroyArray(&lhs190);
  emlrtDestroyArray(&rhs191);
  emlrtDestroyArray(&lhs191);
}

static void d_info_helper(const mxArray **info)
{
  const mxArray *rhs192 = NULL;
  const mxArray *lhs192 = NULL;
  const mxArray *rhs193 = NULL;
  const mxArray *lhs193 = NULL;
  const mxArray *rhs194 = NULL;
  const mxArray *lhs194 = NULL;
  const mxArray *rhs195 = NULL;
  const mxArray *lhs195 = NULL;
  const mxArray *rhs196 = NULL;
  const mxArray *lhs196 = NULL;
  const mxArray *rhs197 = NULL;
  const mxArray *lhs197 = NULL;
  const mxArray *rhs198 = NULL;
  const mxArray *lhs198 = NULL;
  const mxArray *rhs199 = NULL;
  const mxArray *lhs199 = NULL;
  const mxArray *rhs200 = NULL;
  const mxArray *lhs200 = NULL;
  const mxArray *rhs201 = NULL;
  const mxArray *lhs201 = NULL;
  const mxArray *rhs202 = NULL;
  const mxArray *lhs202 = NULL;
  const mxArray *rhs203 = NULL;
  const mxArray *lhs203 = NULL;
  const mxArray *rhs204 = NULL;
  const mxArray *lhs204 = NULL;
  const mxArray *rhs205 = NULL;
  const mxArray *lhs205 = NULL;
  const mxArray *rhs206 = NULL;
  const mxArray *lhs206 = NULL;
  const mxArray *rhs207 = NULL;
  const mxArray *lhs207 = NULL;
  const mxArray *rhs208 = NULL;
  const mxArray *lhs208 = NULL;
  const mxArray *rhs209 = NULL;
  const mxArray *lhs209 = NULL;
  const mxArray *rhs210 = NULL;
  const mxArray *lhs210 = NULL;
  const mxArray *rhs211 = NULL;
  const mxArray *lhs211 = NULL;
  const mxArray *rhs212 = NULL;
  const mxArray *lhs212 = NULL;
  const mxArray *rhs213 = NULL;
  const mxArray *lhs213 = NULL;
  const mxArray *rhs214 = NULL;
  const mxArray *lhs214 = NULL;
  const mxArray *rhs215 = NULL;
  const mxArray *lhs215 = NULL;
  const mxArray *rhs216 = NULL;
  const mxArray *lhs216 = NULL;
  const mxArray *rhs217 = NULL;
  const mxArray *lhs217 = NULL;
  const mxArray *rhs218 = NULL;
  const mxArray *lhs218 = NULL;
  const mxArray *rhs219 = NULL;
  const mxArray *lhs219 = NULL;
  const mxArray *rhs220 = NULL;
  const mxArray *lhs220 = NULL;
  const mxArray *rhs221 = NULL;
  const mxArray *lhs221 = NULL;
  const mxArray *rhs222 = NULL;
  const mxArray *lhs222 = NULL;
  const mxArray *rhs223 = NULL;
  const mxArray *lhs223 = NULL;
  const mxArray *rhs224 = NULL;
  const mxArray *lhs224 = NULL;
  const mxArray *rhs225 = NULL;
  const mxArray *lhs225 = NULL;
  const mxArray *rhs226 = NULL;
  const mxArray *lhs226 = NULL;
  const mxArray *rhs227 = NULL;
  const mxArray *lhs227 = NULL;
  const mxArray *rhs228 = NULL;
  const mxArray *lhs228 = NULL;
  const mxArray *rhs229 = NULL;
  const mxArray *lhs229 = NULL;
  const mxArray *rhs230 = NULL;
  const mxArray *lhs230 = NULL;
  const mxArray *rhs231 = NULL;
  const mxArray *lhs231 = NULL;
  const mxArray *rhs232 = NULL;
  const mxArray *lhs232 = NULL;
  const mxArray *rhs233 = NULL;
  const mxArray *lhs233 = NULL;
  const mxArray *rhs234 = NULL;
  const mxArray *lhs234 = NULL;
  const mxArray *rhs235 = NULL;
  const mxArray *lhs235 = NULL;
  const mxArray *rhs236 = NULL;
  const mxArray *lhs236 = NULL;
  const mxArray *rhs237 = NULL;
  const mxArray *lhs237 = NULL;
  const mxArray *rhs238 = NULL;
  const mxArray *lhs238 = NULL;
  const mxArray *rhs239 = NULL;
  const mxArray *lhs239 = NULL;
  const mxArray *rhs240 = NULL;
  const mxArray *lhs240 = NULL;
  const mxArray *rhs241 = NULL;
  const mxArray *lhs241 = NULL;
  const mxArray *rhs242 = NULL;
  const mxArray *lhs242 = NULL;
  const mxArray *rhs243 = NULL;
  const mxArray *lhs243 = NULL;
  const mxArray *rhs244 = NULL;
  const mxArray *lhs244 = NULL;
  const mxArray *rhs245 = NULL;
  const mxArray *lhs245 = NULL;
  const mxArray *rhs246 = NULL;
  const mxArray *lhs246 = NULL;
  const mxArray *rhs247 = NULL;
  const mxArray *lhs247 = NULL;
  const mxArray *rhs248 = NULL;
  const mxArray *lhs248 = NULL;
  const mxArray *rhs249 = NULL;
  const mxArray *lhs249 = NULL;
  const mxArray *rhs250 = NULL;
  const mxArray *lhs250 = NULL;
  const mxArray *rhs251 = NULL;
  const mxArray *lhs251 = NULL;
  const mxArray *rhs252 = NULL;
  const mxArray *lhs252 = NULL;
  const mxArray *rhs253 = NULL;
  const mxArray *lhs253 = NULL;
  const mxArray *rhs254 = NULL;
  const mxArray *lhs254 = NULL;
  const mxArray *rhs255 = NULL;
  const mxArray *lhs255 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table"),
                "context", 192);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_rdivide"), "name", 192);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 192);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m"),
                "resolved", 192);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 192);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 192);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 192);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 192);
  emlrtAssign(&rhs192, emlrtCreateCellArray(0));
  emlrtAssign(&lhs192, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs192), "rhs", 192);
  emlrtAddField(*info, emlrtAliasP(lhs192), "lhs", 192);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table"),
                "context", 193);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 193);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 193);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 193);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 193);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 193);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 193);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 193);
  emlrtAssign(&rhs193, emlrtCreateCellArray(0));
  emlrtAssign(&lhs193, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs193), "rhs", 193);
  emlrtAddField(*info, emlrtAliasP(lhs193), "lhs", 193);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table"),
                "context", 194);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 194);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 194);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 194);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 194);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 194);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 194);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 194);
  emlrtAssign(&rhs194, emlrtCreateCellArray(0));
  emlrtAssign(&lhs194, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs194), "rhs", 194);
  emlrtAddField(*info, emlrtAliasP(lhs194), "lhs", 194);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table"),
                "context", 195);
  emlrtAddField(*info, emlrt_marshallOut("cos"), "name", 195);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 195);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m"), "resolved", 195);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851972U), "fileTimeLo", 195);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 195);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 195);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 195);
  emlrtAssign(&rhs195, emlrtCreateCellArray(0));
  emlrtAssign(&lhs195, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs195), "rhs", 195);
  emlrtAddField(*info, emlrtAliasP(lhs195), "lhs", 195);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m"), "context", 196);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_cos"), "name", 196);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 196);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m"),
                "resolved", 196);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840322U), "fileTimeLo", 196);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 196);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 196);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 196);
  emlrtAssign(&rhs196, emlrtCreateCellArray(0));
  emlrtAssign(&lhs196, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs196), "rhs", 196);
  emlrtAddField(*info, emlrtAliasP(lhs196), "lhs", 196);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table"),
                "context", 197);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 197);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 197);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 197);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 197);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 197);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 197);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 197);
  emlrtAssign(&rhs197, emlrtCreateCellArray(0));
  emlrtAssign(&lhs197, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs197), "rhs", 197);
  emlrtAddField(*info, emlrtAliasP(lhs197), "lhs", 197);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table"),
                "context", 198);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 198);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 198);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 198);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 198);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 198);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 198);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 198);
  emlrtAssign(&rhs198, emlrtCreateCellArray(0));
  emlrtAssign(&lhs198, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs198), "rhs", 198);
  emlrtAddField(*info, emlrtAliasP(lhs198), "lhs", 198);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_1q_cosine_table"),
                "context", 199);
  emlrtAddField(*info, emlrt_marshallOut("sin"), "name", 199);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 199);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m"), "resolved", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851986U), "fileTimeLo", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 199);
  emlrtAssign(&rhs199, emlrtCreateCellArray(0));
  emlrtAssign(&lhs199, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs199), "rhs", 199);
  emlrtAddField(*info, emlrtAliasP(lhs199), "lhs", 199);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m"), "context", 200);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_sin"), "name", 200);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 200);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m"),
                "resolved", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840336U), "fileTimeLo", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 200);
  emlrtAssign(&rhs200, emlrtCreateCellArray(0));
  emlrtAssign(&lhs200, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs200), "rhs", 200);
  emlrtAddField(*info, emlrtAliasP(lhs200), "lhs", 200);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table"),
                "context", 201);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 201);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 201);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 201);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 201);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 201);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 201);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 201);
  emlrtAssign(&rhs201, emlrtCreateCellArray(0));
  emlrtAssign(&lhs201, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs201), "rhs", 201);
  emlrtAddField(*info, emlrtAliasP(lhs201), "lhs", 201);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table"),
                "context", 202);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 202);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 202);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 202);
  emlrtAssign(&rhs202, emlrtCreateCellArray(0));
  emlrtAssign(&lhs202, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs202), "rhs", 202);
  emlrtAddField(*info, emlrtAliasP(lhs202), "lhs", 202);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table"),
                "context", 203);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 203);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 203);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 203);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 203);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 203);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 203);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 203);
  emlrtAssign(&rhs203, emlrtCreateCellArray(0));
  emlrtAssign(&lhs203, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs203), "rhs", 203);
  emlrtAddField(*info, emlrtAliasP(lhs203), "lhs", 203);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table"),
                "context", 204);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 204);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 204);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 204);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 204);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 204);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 204);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 204);
  emlrtAssign(&rhs204, emlrtCreateCellArray(0));
  emlrtAssign(&lhs204, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs204), "rhs", 204);
  emlrtAddField(*info, emlrtAliasP(lhs204), "lhs", 204);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!make_twiddle_table"),
                "context", 205);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 205);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 205);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 205);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 205);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 205);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 205);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 205);
  emlrtAssign(&rhs205, emlrtCreateCellArray(0));
  emlrtAssign(&lhs205, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs205), "rhs", 205);
  emlrtAddField(*info, emlrtAliasP(lhs205), "lhs", 205);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!ucls"), "context",
                206);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 206);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 206);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 206);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 206);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 206);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 206);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 206);
  emlrtAssign(&rhs206, emlrtCreateCellArray(0));
  emlrtAssign(&lhs206, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs206), "rhs", 206);
  emlrtAddField(*info, emlrtAliasP(lhs206), "lhs", 206);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!ucls"), "context",
                207);
  emlrtAddField(*info, emlrt_marshallOut("eml_unsigned_class"), "name", 207);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 207);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m"),
                "resolved", 207);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192180U), "fileTimeLo", 207);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 207);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 207);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 207);
  emlrtAssign(&rhs207, emlrtCreateCellArray(0));
  emlrtAssign(&lhs207, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs207), "rhs", 207);
  emlrtAddField(*info, emlrtAliasP(lhs207), "lhs", 207);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 208);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 208);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 208);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 208);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 208);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 208);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 208);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 208);
  emlrtAssign(&rhs208, emlrtCreateCellArray(0));
  emlrtAssign(&lhs208, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs208), "rhs", 208);
  emlrtAddField(*info, emlrtAliasP(lhs208), "lhs", 208);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 209);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 209);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 209);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 209);
  emlrtAssign(&rhs209, emlrtCreateCellArray(0));
  emlrtAssign(&lhs209, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs209), "rhs", 209);
  emlrtAddField(*info, emlrtAliasP(lhs209), "lhs", 209);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!eml_fft_bitrevidx"),
                "context", 210);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 210);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 210);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 210);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 210);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 210);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 210);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 210);
  emlrtAssign(&rhs210, emlrtCreateCellArray(0));
  emlrtAssign(&lhs210, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs210), "rhs", 210);
  emlrtAddField(*info, emlrtAliasP(lhs210), "lhs", 210);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 211);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 211);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 211);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 211);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 211);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 211);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 211);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 211);
  emlrtAssign(&rhs211, emlrtCreateCellArray(0));
  emlrtAssign(&lhs211, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs211), "rhs", 211);
  emlrtAddField(*info, emlrtAliasP(lhs211), "lhs", 211);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_fft.m!r2br_r2dit_trig"),
                "context", 212);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 212);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 212);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 212);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 212);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 212);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 212);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 212);
  emlrtAssign(&rhs212, emlrtCreateCellArray(0));
  emlrtAssign(&lhs212, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs212), "rhs", 212);
  emlrtAddField(*info, emlrtAliasP(lhs212), "lhs", 212);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 213);
  emlrtAddField(*info, emlrt_marshallOut("cat"), "name", 213);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 213);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m"), "resolved", 213);
  emlrtAddField(*info, b_emlrt_marshallOut(1307672838U), "fileTimeLo", 213);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 213);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 213);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 213);
  emlrtAssign(&rhs213, emlrtCreateCellArray(0));
  emlrtAssign(&lhs213, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs213), "rhs", 213);
  emlrtAddField(*info, emlrtAliasP(lhs213), "lhs", 213);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m"), "context", 214);
  emlrtAddField(*info, emlrt_marshallOut("eml_assert_valid_dim"), "name", 214);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 214);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m"),
                "resolved", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731866U), "fileTimeLo", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 214);
  emlrtAssign(&rhs214, emlrtCreateCellArray(0));
  emlrtAssign(&lhs214, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs214), "rhs", 214);
  emlrtAddField(*info, emlrtAliasP(lhs214), "lhs", 214);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m"), "context", 215);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 215);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 215);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 215);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 215);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 215);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 215);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 215);
  emlrtAssign(&rhs215, emlrtCreateCellArray(0));
  emlrtAssign(&lhs215, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs215), "rhs", 215);
  emlrtAddField(*info, emlrtAliasP(lhs215), "lhs", 215);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m!is_static_empty"),
                "context", 216);
  emlrtAddField(*info, emlrt_marshallOut("isequal"), "name", 216);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 216);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "resolved",
                216);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840358U), "fileTimeLo", 216);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 216);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 216);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 216);
  emlrtAssign(&rhs216, emlrtCreateCellArray(0));
  emlrtAssign(&lhs216, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs216), "rhs", 216);
  emlrtAddField(*info, emlrtAliasP(lhs216), "lhs", 216);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m!cattype"), "context",
                217);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 217);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 217);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                217);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 217);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 217);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 217);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 217);
  emlrtAssign(&rhs217, emlrtCreateCellArray(0));
  emlrtAssign(&lhs217, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs217), "rhs", 217);
  emlrtAddField(*info, emlrtAliasP(lhs217), "lhs", 217);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m"), "context", 218);
  emlrtAddField(*info, emlrt_marshallOut("eml_matrix_vstride"), "name", 218);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 218);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m"),
                "resolved", 218);
  emlrtAddField(*info, b_emlrt_marshallOut(1360303950U), "fileTimeLo", 218);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 218);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 218);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 218);
  emlrtAssign(&rhs218, emlrtCreateCellArray(0));
  emlrtAssign(&lhs218, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs218), "rhs", 218);
  emlrtAddField(*info, emlrtAliasP(lhs218), "lhs", 218);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m"),
                "context", 219);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.prodsize"), "name", 219);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 219);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"),
                "resolved", 219);
  emlrtAddField(*info, b_emlrt_marshallOut(1360304188U), "fileTimeLo", 219);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 219);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 219);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 219);
  emlrtAssign(&rhs219, emlrtCreateCellArray(0));
  emlrtAssign(&lhs219, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs219), "rhs", 219);
  emlrtAddField(*info, emlrtAliasP(lhs219), "lhs", 219);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m"), "context", 220);
  emlrtAddField(*info, emlrt_marshallOut("eml_matrix_npages"), "name", 220);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 220);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m"),
                "resolved", 220);
  emlrtAddField(*info, b_emlrt_marshallOut(1360303950U), "fileTimeLo", 220);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 220);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 220);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 220);
  emlrtAssign(&rhs220, emlrtCreateCellArray(0));
  emlrtAssign(&lhs220, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs220), "rhs", 220);
  emlrtAddField(*info, emlrtAliasP(lhs220), "lhs", 220);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m"),
                "context", 221);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.prodsize"), "name", 221);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 221);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"),
                "resolved", 221);
  emlrtAddField(*info, b_emlrt_marshallOut(1360304188U), "fileTimeLo", 221);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 221);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 221);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 221);
  emlrtAssign(&rhs221, emlrtCreateCellArray(0));
  emlrtAssign(&lhs221, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs221), "rhs", 221);
  emlrtAddField(*info, emlrtAliasP(lhs221), "lhs", 221);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m"), "context", 222);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 222);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 222);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 222);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 222);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 222);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 222);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 222);
  emlrtAssign(&rhs222, emlrtCreateCellArray(0));
  emlrtAssign(&lhs222, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs222), "rhs", 222);
  emlrtAddField(*info, emlrtAliasP(lhs222), "lhs", 222);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m"), "context", 223);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 223);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 223);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 223);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 223);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 223);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 223);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 223);
  emlrtAssign(&rhs223, emlrtCreateCellArray(0));
  emlrtAssign(&lhs223, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs223), "rhs", 223);
  emlrtAddField(*info, emlrtAliasP(lhs223), "lhs", 223);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m"), "context", 224);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 224);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 224);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 224);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 224);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 224);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 224);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 224);
  emlrtAssign(&rhs224, emlrtCreateCellArray(0));
  emlrtAssign(&lhs224, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs224), "rhs", 224);
  emlrtAddField(*info, emlrtAliasP(lhs224), "lhs", 224);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/cat.m"), "context", 225);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 225);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 225);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 225);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 225);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 225);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 225);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 225);
  emlrtAssign(&rhs225, emlrtCreateCellArray(0));
  emlrtAssign(&lhs225, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs225), "rhs", 225);
  emlrtAddField(*info, emlrtAliasP(lhs225), "lhs", 225);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 226);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 226);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 226);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 226);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 226);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 226);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 226);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 226);
  emlrtAssign(&rhs226, emlrtCreateCellArray(0));
  emlrtAssign(&lhs226, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs226), "rhs", 226);
  emlrtAddField(*info, emlrtAliasP(lhs226), "lhs", 226);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 227);
  emlrtAddField(*info, emlrt_marshallOut("reshape"), "name", 227);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 227);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m"), "resolved",
                227);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840368U), "fileTimeLo", 227);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 227);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 227);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 227);
  emlrtAssign(&rhs227, emlrtCreateCellArray(0));
  emlrtAssign(&lhs227, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs227), "rhs", 227);
  emlrtAddField(*info, emlrtAliasP(lhs227), "lhs", 227);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m"), "context", 228);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 228);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 228);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 228);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 228);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 228);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 228);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 228);
  emlrtAssign(&rhs228, emlrtCreateCellArray(0));
  emlrtAssign(&lhs228, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs228), "rhs", 228);
  emlrtAddField(*info, emlrtAliasP(lhs228), "lhs", 228);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size"),
                "context", 229);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 229);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 229);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 229);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 229);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 229);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 229);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 229);
  emlrtAssign(&rhs229, emlrtCreateCellArray(0));
  emlrtAssign(&lhs229, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs229), "rhs", 229);
  emlrtAddField(*info, emlrtAliasP(lhs229), "lhs", 229);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size"),
                "context", 230);
  emlrtAddField(*info, emlrt_marshallOut("eml_assert_valid_size_arg"), "name",
                230);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 230);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "resolved", 230);
  emlrtAddField(*info, b_emlrt_marshallOut(1368204630U), "fileTimeLo", 230);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 230);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 230);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 230);
  emlrtAssign(&rhs230, emlrtCreateCellArray(0));
  emlrtAssign(&lhs230, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs230), "rhs", 230);
  emlrtAddField(*info, emlrtAliasP(lhs230), "lhs", 230);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m"), "context", 231);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 231);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 231);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                231);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 231);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 231);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 231);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 231);
  emlrtAssign(&rhs231, emlrtCreateCellArray(0));
  emlrtAssign(&lhs231, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs231), "rhs", 231);
  emlrtAddField(*info, emlrtAliasP(lhs231), "lhs", 231);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m"), "context", 232);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 232);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 232);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 232);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 232);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 232);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 232);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 232);
  emlrtAssign(&rhs232, emlrtCreateCellArray(0));
  emlrtAssign(&lhs232, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs232), "rhs", 232);
  emlrtAddField(*info, emlrtAliasP(lhs232), "lhs", 232);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 233);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 233);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 233);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 233);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 233);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 233);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 233);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 233);
  emlrtAssign(&rhs233, emlrtCreateCellArray(0));
  emlrtAssign(&lhs233, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs233), "rhs", 233);
  emlrtAddField(*info, emlrtAliasP(lhs233), "lhs", 233);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 234);
  emlrtAddField(*info, emlrt_marshallOut("OFDMletters2bits"), "name", 234);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 234);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m"),
                "resolved", 234);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516424U), "fileTimeLo", 234);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 234);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 234);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 234);
  emlrtAssign(&rhs234, emlrtCreateCellArray(0));
  emlrtAssign(&lhs234, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs234), "rhs", 234);
  emlrtAddField(*info, emlrtAliasP(lhs234), "lhs", 234);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m"),
                "context", 235);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 235);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 235);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 235);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 235);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 235);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 235);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 235);
  emlrtAssign(&rhs235, emlrtCreateCellArray(0));
  emlrtAssign(&lhs235, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs235), "rhs", 235);
  emlrtAddField(*info, emlrtAliasP(lhs235), "lhs", 235);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m"),
                "context", 236);
  emlrtAddField(*info, emlrt_marshallOut("dec2bin"), "name", 236);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 236);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m"), "resolved",
                236);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 236);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 236);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 236);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 236);
  emlrtAssign(&rhs236, emlrtCreateCellArray(0));
  emlrtAssign(&lhs236, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs236), "rhs", 236);
  emlrtAddField(*info, emlrtAliasP(lhs236), "lhs", 236);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m"), "context",
                237);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 237);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 237);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 237);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 237);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 237);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 237);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 237);
  emlrtAssign(&rhs237, emlrtCreateCellArray(0));
  emlrtAssign(&lhs237, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs237), "rhs", 237);
  emlrtAddField(*info, emlrtAliasP(lhs237), "lhs", 237);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m"), "context",
                238);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 238);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 238);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 238);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 238);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 238);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 238);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 238);
  emlrtAssign(&rhs238, emlrtCreateCellArray(0));
  emlrtAssign(&lhs238, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs238), "rhs", 238);
  emlrtAddField(*info, emlrtAliasP(lhs238), "lhs", 238);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin"),
                "context", 239);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 239);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 239);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 239);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 239);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 239);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 239);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 239);
  emlrtAssign(&rhs239, emlrtCreateCellArray(0));
  emlrtAssign(&lhs239, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs239), "rhs", 239);
  emlrtAddField(*info, emlrtAliasP(lhs239), "lhs", 239);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!char_nbits"),
                "context", 240);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 240);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 240);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 240);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 240);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 240);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 240);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 240);
  emlrtAssign(&rhs240, emlrtCreateCellArray(0));
  emlrtAssign(&lhs240, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs240), "rhs", 240);
  emlrtAddField(*info, emlrtAliasP(lhs240), "lhs", 240);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin"),
                "context", 241);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 241);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 241);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 241);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 241);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 241);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 241);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 241);
  emlrtAssign(&rhs241, emlrtCreateCellArray(0));
  emlrtAssign(&lhs241, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs241), "rhs", 241);
  emlrtAddField(*info, emlrtAliasP(lhs241), "lhs", 241);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin"),
                "context", 242);
  emlrtAddField(*info, emlrt_marshallOut("bitget"), "name", 242);
  emlrtAddField(*info, emlrt_marshallOut("uint16"), "dominantType", 242);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "resolved", 242);
  emlrtAddField(*info, b_emlrt_marshallOut(1344493636U), "fileTimeLo", 242);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 242);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 242);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 242);
  emlrtAssign(&rhs242, emlrtCreateCellArray(0));
  emlrtAssign(&lhs242, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs242), "rhs", 242);
  emlrtAddField(*info, emlrtAliasP(lhs242), "lhs", 242);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context", 243);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 243);
  emlrtAddField(*info, emlrt_marshallOut("uint16"), "dominantType", 243);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                243);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 243);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 243);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 243);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 243);
  emlrtAssign(&rhs243, emlrtCreateCellArray(0));
  emlrtAssign(&lhs243, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs243), "rhs", 243);
  emlrtAddField(*info, emlrtAliasP(lhs243), "lhs", 243);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context", 244);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 244);
  emlrtAddField(*info, emlrt_marshallOut("uint16"), "dominantType", 244);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 244);
  emlrtAddField(*info, b_emlrt_marshallOut(1358207740U), "fileTimeLo", 244);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 244);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 244);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 244);
  emlrtAssign(&rhs244, emlrtCreateCellArray(0));
  emlrtAssign(&lhs244, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs244), "rhs", 244);
  emlrtAddField(*info, emlrtAliasP(lhs244), "lhs", 244);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context", 245);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_nbits"), "name", 245);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 245);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_nbits.m"), "resolved",
                245);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 245);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 245);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 245);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 245);
  emlrtAssign(&rhs245, emlrtCreateCellArray(0));
  emlrtAssign(&lhs245, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs245), "rhs", 245);
  emlrtAddField(*info, emlrtAliasP(lhs245), "lhs", 245);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context", 246);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 246);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 246);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 246);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 246);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 246);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 246);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 246);
  emlrtAssign(&rhs246, emlrtCreateCellArray(0));
  emlrtAssign(&lhs246, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs246), "rhs", 246);
  emlrtAddField(*info, emlrtAliasP(lhs246), "lhs", 246);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context", 247);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 247);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 247);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 247);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 247);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 247);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 247);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 247);
  emlrtAssign(&rhs247, emlrtCreateCellArray(0));
  emlrtAssign(&lhs247, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs247), "rhs", 247);
  emlrtAddField(*info, emlrtAliasP(lhs247), "lhs", 247);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context", 248);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_floor"), "name", 248);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 248);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                "resolved", 248);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840326U), "fileTimeLo", 248);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 248);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 248);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 248);
  emlrtAssign(&rhs248, emlrtCreateCellArray(0));
  emlrtAssign(&lhs248, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs248), "rhs", 248);
  emlrtAddField(*info, emlrtAliasP(lhs248), "lhs", 248);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context", 249);
  emlrtAddField(*info, emlrt_marshallOut("eml_error"), "name", 249);
  emlrtAddField(*info, emlrt_marshallOut("uint8"), "dominantType", 249);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m"), "resolved",
                249);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851958U), "fileTimeLo", 249);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 249);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 249);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 249);
  emlrtAssign(&rhs249, emlrtCreateCellArray(0));
  emlrtAssign(&lhs249, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs249), "rhs", 249);
  emlrtAddField(*info, emlrtAliasP(lhs249), "lhs", 249);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin"),
                "context", 250);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 250);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 250);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 250);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 250);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 250);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 250);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 250);
  emlrtAssign(&rhs250, emlrtCreateCellArray(0));
  emlrtAssign(&lhs250, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs250), "rhs", 250);
  emlrtAddField(*info, emlrtAliasP(lhs250), "lhs", 250);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!idec2bin"),
                "context", 251);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 251);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 251);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 251);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 251);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 251);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 251);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 251);
  emlrtAssign(&rhs251, emlrtCreateCellArray(0));
  emlrtAssign(&lhs251, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs251), "rhs", 251);
  emlrtAddField(*info, emlrtAliasP(lhs251), "lhs", 251);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim"),
                "context", 252);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 252);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 252);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 252);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 252);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 252);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 252);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 252);
  emlrtAssign(&rhs252, emlrtCreateCellArray(0));
  emlrtAssign(&lhs252, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs252), "rhs", 252);
  emlrtAddField(*info, emlrtAliasP(lhs252), "lhs", 252);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim"),
                "context", 253);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 253);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 253);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 253);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 253);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 253);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 253);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 253);
  emlrtAssign(&rhs253, emlrtCreateCellArray(0));
  emlrtAssign(&lhs253, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs253), "rhs", 253);
  emlrtAddField(*info, emlrtAliasP(lhs253), "lhs", 253);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim"),
                "context", 254);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 254);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 254);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 254);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 254);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 254);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 254);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 254);
  emlrtAssign(&rhs254, emlrtCreateCellArray(0));
  emlrtAssign(&lhs254, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs254), "rhs", 254);
  emlrtAddField(*info, emlrtAliasP(lhs254), "lhs", 254);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/dec2bin.m!trim"),
                "context", 255);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 255);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 255);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 255);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 255);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 255);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 255);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 255);
  emlrtAssign(&rhs255, emlrtCreateCellArray(0));
  emlrtAssign(&lhs255, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs255), "rhs", 255);
  emlrtAddField(*info, emlrtAliasP(lhs255), "lhs", 255);
  emlrtDestroyArray(&rhs192);
  emlrtDestroyArray(&lhs192);
  emlrtDestroyArray(&rhs193);
  emlrtDestroyArray(&lhs193);
  emlrtDestroyArray(&rhs194);
  emlrtDestroyArray(&lhs194);
  emlrtDestroyArray(&rhs195);
  emlrtDestroyArray(&lhs195);
  emlrtDestroyArray(&rhs196);
  emlrtDestroyArray(&lhs196);
  emlrtDestroyArray(&rhs197);
  emlrtDestroyArray(&lhs197);
  emlrtDestroyArray(&rhs198);
  emlrtDestroyArray(&lhs198);
  emlrtDestroyArray(&rhs199);
  emlrtDestroyArray(&lhs199);
  emlrtDestroyArray(&rhs200);
  emlrtDestroyArray(&lhs200);
  emlrtDestroyArray(&rhs201);
  emlrtDestroyArray(&lhs201);
  emlrtDestroyArray(&rhs202);
  emlrtDestroyArray(&lhs202);
  emlrtDestroyArray(&rhs203);
  emlrtDestroyArray(&lhs203);
  emlrtDestroyArray(&rhs204);
  emlrtDestroyArray(&lhs204);
  emlrtDestroyArray(&rhs205);
  emlrtDestroyArray(&lhs205);
  emlrtDestroyArray(&rhs206);
  emlrtDestroyArray(&lhs206);
  emlrtDestroyArray(&rhs207);
  emlrtDestroyArray(&lhs207);
  emlrtDestroyArray(&rhs208);
  emlrtDestroyArray(&lhs208);
  emlrtDestroyArray(&rhs209);
  emlrtDestroyArray(&lhs209);
  emlrtDestroyArray(&rhs210);
  emlrtDestroyArray(&lhs210);
  emlrtDestroyArray(&rhs211);
  emlrtDestroyArray(&lhs211);
  emlrtDestroyArray(&rhs212);
  emlrtDestroyArray(&lhs212);
  emlrtDestroyArray(&rhs213);
  emlrtDestroyArray(&lhs213);
  emlrtDestroyArray(&rhs214);
  emlrtDestroyArray(&lhs214);
  emlrtDestroyArray(&rhs215);
  emlrtDestroyArray(&lhs215);
  emlrtDestroyArray(&rhs216);
  emlrtDestroyArray(&lhs216);
  emlrtDestroyArray(&rhs217);
  emlrtDestroyArray(&lhs217);
  emlrtDestroyArray(&rhs218);
  emlrtDestroyArray(&lhs218);
  emlrtDestroyArray(&rhs219);
  emlrtDestroyArray(&lhs219);
  emlrtDestroyArray(&rhs220);
  emlrtDestroyArray(&lhs220);
  emlrtDestroyArray(&rhs221);
  emlrtDestroyArray(&lhs221);
  emlrtDestroyArray(&rhs222);
  emlrtDestroyArray(&lhs222);
  emlrtDestroyArray(&rhs223);
  emlrtDestroyArray(&lhs223);
  emlrtDestroyArray(&rhs224);
  emlrtDestroyArray(&lhs224);
  emlrtDestroyArray(&rhs225);
  emlrtDestroyArray(&lhs225);
  emlrtDestroyArray(&rhs226);
  emlrtDestroyArray(&lhs226);
  emlrtDestroyArray(&rhs227);
  emlrtDestroyArray(&lhs227);
  emlrtDestroyArray(&rhs228);
  emlrtDestroyArray(&lhs228);
  emlrtDestroyArray(&rhs229);
  emlrtDestroyArray(&lhs229);
  emlrtDestroyArray(&rhs230);
  emlrtDestroyArray(&lhs230);
  emlrtDestroyArray(&rhs231);
  emlrtDestroyArray(&lhs231);
  emlrtDestroyArray(&rhs232);
  emlrtDestroyArray(&lhs232);
  emlrtDestroyArray(&rhs233);
  emlrtDestroyArray(&lhs233);
  emlrtDestroyArray(&rhs234);
  emlrtDestroyArray(&lhs234);
  emlrtDestroyArray(&rhs235);
  emlrtDestroyArray(&lhs235);
  emlrtDestroyArray(&rhs236);
  emlrtDestroyArray(&lhs236);
  emlrtDestroyArray(&rhs237);
  emlrtDestroyArray(&lhs237);
  emlrtDestroyArray(&rhs238);
  emlrtDestroyArray(&lhs238);
  emlrtDestroyArray(&rhs239);
  emlrtDestroyArray(&lhs239);
  emlrtDestroyArray(&rhs240);
  emlrtDestroyArray(&lhs240);
  emlrtDestroyArray(&rhs241);
  emlrtDestroyArray(&lhs241);
  emlrtDestroyArray(&rhs242);
  emlrtDestroyArray(&lhs242);
  emlrtDestroyArray(&rhs243);
  emlrtDestroyArray(&lhs243);
  emlrtDestroyArray(&rhs244);
  emlrtDestroyArray(&lhs244);
  emlrtDestroyArray(&rhs245);
  emlrtDestroyArray(&lhs245);
  emlrtDestroyArray(&rhs246);
  emlrtDestroyArray(&lhs246);
  emlrtDestroyArray(&rhs247);
  emlrtDestroyArray(&lhs247);
  emlrtDestroyArray(&rhs248);
  emlrtDestroyArray(&lhs248);
  emlrtDestroyArray(&rhs249);
  emlrtDestroyArray(&lhs249);
  emlrtDestroyArray(&rhs250);
  emlrtDestroyArray(&lhs250);
  emlrtDestroyArray(&rhs251);
  emlrtDestroyArray(&lhs251);
  emlrtDestroyArray(&rhs252);
  emlrtDestroyArray(&lhs252);
  emlrtDestroyArray(&rhs253);
  emlrtDestroyArray(&lhs253);
  emlrtDestroyArray(&rhs254);
  emlrtDestroyArray(&lhs254);
  emlrtDestroyArray(&rhs255);
  emlrtDestroyArray(&lhs255);
}

static void e_info_helper(const mxArray **info)
{
  const mxArray *rhs256 = NULL;
  const mxArray *lhs256 = NULL;
  const mxArray *rhs257 = NULL;
  const mxArray *lhs257 = NULL;
  const mxArray *rhs258 = NULL;
  const mxArray *lhs258 = NULL;
  const mxArray *rhs259 = NULL;
  const mxArray *lhs259 = NULL;
  const mxArray *rhs260 = NULL;
  const mxArray *lhs260 = NULL;
  const mxArray *rhs261 = NULL;
  const mxArray *lhs261 = NULL;
  const mxArray *rhs262 = NULL;
  const mxArray *lhs262 = NULL;
  const mxArray *rhs263 = NULL;
  const mxArray *lhs263 = NULL;
  const mxArray *rhs264 = NULL;
  const mxArray *lhs264 = NULL;
  const mxArray *rhs265 = NULL;
  const mxArray *lhs265 = NULL;
  const mxArray *rhs266 = NULL;
  const mxArray *lhs266 = NULL;
  const mxArray *rhs267 = NULL;
  const mxArray *lhs267 = NULL;
  const mxArray *rhs268 = NULL;
  const mxArray *lhs268 = NULL;
  const mxArray *rhs269 = NULL;
  const mxArray *lhs269 = NULL;
  const mxArray *rhs270 = NULL;
  const mxArray *lhs270 = NULL;
  const mxArray *rhs271 = NULL;
  const mxArray *lhs271 = NULL;
  const mxArray *rhs272 = NULL;
  const mxArray *lhs272 = NULL;
  const mxArray *rhs273 = NULL;
  const mxArray *lhs273 = NULL;
  const mxArray *rhs274 = NULL;
  const mxArray *lhs274 = NULL;
  const mxArray *rhs275 = NULL;
  const mxArray *lhs275 = NULL;
  const mxArray *rhs276 = NULL;
  const mxArray *lhs276 = NULL;
  const mxArray *rhs277 = NULL;
  const mxArray *lhs277 = NULL;
  const mxArray *rhs278 = NULL;
  const mxArray *lhs278 = NULL;
  const mxArray *rhs279 = NULL;
  const mxArray *lhs279 = NULL;
  const mxArray *rhs280 = NULL;
  const mxArray *lhs280 = NULL;
  const mxArray *rhs281 = NULL;
  const mxArray *lhs281 = NULL;
  const mxArray *rhs282 = NULL;
  const mxArray *lhs282 = NULL;
  const mxArray *rhs283 = NULL;
  const mxArray *lhs283 = NULL;
  const mxArray *rhs284 = NULL;
  const mxArray *lhs284 = NULL;
  const mxArray *rhs285 = NULL;
  const mxArray *lhs285 = NULL;
  const mxArray *rhs286 = NULL;
  const mxArray *lhs286 = NULL;
  const mxArray *rhs287 = NULL;
  const mxArray *lhs287 = NULL;
  const mxArray *rhs288 = NULL;
  const mxArray *lhs288 = NULL;
  const mxArray *rhs289 = NULL;
  const mxArray *lhs289 = NULL;
  const mxArray *rhs290 = NULL;
  const mxArray *lhs290 = NULL;
  const mxArray *rhs291 = NULL;
  const mxArray *lhs291 = NULL;
  const mxArray *rhs292 = NULL;
  const mxArray *lhs292 = NULL;
  const mxArray *rhs293 = NULL;
  const mxArray *lhs293 = NULL;
  const mxArray *rhs294 = NULL;
  const mxArray *lhs294 = NULL;
  const mxArray *rhs295 = NULL;
  const mxArray *lhs295 = NULL;
  const mxArray *rhs296 = NULL;
  const mxArray *lhs296 = NULL;
  const mxArray *rhs297 = NULL;
  const mxArray *lhs297 = NULL;
  const mxArray *rhs298 = NULL;
  const mxArray *lhs298 = NULL;
  const mxArray *rhs299 = NULL;
  const mxArray *lhs299 = NULL;
  const mxArray *rhs300 = NULL;
  const mxArray *lhs300 = NULL;
  const mxArray *rhs301 = NULL;
  const mxArray *lhs301 = NULL;
  const mxArray *rhs302 = NULL;
  const mxArray *lhs302 = NULL;
  const mxArray *rhs303 = NULL;
  const mxArray *lhs303 = NULL;
  const mxArray *rhs304 = NULL;
  const mxArray *lhs304 = NULL;
  const mxArray *rhs305 = NULL;
  const mxArray *lhs305 = NULL;
  const mxArray *rhs306 = NULL;
  const mxArray *lhs306 = NULL;
  const mxArray *rhs307 = NULL;
  const mxArray *lhs307 = NULL;
  const mxArray *rhs308 = NULL;
  const mxArray *lhs308 = NULL;
  const mxArray *rhs309 = NULL;
  const mxArray *lhs309 = NULL;
  const mxArray *rhs310 = NULL;
  const mxArray *lhs310 = NULL;
  const mxArray *rhs311 = NULL;
  const mxArray *lhs311 = NULL;
  const mxArray *rhs312 = NULL;
  const mxArray *lhs312 = NULL;
  const mxArray *rhs313 = NULL;
  const mxArray *lhs313 = NULL;
  const mxArray *rhs314 = NULL;
  const mxArray *lhs314 = NULL;
  const mxArray *rhs315 = NULL;
  const mxArray *lhs315 = NULL;
  const mxArray *rhs316 = NULL;
  const mxArray *lhs316 = NULL;
  const mxArray *rhs317 = NULL;
  const mxArray *lhs317 = NULL;
  const mxArray *rhs318 = NULL;
  const mxArray *lhs318 = NULL;
  const mxArray *rhs319 = NULL;
  const mxArray *lhs319 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 256);
  emlrtAddField(*info, emlrt_marshallOut("reshape"), "name", 256);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 256);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m"), "resolved",
                256);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840368U), "fileTimeLo", 256);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 256);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 256);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 256);
  emlrtAssign(&rhs256, emlrtCreateCellArray(0));
  emlrtAssign(&lhs256, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs256), "rhs", 256);
  emlrtAddField(*info, emlrtAliasP(lhs256), "lhs", 256);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!varargin_nempty"),
                "context", 257);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 257);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 257);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 257);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 257);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 257);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 257);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 257);
  emlrtAssign(&rhs257, emlrtCreateCellArray(0));
  emlrtAssign(&lhs257, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs257), "rhs", 257);
  emlrtAddField(*info, emlrtAliasP(lhs257), "lhs", 257);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m!reshape_varargin_to_size"),
                "context", 258);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_prod"), "name", 258);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 258);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m"),
                "resolved", 258);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 258);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 258);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 258);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 258);
  emlrtAssign(&rhs258, emlrtCreateCellArray(0));
  emlrtAssign(&lhs258, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs258), "rhs", 258);
  emlrtAddField(*info, emlrtAliasP(lhs258), "lhs", 258);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m"), "context",
                259);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 259);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 259);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 259);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 259);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 259);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 259);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 259);
  emlrtAssign(&rhs259, emlrtCreateCellArray(0));
  emlrtAssign(&lhs259, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs259), "rhs", 259);
  emlrtAddField(*info, emlrtAliasP(lhs259), "lhs", 259);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m"), "context",
                260);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 260);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 260);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 260);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 260);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 260);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 260);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 260);
  emlrtAssign(&rhs260, emlrtCreateCellArray(0));
  emlrtAssign(&lhs260, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs260), "rhs", 260);
  emlrtAddField(*info, emlrtAliasP(lhs260), "lhs", 260);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m"), "context",
                261);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 261);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 261);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 261);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 261);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 261);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 261);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 261);
  emlrtAssign(&rhs261, emlrtCreateCellArray(0));
  emlrtAssign(&lhs261, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs261), "rhs", 261);
  emlrtAddField(*info, emlrtAliasP(lhs261), "lhs", 261);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 262);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.System"), "name",
                262);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 262);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "resolved", 262);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327396U), "fileTimeLo", 262);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 262);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 262);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 262);
  emlrtAssign(&rhs262, emlrtCreateCellArray(0));
  emlrtAssign(&lhs262, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs262), "rhs", 262);
  emlrtAddField(*info, emlrtAliasP(lhs262), "lhs", 262);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 263);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.mixin.coder.Nondirect"),
                "name", 263);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 263);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"),
                "resolved", 263);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327398U), "fileTimeLo", 263);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 263);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 263);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 263);
  emlrtAssign(&rhs263, emlrtCreateCellArray(0));
  emlrtAssign(&lhs263, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs263), "rhs", 263);
  emlrtAddField(*info, emlrtAliasP(lhs263), "lhs", 263);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 264);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.mixin.Nondirect"),
                "name", 264);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 264);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/Nondirect.p"),
                "resolved", 264);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 264);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 264);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 264);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 264);
  emlrtAssign(&rhs264, emlrtCreateCellArray(0));
  emlrtAssign(&lhs264, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs264), "rhs", 264);
  emlrtAddField(*info, emlrtAliasP(lhs264), "lhs", 264);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 265);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.CRCGenerator"), "name",
                265);
  emlrtAddField(*info, emlrt_marshallOut("int32"), "dominantType", 265);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "resolved", 265);
  emlrtAddField(*info, b_emlrt_marshallOut(1376019338U), "fileTimeLo", 265);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 265);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 265);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 265);
  emlrtAssign(&rhs265, emlrtCreateCellArray(0));
  emlrtAssign(&lhs265, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs265), "rhs", 265);
  emlrtAddField(*info, emlrtAliasP(lhs265), "lhs", 265);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 266);
  emlrtAddField(*info, emlrt_marshallOut("createsystemobjectv2"), "name", 266);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 266);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m"),
                "resolved", 266);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851958U), "fileTimeLo", 266);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 266);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 266);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 266);
  emlrtAssign(&rhs266, emlrtCreateCellArray(0));
  emlrtAssign(&lhs266, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs266), "rhs", 266);
  emlrtAddField(*info, emlrtAliasP(lhs266), "lhs", 266);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m"),
                "context", 267);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 267);
  emlrtAddField(*info, emlrt_marshallOut("cell"), "dominantType", 267);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 267);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 267);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 267);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 267);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 267);
  emlrtAssign(&rhs267, emlrtCreateCellArray(0));
  emlrtAssign(&lhs267, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs267), "rhs", 267);
  emlrtAddField(*info, emlrtAliasP(lhs267), "lhs", 267);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 268);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.isSystemObject"), "name",
                268);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 268);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/isSystemObject.p"),
                "resolved", 268);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 268);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 268);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 268);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 268);
  emlrtAssign(&rhs268, emlrtCreateCellArray(0));
  emlrtAssign(&lhs268, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs268), "rhs", 268);
  emlrtAddField(*info, emlrtAliasP(lhs268), "lhs", 268);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 269);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.System"), "name",
                269);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 269);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "resolved", 269);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327396U), "fileTimeLo", 269);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 269);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 269);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 269);
  emlrtAssign(&rhs269, emlrtCreateCellArray(0));
  emlrtAssign(&lhs269, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs269), "rhs", 269);
  emlrtAddField(*info, emlrtAliasP(lhs269), "lhs", 269);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 270);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.setProp"), "name", 270);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.CRCGenerator"),
                "dominantType", 270);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p"),
                "resolved", 270);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 270);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 270);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 270);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 270);
  emlrtAssign(&rhs270, emlrtCreateCellArray(0));
  emlrtAssign(&lhs270, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs270), "rhs", 270);
  emlrtAddField(*info, emlrtAliasP(lhs270), "lhs", 270);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 271);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.pvParse"), "name", 271);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.CRCGenerator"),
                "dominantType", 271);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p"),
                "resolved", 271);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 271);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 271);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 271);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 271);
  emlrtAssign(&rhs271, emlrtCreateCellArray(0));
  emlrtAssign(&lhs271, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs271), "rhs", 271);
  emlrtAddField(*info, emlrtAliasP(lhs271), "lhs", 271);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 272);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemProp"),
                "name", 272);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 272);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "resolved", 272);
  emlrtAddField(*info, b_emlrt_marshallOut(1373657594U), "fileTimeLo", 272);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 272);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 272);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 272);
  emlrtAssign(&rhs272, emlrtCreateCellArray(0));
  emlrtAssign(&lhs272, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs272), "rhs", 272);
  emlrtAddField(*info, emlrtAliasP(lhs272), "lhs", 272);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 273);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.CRCGenerator"), "name",
                273);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 273);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "resolved", 273);
  emlrtAddField(*info, b_emlrt_marshallOut(1376019338U), "fileTimeLo", 273);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 273);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 273);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 273);
  emlrtAssign(&rhs273, emlrtCreateCellArray(0));
  emlrtAssign(&lhs273, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs273), "rhs", 273);
  emlrtAddField(*info, emlrtAliasP(lhs273), "lhs", 273);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 274);
  emlrtAddField(*info, emlrt_marshallOut("get"), "name", 274);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                274);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m"), "resolved", 274);
  emlrtAddField(*info, b_emlrt_marshallOut(1373653916U), "fileTimeLo", 274);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 274);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 274);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 274);
  emlrtAssign(&rhs274, emlrtCreateCellArray(0));
  emlrtAssign(&lhs274, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs274), "rhs", 274);
  emlrtAddField(*info, emlrtAliasP(lhs274), "lhs", 274);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 275);
  emlrtAddField(*info, emlrt_marshallOut("getNumInputs"), "name", 275);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                275);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m"), "resolved", 275);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900348U), "fileTimeLo", 275);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 275);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 275);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 275);
  emlrtAssign(&rhs275, emlrtCreateCellArray(0));
  emlrtAssign(&lhs275, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs275), "rhs", 275);
  emlrtAddField(*info, emlrtAliasP(lhs275), "lhs", 275);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m"), "context", 276);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 276);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                276);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 276);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 276);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 276);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 276);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 276);
  emlrtAssign(&rhs276, emlrtCreateCellArray(0));
  emlrtAssign(&lhs276, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs276), "rhs", 276);
  emlrtAddField(*info, emlrtAliasP(lhs276), "lhs", 276);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 277);
  emlrtAddField(*info, emlrt_marshallOut("setup"), "name", 277);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                277);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m"), "resolved", 277);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900350U), "fileTimeLo", 277);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 277);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 277);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 277);
  emlrtAssign(&rhs277, emlrtCreateCellArray(0));
  emlrtAssign(&lhs277, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs277), "rhs", 277);
  emlrtAddField(*info, emlrtAliasP(lhs277), "lhs", 277);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m"), "context", 278);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 278);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                278);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 278);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 278);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 278);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 278);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 278);
  emlrtAssign(&rhs278, emlrtCreateCellArray(0));
  emlrtAssign(&lhs278, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs278), "rhs", 278);
  emlrtAddField(*info, emlrtAliasP(lhs278), "lhs", 278);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 279);
  emlrtAddField(*info, emlrt_marshallOut("reset"), "name", 279);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                279);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m"), "resolved", 279);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900350U), "fileTimeLo", 279);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 279);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 279);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 279);
  emlrtAssign(&rhs279, emlrtCreateCellArray(0));
  emlrtAssign(&lhs279, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs279), "rhs", 279);
  emlrtAddField(*info, emlrtAliasP(lhs279), "lhs", 279);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m"), "context", 280);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 280);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                280);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 280);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 280);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 280);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 280);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 280);
  emlrtAssign(&rhs280, emlrtCreateCellArray(0));
  emlrtAssign(&lhs280, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs280), "rhs", 280);
  emlrtAddField(*info, emlrtAliasP(lhs280), "lhs", 280);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 281);
  emlrtAddField(*info, emlrt_marshallOut("getNumOutputs"), "name", 281);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                281);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m"), "resolved", 281);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900348U), "fileTimeLo", 281);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 281);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 281);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 281);
  emlrtAssign(&rhs281, emlrtCreateCellArray(0));
  emlrtAssign(&lhs281, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs281), "rhs", 281);
  emlrtAddField(*info, emlrtAliasP(lhs281), "lhs", 281);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m"), "context", 282);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 282);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                282);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 282);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 282);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 282);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 282);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 282);
  emlrtAssign(&rhs282, emlrtCreateCellArray(0));
  emlrtAssign(&lhs282, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs282), "rhs", 282);
  emlrtAddField(*info, emlrtAliasP(lhs282), "lhs", 282);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 283);
  emlrtAddField(*info, emlrt_marshallOut("output"), "name", 283);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                283);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m"), "resolved", 283);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900348U), "fileTimeLo", 283);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 283);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 283);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 283);
  emlrtAssign(&rhs283, emlrtCreateCellArray(0));
  emlrtAssign(&lhs283, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs283), "rhs", 283);
  emlrtAddField(*info, emlrtAliasP(lhs283), "lhs", 283);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m"), "context", 284);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 284);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                284);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 284);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 284);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 284);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 284);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 284);
  emlrtAssign(&rhs284, emlrtCreateCellArray(0));
  emlrtAssign(&lhs284, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs284), "rhs", 284);
  emlrtAddField(*info, emlrtAliasP(lhs284), "lhs", 284);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "context", 285);
  emlrtAddField(*info, emlrt_marshallOut("update"), "name", 285);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                285);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m"), "resolved", 285);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900352U), "fileTimeLo", 285);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 285);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 285);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 285);
  emlrtAssign(&rhs285, emlrtCreateCellArray(0));
  emlrtAssign(&lhs285, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs285), "rhs", 285);
  emlrtAddField(*info, emlrtAliasP(lhs285), "lhs", 285);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m"), "context", 286);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 286);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCGenerator"), "dominantType",
                286);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 286);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 286);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 286);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 286);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 286);
  emlrtAssign(&rhs286, emlrtCreateCellArray(0));
  emlrtAssign(&lhs286, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs286), "rhs", 286);
  emlrtAddField(*info, emlrtAliasP(lhs286), "lhs", 286);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 287);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.System"), "name",
                287);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 287);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "resolved", 287);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327396U), "fileTimeLo", 287);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 287);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 287);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 287);
  emlrtAssign(&rhs287, emlrtCreateCellArray(0));
  emlrtAssign(&lhs287, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs287), "rhs", 287);
  emlrtAddField(*info, emlrtAliasP(lhs287), "lhs", 287);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 288);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.mixin.coder.Nondirect"),
                "name", 288);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 288);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"),
                "resolved", 288);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327398U), "fileTimeLo", 288);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 288);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 288);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 288);
  emlrtAssign(&rhs288, emlrtCreateCellArray(0));
  emlrtAssign(&lhs288, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs288), "rhs", 288);
  emlrtAddField(*info, emlrtAliasP(lhs288), "lhs", 288);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 289);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.BPSKModulator"), "name",
                289);
  emlrtAddField(*info, emlrt_marshallOut("int32"), "dominantType", 289);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "resolved", 289);
  emlrtAddField(*info, b_emlrt_marshallOut(1376019338U), "fileTimeLo", 289);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 289);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 289);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 289);
  emlrtAssign(&rhs289, emlrtCreateCellArray(0));
  emlrtAssign(&lhs289, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs289), "rhs", 289);
  emlrtAddField(*info, emlrtAliasP(lhs289), "lhs", 289);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 290);
  emlrtAddField(*info, emlrt_marshallOut("createsystemobjectv2"), "name", 290);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 290);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m"),
                "resolved", 290);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851958U), "fileTimeLo", 290);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 290);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 290);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 290);
  emlrtAssign(&rhs290, emlrtCreateCellArray(0));
  emlrtAssign(&lhs290, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs290), "rhs", 290);
  emlrtAddField(*info, emlrtAliasP(lhs290), "lhs", 290);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 291);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemProp"),
                "name", 291);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 291);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "resolved", 291);
  emlrtAddField(*info, b_emlrt_marshallOut(1373657594U), "fileTimeLo", 291);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 291);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 291);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 291);
  emlrtAssign(&rhs291, emlrtCreateCellArray(0));
  emlrtAssign(&lhs291, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs291), "rhs", 291);
  emlrtAddField(*info, emlrtAliasP(lhs291), "lhs", 291);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 292);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.BPSKModulator"), "name",
                292);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 292);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "resolved", 292);
  emlrtAddField(*info, b_emlrt_marshallOut(1376019338U), "fileTimeLo", 292);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 292);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 292);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 292);
  emlrtAssign(&rhs292, emlrtCreateCellArray(0));
  emlrtAssign(&lhs292, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs292), "rhs", 292);
  emlrtAddField(*info, emlrtAliasP(lhs292), "lhs", 292);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 293);
  emlrtAddField(*info, emlrt_marshallOut("get"), "name", 293);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                293);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m"), "resolved", 293);
  emlrtAddField(*info, b_emlrt_marshallOut(1373653916U), "fileTimeLo", 293);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 293);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 293);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 293);
  emlrtAssign(&rhs293, emlrtCreateCellArray(0));
  emlrtAssign(&lhs293, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs293), "rhs", 293);
  emlrtAddField(*info, emlrtAliasP(lhs293), "lhs", 293);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 294);
  emlrtAddField(*info, emlrt_marshallOut("getNumInputs"), "name", 294);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                294);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m"), "resolved", 294);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900348U), "fileTimeLo", 294);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 294);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 294);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 294);
  emlrtAssign(&rhs294, emlrtCreateCellArray(0));
  emlrtAssign(&lhs294, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs294), "rhs", 294);
  emlrtAddField(*info, emlrtAliasP(lhs294), "lhs", 294);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m"), "context", 295);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 295);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                295);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 295);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 295);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 295);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 295);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 295);
  emlrtAssign(&rhs295, emlrtCreateCellArray(0));
  emlrtAssign(&lhs295, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs295), "rhs", 295);
  emlrtAddField(*info, emlrtAliasP(lhs295), "lhs", 295);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 296);
  emlrtAddField(*info, emlrt_marshallOut("setup"), "name", 296);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                296);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m"), "resolved", 296);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900350U), "fileTimeLo", 296);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 296);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 296);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 296);
  emlrtAssign(&rhs296, emlrtCreateCellArray(0));
  emlrtAssign(&lhs296, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs296), "rhs", 296);
  emlrtAddField(*info, emlrtAliasP(lhs296), "lhs", 296);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m"), "context", 297);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 297);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                297);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 297);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 297);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 297);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 297);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 297);
  emlrtAssign(&rhs297, emlrtCreateCellArray(0));
  emlrtAssign(&lhs297, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs297), "rhs", 297);
  emlrtAddField(*info, emlrtAliasP(lhs297), "lhs", 297);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 298);
  emlrtAddField(*info, emlrt_marshallOut("reset"), "name", 298);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                298);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m"), "resolved", 298);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900350U), "fileTimeLo", 298);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 298);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 298);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 298);
  emlrtAssign(&rhs298, emlrtCreateCellArray(0));
  emlrtAssign(&lhs298, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs298), "rhs", 298);
  emlrtAddField(*info, emlrtAliasP(lhs298), "lhs", 298);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m"), "context", 299);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 299);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                299);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 299);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 299);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 299);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 299);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 299);
  emlrtAssign(&rhs299, emlrtCreateCellArray(0));
  emlrtAssign(&lhs299, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs299), "rhs", 299);
  emlrtAddField(*info, emlrtAliasP(lhs299), "lhs", 299);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 300);
  emlrtAddField(*info, emlrt_marshallOut("getNumOutputs"), "name", 300);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                300);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m"), "resolved", 300);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900348U), "fileTimeLo", 300);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 300);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 300);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 300);
  emlrtAssign(&rhs300, emlrtCreateCellArray(0));
  emlrtAssign(&lhs300, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs300), "rhs", 300);
  emlrtAddField(*info, emlrtAliasP(lhs300), "lhs", 300);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m"), "context", 301);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 301);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                301);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 301);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 301);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 301);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 301);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 301);
  emlrtAssign(&rhs301, emlrtCreateCellArray(0));
  emlrtAssign(&lhs301, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs301), "rhs", 301);
  emlrtAddField(*info, emlrtAliasP(lhs301), "lhs", 301);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 302);
  emlrtAddField(*info, emlrt_marshallOut("output"), "name", 302);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                302);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m"), "resolved", 302);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900348U), "fileTimeLo", 302);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 302);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 302);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 302);
  emlrtAssign(&rhs302, emlrtCreateCellArray(0));
  emlrtAssign(&lhs302, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs302), "rhs", 302);
  emlrtAddField(*info, emlrtAliasP(lhs302), "lhs", 302);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m"), "context", 303);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 303);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                303);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 303);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 303);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 303);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 303);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 303);
  emlrtAssign(&rhs303, emlrtCreateCellArray(0));
  emlrtAssign(&lhs303, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs303), "rhs", 303);
  emlrtAddField(*info, emlrtAliasP(lhs303), "lhs", 303);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "context", 304);
  emlrtAddField(*info, emlrt_marshallOut("update"), "name", 304);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                304);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m"), "resolved", 304);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900352U), "fileTimeLo", 304);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 304);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 304);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 304);
  emlrtAssign(&rhs304, emlrtCreateCellArray(0));
  emlrtAssign(&lhs304, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs304), "rhs", 304);
  emlrtAddField(*info, emlrtAliasP(lhs304), "lhs", 304);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m"), "context", 305);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 305);
  emlrtAddField(*info, emlrt_marshallOut("comm.BPSKModulator"), "dominantType",
                305);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 305);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 305);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 305);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 305);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 305);
  emlrtAssign(&rhs305, emlrtCreateCellArray(0));
  emlrtAssign(&lhs305, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs305), "rhs", 305);
  emlrtAddField(*info, emlrtAliasP(lhs305), "lhs", 305);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 306);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 306);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 306);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 306);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 306);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 306);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 306);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 306);
  emlrtAssign(&rhs306, emlrtCreateCellArray(0));
  emlrtAssign(&lhs306, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs306), "rhs", 306);
  emlrtAddField(*info, emlrtAliasP(lhs306), "lhs", 306);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 307);
  emlrtAddField(*info, emlrt_marshallOut("mod"), "name", 307);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 307);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "resolved", 307);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 307);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 307);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 307);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 307);
  emlrtAssign(&rhs307, emlrtCreateCellArray(0));
  emlrtAssign(&lhs307, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs307), "rhs", 307);
  emlrtAddField(*info, emlrtAliasP(lhs307), "lhs", 307);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context", 308);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 308);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 308);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 308);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 308);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 308);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 308);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 308);
  emlrtAssign(&rhs308, emlrtCreateCellArray(0));
  emlrtAssign(&lhs308, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs308), "rhs", 308);
  emlrtAddField(*info, emlrtAliasP(lhs308), "lhs", 308);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context", 309);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 309);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 309);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                309);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 309);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 309);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 309);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 309);
  emlrtAssign(&rhs309, emlrtCreateCellArray(0));
  emlrtAssign(&lhs309, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs309), "rhs", 309);
  emlrtAddField(*info, emlrtAliasP(lhs309), "lhs", 309);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context", 310);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 310);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 310);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 310);
  emlrtAddField(*info, b_emlrt_marshallOut(1358207740U), "fileTimeLo", 310);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 310);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 310);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 310);
  emlrtAssign(&rhs310, emlrtCreateCellArray(0));
  emlrtAssign(&lhs310, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs310), "rhs", 310);
  emlrtAddField(*info, emlrtAliasP(lhs310), "lhs", 310);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                311);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 311);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 311);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                311);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 311);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 311);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 311);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 311);
  emlrtAssign(&rhs311, emlrtCreateCellArray(0));
  emlrtAssign(&lhs311, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs311), "rhs", 311);
  emlrtAddField(*info, emlrtAliasP(lhs311), "lhs", 311);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                312);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_floor"), "name", 312);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 312);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                "resolved", 312);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840326U), "fileTimeLo", 312);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 312);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 312);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 312);
  emlrtAssign(&rhs312, emlrtCreateCellArray(0));
  emlrtAssign(&lhs312, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs312), "rhs", 312);
  emlrtAddField(*info, emlrtAliasP(lhs312), "lhs", 312);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                313);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_round"), "name", 313);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 313);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m"),
                "resolved", 313);
  emlrtAddField(*info, b_emlrt_marshallOut(1307672838U), "fileTimeLo", 313);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 313);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 313);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 313);
  emlrtAssign(&rhs313, emlrtCreateCellArray(0));
  emlrtAssign(&lhs313, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs313), "rhs", 313);
  emlrtAddField(*info, emlrtAliasP(lhs313), "lhs", 313);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                314);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_abs"), "name", 314);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 314);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"),
                "resolved", 314);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840312U), "fileTimeLo", 314);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 314);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 314);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 314);
  emlrtAssign(&rhs314, emlrtCreateCellArray(0));
  emlrtAssign(&lhs314, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs314), "rhs", 314);
  emlrtAddField(*info, emlrtAliasP(lhs314), "lhs", 314);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                315);
  emlrtAddField(*info, emlrt_marshallOut("eps"), "name", 315);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 315);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "resolved", 315);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 315);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 315);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 315);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 315);
  emlrtAssign(&rhs315, emlrtCreateCellArray(0));
  emlrtAssign(&lhs315, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs315), "rhs", 315);
  emlrtAddField(*info, emlrtAliasP(lhs315), "lhs", 315);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 316);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_float_class"), "name", 316);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 316);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m"),
                "resolved", 316);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840382U), "fileTimeLo", 316);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 316);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 316);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 316);
  emlrtAssign(&rhs316, emlrtCreateCellArray(0));
  emlrtAssign(&lhs316, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs316), "rhs", 316);
  emlrtAddField(*info, emlrtAliasP(lhs316), "lhs", 316);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 317);
  emlrtAddField(*info, emlrt_marshallOut("eml_eps"), "name", 317);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 317);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m"), "resolved", 317);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 317);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 317);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 317);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 317);
  emlrtAssign(&rhs317, emlrtCreateCellArray(0));
  emlrtAssign(&lhs317, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs317), "rhs", 317);
  emlrtAddField(*info, emlrtAliasP(lhs317), "lhs", 317);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m"), "context", 318);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 318);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 318);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 318);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 318);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 318);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 318);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 318);
  emlrtAssign(&rhs318, emlrtCreateCellArray(0));
  emlrtAssign(&lhs318, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs318), "rhs", 318);
  emlrtAddField(*info, emlrtAliasP(lhs318), "lhs", 318);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                319);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 319);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 319);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 319);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 319);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 319);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 319);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 319);
  emlrtAssign(&rhs319, emlrtCreateCellArray(0));
  emlrtAssign(&lhs319, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs319), "rhs", 319);
  emlrtAddField(*info, emlrtAliasP(lhs319), "lhs", 319);
  emlrtDestroyArray(&rhs256);
  emlrtDestroyArray(&lhs256);
  emlrtDestroyArray(&rhs257);
  emlrtDestroyArray(&lhs257);
  emlrtDestroyArray(&rhs258);
  emlrtDestroyArray(&lhs258);
  emlrtDestroyArray(&rhs259);
  emlrtDestroyArray(&lhs259);
  emlrtDestroyArray(&rhs260);
  emlrtDestroyArray(&lhs260);
  emlrtDestroyArray(&rhs261);
  emlrtDestroyArray(&lhs261);
  emlrtDestroyArray(&rhs262);
  emlrtDestroyArray(&lhs262);
  emlrtDestroyArray(&rhs263);
  emlrtDestroyArray(&lhs263);
  emlrtDestroyArray(&rhs264);
  emlrtDestroyArray(&lhs264);
  emlrtDestroyArray(&rhs265);
  emlrtDestroyArray(&lhs265);
  emlrtDestroyArray(&rhs266);
  emlrtDestroyArray(&lhs266);
  emlrtDestroyArray(&rhs267);
  emlrtDestroyArray(&lhs267);
  emlrtDestroyArray(&rhs268);
  emlrtDestroyArray(&lhs268);
  emlrtDestroyArray(&rhs269);
  emlrtDestroyArray(&lhs269);
  emlrtDestroyArray(&rhs270);
  emlrtDestroyArray(&lhs270);
  emlrtDestroyArray(&rhs271);
  emlrtDestroyArray(&lhs271);
  emlrtDestroyArray(&rhs272);
  emlrtDestroyArray(&lhs272);
  emlrtDestroyArray(&rhs273);
  emlrtDestroyArray(&lhs273);
  emlrtDestroyArray(&rhs274);
  emlrtDestroyArray(&lhs274);
  emlrtDestroyArray(&rhs275);
  emlrtDestroyArray(&lhs275);
  emlrtDestroyArray(&rhs276);
  emlrtDestroyArray(&lhs276);
  emlrtDestroyArray(&rhs277);
  emlrtDestroyArray(&lhs277);
  emlrtDestroyArray(&rhs278);
  emlrtDestroyArray(&lhs278);
  emlrtDestroyArray(&rhs279);
  emlrtDestroyArray(&lhs279);
  emlrtDestroyArray(&rhs280);
  emlrtDestroyArray(&lhs280);
  emlrtDestroyArray(&rhs281);
  emlrtDestroyArray(&lhs281);
  emlrtDestroyArray(&rhs282);
  emlrtDestroyArray(&lhs282);
  emlrtDestroyArray(&rhs283);
  emlrtDestroyArray(&lhs283);
  emlrtDestroyArray(&rhs284);
  emlrtDestroyArray(&lhs284);
  emlrtDestroyArray(&rhs285);
  emlrtDestroyArray(&lhs285);
  emlrtDestroyArray(&rhs286);
  emlrtDestroyArray(&lhs286);
  emlrtDestroyArray(&rhs287);
  emlrtDestroyArray(&lhs287);
  emlrtDestroyArray(&rhs288);
  emlrtDestroyArray(&lhs288);
  emlrtDestroyArray(&rhs289);
  emlrtDestroyArray(&lhs289);
  emlrtDestroyArray(&rhs290);
  emlrtDestroyArray(&lhs290);
  emlrtDestroyArray(&rhs291);
  emlrtDestroyArray(&lhs291);
  emlrtDestroyArray(&rhs292);
  emlrtDestroyArray(&lhs292);
  emlrtDestroyArray(&rhs293);
  emlrtDestroyArray(&lhs293);
  emlrtDestroyArray(&rhs294);
  emlrtDestroyArray(&lhs294);
  emlrtDestroyArray(&rhs295);
  emlrtDestroyArray(&lhs295);
  emlrtDestroyArray(&rhs296);
  emlrtDestroyArray(&lhs296);
  emlrtDestroyArray(&rhs297);
  emlrtDestroyArray(&lhs297);
  emlrtDestroyArray(&rhs298);
  emlrtDestroyArray(&lhs298);
  emlrtDestroyArray(&rhs299);
  emlrtDestroyArray(&lhs299);
  emlrtDestroyArray(&rhs300);
  emlrtDestroyArray(&lhs300);
  emlrtDestroyArray(&rhs301);
  emlrtDestroyArray(&lhs301);
  emlrtDestroyArray(&rhs302);
  emlrtDestroyArray(&lhs302);
  emlrtDestroyArray(&rhs303);
  emlrtDestroyArray(&lhs303);
  emlrtDestroyArray(&rhs304);
  emlrtDestroyArray(&lhs304);
  emlrtDestroyArray(&rhs305);
  emlrtDestroyArray(&lhs305);
  emlrtDestroyArray(&rhs306);
  emlrtDestroyArray(&lhs306);
  emlrtDestroyArray(&rhs307);
  emlrtDestroyArray(&lhs307);
  emlrtDestroyArray(&rhs308);
  emlrtDestroyArray(&lhs308);
  emlrtDestroyArray(&rhs309);
  emlrtDestroyArray(&lhs309);
  emlrtDestroyArray(&rhs310);
  emlrtDestroyArray(&lhs310);
  emlrtDestroyArray(&rhs311);
  emlrtDestroyArray(&lhs311);
  emlrtDestroyArray(&rhs312);
  emlrtDestroyArray(&lhs312);
  emlrtDestroyArray(&rhs313);
  emlrtDestroyArray(&lhs313);
  emlrtDestroyArray(&rhs314);
  emlrtDestroyArray(&lhs314);
  emlrtDestroyArray(&rhs315);
  emlrtDestroyArray(&lhs315);
  emlrtDestroyArray(&rhs316);
  emlrtDestroyArray(&lhs316);
  emlrtDestroyArray(&rhs317);
  emlrtDestroyArray(&lhs317);
  emlrtDestroyArray(&rhs318);
  emlrtDestroyArray(&lhs318);
  emlrtDestroyArray(&rhs319);
  emlrtDestroyArray(&lhs319);
}

static void f_info_helper(const mxArray **info)
{
  const mxArray *rhs320 = NULL;
  const mxArray *lhs320 = NULL;
  const mxArray *rhs321 = NULL;
  const mxArray *lhs321 = NULL;
  const mxArray *rhs322 = NULL;
  const mxArray *lhs322 = NULL;
  const mxArray *rhs323 = NULL;
  const mxArray *lhs323 = NULL;
  const mxArray *rhs324 = NULL;
  const mxArray *lhs324 = NULL;
  const mxArray *rhs325 = NULL;
  const mxArray *lhs325 = NULL;
  const mxArray *rhs326 = NULL;
  const mxArray *lhs326 = NULL;
  const mxArray *rhs327 = NULL;
  const mxArray *lhs327 = NULL;
  const mxArray *rhs328 = NULL;
  const mxArray *lhs328 = NULL;
  const mxArray *rhs329 = NULL;
  const mxArray *lhs329 = NULL;
  const mxArray *rhs330 = NULL;
  const mxArray *lhs330 = NULL;
  const mxArray *rhs331 = NULL;
  const mxArray *lhs331 = NULL;
  const mxArray *rhs332 = NULL;
  const mxArray *lhs332 = NULL;
  const mxArray *rhs333 = NULL;
  const mxArray *lhs333 = NULL;
  const mxArray *rhs334 = NULL;
  const mxArray *lhs334 = NULL;
  const mxArray *rhs335 = NULL;
  const mxArray *lhs335 = NULL;
  const mxArray *rhs336 = NULL;
  const mxArray *lhs336 = NULL;
  const mxArray *rhs337 = NULL;
  const mxArray *lhs337 = NULL;
  const mxArray *rhs338 = NULL;
  const mxArray *lhs338 = NULL;
  const mxArray *rhs339 = NULL;
  const mxArray *lhs339 = NULL;
  const mxArray *rhs340 = NULL;
  const mxArray *lhs340 = NULL;
  const mxArray *rhs341 = NULL;
  const mxArray *lhs341 = NULL;
  const mxArray *rhs342 = NULL;
  const mxArray *lhs342 = NULL;
  const mxArray *rhs343 = NULL;
  const mxArray *lhs343 = NULL;
  const mxArray *rhs344 = NULL;
  const mxArray *lhs344 = NULL;
  const mxArray *rhs345 = NULL;
  const mxArray *lhs345 = NULL;
  const mxArray *rhs346 = NULL;
  const mxArray *lhs346 = NULL;
  const mxArray *rhs347 = NULL;
  const mxArray *lhs347 = NULL;
  const mxArray *rhs348 = NULL;
  const mxArray *lhs348 = NULL;
  const mxArray *rhs349 = NULL;
  const mxArray *lhs349 = NULL;
  const mxArray *rhs350 = NULL;
  const mxArray *lhs350 = NULL;
  const mxArray *rhs351 = NULL;
  const mxArray *lhs351 = NULL;
  const mxArray *rhs352 = NULL;
  const mxArray *lhs352 = NULL;
  const mxArray *rhs353 = NULL;
  const mxArray *lhs353 = NULL;
  const mxArray *rhs354 = NULL;
  const mxArray *lhs354 = NULL;
  const mxArray *rhs355 = NULL;
  const mxArray *lhs355 = NULL;
  const mxArray *rhs356 = NULL;
  const mxArray *lhs356 = NULL;
  const mxArray *rhs357 = NULL;
  const mxArray *lhs357 = NULL;
  const mxArray *rhs358 = NULL;
  const mxArray *lhs358 = NULL;
  const mxArray *rhs359 = NULL;
  const mxArray *lhs359 = NULL;
  const mxArray *rhs360 = NULL;
  const mxArray *lhs360 = NULL;
  const mxArray *rhs361 = NULL;
  const mxArray *lhs361 = NULL;
  const mxArray *rhs362 = NULL;
  const mxArray *lhs362 = NULL;
  const mxArray *rhs363 = NULL;
  const mxArray *lhs363 = NULL;
  const mxArray *rhs364 = NULL;
  const mxArray *lhs364 = NULL;
  const mxArray *rhs365 = NULL;
  const mxArray *lhs365 = NULL;
  const mxArray *rhs366 = NULL;
  const mxArray *lhs366 = NULL;
  const mxArray *rhs367 = NULL;
  const mxArray *lhs367 = NULL;
  const mxArray *rhs368 = NULL;
  const mxArray *lhs368 = NULL;
  const mxArray *rhs369 = NULL;
  const mxArray *lhs369 = NULL;
  const mxArray *rhs370 = NULL;
  const mxArray *lhs370 = NULL;
  const mxArray *rhs371 = NULL;
  const mxArray *lhs371 = NULL;
  const mxArray *rhs372 = NULL;
  const mxArray *lhs372 = NULL;
  const mxArray *rhs373 = NULL;
  const mxArray *lhs373 = NULL;
  const mxArray *rhs374 = NULL;
  const mxArray *lhs374 = NULL;
  const mxArray *rhs375 = NULL;
  const mxArray *lhs375 = NULL;
  const mxArray *rhs376 = NULL;
  const mxArray *lhs376 = NULL;
  const mxArray *rhs377 = NULL;
  const mxArray *lhs377 = NULL;
  const mxArray *rhs378 = NULL;
  const mxArray *lhs378 = NULL;
  const mxArray *rhs379 = NULL;
  const mxArray *lhs379 = NULL;
  const mxArray *rhs380 = NULL;
  const mxArray *lhs380 = NULL;
  const mxArray *rhs381 = NULL;
  const mxArray *lhs381 = NULL;
  const mxArray *rhs382 = NULL;
  const mxArray *lhs382 = NULL;
  const mxArray *rhs383 = NULL;
  const mxArray *lhs383 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 320);
  emlrtAddField(*info, emlrt_marshallOut("createsystemobjectv2"), "name", 320);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 320);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m"),
                "resolved", 320);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851958U), "fileTimeLo", 320);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 320);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 320);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 320);
  emlrtAssign(&rhs320, emlrtCreateCellArray(0));
  emlrtAssign(&lhs320, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs320), "rhs", 320);
  emlrtAddField(*info, emlrtAliasP(lhs320), "lhs", 320);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 321);
  emlrtAddField(*info, emlrt_marshallOut("step"), "name", 321);
  emlrtAddField(*info, emlrt_marshallOut("comm.PNSequence"), "dominantType", 321);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m"), "resolved", 321);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900350U), "fileTimeLo", 321);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 321);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 321);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 321);
  emlrtAssign(&rhs321, emlrtCreateCellArray(0));
  emlrtAssign(&lhs321, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs321), "rhs", 321);
  emlrtAddField(*info, emlrtAliasP(lhs321), "lhs", 321);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m"), "context", 322);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 322);
  emlrtAddField(*info, emlrt_marshallOut("comm.PNSequence"), "dominantType", 322);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 322);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900346U), "fileTimeLo", 322);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 322);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 322);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 322);
  emlrtAssign(&rhs322, emlrtCreateCellArray(0));
  emlrtAssign(&lhs322, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs322), "rhs", 322);
  emlrtAddField(*info, emlrtAliasP(lhs322), "lhs", 322);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 323);
  emlrtAddField(*info, emlrt_marshallOut("repmat"), "name", 323);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 323);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "resolved", 323);
  emlrtAddField(*info, b_emlrt_marshallOut(1352446460U), "fileTimeLo", 323);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 323);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 323);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 323);
  emlrtAssign(&rhs323, emlrtCreateCellArray(0));
  emlrtAssign(&lhs323, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs323), "rhs", 323);
  emlrtAddField(*info, emlrtAliasP(lhs323), "lhs", 323);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 324);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 324);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 324);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                324);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 324);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 324);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 324);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 324);
  emlrtAssign(&rhs324, emlrtCreateCellArray(0));
  emlrtAssign(&lhs324, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs324), "rhs", 324);
  emlrtAddField(*info, emlrtAliasP(lhs324), "lhs", 324);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 325);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_prod"), "name", 325);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 325);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m"),
                "resolved", 325);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 325);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 325);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 325);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 325);
  emlrtAssign(&rhs325, emlrtCreateCellArray(0));
  emlrtAssign(&lhs325, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs325), "rhs", 325);
  emlrtAddField(*info, emlrtAliasP(lhs325), "lhs", 325);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 326);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 326);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 326);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 326);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 326);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 326);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 326);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 326);
  emlrtAssign(&rhs326, emlrtCreateCellArray(0));
  emlrtAssign(&lhs326, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs326), "rhs", 326);
  emlrtAddField(*info, emlrtAliasP(lhs326), "lhs", 326);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 327);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 327);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 327);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 327);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 327);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 327);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 327);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 327);
  emlrtAssign(&rhs327, emlrtCreateCellArray(0));
  emlrtAssign(&lhs327, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs327), "rhs", 327);
  emlrtAddField(*info, emlrtAliasP(lhs327), "lhs", 327);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 328);
  emlrtAddField(*info, emlrt_marshallOut("unique"), "name", 328);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 328);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m"), "resolved", 328);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731880U), "fileTimeLo", 328);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 328);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 328);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 328);
  emlrtAssign(&rhs328, emlrtCreateCellArray(0));
  emlrtAssign(&lhs328, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs328), "rhs", 328);
  emlrtAddField(*info, emlrtAliasP(lhs328), "lhs", 328);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m"), "context", 329);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 329);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 329);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 329);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 329);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 329);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 329);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 329);
  emlrtAssign(&rhs329, emlrtCreateCellArray(0));
  emlrtAssign(&lhs329, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs329), "rhs", 329);
  emlrtAddField(*info, emlrtAliasP(lhs329), "lhs", 329);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector"),
                "context", 330);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 330);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 330);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 330);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 330);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 330);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 330);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 330);
  emlrtAssign(&rhs330, emlrtCreateCellArray(0));
  emlrtAssign(&lhs330, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs330), "rhs", 330);
  emlrtAddField(*info, emlrtAliasP(lhs330), "lhs", 330);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector"),
                "context", 331);
  emlrtAddField(*info, emlrt_marshallOut("eml_sort_idx"), "name", 331);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 331);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m"), "resolved",
                331);
  emlrtAddField(*info, b_emlrt_marshallOut(1305339604U), "fileTimeLo", 331);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 331);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 331);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 331);
  emlrtAssign(&rhs331, emlrtCreateCellArray(0));
  emlrtAssign(&lhs331, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs331), "rhs", 331);
  emlrtAddField(*info, emlrtAliasP(lhs331), "lhs", 331);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m"), "context",
                332);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 332);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 332);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 332);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 332);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 332);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 332);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 332);
  emlrtAssign(&rhs332, emlrtCreateCellArray(0));
  emlrtAssign(&lhs332, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs332), "rhs", 332);
  emlrtAddField(*info, emlrtAliasP(lhs332), "lhs", 332);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m"), "context",
                333);
  emlrtAddField(*info, emlrt_marshallOut("eml_size_ispow2"), "name", 333);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 333);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_ispow2.m"),
                "resolved", 333);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731870U), "fileTimeLo", 333);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 333);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 333);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 333);
  emlrtAssign(&rhs333, emlrtCreateCellArray(0));
  emlrtAssign(&lhs333, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs333), "rhs", 333);
  emlrtAddField(*info, emlrtAliasP(lhs333), "lhs", 333);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m"), "context",
                334);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 334);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 334);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 334);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 334);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 334);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 334);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 334);
  emlrtAssign(&rhs334, emlrtCreateCellArray(0));
  emlrtAssign(&lhs334, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs334), "rhs", 334);
  emlrtAddField(*info, emlrtAliasP(lhs334), "lhs", 334);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m"), "context",
                335);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 335);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 335);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 335);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 335);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 335);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 335);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 335);
  emlrtAssign(&rhs335, emlrtCreateCellArray(0));
  emlrtAssign(&lhs335, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs335), "rhs", 335);
  emlrtAddField(*info, emlrtAliasP(lhs335), "lhs", 335);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m"), "context",
                336);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 336);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 336);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 336);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 336);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 336);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 336);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 336);
  emlrtAssign(&rhs336, emlrtCreateCellArray(0));
  emlrtAssign(&lhs336, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs336), "rhs", 336);
  emlrtAddField(*info, emlrtAliasP(lhs336), "lhs", 336);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m"), "context",
                337);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 337);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 337);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 337);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 337);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 337);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 337);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 337);
  emlrtAssign(&rhs337, emlrtCreateCellArray(0));
  emlrtAssign(&lhs337, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs337), "rhs", 337);
  emlrtAddField(*info, emlrtAliasP(lhs337), "lhs", 337);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m"), "context",
                338);
  emlrtAddField(*info, emlrt_marshallOut("eml_sort_le"), "name", 338);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 338);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m"), "resolved",
                338);
  emlrtAddField(*info, b_emlrt_marshallOut(1292212110U), "fileTimeLo", 338);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 338);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 338);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 338);
  emlrtAssign(&rhs338, emlrtCreateCellArray(0));
  emlrtAssign(&lhs338, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs338), "rhs", 338);
  emlrtAddField(*info, emlrtAliasP(lhs338), "lhs", 338);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m!eml_sort_ascending_le"),
                "context", 339);
  emlrtAddField(*info, emlrt_marshallOut("eml_relop"), "name", 339);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 339);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m"), "resolved",
                339);
  emlrtAddField(*info, b_emlrt_marshallOut(1342472782U), "fileTimeLo", 339);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 339);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 339);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 339);
  emlrtAssign(&rhs339, emlrtCreateCellArray(0));
  emlrtAssign(&lhs339, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs339), "rhs", 339);
  emlrtAddField(*info, emlrtAliasP(lhs339), "lhs", 339);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_le.m!eml_sort_ascending_le"),
                "context", 340);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 340);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 340);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 340);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 340);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 340);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 340);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 340);
  emlrtAssign(&rhs340, emlrtCreateCellArray(0));
  emlrtAssign(&lhs340, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs340), "rhs", 340);
  emlrtAddField(*info, emlrtAliasP(lhs340), "lhs", 340);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m"), "context",
                341);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 341);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 341);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 341);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 341);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 341);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 341);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 341);
  emlrtAssign(&rhs341, emlrtCreateCellArray(0));
  emlrtAssign(&lhs341, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs341), "rhs", 341);
  emlrtAddField(*info, emlrtAliasP(lhs341), "lhs", 341);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_sort_idx.m"), "context",
                342);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 342);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 342);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 342);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 342);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 342);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 342);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 342);
  emlrtAssign(&rhs342, emlrtCreateCellArray(0));
  emlrtAssign(&lhs342, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs342), "rhs", 342);
  emlrtAddField(*info, emlrtAliasP(lhs342), "lhs", 342);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector"),
                "context", 343);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 343);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 343);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                343);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 343);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 343);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 343);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 343);
  emlrtAssign(&rhs343, emlrtCreateCellArray(0));
  emlrtAssign(&lhs343, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs343), "rhs", 343);
  emlrtAddField(*info, emlrtAliasP(lhs343), "lhs", 343);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector"),
                "context", 344);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 344);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 344);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 344);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 344);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 344);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 344);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 344);
  emlrtAssign(&rhs344, emlrtCreateCellArray(0));
  emlrtAssign(&lhs344, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs344), "rhs", 344);
  emlrtAddField(*info, emlrtAliasP(lhs344), "lhs", 344);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites"),
                "context", 345);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 345);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 345);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 345);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 345);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 345);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 345);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 345);
  emlrtAssign(&rhs345, emlrtCreateCellArray(0));
  emlrtAssign(&lhs345, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs345), "rhs", 345);
  emlrtAddField(*info, emlrtAliasP(lhs345), "lhs", 345);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites"),
                "context", 346);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 346);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 346);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 346);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 346);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 346);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 346);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 346);
  emlrtAssign(&rhs346, emlrtCreateCellArray(0));
  emlrtAssign(&lhs346, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs346), "rhs", 346);
  emlrtAddField(*info, emlrtAliasP(lhs346), "lhs", 346);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites"),
                "context", 347);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 347);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 347);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 347);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 347);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 347);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 347);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 347);
  emlrtAssign(&rhs347, emlrtCreateCellArray(0));
  emlrtAssign(&lhs347, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs347), "rhs", 347);
  emlrtAddField(*info, emlrtAliasP(lhs347), "lhs", 347);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites"),
                "context", 348);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 348);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 348);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 348);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 348);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 348);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 348);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 348);
  emlrtAssign(&rhs348, emlrtCreateCellArray(0));
  emlrtAssign(&lhs348, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs348), "rhs", 348);
  emlrtAddField(*info, emlrtAliasP(lhs348), "lhs", 348);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites"),
                "context", 349);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 349);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 349);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 349);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 349);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 349);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 349);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 349);
  emlrtAssign(&rhs349, emlrtCreateCellArray(0));
  emlrtAssign(&lhs349, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs349), "rhs", 349);
  emlrtAddField(*info, emlrtAliasP(lhs349), "lhs", 349);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!count_nonfinites"),
                "context", 350);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 350);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 350);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 350);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 350);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 350);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 350);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 350);
  emlrtAssign(&rhs350, emlrtCreateCellArray(0));
  emlrtAssign(&lhs350, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs350), "rhs", 350);
  emlrtAddField(*info, emlrtAliasP(lhs350), "lhs", 350);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector"),
                "context", 351);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 351);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 351);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 351);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 351);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 351);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 351);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 351);
  emlrtAssign(&rhs351, emlrtCreateCellArray(0));
  emlrtAssign(&lhs351, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs351), "rhs", 351);
  emlrtAddField(*info, emlrtAliasP(lhs351), "lhs", 351);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector"),
                "context", 352);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 352);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 352);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 352);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 352);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 352);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 352);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 352);
  emlrtAssign(&rhs352, emlrtCreateCellArray(0));
  emlrtAssign(&lhs352, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs352), "rhs", 352);
  emlrtAddField(*info, emlrtAliasP(lhs352), "lhs", 352);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector"),
                "context", 353);
  emlrtAddField(*info, emlrt_marshallOut("eml_safe_eq"), "name", 353);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 353);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m"), "resolved",
                353);
  emlrtAddField(*info, b_emlrt_marshallOut(1348213518U), "fileTimeLo", 353);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 353);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 353);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 353);
  emlrtAssign(&rhs353, emlrtCreateCellArray(0));
  emlrtAssign(&lhs353, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs353), "rhs", 353);
  emlrtAddField(*info, emlrtAliasP(lhs353), "lhs", 353);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m"), "context",
                354);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 354);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 354);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 354);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731852U), "fileTimeLo", 354);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 354);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 354);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 354);
  emlrtAssign(&rhs354, emlrtCreateCellArray(0));
  emlrtAssign(&lhs354, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs354), "rhs", 354);
  emlrtAddField(*info, emlrtAliasP(lhs354), "lhs", 354);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m"), "context",
                355);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 355);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 355);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 355);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 355);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 355);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 355);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 355);
  emlrtAssign(&rhs355, emlrtCreateCellArray(0));
  emlrtAssign(&lhs355, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs355), "rhs", 355);
  emlrtAddField(*info, emlrtAliasP(lhs355), "lhs", 355);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m"), "context",
                356);
  emlrtAddField(*info, emlrt_marshallOut("eps"), "name", 356);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 356);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "resolved", 356);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749596U), "fileTimeLo", 356);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 356);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 356);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 356);
  emlrtAssign(&rhs356, emlrtCreateCellArray(0));
  emlrtAssign(&lhs356, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs356), "rhs", 356);
  emlrtAddField(*info, emlrtAliasP(lhs356), "lhs", 356);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 357);
  emlrtAddField(*info, emlrt_marshallOut("eml_guarded_nan"), "name", 357);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 357);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m"),
                "resolved", 357);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840376U), "fileTimeLo", 357);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 357);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 357);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 357);
  emlrtAssign(&rhs357, emlrtCreateCellArray(0));
  emlrtAssign(&lhs357, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs357), "rhs", 357);
  emlrtAddField(*info, emlrtAliasP(lhs357), "lhs", 357);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_safe_eq.m"), "context",
                358);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 358);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 358);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 358);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 358);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 358);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 358);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 358);
  emlrtAssign(&rhs358, emlrtCreateCellArray(0));
  emlrtAssign(&lhs358, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs358), "rhs", 358);
  emlrtAddField(*info, emlrtAliasP(lhs358), "lhs", 358);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/unique.m!unique_vector"),
                "context", 359);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 359);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 359);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 359);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 359);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 359);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 359);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 359);
  emlrtAssign(&rhs359, emlrtCreateCellArray(0));
  emlrtAssign(&lhs359, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs359), "rhs", 359);
  emlrtAddField(*info, emlrtAliasP(lhs359), "lhs", 359);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 360);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 360);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 360);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 360);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 360);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 360);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 360);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 360);
  emlrtAssign(&rhs360, emlrtCreateCellArray(0));
  emlrtAssign(&lhs360, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs360), "rhs", 360);
  emlrtAddField(*info, emlrtAliasP(lhs360), "lhs", 360);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 361);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.errorIf"), "name", 361);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 361);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"),
                "resolved", 361);
  emlrtAddField(*info, b_emlrt_marshallOut(1334093538U), "fileTimeLo", 361);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 361);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 361);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 361);
  emlrtAssign(&rhs361, emlrtCreateCellArray(0));
  emlrtAssign(&lhs361, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs361), "rhs", 361);
  emlrtAddField(*info, emlrtAliasP(lhs361), "lhs", 361);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 362);
  emlrtAddField(*info, emlrt_marshallOut("ismatrix"), "name", 362);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 362);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m"), "resolved",
                362);
  emlrtAddField(*info, b_emlrt_marshallOut(1331326458U), "fileTimeLo", 362);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 362);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 362);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 362);
  emlrtAssign(&rhs362, emlrtCreateCellArray(0));
  emlrtAssign(&lhs362, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs362), "rhs", 362);
  emlrtAddField(*info, emlrtAliasP(lhs362), "lhs", 362);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 363);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 363);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 363);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 363);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 363);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 363);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 363);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 363);
  emlrtAssign(&rhs363, emlrtCreateCellArray(0));
  emlrtAssign(&lhs363, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs363), "rhs", 363);
  emlrtAddField(*info, emlrtAliasP(lhs363), "lhs", 363);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "context", 364);
  emlrtAddField(*info, emlrt_marshallOut("repmat"), "name", 364);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 364);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "resolved", 364);
  emlrtAddField(*info, b_emlrt_marshallOut(1352446460U), "fileTimeLo", 364);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 364);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 364);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 364);
  emlrtAssign(&rhs364, emlrtCreateCellArray(0));
  emlrtAssign(&lhs364, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs364), "rhs", 364);
  emlrtAddField(*info, emlrtAliasP(lhs364), "lhs", 364);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 365);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 365);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 365);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "resolved", 365);
  emlrtAddField(*info, b_emlrt_marshallOut(1366183842U), "fileTimeLo", 365);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 365);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 365);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 365);
  emlrtAssign(&rhs365, emlrtCreateCellArray(0));
  emlrtAssign(&lhs365, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs365), "rhs", 365);
  emlrtAddField(*info, emlrtAliasP(lhs365), "lhs", 365);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 366);
  emlrtAddField(*info, emlrt_marshallOut("repmat"), "name", 366);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 366);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "resolved", 366);
  emlrtAddField(*info, b_emlrt_marshallOut(1352446460U), "fileTimeLo", 366);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 366);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 366);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 366);
  emlrtAssign(&rhs366, emlrtCreateCellArray(0));
  emlrtAssign(&lhs366, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs366), "rhs", 366);
  emlrtAddField(*info, emlrtAliasP(lhs366), "lhs", 366);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 367);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 367);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 367);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 367);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 367);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 367);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 367);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 367);
  emlrtAssign(&rhs367, emlrtCreateCellArray(0));
  emlrtAssign(&lhs367, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs367), "rhs", 367);
  emlrtAddField(*info, emlrtAliasP(lhs367), "lhs", 367);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "context", 368);
  emlrtAddField(*info, emlrt_marshallOut("sub2ind"), "name", 368);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 368);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m"), "resolved",
                368);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731860U), "fileTimeLo", 368);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 368);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 368);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 368);
  emlrtAssign(&rhs368, emlrtCreateCellArray(0));
  emlrtAssign(&lhs368, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs368), "rhs", 368);
  emlrtAddField(*info, emlrtAliasP(lhs368), "lhs", 368);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m"), "context", 369);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 369);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 369);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 369);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 369);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 369);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 369);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 369);
  emlrtAssign(&rhs369, emlrtCreateCellArray(0));
  emlrtAssign(&lhs369, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs369), "rhs", 369);
  emlrtAddField(*info, emlrtAliasP(lhs369), "lhs", 369);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m"), "context", 370);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 370);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 370);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 370);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 370);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 370);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 370);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 370);
  emlrtAssign(&rhs370, emlrtCreateCellArray(0));
  emlrtAssign(&lhs370, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs370), "rhs", 370);
  emlrtAddField(*info, emlrtAliasP(lhs370), "lhs", 370);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind"),
                "context", 371);
  emlrtAddField(*info, emlrt_marshallOut("min"), "name", 371);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 371);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "resolved", 371);
  emlrtAddField(*info, b_emlrt_marshallOut(1311276918U), "fileTimeLo", 371);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 371);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 371);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 371);
  emlrtAssign(&rhs371, emlrtCreateCellArray(0));
  emlrtAssign(&lhs371, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs371), "rhs", 371);
  emlrtAddField(*info, emlrtAliasP(lhs371), "lhs", 371);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 372);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 372);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 372);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 372);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 372);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 372);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 372);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 372);
  emlrtAssign(&rhs372, emlrtCreateCellArray(0));
  emlrtAssign(&lhs372, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs372), "rhs", 372);
  emlrtAddField(*info, emlrtAliasP(lhs372), "lhs", 372);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!allinrange"),
                "context", 373);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexIntRelop"), "name",
                373);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 373);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 373);
  emlrtAddField(*info, b_emlrt_marshallOut(1326749922U), "fileTimeLo", 373);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 373);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 373);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 373);
  emlrtAssign(&rhs373, emlrtCreateCellArray(0));
  emlrtAssign(&lhs373, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs373), "rhs", 373);
  emlrtAddField(*info, emlrtAliasP(lhs373), "lhs", 373);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind"),
                "context", 374);
  emlrtAddField(*info, emlrt_marshallOut("isequal"), "name", 374);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 374);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "resolved",
                374);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840358U), "fileTimeLo", 374);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 374);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 374);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 374);
  emlrtAssign(&rhs374, emlrtCreateCellArray(0));
  emlrtAssign(&lhs374, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs374), "rhs", 374);
  emlrtAddField(*info, emlrtAliasP(lhs374), "lhs", 374);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar"),
                "context", 375);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 375);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 375);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 375);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 375);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 375);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 375);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 375);
  emlrtAssign(&rhs375, emlrtCreateCellArray(0));
  emlrtAssign(&lhs375, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs375), "rhs", 375);
  emlrtAddField(*info, emlrtAliasP(lhs375), "lhs", 375);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!prodsub"),
                "context", 376);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 376);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 376);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 376);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 376);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 376);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 376);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 376);
  emlrtAssign(&rhs376, emlrtCreateCellArray(0));
  emlrtAssign(&lhs376, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs376), "rhs", 376);
  emlrtAddField(*info, emlrtAliasP(lhs376), "lhs", 376);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!prodsub"),
                "context", 377);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 377);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 377);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 377);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 377);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 377);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 377);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 377);
  emlrtAssign(&rhs377, emlrtCreateCellArray(0));
  emlrtAssign(&lhs377, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs377), "rhs", 377);
  emlrtAddField(*info, emlrtAliasP(lhs377), "lhs", 377);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind"),
                "context", 378);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 378);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 378);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 378);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 378);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 378);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 378);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 378);
  emlrtAssign(&rhs378, emlrtCreateCellArray(0));
  emlrtAssign(&lhs378, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs378), "rhs", 378);
  emlrtAddField(*info, emlrtAliasP(lhs378), "lhs", 378);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind"),
                "context", 379);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 379);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 379);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 379);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 379);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 379);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 379);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 379);
  emlrtAssign(&rhs379, emlrtCreateCellArray(0));
  emlrtAssign(&lhs379, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs379), "rhs", 379);
  emlrtAddField(*info, emlrtAliasP(lhs379), "lhs", 379);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind"),
                "context", 380);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 380);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 380);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 380);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 380);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 380);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 380);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 380);
  emlrtAssign(&rhs380, emlrtCreateCellArray(0));
  emlrtAssign(&lhs380, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs380), "rhs", 380);
  emlrtAddField(*info, emlrtAliasP(lhs380), "lhs", 380);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind"),
                "context", 381);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 381);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 381);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 381);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 381);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 381);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 381);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 381);
  emlrtAssign(&rhs381, emlrtCreateCellArray(0));
  emlrtAssign(&lhs381, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs381), "rhs", 381);
  emlrtAddField(*info, emlrtAliasP(lhs381), "lhs", 381);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/sub2ind.m!eml_sub2ind"),
                "context", 382);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 382);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 382);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                382);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840396U), "fileTimeLo", 382);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 382);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 382);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 382);
  emlrtAssign(&rhs382, emlrtCreateCellArray(0));
  emlrtAssign(&lhs382, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs382), "rhs", 382);
  emlrtAddField(*info, emlrtAliasP(lhs382), "lhs", 382);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m"), "context", 383);
  emlrtAddField(*info, emlrt_marshallOut("OFDMBase"), "name", 383);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 383);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMBase.m"), "resolved", 383);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516407U), "fileTimeLo", 383);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 383);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 383);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 383);
  emlrtAssign(&rhs383, emlrtCreateCellArray(0));
  emlrtAssign(&lhs383, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs383), "rhs", 383);
  emlrtAddField(*info, emlrtAliasP(lhs383), "lhs", 383);
  emlrtDestroyArray(&rhs320);
  emlrtDestroyArray(&lhs320);
  emlrtDestroyArray(&rhs321);
  emlrtDestroyArray(&lhs321);
  emlrtDestroyArray(&rhs322);
  emlrtDestroyArray(&lhs322);
  emlrtDestroyArray(&rhs323);
  emlrtDestroyArray(&lhs323);
  emlrtDestroyArray(&rhs324);
  emlrtDestroyArray(&lhs324);
  emlrtDestroyArray(&rhs325);
  emlrtDestroyArray(&lhs325);
  emlrtDestroyArray(&rhs326);
  emlrtDestroyArray(&lhs326);
  emlrtDestroyArray(&rhs327);
  emlrtDestroyArray(&lhs327);
  emlrtDestroyArray(&rhs328);
  emlrtDestroyArray(&lhs328);
  emlrtDestroyArray(&rhs329);
  emlrtDestroyArray(&lhs329);
  emlrtDestroyArray(&rhs330);
  emlrtDestroyArray(&lhs330);
  emlrtDestroyArray(&rhs331);
  emlrtDestroyArray(&lhs331);
  emlrtDestroyArray(&rhs332);
  emlrtDestroyArray(&lhs332);
  emlrtDestroyArray(&rhs333);
  emlrtDestroyArray(&lhs333);
  emlrtDestroyArray(&rhs334);
  emlrtDestroyArray(&lhs334);
  emlrtDestroyArray(&rhs335);
  emlrtDestroyArray(&lhs335);
  emlrtDestroyArray(&rhs336);
  emlrtDestroyArray(&lhs336);
  emlrtDestroyArray(&rhs337);
  emlrtDestroyArray(&lhs337);
  emlrtDestroyArray(&rhs338);
  emlrtDestroyArray(&lhs338);
  emlrtDestroyArray(&rhs339);
  emlrtDestroyArray(&lhs339);
  emlrtDestroyArray(&rhs340);
  emlrtDestroyArray(&lhs340);
  emlrtDestroyArray(&rhs341);
  emlrtDestroyArray(&lhs341);
  emlrtDestroyArray(&rhs342);
  emlrtDestroyArray(&lhs342);
  emlrtDestroyArray(&rhs343);
  emlrtDestroyArray(&lhs343);
  emlrtDestroyArray(&rhs344);
  emlrtDestroyArray(&lhs344);
  emlrtDestroyArray(&rhs345);
  emlrtDestroyArray(&lhs345);
  emlrtDestroyArray(&rhs346);
  emlrtDestroyArray(&lhs346);
  emlrtDestroyArray(&rhs347);
  emlrtDestroyArray(&lhs347);
  emlrtDestroyArray(&rhs348);
  emlrtDestroyArray(&lhs348);
  emlrtDestroyArray(&rhs349);
  emlrtDestroyArray(&lhs349);
  emlrtDestroyArray(&rhs350);
  emlrtDestroyArray(&lhs350);
  emlrtDestroyArray(&rhs351);
  emlrtDestroyArray(&lhs351);
  emlrtDestroyArray(&rhs352);
  emlrtDestroyArray(&lhs352);
  emlrtDestroyArray(&rhs353);
  emlrtDestroyArray(&lhs353);
  emlrtDestroyArray(&rhs354);
  emlrtDestroyArray(&lhs354);
  emlrtDestroyArray(&rhs355);
  emlrtDestroyArray(&lhs355);
  emlrtDestroyArray(&rhs356);
  emlrtDestroyArray(&lhs356);
  emlrtDestroyArray(&rhs357);
  emlrtDestroyArray(&lhs357);
  emlrtDestroyArray(&rhs358);
  emlrtDestroyArray(&lhs358);
  emlrtDestroyArray(&rhs359);
  emlrtDestroyArray(&lhs359);
  emlrtDestroyArray(&rhs360);
  emlrtDestroyArray(&lhs360);
  emlrtDestroyArray(&rhs361);
  emlrtDestroyArray(&lhs361);
  emlrtDestroyArray(&rhs362);
  emlrtDestroyArray(&lhs362);
  emlrtDestroyArray(&rhs363);
  emlrtDestroyArray(&lhs363);
  emlrtDestroyArray(&rhs364);
  emlrtDestroyArray(&lhs364);
  emlrtDestroyArray(&rhs365);
  emlrtDestroyArray(&lhs365);
  emlrtDestroyArray(&rhs366);
  emlrtDestroyArray(&lhs366);
  emlrtDestroyArray(&rhs367);
  emlrtDestroyArray(&lhs367);
  emlrtDestroyArray(&rhs368);
  emlrtDestroyArray(&lhs368);
  emlrtDestroyArray(&rhs369);
  emlrtDestroyArray(&lhs369);
  emlrtDestroyArray(&rhs370);
  emlrtDestroyArray(&lhs370);
  emlrtDestroyArray(&rhs371);
  emlrtDestroyArray(&lhs371);
  emlrtDestroyArray(&rhs372);
  emlrtDestroyArray(&lhs372);
  emlrtDestroyArray(&rhs373);
  emlrtDestroyArray(&lhs373);
  emlrtDestroyArray(&rhs374);
  emlrtDestroyArray(&lhs374);
  emlrtDestroyArray(&rhs375);
  emlrtDestroyArray(&lhs375);
  emlrtDestroyArray(&rhs376);
  emlrtDestroyArray(&lhs376);
  emlrtDestroyArray(&rhs377);
  emlrtDestroyArray(&lhs377);
  emlrtDestroyArray(&rhs378);
  emlrtDestroyArray(&lhs378);
  emlrtDestroyArray(&rhs379);
  emlrtDestroyArray(&lhs379);
  emlrtDestroyArray(&rhs380);
  emlrtDestroyArray(&lhs380);
  emlrtDestroyArray(&rhs381);
  emlrtDestroyArray(&lhs381);
  emlrtDestroyArray(&rhs382);
  emlrtDestroyArray(&lhs382);
  emlrtDestroyArray(&rhs383);
  emlrtDestroyArray(&lhs383);
}

static void g_info_helper(const mxArray **info)
{
  const mxArray *rhs384 = NULL;
  const mxArray *lhs384 = NULL;
  const mxArray *rhs385 = NULL;
  const mxArray *lhs385 = NULL;
  const mxArray *rhs386 = NULL;
  const mxArray *lhs386 = NULL;
  const mxArray *rhs387 = NULL;
  const mxArray *lhs387 = NULL;
  const mxArray *rhs388 = NULL;
  const mxArray *lhs388 = NULL;
  const mxArray *rhs389 = NULL;
  const mxArray *lhs389 = NULL;
  const mxArray *rhs390 = NULL;
  const mxArray *lhs390 = NULL;
  const mxArray *rhs391 = NULL;
  const mxArray *lhs391 = NULL;
  const mxArray *rhs392 = NULL;
  const mxArray *lhs392 = NULL;
  const mxArray *rhs393 = NULL;
  const mxArray *lhs393 = NULL;
  const mxArray *rhs394 = NULL;
  const mxArray *lhs394 = NULL;
  const mxArray *rhs395 = NULL;
  const mxArray *lhs395 = NULL;
  const mxArray *rhs396 = NULL;
  const mxArray *lhs396 = NULL;
  const mxArray *rhs397 = NULL;
  const mxArray *lhs397 = NULL;
  const mxArray *rhs398 = NULL;
  const mxArray *lhs398 = NULL;
  const mxArray *rhs399 = NULL;
  const mxArray *lhs399 = NULL;
  const mxArray *rhs400 = NULL;
  const mxArray *lhs400 = NULL;
  const mxArray *rhs401 = NULL;
  const mxArray *lhs401 = NULL;
  const mxArray *rhs402 = NULL;
  const mxArray *lhs402 = NULL;
  const mxArray *rhs403 = NULL;
  const mxArray *lhs403 = NULL;
  const mxArray *rhs404 = NULL;
  const mxArray *lhs404 = NULL;
  const mxArray *rhs405 = NULL;
  const mxArray *lhs405 = NULL;
  const mxArray *rhs406 = NULL;
  const mxArray *lhs406 = NULL;
  const mxArray *rhs407 = NULL;
  const mxArray *lhs407 = NULL;
  const mxArray *rhs408 = NULL;
  const mxArray *lhs408 = NULL;
  const mxArray *rhs409 = NULL;
  const mxArray *lhs409 = NULL;
  const mxArray *rhs410 = NULL;
  const mxArray *lhs410 = NULL;
  const mxArray *rhs411 = NULL;
  const mxArray *lhs411 = NULL;
  const mxArray *rhs412 = NULL;
  const mxArray *lhs412 = NULL;
  const mxArray *rhs413 = NULL;
  const mxArray *lhs413 = NULL;
  const mxArray *rhs414 = NULL;
  const mxArray *lhs414 = NULL;
  const mxArray *rhs415 = NULL;
  const mxArray *lhs415 = NULL;
  const mxArray *rhs416 = NULL;
  const mxArray *lhs416 = NULL;
  const mxArray *rhs417 = NULL;
  const mxArray *lhs417 = NULL;
  const mxArray *rhs418 = NULL;
  const mxArray *lhs418 = NULL;
  const mxArray *rhs419 = NULL;
  const mxArray *lhs419 = NULL;
  const mxArray *rhs420 = NULL;
  const mxArray *lhs420 = NULL;
  const mxArray *rhs421 = NULL;
  const mxArray *lhs421 = NULL;
  const mxArray *rhs422 = NULL;
  const mxArray *lhs422 = NULL;
  const mxArray *rhs423 = NULL;
  const mxArray *lhs423 = NULL;
  const mxArray *rhs424 = NULL;
  const mxArray *lhs424 = NULL;
  const mxArray *rhs425 = NULL;
  const mxArray *lhs425 = NULL;
  const mxArray *rhs426 = NULL;
  const mxArray *lhs426 = NULL;
  const mxArray *rhs427 = NULL;
  const mxArray *lhs427 = NULL;
  const mxArray *rhs428 = NULL;
  const mxArray *lhs428 = NULL;
  const mxArray *rhs429 = NULL;
  const mxArray *lhs429 = NULL;
  const mxArray *rhs430 = NULL;
  const mxArray *lhs430 = NULL;
  const mxArray *rhs431 = NULL;
  const mxArray *lhs431 = NULL;
  const mxArray *rhs432 = NULL;
  const mxArray *lhs432 = NULL;
  const mxArray *rhs433 = NULL;
  const mxArray *lhs433 = NULL;
  const mxArray *rhs434 = NULL;
  const mxArray *lhs434 = NULL;
  const mxArray *rhs435 = NULL;
  const mxArray *lhs435 = NULL;
  const mxArray *rhs436 = NULL;
  const mxArray *lhs436 = NULL;
  const mxArray *rhs437 = NULL;
  const mxArray *lhs437 = NULL;
  const mxArray *rhs438 = NULL;
  const mxArray *lhs438 = NULL;
  const mxArray *rhs439 = NULL;
  const mxArray *lhs439 = NULL;
  const mxArray *rhs440 = NULL;
  const mxArray *lhs440 = NULL;
  const mxArray *rhs441 = NULL;
  const mxArray *lhs441 = NULL;
  const mxArray *rhs442 = NULL;
  const mxArray *lhs442 = NULL;
  const mxArray *rhs443 = NULL;
  const mxArray *lhs443 = NULL;
  const mxArray *rhs444 = NULL;
  const mxArray *lhs444 = NULL;
  const mxArray *rhs445 = NULL;
  const mxArray *lhs445 = NULL;
  const mxArray *rhs446 = NULL;
  const mxArray *lhs446 = NULL;
  const mxArray *rhs447 = NULL;
  const mxArray *lhs447 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 384);
  emlrtAddField(*info, emlrt_marshallOut("OFDMDemodulator"), "name", 384);
  emlrtAddField(*info, emlrt_marshallOut("OFDMModulator"), "dominantType", 384);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m"), "resolved",
                384);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516407U), "fileTimeLo", 384);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 384);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 384);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 384);
  emlrtAssign(&rhs384, emlrtCreateCellArray(0));
  emlrtAssign(&lhs384, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs384), "rhs", 384);
  emlrtAddField(*info, emlrtAliasP(lhs384), "lhs", 384);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 385);
  emlrtAddField(*info, emlrt_marshallOut("sum"), "name", 385);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 385);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "resolved", 385);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 385);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 385);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 385);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 385);
  emlrtAssign(&rhs385, emlrtCreateCellArray(0));
  emlrtAssign(&lhs385, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs385), "rhs", 385);
  emlrtAddField(*info, emlrtAliasP(lhs385), "lhs", 385);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "context", 386);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 386);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 386);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "resolved", 386);
  emlrtAddField(*info, b_emlrt_marshallOut(1366183842U), "fileTimeLo", 386);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 386);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 386);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 386);
  emlrtAssign(&rhs386, emlrtCreateCellArray(0));
  emlrtAssign(&lhs386, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs386), "rhs", 386);
  emlrtAddField(*info, emlrtAliasP(lhs386), "lhs", 386);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                387);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.System"), "name",
                387);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 387);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "resolved", 387);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327396U), "fileTimeLo", 387);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 387);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 387);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 387);
  emlrtAssign(&rhs387, emlrtCreateCellArray(0));
  emlrtAssign(&lhs387, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs387), "rhs", 387);
  emlrtAddField(*info, emlrtAliasP(lhs387), "lhs", 387);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                388);
  emlrtAddField(*info, emlrt_marshallOut("coder.ExternalDependency"), "name",
                388);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 388);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/coder/coder/+coder/ExternalDependency.m"),
                "resolved", 388);
  emlrtAddField(*info, b_emlrt_marshallOut(1374217818U), "fileTimeLo", 388);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 388);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 388);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 388);
  emlrtAssign(&rhs388, emlrtCreateCellArray(0));
  emlrtAssign(&lhs388, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs388), "rhs", 388);
  emlrtAddField(*info, emlrtAliasP(lhs388), "lhs", 388);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 389);
  emlrtAddField(*info, emlrt_marshallOut("comm.internal.SDRuBase"), "name", 389);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 389);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "resolved",
                389);
  emlrtAddField(*info, b_emlrt_marshallOut(1376024840U), "fileTimeLo", 389);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 389);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 389);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 389);
  emlrtAssign(&rhs389, emlrtCreateCellArray(0));
  emlrtAssign(&lhs389, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs389), "rhs", 389);
  emlrtAddField(*info, emlrtAliasP(lhs389), "lhs", 389);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "context", 390);
  emlrtAddField(*info, emlrt_marshallOut("comm.SDRuTransmitter"), "name", 390);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 390);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "resolved", 390);
  emlrtAddField(*info, b_emlrt_marshallOut(1376024840U), "fileTimeLo", 390);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 390);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 390);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 390);
  emlrtAssign(&rhs390, emlrtCreateCellArray(0));
  emlrtAssign(&lhs390, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs390), "rhs", 390);
  emlrtAddField(*info, emlrtAliasP(lhs390), "lhs", 390);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                391);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.getHostName"), "name",
                391);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 391);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/getHostName.m"),
                "resolved", 391);
  emlrtAddField(*info, b_emlrt_marshallOut(1327440774U), "fileTimeLo", 391);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 391);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 391);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 391);
  emlrtAssign(&rhs391, emlrtCreateCellArray(0));
  emlrtAssign(&lhs391, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs391), "rhs", 391);
  emlrtAddField(*info, emlrtAliasP(lhs391), "lhs", 391);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                392);
  emlrtAddField(*info, emlrt_marshallOut("randi"), "name", 392);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 392);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m"), "resolved",
                392);
  emlrtAddField(*info, b_emlrt_marshallOut(1366183846U), "fileTimeLo", 392);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 392);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 392);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 392);
  emlrtAssign(&rhs392, emlrtCreateCellArray(0));
  emlrtAssign(&lhs392, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs392), "rhs", 392);
  emlrtAddField(*info, emlrtAliasP(lhs392), "lhs", 392);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                393);
  emlrtAddField(*info, emlrt_marshallOut("char"), "name", 393);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 393);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m"), "resolved", 393);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751568U), "fileTimeLo", 393);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 393);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 393);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 393);
  emlrtAssign(&rhs393, emlrtCreateCellArray(0));
  emlrtAssign(&lhs393, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs393), "rhs", 393);
  emlrtAddField(*info, emlrtAliasP(lhs393), "lhs", 393);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 394);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.setProp"), "name", 394);
  emlrtAddField(*info, emlrt_marshallOut("comm.SDRuTransmitter"), "dominantType",
                394);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p"),
                "resolved", 394);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 394);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 394);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 394);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 394);
  emlrtAssign(&rhs394, emlrtCreateCellArray(0));
  emlrtAssign(&lhs394, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs394), "rhs", 394);
  emlrtAddField(*info, emlrtAliasP(lhs394), "lhs", 394);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                395);
  emlrtAddField(*info, emlrt_marshallOut("checkIPAddressFormat"), "name", 395);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 395);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/checkIPAddressFormat.m"), "resolved", 395);
  emlrtAddField(*info, b_emlrt_marshallOut(1351913716U), "fileTimeLo", 395);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 395);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 395);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 395);
  emlrtAssign(&rhs395, emlrtCreateCellArray(0));
  emlrtAssign(&lhs395, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs395), "rhs", 395);
  emlrtAddField(*info, emlrtAliasP(lhs395), "lhs", 395);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/checkIPAddressFormat.m"), "context", 396);
  emlrtAddField(*info, emlrt_marshallOut("nargchk"), "name", 396);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 396);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m"), "resolved", 396);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731866U), "fileTimeLo", 396);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 396);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 396);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 396);
  emlrtAssign(&rhs396, emlrtCreateCellArray(0));
  emlrtAssign(&lhs396, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs396), "rhs", 396);
  emlrtAddField(*info, emlrtAliasP(lhs396), "lhs", 396);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m"), "context", 397);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 397);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 397);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 397);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 397);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 397);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 397);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 397);
  emlrtAssign(&rhs397, emlrtCreateCellArray(0));
  emlrtAssign(&lhs397, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs397), "rhs", 397);
  emlrtAddField(*info, emlrtAliasP(lhs397), "lhs", 397);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/nargchk.m"), "context", 398);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 398);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 398);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 398);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 398);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 398);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 398);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 398);
  emlrtAssign(&rhs398, emlrtCreateCellArray(0));
  emlrtAssign(&lhs398, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs398), "rhs", 398);
  emlrtAddField(*info, emlrtAliasP(lhs398), "lhs", 398);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/checkIPAddressFormat.m"), "context", 399);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.errorIf"), "name", 399);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 399);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"),
                "resolved", 399);
  emlrtAddField(*info, b_emlrt_marshallOut(1334093538U), "fileTimeLo", 399);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 399);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 399);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 399);
  emlrtAssign(&rhs399, emlrtCreateCellArray(0));
  emlrtAssign(&lhs399, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs399), "rhs", 399);
  emlrtAddField(*info, emlrtAliasP(lhs399), "lhs", 399);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/checkIPAddressFormat.m"), "context", 400);
  emlrtAddField(*info, emlrt_marshallOut("isrow"), "name", 400);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 400);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m"), "resolved", 400);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531960U), "fileTimeLo", 400);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 400);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 400);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 400);
  emlrtAssign(&rhs400, emlrtCreateCellArray(0));
  emlrtAssign(&lhs400, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs400), "rhs", 400);
  emlrtAddField(*info, emlrtAliasP(lhs400), "lhs", 400);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/checkIPAddressFormat.m"), "context", 401);
  emlrtAddField(*info, emlrt_marshallOut("find"), "name", 401);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 401);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/find.m"), "resolved", 401);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 401);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 401);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 401);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 401);
  emlrtAssign(&rhs401, emlrtCreateCellArray(0));
  emlrtAssign(&lhs401, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs401), "rhs", 401);
  emlrtAddField(*info, emlrtAliasP(lhs401), "lhs", 401);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/checkIPAddressFormat.m"), "context", 402);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 402);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 402);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 402);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 402);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 402);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 402);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 402);
  emlrtAssign(&rhs402, emlrtCreateCellArray(0));
  emlrtAssign(&lhs402, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs402), "rhs", 402);
  emlrtAddField(*info, emlrtAliasP(lhs402), "lhs", 402);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/checkIPAddressFormat.m"), "context", 403);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 403);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 403);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 403);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 403);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 403);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 403);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 403);
  emlrtAssign(&rhs403, emlrtCreateCellArray(0));
  emlrtAssign(&lhs403, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs403), "rhs", 403);
  emlrtAddField(*info, emlrtAliasP(lhs403), "lhs", 403);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/checkIPAddressFormat.m!checkNumeric"),
                "context", 404);
  emlrtAddField(*info, emlrt_marshallOut("any"), "name", 404);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 404);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/any.m"), "resolved", 404);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731876U), "fileTimeLo", 404);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 404);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 404);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 404);
  emlrtAssign(&rhs404, emlrtCreateCellArray(0));
  emlrtAssign(&lhs404, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs404), "rhs", 404);
  emlrtAddField(*info, emlrtAliasP(lhs404), "lhs", 404);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                405);
  emlrtAddField(*info, emlrt_marshallOut("eml_matrix_vstride"), "name", 405);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 405);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m"),
                "resolved", 405);
  emlrtAddField(*info, b_emlrt_marshallOut(1360303950U), "fileTimeLo", 405);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 405);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 405);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 405);
  emlrtAssign(&rhs405, emlrtCreateCellArray(0));
  emlrtAssign(&lhs405, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs405), "rhs", 405);
  emlrtAddField(*info, emlrtAliasP(lhs405), "lhs", 405);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                406);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 406);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 406);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 406);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 406);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 406);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 406);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 406);
  emlrtAssign(&rhs406, emlrtCreateCellArray(0));
  emlrtAssign(&lhs406, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs406), "rhs", 406);
  emlrtAddField(*info, emlrtAliasP(lhs406), "lhs", 406);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                407);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 407);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 407);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 407);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840380U), "fileTimeLo", 407);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 407);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 407);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 407);
  emlrtAssign(&rhs407, emlrtCreateCellArray(0));
  emlrtAssign(&lhs407, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs407), "rhs", 407);
  emlrtAddField(*info, emlrtAliasP(lhs407), "lhs", 407);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                408);
  emlrtAddField(*info, emlrt_marshallOut("eml_matrix_npages"), "name", 408);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 408);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m"),
                "resolved", 408);
  emlrtAddField(*info, b_emlrt_marshallOut(1360303950U), "fileTimeLo", 408);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 408);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 408);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 408);
  emlrtAssign(&rhs408, emlrtCreateCellArray(0));
  emlrtAssign(&lhs408, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs408), "rhs", 408);
  emlrtAddField(*info, emlrtAliasP(lhs408), "lhs", 408);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                409);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 409);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 409);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 409);
  emlrtAddField(*info, b_emlrt_marshallOut(1323192178U), "fileTimeLo", 409);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 409);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 409);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 409);
  emlrtAssign(&rhs409, emlrtCreateCellArray(0));
  emlrtAssign(&lhs409, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs409), "rhs", 409);
  emlrtAddField(*info, emlrtAliasP(lhs409), "lhs", 409);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                410);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 410);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 410);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 410);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 410);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 410);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 410);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 410);
  emlrtAssign(&rhs410, emlrtCreateCellArray(0));
  emlrtAssign(&lhs410, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs410), "rhs", 410);
  emlrtAddField(*info, emlrtAliasP(lhs410), "lhs", 410);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                411);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 411);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 411);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 411);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840378U), "fileTimeLo", 411);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 411);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 411);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 411);
  emlrtAssign(&rhs411, emlrtCreateCellArray(0));
  emlrtAssign(&lhs411, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs411), "rhs", 411);
  emlrtAddField(*info, emlrtAliasP(lhs411), "lhs", 411);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"), "context",
                412);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 412);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 412);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 412);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531940U), "fileTimeLo", 412);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 412);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 412);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 412);
  emlrtAssign(&rhs412, emlrtCreateCellArray(0));
  emlrtAssign(&lhs412, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs412), "rhs", 412);
  emlrtAddField(*info, emlrtAliasP(lhs412), "lhs", 412);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/checkIPAddressFormat.m!checkNumeric"),
                "context", 413);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.errorIf"), "name", 413);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 413);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"),
                "resolved", 413);
  emlrtAddField(*info, b_emlrt_marshallOut(1334093538U), "fileTimeLo", 413);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 413);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 413);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 413);
  emlrtAssign(&rhs413, emlrtCreateCellArray(0));
  emlrtAssign(&lhs413, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs413), "rhs", 413);
  emlrtAddField(*info, emlrtAliasP(lhs413), "lhs", 413);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 414);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.pvParse"), "name", 414);
  emlrtAddField(*info, emlrt_marshallOut("comm.SDRuTransmitter"), "dominantType",
                414);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p"),
                "resolved", 414);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 414);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 414);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 414);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 414);
  emlrtAssign(&rhs414, emlrtCreateCellArray(0));
  emlrtAssign(&lhs414, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs414), "rhs", 414);
  emlrtAddField(*info, emlrtAliasP(lhs414), "lhs", 414);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 415);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.warning"), "name", 415);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 415);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m"),
                "resolved", 415);
  emlrtAddField(*info, b_emlrt_marshallOut(1311277408U), "fileTimeLo", 415);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 415);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 415);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 415);
  emlrtAssign(&rhs415, emlrtCreateCellArray(0));
  emlrtAssign(&lhs415, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs415), "rhs", 415);
  emlrtAddField(*info, emlrtAliasP(lhs415), "lhs", 415);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m"),
                "context", 416);
  emlrtAddField(*info, emlrt_marshallOut("eml_warning"), "name", 416);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 416);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m"), "resolved",
                416);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840402U), "fileTimeLo", 416);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 416);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 416);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 416);
  emlrtAssign(&rhs416, emlrtCreateCellArray(0));
  emlrtAssign(&lhs416, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs416), "rhs", 416);
  emlrtAddField(*info, emlrtAliasP(lhs416), "lhs", 416);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "context", 417);
  emlrtAddField(*info, emlrt_marshallOut("generateOFDMSignal"), "name", 417);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 417);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "resolved", 417);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516424U), "fileTimeLo", 417);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 417);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 417);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 417);
  emlrtAssign(&rhs417, emlrtCreateCellArray(0));
  emlrtAssign(&lhs417, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs417), "rhs", 417);
  emlrtAddField(*info, emlrtAliasP(lhs417), "lhs", 417);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 418);
  emlrtAddField(*info, emlrt_marshallOut("OFDMModulator"), "name", 418);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 418);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMModulator.m"), "resolved", 418);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516424U), "fileTimeLo", 418);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 418);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 418);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 418);
  emlrtAssign(&rhs418, emlrtCreateCellArray(0));
  emlrtAssign(&lhs418, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs418), "rhs", 418);
  emlrtAddField(*info, emlrtAliasP(lhs418), "lhs", 418);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 419);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 419);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 419);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 419);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 419);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 419);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 419);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 419);
  emlrtAssign(&rhs419, emlrtCreateCellArray(0));
  emlrtAssign(&lhs419, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs419), "rhs", 419);
  emlrtAddField(*info, emlrtAliasP(lhs419), "lhs", 419);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 420);
  emlrtAddField(*info, emlrt_marshallOut("sqrt"), "name", 420);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 420);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m"), "resolved", 420);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851986U), "fileTimeLo", 420);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 420);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 420);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 420);
  emlrtAssign(&rhs420, emlrtCreateCellArray(0));
  emlrtAssign(&lhs420, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs420), "rhs", 420);
  emlrtAddField(*info, emlrtAliasP(lhs420), "lhs", 420);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 421);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 421);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 421);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 421);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 421);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 421);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 421);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 421);
  emlrtAssign(&rhs421, emlrtCreateCellArray(0));
  emlrtAssign(&lhs421, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs421), "rhs", 421);
  emlrtAddField(*info, emlrtAliasP(lhs421), "lhs", 421);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 422);
  emlrtAddField(*info, emlrt_marshallOut("OFDMletters2bits"), "name", 422);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 422);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/OFDMletters2bits.m"),
                "resolved", 422);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516424U), "fileTimeLo", 422);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 422);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 422);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 422);
  emlrtAssign(&rhs422, emlrtCreateCellArray(0));
  emlrtAssign(&lhs422, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs422), "rhs", 422);
  emlrtAddField(*info, emlrtAliasP(lhs422), "lhs", 422);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 423);
  emlrtAddField(*info, emlrt_marshallOut("reshape"), "name", 423);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 423);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/reshape.m"), "resolved",
                423);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840368U), "fileTimeLo", 423);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 423);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 423);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 423);
  emlrtAssign(&rhs423, emlrtCreateCellArray(0));
  emlrtAssign(&lhs423, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs423), "rhs", 423);
  emlrtAddField(*info, emlrtAliasP(lhs423), "lhs", 423);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 424);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.CRCGenerator"), "name",
                424);
  emlrtAddField(*info, emlrt_marshallOut("int32"), "dominantType", 424);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCGenerator.p"),
                "resolved", 424);
  emlrtAddField(*info, b_emlrt_marshallOut(1376019338U), "fileTimeLo", 424);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 424);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 424);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 424);
  emlrtAssign(&rhs424, emlrtCreateCellArray(0));
  emlrtAssign(&lhs424, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs424), "rhs", 424);
  emlrtAddField(*info, emlrtAliasP(lhs424), "lhs", 424);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 425);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.BPSKModulator"), "name",
                425);
  emlrtAddField(*info, emlrt_marshallOut("int32"), "dominantType", 425);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/BPSKModulator.p"),
                "resolved", 425);
  emlrtAddField(*info, b_emlrt_marshallOut(1376019338U), "fileTimeLo", 425);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 425);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 425);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 425);
  emlrtAssign(&rhs425, emlrtCreateCellArray(0));
  emlrtAssign(&lhs425, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs425), "rhs", 425);
  emlrtAddField(*info, emlrtAliasP(lhs425), "lhs", 425);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 426);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 426);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 426);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 426);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 426);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 426);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 426);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 426);
  emlrtAssign(&rhs426, emlrtCreateCellArray(0));
  emlrtAssign(&lhs426, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs426), "rhs", 426);
  emlrtAddField(*info, emlrtAliasP(lhs426), "lhs", 426);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 427);
  emlrtAddField(*info, emlrt_marshallOut("mod"), "name", 427);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 427);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "resolved", 427);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 427);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 427);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 427);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 427);
  emlrtAssign(&rhs427, emlrtCreateCellArray(0));
  emlrtAssign(&lhs427, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs427), "rhs", 427);
  emlrtAddField(*info, emlrtAliasP(lhs427), "lhs", 427);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 428);
  emlrtAddField(*info, emlrt_marshallOut("randi"), "name", 428);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 428);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/randfun/randi.m"), "resolved",
                428);
  emlrtAddField(*info, b_emlrt_marshallOut(1366183846U), "fileTimeLo", 428);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 428);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 428);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 428);
  emlrtAssign(&rhs428, emlrtCreateCellArray(0));
  emlrtAssign(&lhs428, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs428), "rhs", 428);
  emlrtAddField(*info, emlrtAliasP(lhs428), "lhs", 428);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 429);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 429);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 429);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 429);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 429);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 429);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 429);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 429);
  emlrtAssign(&rhs429, emlrtCreateCellArray(0));
  emlrtAssign(&lhs429, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs429), "rhs", 429);
  emlrtAddField(*info, emlrtAliasP(lhs429), "lhs", 429);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 430);
  emlrtAddField(*info, emlrt_marshallOut("createsystemobjectv2"), "name", 430);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 430);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m"),
                "resolved", 430);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851958U), "fileTimeLo", 430);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 430);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 430);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 430);
  emlrtAssign(&rhs430, emlrtCreateCellArray(0));
  emlrtAssign(&lhs430, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs430), "rhs", 430);
  emlrtAddField(*info, emlrtAliasP(lhs430), "lhs", 430);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 431);
  emlrtAddField(*info, emlrt_marshallOut("step"), "name", 431);
  emlrtAddField(*info, emlrt_marshallOut("comm.PNSequence"), "dominantType", 431);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/step.m"), "resolved", 431);
  emlrtAddField(*info, b_emlrt_marshallOut(1349900350U), "fileTimeLo", 431);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 431);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 431);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 431);
  emlrtAssign(&rhs431, emlrtCreateCellArray(0));
  emlrtAssign(&lhs431, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs431), "rhs", 431);
  emlrtAddField(*info, emlrtAliasP(lhs431), "lhs", 431);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 432);
  emlrtAddField(*info, emlrt_marshallOut("repmat"), "name", 432);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 432);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "resolved", 432);
  emlrtAddField(*info, b_emlrt_marshallOut(1352446460U), "fileTimeLo", 432);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 432);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 432);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 432);
  emlrtAssign(&rhs432, emlrtCreateCellArray(0));
  emlrtAssign(&lhs432, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs432), "rhs", 432);
  emlrtAddField(*info, emlrtAliasP(lhs432), "lhs", 432);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 433);
  emlrtAddField(*info, emlrt_marshallOut("OFDMDemodulator"), "name", 433);
  emlrtAddField(*info, emlrt_marshallOut("OFDMModulator"), "dominantType", 433);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Git/sdruWiLab/sdruTxRx/OFDMDemodulator.m"), "resolved",
                433);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516407U), "fileTimeLo", 433);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 433);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 433);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 433);
  emlrtAssign(&rhs433, emlrtCreateCellArray(0));
  emlrtAssign(&lhs433, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs433), "rhs", 433);
  emlrtAddField(*info, emlrtAliasP(lhs433), "lhs", 433);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 434);
  emlrtAddField(*info, emlrt_marshallOut("sum"), "name", 434);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 434);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "resolved", 434);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 434);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 434);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 434);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 434);
  emlrtAssign(&rhs434, emlrtCreateCellArray(0));
  emlrtAssign(&lhs434, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs434), "rhs", 434);
  emlrtAddField(*info, emlrtAliasP(lhs434), "lhs", 434);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal.m"),
                "context", 435);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 435);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 435);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "resolved", 435);
  emlrtAddField(*info, b_emlrt_marshallOut(1366183842U), "fileTimeLo", 435);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 435);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 435);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 435);
  emlrtAssign(&rhs435, emlrtCreateCellArray(0));
  emlrtAssign(&lhs435, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs435), "rhs", 435);
  emlrtAddField(*info, emlrtAliasP(lhs435), "lhs", 435);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "context", 436);
  emlrtAddField(*info, emlrt_marshallOut("initializeOFDMSyncMemory_sdr"), "name",
                436);
  emlrtAddField(*info, emlrt_marshallOut("OFDMDemodulator"), "dominantType", 436);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/initializeOFDMSyncMemory_sdr.m"),
                "resolved", 436);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516424U), "fileTimeLo", 436);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 436);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 436);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 436);
  emlrtAssign(&rhs436, emlrtCreateCellArray(0));
  emlrtAssign(&lhs436, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs436), "rhs", 436);
  emlrtAddField(*info, emlrtAliasP(lhs436), "lhs", 436);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/initializeOFDMSyncMemory_sdr.m"),
                "context", 437);
  emlrtAddField(*info, emlrt_marshallOut("sum"), "name", 437);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 437);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "resolved", 437);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 437);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 437);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 437);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 437);
  emlrtAssign(&rhs437, emlrtCreateCellArray(0));
  emlrtAssign(&lhs437, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs437), "rhs", 437);
  emlrtAddField(*info, emlrtAliasP(lhs437), "lhs", 437);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m"), "context", 438);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.System"), "name",
                438);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 438);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "resolved", 438);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327396U), "fileTimeLo", 438);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 438);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 438);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 438);
  emlrtAssign(&rhs438, emlrtCreateCellArray(0));
  emlrtAssign(&lhs438, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs438), "rhs", 438);
  emlrtAddField(*info, emlrtAliasP(lhs438), "lhs", 438);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m"), "context", 439);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.mixin.CustomIcon"),
                "name", 439);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 439);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/CustomIcon.p"),
                "resolved", 439);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 439);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 439);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 439);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 439);
  emlrtAssign(&rhs439, emlrtCreateCellArray(0));
  emlrtAssign(&lhs439, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs439), "rhs", 439);
  emlrtAddField(*info, emlrtAliasP(lhs439), "lhs", 439);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "context", 440);
  emlrtAddField(*info, emlrt_marshallOut("comm.AGC"), "name", 440);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 440);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m"), "resolved", 440);
  emlrtAddField(*info, b_emlrt_marshallOut(1366909600U), "fileTimeLo", 440);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 440);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 440);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 440);
  emlrtAssign(&rhs440, emlrtCreateCellArray(0));
  emlrtAssign(&lhs440, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs440), "rhs", 440);
  emlrtAddField(*info, emlrtAliasP(lhs440), "lhs", 440);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 441);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.pvParse"), "name", 441);
  emlrtAddField(*info, emlrt_marshallOut("comm.AGC"), "dominantType", 441);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p"),
                "resolved", 441);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 441);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 441);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 441);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 441);
  emlrtAssign(&rhs441, emlrtCreateCellArray(0));
  emlrtAssign(&lhs441, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs441), "rhs", 441);
  emlrtAddField(*info, emlrtAliasP(lhs441), "lhs", 441);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m"), "context", 442);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.cell"), "name", 442);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 442);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/cell.p"), "resolved",
                442);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328128U), "fileTimeLo", 442);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 442);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 442);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 442);
  emlrtAssign(&rhs442, emlrtCreateCellArray(0));
  emlrtAssign(&lhs442, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs442), "rhs", 442);
  emlrtAddField(*info, emlrtAliasP(lhs442), "lhs", 442);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/AGC.m"), "context", 443);
  emlrtAddField(*info, emlrt_marshallOut("validateattributes"), "name", 443);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.cell"), "dominantType",
                443);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "resolved", 443);
  emlrtAddField(*info, b_emlrt_marshallOut(1366183840U), "fileTimeLo", 443);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 443);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 443);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 443);
  emlrtAssign(&rhs443, emlrtCreateCellArray(0));
  emlrtAssign(&lhs443, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs443), "rhs", 443);
  emlrtAddField(*info, emlrtAliasP(lhs443), "lhs", 443);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 444);
  emlrtAddField(*info, emlrt_marshallOut("char"), "name", 444);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 444);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m"), "resolved", 444);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751568U), "fileTimeLo", 444);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 444);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 444);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 444);
  emlrtAssign(&rhs444, emlrtCreateCellArray(0));
  emlrtAssign(&lhs444, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs444), "rhs", 444);
  emlrtAddField(*info, emlrtAliasP(lhs444), "lhs", 444);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral"),
                "context", 445);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 445);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 445);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                445);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 445);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 445);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 445);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 445);
  emlrtAssign(&rhs445, emlrtCreateCellArray(0));
  emlrtAssign(&lhs445, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs445), "rhs", 445);
  emlrtAddField(*info, emlrtAliasP(lhs445), "lhs", 445);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral"),
                "context", 446);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 446);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 446);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 446);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 446);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 446);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 446);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 446);
  emlrtAssign(&rhs446, emlrtCreateCellArray(0));
  emlrtAssign(&lhs446, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs446), "rhs", 446);
  emlrtAddField(*info, emlrtAliasP(lhs446), "lhs", 446);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 447);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 447);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 447);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                447);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 447);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 447);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 447);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 447);
  emlrtAssign(&rhs447, emlrtCreateCellArray(0));
  emlrtAssign(&lhs447, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs447), "rhs", 447);
  emlrtAddField(*info, emlrtAliasP(lhs447), "lhs", 447);
  emlrtDestroyArray(&rhs384);
  emlrtDestroyArray(&lhs384);
  emlrtDestroyArray(&rhs385);
  emlrtDestroyArray(&lhs385);
  emlrtDestroyArray(&rhs386);
  emlrtDestroyArray(&lhs386);
  emlrtDestroyArray(&rhs387);
  emlrtDestroyArray(&lhs387);
  emlrtDestroyArray(&rhs388);
  emlrtDestroyArray(&lhs388);
  emlrtDestroyArray(&rhs389);
  emlrtDestroyArray(&lhs389);
  emlrtDestroyArray(&rhs390);
  emlrtDestroyArray(&lhs390);
  emlrtDestroyArray(&rhs391);
  emlrtDestroyArray(&lhs391);
  emlrtDestroyArray(&rhs392);
  emlrtDestroyArray(&lhs392);
  emlrtDestroyArray(&rhs393);
  emlrtDestroyArray(&lhs393);
  emlrtDestroyArray(&rhs394);
  emlrtDestroyArray(&lhs394);
  emlrtDestroyArray(&rhs395);
  emlrtDestroyArray(&lhs395);
  emlrtDestroyArray(&rhs396);
  emlrtDestroyArray(&lhs396);
  emlrtDestroyArray(&rhs397);
  emlrtDestroyArray(&lhs397);
  emlrtDestroyArray(&rhs398);
  emlrtDestroyArray(&lhs398);
  emlrtDestroyArray(&rhs399);
  emlrtDestroyArray(&lhs399);
  emlrtDestroyArray(&rhs400);
  emlrtDestroyArray(&lhs400);
  emlrtDestroyArray(&rhs401);
  emlrtDestroyArray(&lhs401);
  emlrtDestroyArray(&rhs402);
  emlrtDestroyArray(&lhs402);
  emlrtDestroyArray(&rhs403);
  emlrtDestroyArray(&lhs403);
  emlrtDestroyArray(&rhs404);
  emlrtDestroyArray(&lhs404);
  emlrtDestroyArray(&rhs405);
  emlrtDestroyArray(&lhs405);
  emlrtDestroyArray(&rhs406);
  emlrtDestroyArray(&lhs406);
  emlrtDestroyArray(&rhs407);
  emlrtDestroyArray(&lhs407);
  emlrtDestroyArray(&rhs408);
  emlrtDestroyArray(&lhs408);
  emlrtDestroyArray(&rhs409);
  emlrtDestroyArray(&lhs409);
  emlrtDestroyArray(&rhs410);
  emlrtDestroyArray(&lhs410);
  emlrtDestroyArray(&rhs411);
  emlrtDestroyArray(&lhs411);
  emlrtDestroyArray(&rhs412);
  emlrtDestroyArray(&lhs412);
  emlrtDestroyArray(&rhs413);
  emlrtDestroyArray(&lhs413);
  emlrtDestroyArray(&rhs414);
  emlrtDestroyArray(&lhs414);
  emlrtDestroyArray(&rhs415);
  emlrtDestroyArray(&lhs415);
  emlrtDestroyArray(&rhs416);
  emlrtDestroyArray(&lhs416);
  emlrtDestroyArray(&rhs417);
  emlrtDestroyArray(&lhs417);
  emlrtDestroyArray(&rhs418);
  emlrtDestroyArray(&lhs418);
  emlrtDestroyArray(&rhs419);
  emlrtDestroyArray(&lhs419);
  emlrtDestroyArray(&rhs420);
  emlrtDestroyArray(&lhs420);
  emlrtDestroyArray(&rhs421);
  emlrtDestroyArray(&lhs421);
  emlrtDestroyArray(&rhs422);
  emlrtDestroyArray(&lhs422);
  emlrtDestroyArray(&rhs423);
  emlrtDestroyArray(&lhs423);
  emlrtDestroyArray(&rhs424);
  emlrtDestroyArray(&lhs424);
  emlrtDestroyArray(&rhs425);
  emlrtDestroyArray(&lhs425);
  emlrtDestroyArray(&rhs426);
  emlrtDestroyArray(&lhs426);
  emlrtDestroyArray(&rhs427);
  emlrtDestroyArray(&lhs427);
  emlrtDestroyArray(&rhs428);
  emlrtDestroyArray(&lhs428);
  emlrtDestroyArray(&rhs429);
  emlrtDestroyArray(&lhs429);
  emlrtDestroyArray(&rhs430);
  emlrtDestroyArray(&lhs430);
  emlrtDestroyArray(&rhs431);
  emlrtDestroyArray(&lhs431);
  emlrtDestroyArray(&rhs432);
  emlrtDestroyArray(&lhs432);
  emlrtDestroyArray(&rhs433);
  emlrtDestroyArray(&lhs433);
  emlrtDestroyArray(&rhs434);
  emlrtDestroyArray(&lhs434);
  emlrtDestroyArray(&rhs435);
  emlrtDestroyArray(&lhs435);
  emlrtDestroyArray(&rhs436);
  emlrtDestroyArray(&lhs436);
  emlrtDestroyArray(&rhs437);
  emlrtDestroyArray(&lhs437);
  emlrtDestroyArray(&rhs438);
  emlrtDestroyArray(&lhs438);
  emlrtDestroyArray(&rhs439);
  emlrtDestroyArray(&lhs439);
  emlrtDestroyArray(&rhs440);
  emlrtDestroyArray(&lhs440);
  emlrtDestroyArray(&rhs441);
  emlrtDestroyArray(&lhs441);
  emlrtDestroyArray(&rhs442);
  emlrtDestroyArray(&lhs442);
  emlrtDestroyArray(&rhs443);
  emlrtDestroyArray(&lhs443);
  emlrtDestroyArray(&rhs444);
  emlrtDestroyArray(&lhs444);
  emlrtDestroyArray(&rhs445);
  emlrtDestroyArray(&lhs445);
  emlrtDestroyArray(&rhs446);
  emlrtDestroyArray(&lhs446);
  emlrtDestroyArray(&rhs447);
  emlrtDestroyArray(&lhs447);
}

static void h_info_helper(const mxArray **info)
{
  const mxArray *rhs448 = NULL;
  const mxArray *lhs448 = NULL;
  const mxArray *rhs449 = NULL;
  const mxArray *lhs449 = NULL;
  const mxArray *rhs450 = NULL;
  const mxArray *lhs450 = NULL;
  const mxArray *rhs451 = NULL;
  const mxArray *lhs451 = NULL;
  const mxArray *rhs452 = NULL;
  const mxArray *lhs452 = NULL;
  const mxArray *rhs453 = NULL;
  const mxArray *lhs453 = NULL;
  const mxArray *rhs454 = NULL;
  const mxArray *lhs454 = NULL;
  const mxArray *rhs455 = NULL;
  const mxArray *lhs455 = NULL;
  const mxArray *rhs456 = NULL;
  const mxArray *lhs456 = NULL;
  const mxArray *rhs457 = NULL;
  const mxArray *lhs457 = NULL;
  const mxArray *rhs458 = NULL;
  const mxArray *lhs458 = NULL;
  const mxArray *rhs459 = NULL;
  const mxArray *lhs459 = NULL;
  const mxArray *rhs460 = NULL;
  const mxArray *lhs460 = NULL;
  const mxArray *rhs461 = NULL;
  const mxArray *lhs461 = NULL;
  const mxArray *rhs462 = NULL;
  const mxArray *lhs462 = NULL;
  const mxArray *rhs463 = NULL;
  const mxArray *lhs463 = NULL;
  const mxArray *rhs464 = NULL;
  const mxArray *lhs464 = NULL;
  const mxArray *rhs465 = NULL;
  const mxArray *lhs465 = NULL;
  const mxArray *rhs466 = NULL;
  const mxArray *lhs466 = NULL;
  const mxArray *rhs467 = NULL;
  const mxArray *lhs467 = NULL;
  const mxArray *rhs468 = NULL;
  const mxArray *lhs468 = NULL;
  const mxArray *rhs469 = NULL;
  const mxArray *lhs469 = NULL;
  const mxArray *rhs470 = NULL;
  const mxArray *lhs470 = NULL;
  const mxArray *rhs471 = NULL;
  const mxArray *lhs471 = NULL;
  const mxArray *rhs472 = NULL;
  const mxArray *lhs472 = NULL;
  const mxArray *rhs473 = NULL;
  const mxArray *lhs473 = NULL;
  const mxArray *rhs474 = NULL;
  const mxArray *lhs474 = NULL;
  const mxArray *rhs475 = NULL;
  const mxArray *lhs475 = NULL;
  const mxArray *rhs476 = NULL;
  const mxArray *lhs476 = NULL;
  const mxArray *rhs477 = NULL;
  const mxArray *lhs477 = NULL;
  const mxArray *rhs478 = NULL;
  const mxArray *lhs478 = NULL;
  const mxArray *rhs479 = NULL;
  const mxArray *lhs479 = NULL;
  const mxArray *rhs480 = NULL;
  const mxArray *lhs480 = NULL;
  const mxArray *rhs481 = NULL;
  const mxArray *lhs481 = NULL;
  const mxArray *rhs482 = NULL;
  const mxArray *lhs482 = NULL;
  const mxArray *rhs483 = NULL;
  const mxArray *lhs483 = NULL;
  const mxArray *rhs484 = NULL;
  const mxArray *lhs484 = NULL;
  const mxArray *rhs485 = NULL;
  const mxArray *lhs485 = NULL;
  const mxArray *rhs486 = NULL;
  const mxArray *lhs486 = NULL;
  const mxArray *rhs487 = NULL;
  const mxArray *lhs487 = NULL;
  const mxArray *rhs488 = NULL;
  const mxArray *lhs488 = NULL;
  const mxArray *rhs489 = NULL;
  const mxArray *lhs489 = NULL;
  const mxArray *rhs490 = NULL;
  const mxArray *lhs490 = NULL;
  const mxArray *rhs491 = NULL;
  const mxArray *lhs491 = NULL;
  const mxArray *rhs492 = NULL;
  const mxArray *lhs492 = NULL;
  const mxArray *rhs493 = NULL;
  const mxArray *lhs493 = NULL;
  const mxArray *rhs494 = NULL;
  const mxArray *lhs494 = NULL;
  const mxArray *rhs495 = NULL;
  const mxArray *lhs495 = NULL;
  const mxArray *rhs496 = NULL;
  const mxArray *lhs496 = NULL;
  const mxArray *rhs497 = NULL;
  const mxArray *lhs497 = NULL;
  const mxArray *rhs498 = NULL;
  const mxArray *lhs498 = NULL;
  const mxArray *rhs499 = NULL;
  const mxArray *lhs499 = NULL;
  const mxArray *rhs500 = NULL;
  const mxArray *lhs500 = NULL;
  const mxArray *rhs501 = NULL;
  const mxArray *lhs501 = NULL;
  const mxArray *rhs502 = NULL;
  const mxArray *lhs502 = NULL;
  const mxArray *rhs503 = NULL;
  const mxArray *lhs503 = NULL;
  const mxArray *rhs504 = NULL;
  const mxArray *lhs504 = NULL;
  const mxArray *rhs505 = NULL;
  const mxArray *lhs505 = NULL;
  const mxArray *rhs506 = NULL;
  const mxArray *lhs506 = NULL;
  const mxArray *rhs507 = NULL;
  const mxArray *lhs507 = NULL;
  const mxArray *rhs508 = NULL;
  const mxArray *lhs508 = NULL;
  const mxArray *rhs509 = NULL;
  const mxArray *lhs509 = NULL;
  const mxArray *rhs510 = NULL;
  const mxArray *lhs510 = NULL;
  const mxArray *rhs511 = NULL;
  const mxArray *lhs511 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!all"),
                "context", 448);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 448);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 448);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                448);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731856U), "fileTimeLo", 448);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 448);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 448);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 448);
  emlrtAssign(&rhs448, emlrtCreateCellArray(0));
  emlrtAssign(&lhs448, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs448), "rhs", 448);
  emlrtAddField(*info, emlrtAliasP(lhs448), "lhs", 448);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!notisnan"),
                "context", 449);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 449);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 449);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 449);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731858U), "fileTimeLo", 449);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 449);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 449);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 449);
  emlrtAssign(&rhs449, emlrtCreateCellArray(0));
  emlrtAssign(&lhs449, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs449), "rhs", 449);
  emlrtAddField(*info, emlrtAliasP(lhs449), "lhs", 449);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "context", 450);
  emlrtAddField(*info, emlrt_marshallOut("comm.internal.SDRuBase"), "name", 450);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 450);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "resolved",
                450);
  emlrtAddField(*info, b_emlrt_marshallOut(1376024840U), "fileTimeLo", 450);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 450);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 450);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 450);
  emlrtAssign(&rhs450, emlrtCreateCellArray(0));
  emlrtAssign(&lhs450, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs450), "rhs", 450);
  emlrtAddField(*info, emlrtAliasP(lhs450), "lhs", 450);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "context", 451);
  emlrtAddField(*info, emlrt_marshallOut("comm.SDRuReceiver"), "name", 451);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 451);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "resolved", 451);
  emlrtAddField(*info, b_emlrt_marshallOut(1376024840U), "fileTimeLo", 451);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 451);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 451);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 451);
  emlrtAssign(&rhs451, emlrtCreateCellArray(0));
  emlrtAssign(&lhs451, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs451), "rhs", 451);
  emlrtAddField(*info, emlrtAliasP(lhs451), "lhs", 451);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 452);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.setProp"), "name", 452);
  emlrtAddField(*info, emlrt_marshallOut("comm.SDRuReceiver"), "dominantType",
                452);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p"),
                "resolved", 452);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 452);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 452);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 452);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 452);
  emlrtAssign(&rhs452, emlrtCreateCellArray(0));
  emlrtAssign(&lhs452, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs452), "rhs", 452);
  emlrtAddField(*info, emlrtAliasP(lhs452), "lhs", 452);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 453);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.pvParse"), "name", 453);
  emlrtAddField(*info, emlrt_marshallOut("comm.SDRuReceiver"), "dominantType",
                453);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p"),
                "resolved", 453);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 453);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 453);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 453);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 453);
  emlrtAssign(&rhs453, emlrtCreateCellArray(0));
  emlrtAssign(&lhs453, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs453), "rhs", 453);
  emlrtAddField(*info, emlrtAliasP(lhs453), "lhs", 453);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "context", 454);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.warning"), "name", 454);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 454);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m"),
                "resolved", 454);
  emlrtAddField(*info, b_emlrt_marshallOut(1311277408U), "fileTimeLo", 454);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 454);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 454);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 454);
  emlrtAssign(&rhs454, emlrtCreateCellArray(0));
  emlrtAssign(&lhs454, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs454), "rhs", 454);
  emlrtAddField(*info, emlrtAliasP(lhs454), "lhs", 454);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 455);
  emlrtAddField(*info, emlrt_marshallOut("repmat"), "name", 455);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 455);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "resolved", 455);
  emlrtAddField(*info, b_emlrt_marshallOut(1352446460U), "fileTimeLo", 455);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 455);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 455);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 455);
  emlrtAssign(&rhs455, emlrtCreateCellArray(0));
  emlrtAssign(&lhs455, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs455), "rhs", 455);
  emlrtAddField(*info, emlrtAliasP(lhs455), "lhs", 455);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p"), "context",
                456);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.System"), "name",
                456);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 456);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "resolved", 456);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327396U), "fileTimeLo", 456);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 456);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 456);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 456);
  emlrtAssign(&rhs456, emlrtCreateCellArray(0));
  emlrtAssign(&lhs456, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs456), "rhs", 456);
  emlrtAddField(*info, emlrtAliasP(lhs456), "lhs", 456);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p"), "context",
                457);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.mixin.coder.Nondirect"),
                "name", 457);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 457);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"),
                "resolved", 457);
  emlrtAddField(*info, b_emlrt_marshallOut(1373327398U), "fileTimeLo", 457);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 457);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 457);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 457);
  emlrtAssign(&rhs457, emlrtCreateCellArray(0));
  emlrtAssign(&lhs457, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs457), "rhs", 457);
  emlrtAddField(*info, emlrtAliasP(lhs457), "lhs", 457);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "context", 458);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.CRCDetector"), "name", 458);
  emlrtAddField(*info, emlrt_marshallOut("int32"), "dominantType", 458);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p"),
                "resolved", 458);
  emlrtAddField(*info, b_emlrt_marshallOut(1376019338U), "fileTimeLo", 458);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 458);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 458);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 458);
  emlrtAssign(&rhs458, emlrtCreateCellArray(0));
  emlrtAssign(&lhs458, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs458), "rhs", 458);
  emlrtAddField(*info, emlrtAliasP(lhs458), "lhs", 458);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p"), "context",
                459);
  emlrtAddField(*info, emlrt_marshallOut("createsystemobjectv2"), "name", 459);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 459);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m"),
                "resolved", 459);
  emlrtAddField(*info, b_emlrt_marshallOut(1343851958U), "fileTimeLo", 459);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 459);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 459);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 459);
  emlrtAssign(&rhs459, emlrtCreateCellArray(0));
  emlrtAssign(&lhs459, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs459), "rhs", 459);
  emlrtAddField(*info, emlrtAliasP(lhs459), "lhs", 459);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 460);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.setProp"), "name", 460);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.CRCDetector"),
                "dominantType", 460);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/setProp.p"),
                "resolved", 460);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 460);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 460);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 460);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 460);
  emlrtAssign(&rhs460, emlrtCreateCellArray(0));
  emlrtAssign(&lhs460, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs460), "rhs", 460);
  emlrtAddField(*info, emlrtAliasP(lhs460), "lhs", 460);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 461);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.pvParse"), "name", 461);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.CRCDetector"),
                "dominantType", 461);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/matlab/system/+matlab/+system/pvParse.p"),
                "resolved", 461);
  emlrtAddField(*info, b_emlrt_marshallOut(1373322194U), "fileTimeLo", 461);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 461);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 461);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 461);
  emlrtAssign(&rhs461, emlrtCreateCellArray(0));
  emlrtAssign(&lhs461, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs461), "rhs", 461);
  emlrtAddField(*info, emlrtAliasP(lhs461), "lhs", 461);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p"), "context",
                462);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemProp"),
                "name", 462);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 462);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "resolved", 462);
  emlrtAddField(*info, b_emlrt_marshallOut(1373657594U), "fileTimeLo", 462);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 462);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 462);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 462);
  emlrtAssign(&rhs462, emlrtCreateCellArray(0));
  emlrtAssign(&lhs462, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs462), "rhs", 462);
  emlrtAddField(*info, emlrtAliasP(lhs462), "lhs", 462);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p"), "context",
                463);
  emlrtAddField(*info, emlrt_marshallOut("commcodegen.CRCDetector"), "name", 463);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 463);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p"),
                "resolved", 463);
  emlrtAddField(*info, b_emlrt_marshallOut(1376019338U), "fileTimeLo", 463);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 463);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 463);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 463);
  emlrtAssign(&rhs463, emlrtCreateCellArray(0));
  emlrtAssign(&lhs463, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs463), "rhs", 463);
  emlrtAddField(*info, emlrtAliasP(lhs463), "lhs", 463);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+commcodegen/CRCDetector.p"), "context",
                464);
  emlrtAddField(*info, emlrt_marshallOut("get"), "name", 464);
  emlrtAddField(*info, emlrt_marshallOut("comm.CRCDetector"), "dominantType",
                464);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get.m"), "resolved", 464);
  emlrtAddField(*info, b_emlrt_marshallOut(1373653916U), "fileTimeLo", 464);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 464);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 464);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 464);
  emlrtAssign(&rhs464, emlrtCreateCellArray(0));
  emlrtAssign(&lhs464, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs464), "rhs", 464);
  emlrtAddField(*info, emlrtAliasP(lhs464), "lhs", 464);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "context", 465);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 465);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 465);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 465);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 465);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 465);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 465);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 465);
  emlrtAssign(&rhs465, emlrtCreateCellArray(0));
  emlrtAssign(&lhs465, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs465), "rhs", 465);
  emlrtAddField(*info, emlrtAliasP(lhs465), "lhs", 465);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/CreateTXRX.m"), "context", 466);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 466);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 466);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 466);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731854U), "fileTimeLo", 466);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 466);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 466);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 466);
  emlrtAssign(&rhs466, emlrtCreateCellArray(0));
  emlrtAssign(&lhs466, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs466), "rhs", 466);
  emlrtAddField(*info, emlrtAliasP(lhs466), "lhs", 466);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/testPHYTransmit.m"), "context", 467);
  emlrtAddField(*info, emlrt_marshallOut("PHYTransmit"), "name", 467);
  emlrtAddField(*info, emlrt_marshallOut("comm.SDRuTransmitter"), "dominantType",
                467);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/PHYTransmit.m"), "resolved", 467);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516424U), "fileTimeLo", 467);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 467);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 467);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 467);
  emlrtAssign(&rhs467, emlrtCreateCellArray(0));
  emlrtAssign(&lhs467, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs467), "rhs", 467);
  emlrtAddField(*info, emlrtAliasP(lhs467), "lhs", 467);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Git/sdruWiLab/sdruTxRx/PHYTransmit.m"), "context", 468);
  emlrtAddField(*info, emlrt_marshallOut("generateOFDMSignal_TX2"), "name", 468);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 468);
  emlrtAddField(*info, emlrt_marshallOut(
    "[PE]/Users/travis/Git/sdruWiLab/sdruTxRx/private/generateOFDMSignal_TX2.m"),
                "resolved", 468);
  emlrtAddField(*info, b_emlrt_marshallOut(1393516424U), "fileTimeLo", 468);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 468);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 468);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 468);
  emlrtAssign(&rhs468, emlrtCreateCellArray(0));
  emlrtAssign(&lhs468, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs468), "rhs", 468);
  emlrtAddField(*info, emlrtAliasP(lhs468), "lhs", 468);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                469);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.assert"), "name", 469);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 469);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                "resolved", 469);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 469);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 469);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 469);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 469);
  emlrtAssign(&rhs469, emlrtCreateCellArray(0));
  emlrtAssign(&lhs469, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs469), "rhs", 469);
  emlrtAddField(*info, emlrtAliasP(lhs469), "lhs", 469);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                470);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 470);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 470);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 470);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 470);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 470);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 470);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 470);
  emlrtAssign(&rhs470, emlrtCreateCellArray(0));
  emlrtAssign(&lhs470, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs470), "rhs", 470);
  emlrtAddField(*info, emlrtAliasP(lhs470), "lhs", 470);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                471);
  emlrtAddField(*info, emlrt_marshallOut("all"), "name", 471);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 471);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "resolved", 471);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731876U), "fileTimeLo", 471);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 471);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 471);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 471);
  emlrtAssign(&rhs471, emlrtCreateCellArray(0));
  emlrtAssign(&lhs471, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs471), "rhs", 471);
  emlrtAddField(*info, emlrtAliasP(lhs471), "lhs", 471);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "context", 472);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 472);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 472);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 472);
  emlrtAddField(*info, b_emlrt_marshallOut(1363732556U), "fileTimeLo", 472);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 472);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 472);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 472);
  emlrtAssign(&rhs472, emlrtCreateCellArray(0));
  emlrtAssign(&lhs472, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs472), "rhs", 472);
  emlrtAddField(*info, emlrtAliasP(lhs472), "lhs", 472);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "context", 473);
  emlrtAddField(*info, emlrt_marshallOut("eml_all_or_any"), "name", 473);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 473);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_all_or_any.m"),
                "resolved", 473);
  emlrtAddField(*info, b_emlrt_marshallOut(1286840294U), "fileTimeLo", 473);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 473);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 473);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 473);
  emlrtAssign(&rhs473, emlrtCreateCellArray(0));
  emlrtAssign(&lhs473, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs473), "rhs", 473);
  emlrtAddField(*info, emlrtAliasP(lhs473), "lhs", 473);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 474);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"), "name",
                474);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 474);
  emlrtAddField(*info, emlrt_marshallOut(
    "[N]/Users/travis/Documents/sdru/usrp_uhd_mapi/DataPortDataTypeCapiEnumT.m"),
                "resolved", 474);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182480U), "fileTimeLo", 474);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 474);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 474);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 474);
  emlrtAssign(&rhs474, emlrtCreateCellArray(0));
  emlrtAssign(&lhs474, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs474), "rhs", 474);
  emlrtAddField(*info, emlrtAliasP(lhs474), "lhs", 474);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 475);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 475);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 475);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 475);
  emlrtAddField(*info, b_emlrt_marshallOut(1303167806U), "fileTimeLo", 475);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 475);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 475);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 475);
  emlrtAssign(&rhs475, emlrtCreateCellArray(0));
  emlrtAssign(&lhs475, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs475), "rhs", 475);
  emlrtAddField(*info, emlrtAliasP(lhs475), "lhs", 475);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 476);
  emlrtAddField(*info, emlrt_marshallOut("openDataConnection"), "name", 476);
  emlrtAddField(*info, emlrt_marshallOut("BoardIdCapiEnumT"), "dominantType",
                476);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/openDataConnection.m"),
                "resolved", 476);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182488U), "fileTimeLo", 476);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 476);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 476);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 476);
  emlrtAssign(&rhs476, emlrtCreateCellArray(0));
  emlrtAssign(&lhs476, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs476), "rhs", 476);
  emlrtAddField(*info, emlrtAliasP(lhs476), "lhs", 476);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/openDataConnection.m"),
                "context", 477);
  emlrtAddField(*info, emlrt_marshallOut("mapiPrivate"), "name", 477);
  emlrtAddField(*info, emlrt_marshallOut("BoardIdCapiEnumT"), "dominantType",
                477);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "resolved",
                477);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352772U), "fileTimeLo", 477);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 477);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 477);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 477);
  emlrtAssign(&rhs477, emlrtCreateCellArray(0));
  emlrtAssign(&lhs477, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs477), "rhs", 477);
  emlrtAddField(*info, emlrtAliasP(lhs477), "lhs", 477);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "context",
                478);
  emlrtAddField(*info, emlrt_marshallOut("UsrpErrorCapiEnumT"), "name", 478);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 478);
  emlrtAddField(*info, emlrt_marshallOut(
    "[N]/Users/travis/Documents/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m"),
                "resolved", 478);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352770U), "fileTimeLo", 478);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 478);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 478);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 478);
  emlrtAssign(&rhs478, emlrtCreateCellArray(0));
  emlrtAssign(&lhs478, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs478), "rhs", 478);
  emlrtAddField(*info, emlrtAliasP(lhs478), "lhs", 478);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "context",
                479);
  emlrtAddField(*info, emlrt_marshallOut("char"), "name", 479);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 479);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m"), "resolved", 479);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751568U), "fileTimeLo", 479);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 479);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 479);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 479);
  emlrtAssign(&rhs479, emlrtCreateCellArray(0));
  emlrtAssign(&lhs479, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs479), "rhs", 479);
  emlrtAddField(*info, emlrtAliasP(lhs479), "lhs", 479);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                480);
  emlrtAddField(*info, emlrt_marshallOut("UsrpErrorCapiEnumT"), "name", 480);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 480);
  emlrtAddField(*info, emlrt_marshallOut(
    "[N]/Users/travis/Documents/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m"),
                "resolved", 480);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352770U), "fileTimeLo", 480);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 480);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 480);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 480);
  emlrtAssign(&rhs480, emlrtCreateCellArray(0));
  emlrtAssign(&lhs480, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs480), "rhs", 480);
  emlrtAddField(*info, emlrtAliasP(lhs480), "lhs", 480);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                481);
  emlrtAddField(*info, emlrt_marshallOut("closeDataConnection"), "name", 481);
  emlrtAddField(*info, emlrt_marshallOut("int32"), "dominantType", 481);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/closeDataConnection.m"),
                "resolved", 481);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182484U), "fileTimeLo", 481);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 481);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 481);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 481);
  emlrtAssign(&rhs481, emlrtCreateCellArray(0));
  emlrtAssign(&lhs481, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs481), "rhs", 481);
  emlrtAddField(*info, emlrtAliasP(lhs481), "lhs", 481);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/closeDataConnection.m"),
                "context", 482);
  emlrtAddField(*info, emlrt_marshallOut("mapiPrivate"), "name", 482);
  emlrtAddField(*info, emlrt_marshallOut("int32"), "dominantType", 482);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "resolved",
                482);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352772U), "fileTimeLo", 482);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 482);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 482);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 482);
  emlrtAssign(&rhs482, emlrtCreateCellArray(0));
  emlrtAssign(&lhs482, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs482), "rhs", 482);
  emlrtAddField(*info, emlrtAliasP(lhs482), "lhs", 482);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                483);
  emlrtAddField(*info, emlrt_marshallOut("UsrpReportMethodEnumT"), "name", 483);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 483);
  emlrtAddField(*info, emlrt_marshallOut(
    "[N]/Users/travis/Documents/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m"),
                "resolved", 483);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182484U), "fileTimeLo", 483);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 483);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 483);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 483);
  emlrtAssign(&rhs483, emlrtCreateCellArray(0));
  emlrtAssign(&lhs483, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs483), "rhs", 483);
  emlrtAddField(*info, emlrtAliasP(lhs483), "lhs", 483);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/+internal/SDRuBase.p"), "context",
                484);
  emlrtAddField(*info, emlrt_marshallOut("reportSDRuStatus"), "name", 484);
  emlrtAddField(*info, emlrt_marshallOut("UsrpErrorCapiEnumT"), "dominantType",
                484);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/reportSDRuStatus.m"), "resolved", 484);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352764U), "fileTimeLo", 484);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 484);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 484);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 484);
  emlrtAssign(&rhs484, emlrtCreateCellArray(0));
  emlrtAssign(&lhs484, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs484), "rhs", 484);
  emlrtAddField(*info, emlrtAliasP(lhs484), "lhs", 484);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/reportSDRuStatus.m"), "context", 485);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.errorIf"), "name", 485);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 485);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/errorIf.m"),
                "resolved", 485);
  emlrtAddField(*info, b_emlrt_marshallOut(1334093538U), "fileTimeLo", 485);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 485);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 485);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 485);
  emlrtAssign(&rhs485, emlrtCreateCellArray(0));
  emlrtAssign(&lhs485, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs485), "rhs", 485);
  emlrtAddField(*info, emlrtAliasP(lhs485), "lhs", 485);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/reportSDRuStatus.m"), "context", 486);
  emlrtAddField(*info, emlrt_marshallOut("isrow"), "name", 486);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 486);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isrow.m"), "resolved", 486);
  emlrtAddField(*info, b_emlrt_marshallOut(1346531960U), "fileTimeLo", 486);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 486);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 486);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 486);
  emlrtAssign(&rhs486, emlrtCreateCellArray(0));
  emlrtAssign(&lhs486, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs486), "rhs", 486);
  emlrtAddField(*info, emlrtAliasP(lhs486), "lhs", 486);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/reportSDRuStatus.m"), "context", 487);
  emlrtAddField(*info, emlrt_marshallOut("UsrpErrorCapiEnumT"), "name", 487);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 487);
  emlrtAddField(*info, emlrt_marshallOut(
    "[N]/Users/travis/Documents/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m"),
                "resolved", 487);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352770U), "fileTimeLo", 487);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 487);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 487);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 487);
  emlrtAssign(&rhs487, emlrtCreateCellArray(0));
  emlrtAssign(&lhs487, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs487), "rhs", 487);
  emlrtAddField(*info, emlrtAliasP(lhs487), "lhs", 487);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/reportSDRuStatus.m"), "context", 488);
  emlrtAddField(*info, emlrt_marshallOut("UsrpReportMethodEnumT"), "name", 488);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 488);
  emlrtAddField(*info, emlrt_marshallOut(
    "[N]/Users/travis/Documents/sdru/usrp_uhd_mapi/UsrpReportMethodEnumT.m"),
                "resolved", 488);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182484U), "fileTimeLo", 488);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 488);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 488);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 488);
  emlrtAssign(&rhs488, emlrtCreateCellArray(0));
  emlrtAssign(&lhs488, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs488), "rhs", 488);
  emlrtAddField(*info, emlrtAliasP(lhs488), "lhs", 488);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/reportSDRuStatus.m"), "context", 489);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.warning"), "name", 489);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 489);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m"),
                "resolved", 489);
  emlrtAddField(*info, b_emlrt_marshallOut(1311277408U), "fileTimeLo", 489);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 489);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 489);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 489);
  emlrtAssign(&rhs489, emlrtCreateCellArray(0));
  emlrtAssign(&lhs489, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs489), "rhs", 489);
  emlrtAddField(*info, emlrtAliasP(lhs489), "lhs", 489);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/reportSDRuStatus.m"), "context", 490);
  emlrtAddField(*info, emlrt_marshallOut("getSDRuDriverVersion"), "name", 490);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 490);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"),
                "resolved", 490);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182486U), "fileTimeLo", 490);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 490);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 490);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 490);
  emlrtAssign(&rhs490, emlrtCreateCellArray(0));
  emlrtAssign(&lhs490, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs490), "rhs", 490);
  emlrtAddField(*info, emlrtAliasP(lhs490), "lhs", 490);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/getSDRuDriverVersion.m"),
                "context", 491);
  emlrtAddField(*info, emlrt_marshallOut("mapiPrivate"), "name", 491);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 491);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "resolved",
                491);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352772U), "fileTimeLo", 491);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 491);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 491);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 491);
  emlrtAssign(&rhs491, emlrtCreateCellArray(0));
  emlrtAssign(&lhs491, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs491), "rhs", 491);
  emlrtAddField(*info, emlrtAliasP(lhs491), "lhs", 491);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 492);
  emlrtAddField(*info, emlrt_marshallOut("sendInt16Data"), "name", 492);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 492);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendInt16Data.m"), "resolved",
                492);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182490U), "fileTimeLo", 492);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 492);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 492);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 492);
  emlrtAssign(&rhs492, emlrtCreateCellArray(0));
  emlrtAssign(&lhs492, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs492), "rhs", 492);
  emlrtAddField(*info, emlrtAliasP(lhs492), "lhs", 492);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendInt16Data.m"), "context",
                493);
  emlrtAddField(*info, emlrt_marshallOut("mapiPrivate"), "name", 493);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 493);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "resolved",
                493);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352772U), "fileTimeLo", 493);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 493);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 493);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 493);
  emlrtAssign(&rhs493, emlrtCreateCellArray(0));
  emlrtAssign(&lhs493, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs493), "rhs", 493);
  emlrtAddField(*info, emlrtAliasP(lhs493), "lhs", 493);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 494);
  emlrtAddField(*info, emlrt_marshallOut("sendComplexInt16Data"), "name", 494);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 494);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendComplexInt16Data.m"),
                "resolved", 494);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182488U), "fileTimeLo", 494);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 494);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 494);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 494);
  emlrtAssign(&rhs494, emlrtCreateCellArray(0));
  emlrtAssign(&lhs494, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs494), "rhs", 494);
  emlrtAddField(*info, emlrtAliasP(lhs494), "lhs", 494);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendComplexInt16Data.m"),
                "context", 495);
  emlrtAddField(*info, emlrt_marshallOut("mapiPrivate"), "name", 495);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 495);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "resolved",
                495);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352772U), "fileTimeLo", 495);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 495);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 495);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 495);
  emlrtAssign(&rhs495, emlrtCreateCellArray(0));
  emlrtAssign(&lhs495, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs495), "rhs", 495);
  emlrtAddField(*info, emlrtAliasP(lhs495), "lhs", 495);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 496);
  emlrtAddField(*info, emlrt_marshallOut("sendSingleData"), "name", 496);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 496);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendSingleData.m"),
                "resolved", 496);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182490U), "fileTimeLo", 496);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 496);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 496);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 496);
  emlrtAssign(&rhs496, emlrtCreateCellArray(0));
  emlrtAssign(&lhs496, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs496), "rhs", 496);
  emlrtAddField(*info, emlrtAliasP(lhs496), "lhs", 496);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendSingleData.m"), "context",
                497);
  emlrtAddField(*info, emlrt_marshallOut("mapiPrivate"), "name", 497);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 497);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "resolved",
                497);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352772U), "fileTimeLo", 497);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 497);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 497);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 497);
  emlrtAssign(&rhs497, emlrtCreateCellArray(0));
  emlrtAssign(&lhs497, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs497), "rhs", 497);
  emlrtAddField(*info, emlrtAliasP(lhs497), "lhs", 497);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 498);
  emlrtAddField(*info, emlrt_marshallOut("sendComplexSingleData"), "name", 498);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 498);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendComplexSingleData.m"),
                "resolved", 498);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182488U), "fileTimeLo", 498);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 498);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 498);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 498);
  emlrtAssign(&rhs498, emlrtCreateCellArray(0));
  emlrtAssign(&lhs498, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs498), "rhs", 498);
  emlrtAddField(*info, emlrtAliasP(lhs498), "lhs", 498);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendComplexSingleData.m"),
                "context", 499);
  emlrtAddField(*info, emlrt_marshallOut("mapiPrivate"), "name", 499);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 499);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "resolved",
                499);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352772U), "fileTimeLo", 499);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 499);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 499);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 499);
  emlrtAssign(&rhs499, emlrtCreateCellArray(0));
  emlrtAssign(&lhs499, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs499), "rhs", 499);
  emlrtAddField(*info, emlrtAliasP(lhs499), "lhs", 499);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 500);
  emlrtAddField(*info, emlrt_marshallOut("sendDoubleData"), "name", 500);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 500);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendDoubleData.m"),
                "resolved", 500);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182488U), "fileTimeLo", 500);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 500);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 500);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 500);
  emlrtAssign(&rhs500, emlrtCreateCellArray(0));
  emlrtAssign(&lhs500, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs500), "rhs", 500);
  emlrtAddField(*info, emlrtAliasP(lhs500), "lhs", 500);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendDoubleData.m"), "context",
                501);
  emlrtAddField(*info, emlrt_marshallOut("mapiPrivate"), "name", 501);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 501);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "resolved",
                501);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352772U), "fileTimeLo", 501);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 501);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 501);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 501);
  emlrtAssign(&rhs501, emlrtCreateCellArray(0));
  emlrtAssign(&lhs501, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs501), "rhs", 501);
  emlrtAddField(*info, emlrtAliasP(lhs501), "lhs", 501);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 502);
  emlrtAddField(*info, emlrt_marshallOut("sendComplexDoubleData"), "name", 502);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 502);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendComplexDoubleData.m"),
                "resolved", 502);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182488U), "fileTimeLo", 502);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 502);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 502);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 502);
  emlrtAssign(&rhs502, emlrtCreateCellArray(0));
  emlrtAssign(&lhs502, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs502), "rhs", 502);
  emlrtAddField(*info, emlrtAliasP(lhs502), "lhs", 502);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/sendComplexDoubleData.m"),
                "context", 503);
  emlrtAddField(*info, emlrt_marshallOut("mapiPrivate"), "name", 503);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 503);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "resolved",
                503);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352772U), "fileTimeLo", 503);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 503);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 503);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 503);
  emlrtAssign(&rhs503, emlrtCreateCellArray(0));
  emlrtAssign(&lhs503, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs503), "rhs", 503);
  emlrtAddField(*info, emlrtAliasP(lhs503), "lhs", 503);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 504);
  emlrtAddField(*info, emlrt_marshallOut("UsrpErrorCapiEnumT"), "name", 504);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 504);
  emlrtAddField(*info, emlrt_marshallOut(
    "[N]/Users/travis/Documents/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m"),
                "resolved", 504);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352770U), "fileTimeLo", 504);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 504);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 504);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 504);
  emlrtAssign(&rhs504, emlrtCreateCellArray(0));
  emlrtAssign(&lhs504, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs504), "rhs", 504);
  emlrtAddField(*info, emlrtAliasP(lhs504), "lhs", 504);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p"), "context", 505);
  emlrtAddField(*info, emlrt_marshallOut("error"), "name", 505);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 505);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/error.m"), "resolved", 505);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "fileTimeLo", 505);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 505);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 505);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 505);
  emlrtAssign(&rhs505, emlrtCreateCellArray(0));
  emlrtAssign(&lhs505, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs505), "rhs", 505);
  emlrtAddField(*info, emlrtAliasP(lhs505), "lhs", 505);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "context", 506);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"), "name",
                506);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 506);
  emlrtAddField(*info, emlrt_marshallOut(
    "[N]/Users/travis/Documents/sdru/usrp_uhd_mapi/DataPortDataTypeCapiEnumT.m"),
                "resolved", 506);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182480U), "fileTimeLo", 506);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 506);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 506);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 506);
  emlrtAssign(&rhs506, emlrtCreateCellArray(0));
  emlrtAssign(&lhs506, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs506), "rhs", 506);
  emlrtAddField(*info, emlrtAliasP(lhs506), "lhs", 506);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "context", 507);
  emlrtAddField(*info, emlrt_marshallOut("openDataConnection"), "name", 507);
  emlrtAddField(*info, emlrt_marshallOut("BoardIdCapiEnumT"), "dominantType",
                507);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/openDataConnection.m"),
                "resolved", 507);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182488U), "fileTimeLo", 507);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 507);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 507);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 507);
  emlrtAssign(&rhs507, emlrtCreateCellArray(0));
  emlrtAssign(&lhs507, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs507), "rhs", 507);
  emlrtAddField(*info, emlrtAliasP(lhs507), "lhs", 507);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "context", 508);
  emlrtAddField(*info, emlrt_marshallOut("mpower"), "name", 508);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 508);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "resolved", 508);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 508);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 508);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 508);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 508);
  emlrtAssign(&rhs508, emlrtCreateCellArray(0));
  emlrtAssign(&lhs508, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs508), "rhs", 508);
  emlrtAddField(*info, emlrtAliasP(lhs508), "lhs", 508);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "context", 509);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 509);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 509);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 509);
  emlrtAddField(*info, b_emlrt_marshallOut(1373328108U), "fileTimeLo", 509);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 509);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "mFileTimeLo", 509);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 509);
  emlrtAssign(&rhs509, emlrtCreateCellArray(0));
  emlrtAssign(&lhs509, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs509), "rhs", 509);
  emlrtAddField(*info, emlrtAliasP(lhs509), "lhs", 509);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "context", 510);
  emlrtAddField(*info, emlrt_marshallOut("receiveData"), "name", 510);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 510);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/receiveData.m"), "resolved",
                510);
  emlrtAddField(*info, b_emlrt_marshallOut(1345182488U), "fileTimeLo", 510);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 510);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 510);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 510);
  emlrtAssign(&rhs510, emlrtCreateCellArray(0));
  emlrtAssign(&lhs510, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs510), "rhs", 510);
  emlrtAddField(*info, emlrtAliasP(lhs510), "lhs", 510);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/receiveData.m"), "context",
                511);
  emlrtAddField(*info, emlrt_marshallOut("mapiPrivate"), "name", 511);
  emlrtAddField(*info, emlrt_marshallOut("DataPortDataTypeCapiEnumT"),
                "dominantType", 511);
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/Users/travis/Documents/sdru/usrp_uhd_mapi/mapiPrivate.m"), "resolved",
                511);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352772U), "fileTimeLo", 511);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 511);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 511);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 511);
  emlrtAssign(&rhs511, emlrtCreateCellArray(0));
  emlrtAssign(&lhs511, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs511), "rhs", 511);
  emlrtAddField(*info, emlrtAliasP(lhs511), "lhs", 511);
  emlrtDestroyArray(&rhs448);
  emlrtDestroyArray(&lhs448);
  emlrtDestroyArray(&rhs449);
  emlrtDestroyArray(&lhs449);
  emlrtDestroyArray(&rhs450);
  emlrtDestroyArray(&lhs450);
  emlrtDestroyArray(&rhs451);
  emlrtDestroyArray(&lhs451);
  emlrtDestroyArray(&rhs452);
  emlrtDestroyArray(&lhs452);
  emlrtDestroyArray(&rhs453);
  emlrtDestroyArray(&lhs453);
  emlrtDestroyArray(&rhs454);
  emlrtDestroyArray(&lhs454);
  emlrtDestroyArray(&rhs455);
  emlrtDestroyArray(&lhs455);
  emlrtDestroyArray(&rhs456);
  emlrtDestroyArray(&lhs456);
  emlrtDestroyArray(&rhs457);
  emlrtDestroyArray(&lhs457);
  emlrtDestroyArray(&rhs458);
  emlrtDestroyArray(&lhs458);
  emlrtDestroyArray(&rhs459);
  emlrtDestroyArray(&lhs459);
  emlrtDestroyArray(&rhs460);
  emlrtDestroyArray(&lhs460);
  emlrtDestroyArray(&rhs461);
  emlrtDestroyArray(&lhs461);
  emlrtDestroyArray(&rhs462);
  emlrtDestroyArray(&lhs462);
  emlrtDestroyArray(&rhs463);
  emlrtDestroyArray(&lhs463);
  emlrtDestroyArray(&rhs464);
  emlrtDestroyArray(&lhs464);
  emlrtDestroyArray(&rhs465);
  emlrtDestroyArray(&lhs465);
  emlrtDestroyArray(&rhs466);
  emlrtDestroyArray(&lhs466);
  emlrtDestroyArray(&rhs467);
  emlrtDestroyArray(&lhs467);
  emlrtDestroyArray(&rhs468);
  emlrtDestroyArray(&lhs468);
  emlrtDestroyArray(&rhs469);
  emlrtDestroyArray(&lhs469);
  emlrtDestroyArray(&rhs470);
  emlrtDestroyArray(&lhs470);
  emlrtDestroyArray(&rhs471);
  emlrtDestroyArray(&lhs471);
  emlrtDestroyArray(&rhs472);
  emlrtDestroyArray(&lhs472);
  emlrtDestroyArray(&rhs473);
  emlrtDestroyArray(&lhs473);
  emlrtDestroyArray(&rhs474);
  emlrtDestroyArray(&lhs474);
  emlrtDestroyArray(&rhs475);
  emlrtDestroyArray(&lhs475);
  emlrtDestroyArray(&rhs476);
  emlrtDestroyArray(&lhs476);
  emlrtDestroyArray(&rhs477);
  emlrtDestroyArray(&lhs477);
  emlrtDestroyArray(&rhs478);
  emlrtDestroyArray(&lhs478);
  emlrtDestroyArray(&rhs479);
  emlrtDestroyArray(&lhs479);
  emlrtDestroyArray(&rhs480);
  emlrtDestroyArray(&lhs480);
  emlrtDestroyArray(&rhs481);
  emlrtDestroyArray(&lhs481);
  emlrtDestroyArray(&rhs482);
  emlrtDestroyArray(&lhs482);
  emlrtDestroyArray(&rhs483);
  emlrtDestroyArray(&lhs483);
  emlrtDestroyArray(&rhs484);
  emlrtDestroyArray(&lhs484);
  emlrtDestroyArray(&rhs485);
  emlrtDestroyArray(&lhs485);
  emlrtDestroyArray(&rhs486);
  emlrtDestroyArray(&lhs486);
  emlrtDestroyArray(&rhs487);
  emlrtDestroyArray(&lhs487);
  emlrtDestroyArray(&rhs488);
  emlrtDestroyArray(&lhs488);
  emlrtDestroyArray(&rhs489);
  emlrtDestroyArray(&lhs489);
  emlrtDestroyArray(&rhs490);
  emlrtDestroyArray(&lhs490);
  emlrtDestroyArray(&rhs491);
  emlrtDestroyArray(&lhs491);
  emlrtDestroyArray(&rhs492);
  emlrtDestroyArray(&lhs492);
  emlrtDestroyArray(&rhs493);
  emlrtDestroyArray(&lhs493);
  emlrtDestroyArray(&rhs494);
  emlrtDestroyArray(&lhs494);
  emlrtDestroyArray(&rhs495);
  emlrtDestroyArray(&lhs495);
  emlrtDestroyArray(&rhs496);
  emlrtDestroyArray(&lhs496);
  emlrtDestroyArray(&rhs497);
  emlrtDestroyArray(&lhs497);
  emlrtDestroyArray(&rhs498);
  emlrtDestroyArray(&lhs498);
  emlrtDestroyArray(&rhs499);
  emlrtDestroyArray(&lhs499);
  emlrtDestroyArray(&rhs500);
  emlrtDestroyArray(&lhs500);
  emlrtDestroyArray(&rhs501);
  emlrtDestroyArray(&lhs501);
  emlrtDestroyArray(&rhs502);
  emlrtDestroyArray(&lhs502);
  emlrtDestroyArray(&rhs503);
  emlrtDestroyArray(&lhs503);
  emlrtDestroyArray(&rhs504);
  emlrtDestroyArray(&lhs504);
  emlrtDestroyArray(&rhs505);
  emlrtDestroyArray(&lhs505);
  emlrtDestroyArray(&rhs506);
  emlrtDestroyArray(&lhs506);
  emlrtDestroyArray(&rhs507);
  emlrtDestroyArray(&lhs507);
  emlrtDestroyArray(&rhs508);
  emlrtDestroyArray(&lhs508);
  emlrtDestroyArray(&rhs509);
  emlrtDestroyArray(&lhs509);
  emlrtDestroyArray(&rhs510);
  emlrtDestroyArray(&lhs510);
  emlrtDestroyArray(&rhs511);
  emlrtDestroyArray(&lhs511);
}

static void i_info_helper(const mxArray **info)
{
  const mxArray *rhs512 = NULL;
  const mxArray *lhs512 = NULL;
  const mxArray *rhs513 = NULL;
  const mxArray *lhs513 = NULL;
  const mxArray *rhs514 = NULL;
  const mxArray *lhs514 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "context", 512);
  emlrtAddField(*info, emlrt_marshallOut("UsrpErrorCapiEnumT"), "name", 512);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 512);
  emlrtAddField(*info, emlrt_marshallOut(
    "[N]/Users/travis/Documents/sdru/usrp_uhd_mapi/UsrpErrorCapiEnumT.m"),
                "resolved", 512);
  emlrtAddField(*info, b_emlrt_marshallOut(1372352770U), "fileTimeLo", 512);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 512);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 512);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 512);
  emlrtAssign(&rhs512, emlrtCreateCellArray(0));
  emlrtAssign(&lhs512, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs512), "rhs", 512);
  emlrtAddField(*info, emlrtAliasP(lhs512), "lhs", 512);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "context", 513);
  emlrtAddField(*info, emlrt_marshallOut("error"), "name", 513);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 513);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/error.m"), "resolved", 513);
  emlrtAddField(*info, b_emlrt_marshallOut(1319751566U), "fileTimeLo", 513);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 513);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 513);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 513);
  emlrtAssign(&rhs513, emlrtCreateCellArray(0));
  emlrtAssign(&lhs513, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs513), "rhs", 513);
  emlrtAddField(*info, emlrtAliasP(lhs513), "lhs", 513);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]/Users/travis/Documents/sdru/+comm/SDRuReceiver.p"), "context", 514);
  emlrtAddField(*info, emlrt_marshallOut("mtimes"), "name", 514);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 514);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m"), "resolved", 514);
  emlrtAddField(*info, b_emlrt_marshallOut(1363731878U), "fileTimeLo", 514);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 514);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 514);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 514);
  emlrtAssign(&rhs514, emlrtCreateCellArray(0));
  emlrtAssign(&lhs514, emlrtCreateCellArray(0));
  emlrtAddField(*info, emlrtAliasP(rhs514), "rhs", 514);
  emlrtAddField(*info, emlrtAliasP(lhs514), "lhs", 514);
  emlrtDestroyArray(&rhs512);
  emlrtDestroyArray(&lhs512);
  emlrtDestroyArray(&rhs513);
  emlrtDestroyArray(&lhs513);
  emlrtDestroyArray(&rhs514);
  emlrtDestroyArray(&lhs514);
}

MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);
mxArray *emlrtMexFcnProperties()
{
  const char *mexProperties[] = {
    "Version",
    "ResolvedFunctions",
    "EntryPoints",
    "CoverageInfo",
    NULL };

  const char *epProperties[] = {
    "Name",
    "NumberOfInputs",
    "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xResult = mxCreateStructMatrix(1,1,4,mexProperties);
  mxArray *xEntryPoints = mxCreateStructMatrix(1,1,4,epProperties);
  mxArray *xInputs = NULL;
  xInputs = mxCreateLogicalMatrix(1, 0);
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("testPHYTransmit"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(0));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(0));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.2.0.701 (R2013b)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_testPHYTransmit_info.c) */
