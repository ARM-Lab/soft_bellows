/*
 * cyklovac_BB.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "cyklovac_BB".
 *
 * Model version              : 1.8
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Thu Mar 17 07:18:42 2022
 *
 * Target selection: bur_grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86/Pentium
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_cyklovac_BB_h_
#define RTW_HEADER_cyklovac_BB_h_
#include <stddef.h>
#include <string.h>
#ifndef cyklovac_BB_COMMON_INCLUDES_
#define cyklovac_BB_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* cyklovac_BB_COMMON_INCLUDES_ */

#include "cyklovac_BB_types.h"
#include "pomoc_lib.h"
/* Beginning of Dynamic TypeDefs: */
/* End of Dynamic TypeDefs: */
#ifndef MIN
#define MIN(a,b)	((a) < (b) ? (a) : (b))
#endif

#ifndef MAX
#define MAX(a,b)	((a) > (b) ? (a) : (b))
#endif

#ifndef AST_ROUND
#define AST_ROUND(x) ((x)>=0?(long long)((x)+0.5):(long long)((x)-0.5))
#endif


/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define cyklovac_BB_M_TYPE             RT_MODEL_cyklovac_BB_T

/* Block signals (default storage) */

/* Constant parameters (default storage) */

/* Real-time Model Data Structure */

/* External data declarations for dependent source files */
extern const char *RT_MEMORY_ALLOCATION_ERROR;

/* Constant parameters (default storage) */
extern const ConstP_cyklovac_BB_T cyklovac_BB_ConstP;

/* Model entry point functions */
extern void cyklovac_BB_initializeMemory(RT_MODEL_cyklovac_BB_T * const cyklovac_BB_M, struct cyklovac_b* inst);
extern void cyklovac_BB_initialize(RT_MODEL_cyklovac_BB_T *const cyklovac_BB_M, struct cyklovac_b* inst);
extern void cyklovac_BB_step(RT_MODEL_cyklovac_BB_T *const cyklovac_BB_M, struct cyklovac_b* inst);
extern void cyklovac_BB_terminate(RT_MODEL_cyklovac_BB_T * cyklovac_BB_M, struct cyklovac_b* inst);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'cyklovac_BB'
 * '<S1>'   : 'cyklovac_BB/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_cyklovac_BB_h_ */
