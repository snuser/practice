/**
编写一个程序，读取整数直到用户输入0。
输入结束以后，程序应报告用户输入的偶数（不包括0）个数、这些偶数的平均值、输入的奇数个数及其奇数的平均数
**/
#include <stdio.h>

int main(void)
{
    int ch;
    int o_num, j_num;
    o_num=j_num=0;
    int o_count,j_count;
    o_count=j_count=0;
    scanf("%d", &ch);
    printf("%d",ch);
    while(ch != 0)
    {
        scanf("%d", &ch);
        if (ch % 2==0)
        {
            o_num++;
            o_count+=ch;
        }else{
            j_num++;
            j_count+=ch;
        }
    }
    printf("%4d, %4f\n", o_num, o_count > 0 ? o_count*1.0/o_num:0);
    printf("%4d, %4f\n", j_num, j_count >0 ? j_count*1.0/j_num:0);
    return 0;
}
