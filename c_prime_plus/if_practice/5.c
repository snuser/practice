/**


编写程序读取输入，读到#停止，报告ei出现的次数。用“Receive your eieio award”的输入来测试

**/

#include <stdio.h>

int main(void)
{
    char ch;
    char pre_ch;
    int count=0;
    while((ch=getchar()) != '#')
    {
        if(ch=='i' && pre_ch == 'e')
        {
            count++;
        }else{
            pre_ch = ch;
        }
    }
    printf("%d", count);
    return 0;
}
