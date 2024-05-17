


TYPE
B_cyklovac_BB_T : STRUCT
	Input : REAL;
	Gain : REAL;
	Gain1 : REAL;
	Gain2 : REAL;
END_STRUCT;
ConstP_cyklovac_BB_T : STRUCT
	Constant_Value : ARRAY[0..2351] OF LREAL;
END_STRUCT;
tag_RTM_cyklovac_BB_T : STRUCT
	errorStatus : REFERENCE TO USINT;
	blockIO : REFERENCE TO B_cyklovac_BB_T;
END_STRUCT;
RT_MODEL_cyklovac_BB_T : tag_RTM_cyklovac_BB_T;
END_TYPE
TYPE
END_TYPE