/**

使用if else语句编写一个程序读取输入。读到#停止。用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换
使用switch
**/

#include <stdio.h>
int main(void)
{
    char ch;
    int count=0;

    while((ch=getchar()) != '#')
    {   
        switch (ch)
        {
            case '.':
                count++;
                putchar('!');
                break;
            case '!':
                count++;
                putchar('!');
                putchar('!');
                break;
            default:
                putchar(ch);
       }
    }
    printf("%d", count);
    return 0;
}
