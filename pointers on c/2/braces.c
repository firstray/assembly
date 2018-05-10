/*
**检查一个程序花括号配对
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch;
	int braces;
	
	braces = 0;
	
	/*
	**逐字符检查
	*/
	while((ch = getchar()) != EOF)
	{
		/*
		**左边花括号始终合法
		*/
		if(ch = '{')
			braces += 1;
		
		/*
		**右括号只有当它和一个左花括号匹配时才是合法的。
		*/
		if(ch == '}')
			if(braces == 0)
				printf("Extra closing brace !\n");
			else
				braces -= 1;
	}
		/*
		**没有更多输入； 验证不存在任何违背匹配的左花括号、
		*/
		if(braces > 0)
			printf("%d unmatched opening brace(s)!\n",braces);
		
		return EXIT_SUCCESS;
}