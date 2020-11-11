/**
编写一个程序，在数组中读入8 个整数，然后按倒序打印这8 个整数
**/

#include <stdio.h>

int main(void)
{
	int numbers[8];
	int i;

	for (i=0;i<8;i++)
	{
		numbers[i] = i;
	}
	

	for(i=8;i>0;i--)
	{
		printf("%d", numbers[i-1]);
	}
}
