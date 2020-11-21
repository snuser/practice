/**
单身    17859  15%
户主    23900  15%
已婚，共有  29750 15%
已婚 离异   14875 15%
先选择类别 在输入收入 计算税金
**/
#include <stdio.h>
#include <stdbool.h>
long double getTax(long double money,int type);
long double calcTax(long double money, double rate_line, double  rate_1, double  rate_2);
int main(void)
{
    int type;
    long double money = 0;
    while(true)
    {
        printf("1)单身\n 2)户主\n3)已婚\n 4)已婚，离异\n");
        scanf("%d", &type) != 1);
        printf("输入收入\n");
        scanf("%Lf", &money);
        printf("税金为: %Lf\n",getTax(money, type));
    }
}
long double getTax(long double money, int type)
{
    double rate_1[3] = {17859, 0.15, 0.28};
    double rate_2[3] = {23900, 0.15, 0.28};
    double rate_3[3] = {29750, 0.15, 0.28};
    double rate_4[3] = {14875, 0.15, 0.28};
    switch (type)
    {
        case 1:
            return calcTax(money, rate_1[0], rate_1[1], rate_1[2]);
        case 2:
            return calcTax(money, rate_2[0], rate_2[1], rate_2[2]);
        case 3:
            return calcTax(money, rate_3[0], rate_3[1], rate_3[2]);
        case 4:
            return calcTax(money, rate_4[0], rate_4[1], rate_4[2]);
    }
    return 0; 
}

long double calcTax(long double money, double rate_line, double  rate_1, double  rate_2)
{
    if(money > rate_line){
        return rate_line*rate_1 + rate_2 * (money-rate_line);
    }
    else
    {
        return money * rate_1;
    }
    return 0;
}

