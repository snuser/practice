/**
编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母：

OOOOA
OOOABA
OOABCBA
OABCDCBA
ABCDEDCBA
注: O代表空格

打印这样的图形，要根据用户输入的字母来决定。例如，上面的图形是在用户输入E
后的打印结果。提示：用外层循环处理行，每行使用3 个内层循环，分别处理空格、以升序打印字母、以降序打印字母。如果系统不使用ASCII
或其他以数字顺序编码的代码，请参照练习3 的解决方案
**/

#include <stdio.h>

int main(void)
{
	char std_ch = 'E';
	char ch = 'A';
	int i,j,std_lines;
	scanf("%c", &std_ch);
	for (i=0;i<26; i++)
	{
		std_lines++;
		ch++;
		if (ch == std_ch)
		{
			break;
		}
	}
	for (i=0; i< std_lines+1; i++)
	{
		ch = 'A';
		for(j=0;j<std_lines-i;j++)
		{
			printf("%c",'0');
		}
		while(j<std_lines+1)
		{
			printf("%c", ch);
			j++;
			ch++;
		}
		ch--;
		while(j<=std_lines+i)
		{
			ch--;
			j++;
			printf("%c", ch);
		}
		printf("\n");
	}
}
