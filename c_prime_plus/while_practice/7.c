/**
编写一个程序把一个单词读入一个字符数组中
然后倒序打印这个单词。
提示：strlen()函数（第4 章介绍过）可用于计算数组最后一个字符的下标
**/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[100];
	char rev_word[100];
	int i,j;
	scanf("%s", word);
	for(i=strlen(word)-1, j=0; i>=0; i--,j++)
	{
		rev_word[j] = word[i];
	}
	printf("%zd", strlen(word));
	printf("%s", rev_word);
}	
