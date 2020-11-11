/**
 编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值
**/

#include <stdio.h>
float calc(float a, float b);
int main(void)
{
	float a, b;
	printf("input two float number! enter q to quit!");
	while(scanf("%f %f", &a, &b) == 2)
	{
		printf("%f\n", calc(a,b));
	}
	printf("quit\n");
	return 0;
}
float calc(float a, float b)
{
	return (a-b)/(a*b);
}
