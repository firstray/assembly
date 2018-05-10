/*
** 计算并打印1到100之间所有的质数。
*/
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int number;
	int divisor;
	
	/*
	** One and two are easy.
	*/
	printf("1\n2\n");
	
	/*
	**没有其他的偶数是质数，查找其他的奇数。
	*/
	for(number = 3; number <= 100; number = number + 2)
	{
		/*
		**	将3的除数分开
		*/
		for(divisor = 3; divisor < number; divisor = divisor + 2)
		{
			if(number % divisor == 0)
				break;
		}
		
		/*
		**如果循环因为数太大停止
		**我们得到一个奇数。
		*/
		if(divisor >= number)
			printf("%d\n",number);
	}
}