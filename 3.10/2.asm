.386
.model flat, stdcall
.stack 4096
ExitProcess proto, dwExitCode:dword

.data
Monday 		byte		1
Tuesday		byte		2
Wednesday	byte		3
Thursday	byte		4
Friday		byte		5
Saturday 	byte		6
Sunday		byte		7
dayList		byte Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday

	invoke ExitProcess
main endp
end main
