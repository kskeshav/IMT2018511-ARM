; Largest of three numbers.

	AREA greatest, CODE, READONLY
	EXPORT __main 
	IMPORT printMsg	
	ENTRY
      
__main  FUNCTION
	
	MOV R0,#0x20000000

	ADD R1, R0, #0x00000005
	ADD R2, R1, #0x00000005

	MOV R4, #015
	MOV R5, #012
	MOV R6, #017

	STR R4, [R0]
	STR R5, [R1]
	STR R6, [R2]

	LDR R4, [R0]

	LDR R5, [R1]
	CMP R4, R5
	BGT J1
	MOV R4, R5
	
J1	LDR R6, [R2]
	CMP R4, R6
	BGT J2
	MOV R4, R6
	
J2	MOV R0,R4
	BL printMsg

stop B stop
	ENDFUNC
	END