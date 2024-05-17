/*
 * cyklovac_BB.c
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

#include "cyklovac_BB.h"
#include "cyklovac_BB_private.h"

/* Model step function */
void cyklovac_BB_step(RT_MODEL_cyklovac_BB_T *const cyklovac_BB_M, struct cyklovac_b* inst)
{
  B_cyklovac_BB_T *cyklovac_BB_B = cyklovac_BB_M->blockIO;

  /* S-Function (bur_in): '<Root>/Input' */
  cyklovac_BB_B->Input = inst->krok_tlaku;

  /* Gain: '<Root>/Gain' incorporates:
   *  Constant: '<Root>/Constant'
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  cyklovac_BB_B->Gain = (real32_T)cyklovac_BB_ConstP.Constant_Value[(int32_T)
    cyklovac_BB_B->Input - 1];

  /* S-Function (bur_out): '<Root>/Output' */
  inst->tlak_blue_1 = cyklovac_BB_B->Gain;

  /* Gain: '<Root>/Gain1' incorporates:
   *  Constant: '<Root>/Constant'
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  cyklovac_BB_B->Gain1 = (real32_T)cyklovac_BB_ConstP.Constant_Value[(int32_T)
    cyklovac_BB_B->Input + 783];

  /* S-Function (bur_out): '<Root>/Output1' */
  inst->tlak_green_1 = cyklovac_BB_B->Gain1;

  /* Gain: '<Root>/Gain2' incorporates:
   *  Constant: '<Root>/Constant'
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  cyklovac_BB_B->Gain2 = (real32_T)cyklovac_BB_ConstP.Constant_Value[(int32_T)
    cyklovac_BB_B->Input + 1567];

  /* S-Function (bur_out): '<Root>/Output2' */
  inst->tlak_yellow_1 = cyklovac_BB_B->Gain2;
}

/* Model initialize function */
void cyklovac_BB_initialize(RT_MODEL_cyklovac_BB_T *const cyklovac_BB_M, struct cyklovac_b* inst)
{
  UNUSED_PARAMETER(cyklovac_BB_M);
}

/* Model terminate function */
void cyklovac_BB_terminate(RT_MODEL_cyklovac_BB_T * cyklovac_BB_M, struct cyklovac_b* inst)
{}

/* Model data allocation function */
void cyklovac_BB_initializeMemory(RT_MODEL_cyklovac_BB_T* const cyklovac_BB_M, struct cyklovac_b * inst)
{  /* block I/O */  {  }  {    B_cyklovac_BB_T *cyklovac_BB_B = cyklovac_BB_M->blockIO;    /* block I/O */    {      cyklovac_BB_B->Input = 0.0F;      cyklovac_BB_B->Gain = 0.0F;      cyklovac_BB_B->Gain1 = 0.0F;      cyklovac_BB_B->Gain2 = 0.0F;    }  }}
