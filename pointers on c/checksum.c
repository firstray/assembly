/*
**从标准输出复制到标准输入，并对输出行号。
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch;
	int line;
	int at_beginning;
	signed char checksum = -1;

	line = 0;
	at_beginning = 1;
	/*
	**读取字符并逐个处理它们
	*/
	while ((ch = getchar()) != EOF)
	{
		if (at_beginning == 1)
		{
			at_beginning = 0;
			line += 1;
			printf("%d", line);
		}
		/*
		**打印字符，并对行尾进行检查
		*/
		putchar(ch);
		checksum += ch;
		if (ch == '\n')
		{
			at_beginning = 1;
			printf("%d\n", checksum);
			checksum = -1;
		}
	}
	return EXIT_SUCCESS;

}