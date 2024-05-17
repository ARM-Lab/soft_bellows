/********************************************************************
 * COPYRIGHT -- B&R Industrial Automation GmbH
 ********************************************************************
 * Program: pomoc_lib
 * File: pomoc_lib.c
 * Author: MartinV
 * Last modified by: MartinV
 * Created: 17-Mar-2022 07:18:45
 * Last modified: Thu Mar 17 07:18:38 2022
 * Model Version: 1.8
 * Description: 
 * modified Comment: 
 ********************************************************************
 * Implementation of program pomoc_lib
 ********************************************************************
 * Generated with B&R Automation Studio Target for Simulink V6.5
 * (GRT based)
 ********************************************************************/

#include <bur/plctypes.h>

#include "rtwtypes.h"
#include "rtmodel.h"

#define EXPAND_CONCAT(name1,name2) name1 ## name2
#define CONCAT(name1,name2) EXPAND_CONCAT(name1,name2)
#define RT_MODEL            CONCAT(MODEL,_rtModel)

#ifdef __cplusplus

extern "C" {

#endif

/* Defines */
#define SS_TERMINATE 4
#define SS_OUTPUT 3
#define SS_INITIALIZE 2



#ifdef __cplusplus

}

#endif


#ifdef __cplusplus
    unsigned long bur_heap_size = 6553500;
#endif



void cyklovac_b(struct cyklovac_b* inst)
{
  tag_RTM_cyklovac_BB_T* const cyklovac_BB_M = &(inst)->bur_cyklovac_BB;
	inst->bur_cyklovac_BB.blockIO = &(inst)->bur_B_cyklovac_BB_T;
	
  switch (inst->ssMethodType)
  {
    case SS_INITIALIZE:
	  

      /* call model initialize functions */
		/*memInit function */
		cyklovac_BB_initializeMemory(cyklovac_BB_M, inst);
		cyklovac_BB_initialize(cyklovac_BB_M, inst);
      break;

    case SS_OUTPUT:
      /* call model step functions */
		cyklovac_BB_step(cyklovac_BB_M, inst);
      break;

    case SS_TERMINATE:
      /* call model terminate function */
		cyklovac_BB_terminate(cyklovac_BB_M, inst);
	  break;
  }
}

/*****************************************************************************
   Function block sample time: 0.008
 *****************************************************************************/

/*****************************************************************************
   B&R Automation Studio Target for Simulink Version: V6.5.1 (03-Dec-2021)
 *****************************************************************************/
