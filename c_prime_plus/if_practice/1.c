/**
编写一个程序
读取到#停止
统计 空格数 换行符数 和所有其他字符的个数
**/

#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int space_num, enter_num, o_num;
	space_num = enter_num = o_num =0;
	while((ch = getchar()) != '#')
	{
		if (ch == '\n')
		{
			enter_num++;
		}
		else if(isblank(ch))
		{
			space_num++;
		}
		else
		{
 			o_num++;
		}
	}
	printf("%4d, %4d, %4d", space_num, enter_num, o_num);
}
