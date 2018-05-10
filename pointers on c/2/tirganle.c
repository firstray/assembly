/*
** 根据三角形三条边的长度对它进行分类
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float		a;
	float		b;
	float		c;
	float		temp;
	
	/*
	** 提示读取数据
	*/
	printf("Enter the lengths of the three sides of the triangle:");
	scanf("%f %f %f",&a, &b, &c);
	
	/*
	**安排边长的顺序。
	*/
	if(a < b){
		temp = a;
		a = b;
		b = temp;
	}
	if(a < c){
		temp = a;
		a = c;
		c = temp;
	}
	if(b < c){
		temp = b;
		b = c;
		c = temp;
	}
	/*
	*最小的边要大于0，较短的两边之和大于第三边。
	*/
	if( c <= 0 || b + c < a)
		printf("Not a triangle.\n);
	else if( a == b && b == c)
		printf("Equilateral.\n");
	else if( a == b || b == c)
		printf("Isosceles.\n");
	else 
		printf("Scalene.\n");
	return EXIT_SUCCESS;
}
	
