/**
EOF截止 获取字符流
统计输入中大写字母和小写字母的个数
或者使用ctype.h分类函数
**/

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch;
    int up_count=0;
    int low_count =0;
    while((ch = getchar()) != EOF)
    {
        if(isalpha(ch))
        {
            if(isupper(ch))
            {
                up_count++;
            }else
            {
                low_count++;
            }
        }
    }
    printf("%4d-%d", up_count, low_count);
}
