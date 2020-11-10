/*
编写一个程序，创建一个包含 26 个元素的数组，并在其中储存 26 个小写字母。然后打印数组的所有内容。
*/

#include <stdio.h>

int main(void)
{
	char ch = 'A';
	char alphabet[26];
	int i = 0;
	for (i=0; i<26; i++){
		alphabet[i] = ch + i;
		printf("%c ",alphabet[i]);
	}
	printf("\n");
	return 0;
}
