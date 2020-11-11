/**
 编写一个程序，要求用户输入一个上限整数和一个下限整数，计算从上限到下限范围内所有整数的平方和，并显示计算结果。然后程序继续提示用户输入上限和下限整数，并显示结果，直到用户输入的上限整数小于下限整数为止。程序的运行示例如下：
**/

#include <stdio.h>
int calc(int a, int b);
int main(void)
{
	int a, b;
	printf("please input twp number?\n");
	while(scanf("%d %d", &a, &b) == 2 && a <= b)
	{
		printf("please input twp number?\n");
		printf("%d %d %d\n", a, b, calc(a,b));
	}
}

int calc(int a, int b)
{
	int sum=0;
	for(; a<=b;a++)
	{
		sum += a*a;
	}
	return sum;
}
