/**
Chuckie Lucky 赢得了100 万美元（税后），他把奖金存入年利率8%的账户。在每年的最后一天，Chuckie 取出10 万美元。编写一个程序，计算多少年后Chuckie 会取完账户的钱？

**/

#include <stdio.h>

int main(void)
{
    float money = 1000000;
    int i=1;
    while(money > 100000)
    {
        money = money * (1 + 0.08);
        money -= 100000;
        printf("year:%4d, money:%8.2f\n",i,money);
        i++;
    }
    printf("%d", i);
}
