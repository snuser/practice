/**
编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。
1.基本工资 = 10美元/小时。
2.加班（超过40小时）= 1.5倍时间。
3.税率：前300美金为15%，续150美元为20%，余下的为25%。
**/

#include <stdio.h>
#define STD  10
#define HARD 40
#define FIRST_RATE_LINE 300
#define SECOND_RATE_LINE 450
#define FIRST_RATE 0.15
#define SECOND_RATE 0.2
#define THRID_RATE 0.25
int main(void)
{
    long double all_count, rate_num, count;
    long double time;
    scanf("%Lf", &time);
    all_count = time>40 ? (HARD + (time-HARD) * 1.5)*STD : time *STD;
    if (all_count > SECOND_RATE_LINE)
    {
        rate_num = (all_count-SECOND_RATE_LINE) * THRID_RATE + (SECOND_RATE_LINE-FIRST_RATE_LINE)*SECOND_RATE + FIRST_RATE * FIRST_RATE_LINE;
    }else if(all_count > FIRST_RATE_LINE)
    {
        rate_num = (all_count-FIRST_RATE_LINE)*SECOND_RATE + FIRST_RATE_LINE * FIRST_RATE;

    }else
    {
        rate_num = all_count * FIRST_RATE;
    }
    count = all_count-rate_num;
    printf("%4.2Lf, %4.2Lf, %4.2Lf", all_count, rate_num, count);
    return 0;
}
