/**
猜数字游戏
用户确定一个数组
系统提问
用户输入y 或n
如果是n 询问用户是大了 还是小了
**/


#include <stdio.h>

int main(void)
{
	int ch;
	int a;
	int current=50;
	int max,low;
	max = 100;
	low=0;
	current = low+(max-low)/2;
	printf("num:%d?\n", current);
	printf("正确输入y 错误输入n\n");
	while((ch=getchar()) != 'y')
	{
		printf("大了输入1  小了输入0\n");
		scanf("%d", &a);
		if(a == 1)
		{
			max = current;
			printf("大了，猜更小的值\n");
		}else
		{
			low = current;
			printf("小了, 猜更大的值\n");
		}
		current = low+(max-low)/2;
		printf("num:%d?\n", current);
	}
	printf("猜对了");
	
}
