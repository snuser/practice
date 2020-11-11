/**
 编写一个程序，创建一个包含8 个元素的int 类型数组，分别把数组元素设置为2 的前8 次幂。使用for 循环设置数组元素的值，使用do while 循环显示数组元素的值
*/
#include <stdio.h>
int main(void)
{
	int a[8];
	int i;
	a[0] = 1;
	for(i=1;i<8;i++)
	{
		a[i] = 2*a[i-1];
	}
	i=0;
	do{
		printf("%4d", a[i]);
		i++;
	}while(i<8);


}
