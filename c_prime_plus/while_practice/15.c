/**
.编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。可以把输入储存在char
类型的数组中，假设每行字符不超过255。回忆一下，根据%c 转换说明，scanf()函数一次只能从输入中读取一个字符，而且在用户按下Enter
键时scanf()函数会生成一个换行字符（\n）
**/

#include <stdio.h>
int main(void)
{
    char line[255];
    char ch;
    int i=0;
    while(ch != '\n')
    {
        scanf("%c", &ch);
        line[i] = ch;
        i++;
    }
    for(;i>0;i--)
    {
        printf("%c", line[i-1]);
    }
}
