;Fibonacci
	
	AREA     appcode, CODE, READONLY
	EXPORT __main 
	IMPORT printMsg
		
	ENTRY 

__main FUNCTION
		MOV R1, #00	;first number
		MOV R2, #01	;second number
		MOV R3, #10	;looping iterator

loop    CMP R3, #00
		BLE stop        ; Jump if less than or equal to

		MOV R4, R2
		ADD R2, R2, R1
		MOV R5, R2
		MOV R0, R1
		BL printMsg
		MOV R2, R5
		MOV R1, R4
		SUB R3, #01
		B loop          ; Jump back to loop

stop B stop
	ENDFUNC
	
	END
