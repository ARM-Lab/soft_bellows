
PROGRAM _CYCLIC

	IF tlacidla.zapni=TRUE THEN
		
		FOR i:=0 TO 7 BY 1 DO
			regulatory.reg[i] := REAL_TO_INT(display.in_reg[i]/100*32765/9);
		END_FOR
		
	ELSE

		FOR i:=0 TO 3 BY 1 DO
			tlacidla.ventil[i] := FALSE;
		END_FOR
		
		FOR i:=0 TO 7 BY 1 DO
			regulatory.reg[i] := 0;
		END_FOR

	END_IF

END_PROGRAM
