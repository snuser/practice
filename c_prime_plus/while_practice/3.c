/**
使用嵌套循环，按下面的格式打印字母：
F
FE
FED
FEDC
FEDCB

FEDCBA
**/

#include <stdio.h>
int main(void)
{
	char start_alphabet;
	int i, j;
	for (i=0; i<6; i++) 
	{
		start_alphabet = 'F';
		for (j=0; j<=i; j++)
		{
			
			printf("%c", start_alphabet);
			start_alphabet--;
		}
		printf("\n");
	}
	return 0;
	
}
