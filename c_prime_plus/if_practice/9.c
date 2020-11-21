

/**
接受正整数输入， 然后显示所有小于或等于该整数的素数
**/

#include <stdio.h>
#include <stdbool.h>
bool isPrime(unsigned long num);
int main(void)
{
    unsigned long num;
    unsigned long i=0;
    while(scanf("%lu", &num) == 1)
    {
        for(i=1;i<=num;i++)
        {
            if(isPrime(i))
            {
                printf("num:%lu\n", i);
            }
        }
    }
}
bool isPrime(unsigned long num)
{
    unsigned long div;
    bool isPrime;
    for(div=2,isPrime=true; div*div <= num; div++)
    {
        if(num % div == 0)
        {
            isPrime = false;
        }
    }
    return isPrime;
}


