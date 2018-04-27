ExitProcess PROTO

.data
firstval	dword	20002000h
secondval	dword	11111111h
thirdval	dword	22222222h
sum			dword	0

.code
main	proc
	mov	eax,firstval
	add eax,secondval
	add eax,thirdval
	mov sum,eax
	
	mov ecx,0
	call ExitProcess
main ENDP
END