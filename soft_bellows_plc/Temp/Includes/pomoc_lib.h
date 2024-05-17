/* Automation Studio generated header file */
/* Do not edit ! */
/* pomoc_lib 1.00.0 */

#ifndef _POMOC_LIB_
#define _POMOC_LIB_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _pomoc_lib_VERSION
#define _pomoc_lib_VERSION 1.00.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct B_cyklovac_BB_T
{	float Input;
	float Gain;
	float Gain1;
	float Gain2;
} B_cyklovac_BB_T;

typedef struct ConstP_cyklovac_BB_T
{	double Constant_Value[2352];
} ConstP_cyklovac_BB_T;

typedef struct tag_RTM_cyklovac_BB_T
{	unsigned char* errorStatus;
	struct B_cyklovac_BB_T* blockIO;
} tag_RTM_cyklovac_BB_T;

typedef struct cyklovac_b
{
	/* VAR_INPUT (analog) */
	signed char ssMethodType;
	float krok_tlaku;
	/* VAR_OUTPUT (analog) */
	float tlak_blue_1;
	float tlak_green_1;
	float tlak_yellow_1;
	/* VAR (analog) */
	struct B_cyklovac_BB_T bur_B_cyklovac_BB_T;
	struct tag_RTM_cyklovac_BB_T bur_cyklovac_BB;
} cyklovac_b_typ;

typedef tag_RTM_cyklovac_BB_T RT_MODEL_cyklovac_BB_T;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void cyklovac_b(struct cyklovac_b* inst);


#ifdef __cplusplus
};
#endif
#endif /* _POMOC_LIB_ */

