/**
修改get_first函数 让函数返回读取的第一个非空白字符，并在简单的程序中测试
**/



#include <stdio.h>

int main(void)
{
	int ch;

	while ((ch=getchar()) != '\n')
	{
		if (ch != ' ' && ch != '\t')
		{
			printf("%c", ch);
			break;
		}
	}
}
