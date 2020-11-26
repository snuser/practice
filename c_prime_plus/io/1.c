/**
设计一个程序 统计在读到文件结尾的字符数
**/
#include <stdio.h>
int main(void)
{
    int ch;
    int count=0;
    while((ch=getchar()) != EOF)
    {
        count++;
    }
    printf("%d", count);
}
