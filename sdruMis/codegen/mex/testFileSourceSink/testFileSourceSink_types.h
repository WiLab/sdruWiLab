/*
 * testFileSourceSink_types.h
 *
 * Code generation for function 'testFileSourceSink'
 *
 * C source code generated on: Thu Feb 27 11:25:03 2014
 *
 */

#ifndef __TESTFILESOURCESINK_TYPES_H__
#define __TESTFILESOURCESINK_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T
{
    char_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_char_T*/
#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T
typedef struct emxArray_char_T emxArray_char_T;
#endif /*typedef_emxArray_char_T*/
#ifndef struct_emxArray_int32_T_1x70
#define struct_emxArray_int32_T_1x70
struct emxArray_int32_T_1x70
{
    int32_T data[70];
    int32_T size[2];
};
#endif /*struct_emxArray_int32_T_1x70*/
#ifndef typedef_emxArray_int32_T_1x70
#define typedef_emxArray_int32_T_1x70
typedef struct emxArray_int32_T_1x70 emxArray_int32_T_1x70;
#endif /*typedef_emxArray_int32_T_1x70*/
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct
{
    int32_T intNumBits;
} struct_T;
#endif /*typedef_struct_T*/

#endif
/* End of code generation (testFileSourceSink_types.h) */
