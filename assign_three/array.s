; Largest number in an array.
	AREA greatest, CODE, READONLY
	EXPORT __main 
	IMPORT printMsg	
	ENTRY

__main  FUNCTION
	
	MOV R8, #03
	MOV R0, #0x20000000
	ADD R1, R0, #0x00000004
	ADD R2, R1, #0x00000004
	ADD R3, R2, #0x00000004

	MOV R4, #0x10
	MOV R5, #0x15
	MOV R6, #0x27
	MOV R7, #0021

	STR R4, [R0]
	STR R5, [R1]
	STR R6, [R2]
	STR R7, [R3]
	
	LDR R4, [R0]

J1	ADD R0,R0,#0x4
     	LDR R5,[R0]
		CMP R4,R5
		BGT J2
		MOV R4,R5
		
J2   SUBS R8,R8,#01
		CMP R8,#00
		BNE J1
		MOV R0,R4
		BL printMsg
stop    B stop ; stop program
	 ENDFUNC
	 END 
		