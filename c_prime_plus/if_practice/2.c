/**

编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。每行打印8个“字符-ASCII码”组合。
建议：使用字符计数和求模运算符（%）在每8个循环周期时打印一个换行符

**/

#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int i=0;

	while((ch=getchar()) != '#')
	{
		if (!isalpha(ch))
		{
			continue;
		}
		if(i%8 == 0){
			putchar('\n');
		}
		printf("%4c-%d", ch, ch);
		i++;
	}
}
