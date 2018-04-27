				.386
				.model flat,stdcall
				.stack 4906

				ExitProcess proto dwExitcode:dword

 00000000			.data									;开始地址
 00000000 00000000		sum dword 0							;初始化为16位

 00000000			.code									;开始地址
 00000000			main proc							
 00000000  B8 00000005			mov eax, 5					;B8操作码将常数5置于eax
 00000005  83 C0 06			add eax, 6						;在起始便移量为5的位置创建一个新表然后将两个表的数值相加
 00000008  A3 00000000 R		mov sum, eax				;将16位寄存器的值移动到16位内存中

 0000000D  B9 00000000			mov ecx, 0					;将立即数0移动到ecx中
					invoke exitProcess, 0
 00000012  6A 00	   *	    push   +000000000h			;将立即数0压入栈中
 00000014  E8 00000000 E   *	    call   ExitProcess		;调用立即数0
 00000019			main endp
				end main