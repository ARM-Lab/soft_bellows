/*
 * reg_FF_PI_pl_regr_stiff_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "reg_FF_PI_pl_regr_stiff".
 *
 * Model version              : 1.135
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Sep 27 10:51:43 2022
 *
 * Target selection: bur_grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86/Pentium
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_reg_FF_PI_pl_regr_stiff_private_h_
#define RTW_HEADER_reg_FF_PI_pl_regr_stiff_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 rtmSetErrorStatus(reg_FF_PI_pl_regr_stiff_M, RT_MEMORY_ALLOCATION_ERROR);\
 }
#endif

#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((ptr));\
 (ptr) = (NULL);\
 }
#else

/* Visual and other windows compilers declare free without const */
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((void *)(ptr));\
 (ptr) = (NULL);\
 }
#endif
#endif
#endif                       /* RTW_HEADER_reg_FF_PI_pl_regr_stiff_private_h_ */
