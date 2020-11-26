/**
读取一个输入流 到EOF截止 打印每个输入字符和对应的ASCII的值
空格前面的字符为非打印字符
如果是换行符或制表符 则分别打印\n \t
否则使用控制字符表示法 如ASCII 1 为 Ctrl+A  表示为^A  A为1+64

**/

#include <stdio.h>

int main(void)
{
    int ch;
    int count =0;
    while((ch=getchar()) != EOF)
    {
        if(count % 10 ==0)
        {
            printf("%c", '\n');
        }
        if (ch < ' ')
        {
           switch (ch)
           {
                case '\n':
                    printf("%4d-%c",'\n','\n');
                    break;
                case '\t':
                    printf("%4d-%c", '\t','\t');
                    break;
                default:
                    printf("%4d-^%c", ch,  ch+64);
                    break;
           }
        } else 
        {
            printf("%4d-%c", ch, ch);
        }
        count++;
    }
}
