.386
.model flat, stdcall
.stack 4095
ExitProcess PROTO , dwExitCode:DWORD

.code
main PROC
	mov exa, A
	mov exb, B
	mov exc, C
	mov exd, D
	add exa, exb
	sub exc, exd
	sub exa, exd
	
	INVOKE ExitProcess, 0
main ENDP
END main