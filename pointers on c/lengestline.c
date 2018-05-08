#include<stdio.h>
#include<stdlib.h>

#define MAX_LEN 1001 	/*行的缓存区大小*/

int main(void)
{
	char		input[MAX_LEN] ;
	int 		len;
	char 		longest[MAX_LEN];
	int 		longest_len;

	/*
	** 初始化到目前为止所发现的行长度
	*/
	longest_len = -1;

	/*
	** 一行一行的读取行输出
	*/
	while (gets(input) != NULL)
	{
		/*
		**获取行长度，如果长度超过前一个就取代它
		*/
		len = strlen(input);
		if (len > longest_len)
		{
			longest_len = len;
			strcpy_s(longest, longest_len+1, input);
		}
	}
	/*
	**如果我们之前有保存任何的行，将它输出出来。
	*/
	if (longest_len >= 0)
		puts(longest);
	system("pause");
	return EXIT_SUCCESS;
}