/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1658831623_1_
#define _BUR_1658831623_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL signed short y_naklopenie_zeleny;
_GLOBAL signed short x_naklopenie_cerveny;
_GLOBAL float Vin_y;
_GLOBAL float Vin_x;
_GLOBAL plcbit ventyl_3V;
_GLOBAL plcbit ventyl_3M;
_GLOBAL plcbit ventyl_2V;
_GLOBAL float Blue1_tlak_reg;
_GLOBAL plcbit ventyl_2M;
_GLOBAL float Green2_tlak_reg;
_GLOBAL float Yellow3_tlak_reg;
_GLOBAL plcbit ventyl_1V;
_GLOBAL plcbit ventyl_1M;
_GLOBAL plcbit ventyly_zap_vyp;
_GLOBAL float trajektoria[301];
_GLOBAL plcbit RESET;
_GLOBAL float tlak3_int;
_GLOBAL plcbit reset_I_reg;
_GLOBAL float pozadovana_x_IN;
_GLOBAL float pozadovana_y_IN;
_GLOBAL float tlak3;
_GLOBAL float tlak2_int;
_GLOBAL float tlak2;
_GLOBAL float tlak1_int;
_GLOBAL float tlak1;
_GLOBAL signed short regulator3;
_GLOBAL float PID_P_IN;
_GLOBAL float PID_N_IN;
_GLOBAL float test_in_1;
_GLOBAL float test_in_2;
_GLOBAL float PID_I_IN;
_GLOBAL float PID_D_IN;
_GLOBAL float test_out_1;
_GLOBAL float test_out_2;
_GLOBAL float test_out_4;
_GLOBAL float test_out_5;
_GLOBAL plcbit Hold_I;
_GLOBAL float test_out_3;
_GLOBAL struct FF_PID FF_PID_0;
_GLOBAL signed short regulator2;
_GLOBAL signed short regulator1;
_GLOBAL float real_uhol_y_kalibrovane;
_GLOBAL signed short real_uhol_y_int;
_GLOBAL float real_uhol_y;
_GLOBAL float real_uhol_x_kalibrovane;
_GLOBAL signed short real_uhol_x_int;
_GLOBAL float real_uhol_x;
_GLOBAL float pozadovany_uhol_y;
_GLOBAL float pozadovany_uhol_x;
_GLOBAL unsigned char New_Variable;
_GLOBAL plcbit kalibracia;
_GLOBAL plcbit spravna_hodnota_cykl;
_GLOBAL float PID_D;
_GLOBAL float PID_I;
_GLOBAL float PID_N;
_GLOBAL float PID_P;
_GLOBAL signed short analog_vstup_3;
_GLOBAL float stiffness_ff;
_GLOBAL signed short reg_type;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Riadenie/riadenie.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/regulatory/regulatory.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1658831623_1_ */

