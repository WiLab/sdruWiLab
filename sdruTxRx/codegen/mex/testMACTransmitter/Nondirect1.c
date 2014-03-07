/*
 * Nondirect1.c
 *
 * Code generation for function 'Nondirect1'
 *
 * C source code generated on: Thu Mar  6 19:04:23 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "Nondirect1.h"
#include "setup.h"
#include <stdio.h>

/* Function Definitions */
void Nondirect_stepImpl(commcodegen_BPSKModulator *obj, const real_T varargin_1
  [563], creal_T varargout_1[563])
{
  commcodegen_BPSKModulator *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv49[2] = { 563, 1 };

  b_obj = obj;
  Outputs(&b_obj->cSFunObject, varargin_1, iv49, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 563U * sizeof(creal_T));
}

void b_Nondirect_stepImpl(commcodegen_BPSKModulator *obj, const real_T
  varargin_1[13], creal_T varargout_1[13])
{
  commcodegen_BPSKModulator *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv50[2] = { 13, 1 };

  b_obj = obj;
  Outputs(&b_obj->cSFunObject, varargin_1, iv50, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 13U * sizeof(creal_T));
}

void c_Nondirect_stepImpl(commcodegen_BPSKModulator_1 *obj, const real_T
  varargin_1[563], creal_T varargout_1[563])
{
  commcodegen_BPSKModulator_1 *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv91[2] = { 563, 1 };

  b_obj = obj;
  b_Outputs(&b_obj->cSFunObject, varargin_1, iv91, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 563U * sizeof(creal_T));
}

void d_Nondirect_stepImpl(commcodegen_BPSKModulator_1 *obj, const real_T
  varargin_1[13], creal_T varargout_1[13])
{
  commcodegen_BPSKModulator_1 *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv92[2] = { 13, 1 };

  b_obj = obj;
  b_Outputs(&b_obj->cSFunObject, varargin_1, iv92, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 13U * sizeof(creal_T));
}

void e_Nondirect_stepImpl(commcodegen_BPSKModulator_2 *obj, const real_T
  varargin_1[563], creal_T varargout_1[563])
{
  commcodegen_BPSKModulator_2 *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv116[2] = { 563, 1 };

  b_obj = obj;
  c_Outputs(&b_obj->cSFunObject, varargin_1, iv116, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 563U * sizeof(creal_T));
}

void f_Nondirect_stepImpl(commcodegen_BPSKModulator_2 *obj, const real_T
  varargin_1[13], creal_T varargout_1[13])
{
  commcodegen_BPSKModulator_2 *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv117[2] = { 13, 1 };

  b_obj = obj;
  c_Outputs(&b_obj->cSFunObject, varargin_1, iv117, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 13U * sizeof(creal_T));
}

void g_Nondirect_stepImpl(commcodegen_BPSKModulator_3 *obj, const real_T
  varargin_1[563], creal_T varargout_1[563])
{
  commcodegen_BPSKModulator_3 *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv233[2] = { 563, 1 };

  b_obj = obj;
  d_Outputs(&b_obj->cSFunObject, varargin_1, iv233, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 563U * sizeof(creal_T));
}

void h_Nondirect_stepImpl(commcodegen_BPSKModulator_3 *obj, const real_T
  varargin_1[13], creal_T varargout_1[13])
{
  commcodegen_BPSKModulator_3 *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv234[2] = { 13, 1 };

  b_obj = obj;
  d_Outputs(&b_obj->cSFunObject, varargin_1, iv234, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 13U * sizeof(creal_T));
}

/* End of code generation (Nondirect1.c) */
