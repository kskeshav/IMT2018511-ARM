;Number of even elements in an array.
	AREA greatest, CODE, READONLY
	EXPORT __main 
	IMPORT printMsg	
	ENTRY
      
__main  FUNCTION

	; for byte addressable memory next successive location differ by 4

	MOV R0,#0x20000000
	MOV R8, #04
	MOV R9,#0x00000000	;stores the result.
	ADD R1, R0, #0x00000004 
	ADD R2, R1, #0x00000004
	ADD R3, R2, #0x00000004

	MOV R4, #012
	MOV R5, #015
	MOV R6, #017
	MOV R7, #022

	STR R4, [R0]
	STR R5, [R1]
	STR R6, [R2]
	STR R7, [R3]

J1	LDR R4, [R0]
	TST R4,#01      ; checking even number by taking and with 1.
  	BNE J2
	ADD R9,#01

J2	ADD R0,R0,#0x4
	SUBS R8,R8,#01
	CMP R8,#00
	BNE J1
	MOV R0,R9
	BL printMsg

stop B stop  
	ENDFUNC
      END
