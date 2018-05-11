/*
**将字符进行加密处理
*/
#include<stdio.h>

/*
**加密一个字符，是在A之上还是在A之下取决参数
*/
int encrypt(int ch, int base)
{
	ch -= base;
	ch += 13;
	ch %= 26;
	return ch + base;
}
/*
** 主程序
*/
main(void)
{
	int 	ch;
	while((ch = getchar()) != EOF)
	{
		if(ch >= 'A' && ch <= 'Z')
			ch = encrypt(ch, 'A')
		else if(ch >= 'a' && ch <= 'z')
			ch = encrypt(ch, 'a');
		putchar(ch);
	}
}