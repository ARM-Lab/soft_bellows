
(* generator sin signalu *)
FUNCTION_BLOCK Sin_signal
	angle:=Amplitude*(SIN(frequency*time+phase));
	
END_FUNCTION_BLOCK
