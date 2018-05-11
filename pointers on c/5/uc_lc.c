/*
**将标准输入复制到标准输出，将所有大写字母转换为小写字母，注意，它依赖
**这个事实:如果参数字母并非大写字母，tolower函数将不修改它的参数，直接返回
**它的值
*/
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int ch;
	while((ch = getchar()) != EOF)
		putchar(tolower(ch));
}