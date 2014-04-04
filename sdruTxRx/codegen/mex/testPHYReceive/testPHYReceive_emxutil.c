/*
 * testPHYReceive_emxutil.c
 *
 * Code generation for function 'testPHYReceive_emxutil'
 *
 * C source code generated on: Thu Apr  3 19:36:38 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "testPHYReceive_emxutil.h"
#include <stdio.h>

/* Function Definitions */
void b_emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T numDimensions,
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_creal_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_creal_T *)emlrtMallocMex(sizeof(emxArray_creal_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_creal_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (creal_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = TRUE;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel, int32_T
  elementSize, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, emlrtRootTLSGlobal);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i = (int32_T)emlrtSizeMulR2012b((uint32_T)i, 2U, srcLocation,
        emlrtRootTLSGlobal);
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, (uint32_T)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = TRUE;
  }
}

void emxFreeStruct_OFDMModulator_196(OFDMModulator_196 *pStruct)
{
  emxFree_real_T(&pStruct->pDataLinearIndices);
}

void emxFreeStruct_OFDMModulator_4(OFDMModulator_4 *pStruct)
{
  emxFree_real_T(&pStruct->pDataLinearIndices);
}

void emxFree_creal_T(emxArray_creal_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_creal_T *)NULL) {
    if ((*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_creal_T *)NULL;
  }
}

void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if ((*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if ((*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

void emxInitStruct_OFDMDemodulator(OFDMDemodulator *pStruct, const emlrtRTEInfo *
  srcLocation, boolean_T doPush)
{
  emxInit_real_T(&pStruct->pDataLinearIndices, 1, srcLocation, doPush);
}

void emxInitStruct_OFDMModulator_196(OFDMModulator_196 *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_real_T(&pStruct->pDataLinearIndices, 1, srcLocation, doPush);
}

void emxInitStruct_OFDMModulator_4(OFDMModulator_4 *pStruct, const emlrtRTEInfo *
  srcLocation, boolean_T doPush)
{
  emxInit_real_T(&pStruct->pDataLinearIndices, 1, srcLocation, doPush);
}

void emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T numDimensions, const
                     emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_creal_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_creal_T *)emlrtMallocMex(sizeof(emxArray_creal_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_creal_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (creal_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = TRUE;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T numDimensions, const
                     emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = TRUE;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions, const
                    emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, emlrtRootTLSGlobal);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = TRUE;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (testPHYReceive_emxutil.c) */
