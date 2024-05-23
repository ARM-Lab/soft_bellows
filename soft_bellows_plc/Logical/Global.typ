
TYPE
	Analog_input : 	STRUCT 
		AI_2 : INT;
		AI_3 : INT;
		AI_4 : INT;
		AI_1 : INT;
	END_STRUCT;
	Digital_output : 	STRUCT 
		DO_2 : BOOL;
		DO_3 : BOOL;
		DO_4 : BOOL;
		DO_5 : BOOL;
		DO_6 : BOOL;
		DO_7 : BOOL;
		DO_8 : BOOL;
		DO_9 : BOOL;
		DO_10 : BOOL;
		DO_11 : BOOL;
		DO_12 : BOOL;
		DO_1 : BOOL;
	END_STRUCT;
	regulators : 	STRUCT 
		reg_2 : INT;
		reg_3 : INT;
		reg_4 : INT;
		reg_5 : INT;
		reg_6 : INT;
		reg_7 : INT;
		reg_8 : INT;
		reg_1 : INT;
		reg : ARRAY[0..7]OF INT;
	END_STRUCT;
	buttons : 	STRUCT 
		zapni : BOOL;
		ventil : ARRAY[0..3]OF BOOL;
	END_STRUCT;
	display_variables : 	STRUCT 
		in_reg : ARRAY[0..7]OF INT;
	END_STRUCT;
END_TYPE
