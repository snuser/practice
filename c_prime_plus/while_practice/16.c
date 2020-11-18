/**

 Daphne 以10%的单利息投资了100
美元（也就是说，每年投资获利相当于原始投资的10%）。Deirdre以5%的复合利息投资了100
美元（也就是说，利息是当前余额的5%，包含之前的利息）。编写一个程序，计算需要多少年Deirdre
的投资额才会超过Daphne，并显示那时两人的投资额

**/

#include <stdio.h>

int main(void)
{
    float s_money = 100;
    float daphne = 0.1;
    float deirdre = 0.05;
    float daphne_money=100, deirdre_money=100;
    int i=1,j=0;

    while(deirdre_money <= daphne_money)
    {
        daphne_money = daphne_money + (1* 100 *daphne);
        deirdre_money = (deirdre_money * (1+deirdre));
        printf("year:%d, daphne_money: %8.2f, deirdre_money: %8.2f\n",i,  daphne_money, deirdre_money);
        i++;
    }
    printf("\n%d",i);

}


