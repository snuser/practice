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
float inputStdSalary(void);
int main(void)
{
    long double all_count, rate_num, count;
    long double time;
    float std = 0;
    std = inputStdSalary();
    printf("std: %f\n", std);
    if (std == 0)
    {
        return 0;
    }
    printf("请输入时间?\n");
    scanf("%Lf", &time);
    all_count = time>40 ? (HARD + (time-HARD) * 1.5)*std: time *std;
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
float  inputStdSalary(void)
{
    float STD_SALARY[6];
    STD_SALARY[1] = 8.75;
    STD_SALARY[2] = 9.33;
    STD_SALARY[3] = 10.00;
    STD_SALARY[4] = 11.20;
    float salay;
    int chooise;
    int i, st;
    printf("\n enter the number \n");
    for(i=1;i<5;i++)
    {
        printf("%d) %4.2f/hr %c", i, STD_SALARY[i], i%2==0?'\n':' ');
    }
    printf("%d) quit\n", 5);
    scanf("%d", &chooise);
    printf("option:%d", chooise);
    return STD_SALARY[chooise];
}
