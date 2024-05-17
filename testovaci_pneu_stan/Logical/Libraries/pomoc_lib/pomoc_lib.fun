

FUNCTION_BLOCK cyklovac_b   
	VAR_INPUT
		ssMethodType :  SINT;   
		krok_tlaku :  REAL :=  0; (*riadok matice zasobujucej cyklovac*)  
	END_VAR
	VAR_OUTPUT
		tlak_blue_1 :  REAL :=  0; (*blue_tlak*)  
		tlak_green_1 :  REAL :=  0; (**)  
		tlak_yellow_1 :  REAL :=  0; (**)  
	END_VAR
	VAR
		bur_B_cyklovac_BB_T :  B_cyklovac_BB_T;   
		bur_cyklovac_BB :  tag_RTM_cyklovac_BB_T;   
	END_VAR
END_FUNCTION_BLOCK

