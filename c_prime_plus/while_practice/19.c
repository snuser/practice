/**
Rabnud 博士加入了一个社交圈。起初他有5 个朋友。他注意到他的朋友数量以下面的方式增长。第1 周少了1
个朋友，剩下的朋友数量翻倍；第2 周少了2 个朋友，剩下的朋友数量翻倍。一般而言，第N 周少了N
个朋友，剩下的朋友数量翻倍。编写一个程序，计算并显示Rabnud 博士每周的朋友数量。该程序一直运行，直到超过邓巴数（Dunbar’s
number）。邓巴数是粗略估算一个人在社交圈中有稳定关系的成员的最大值，该值大约是150

**/
#include <stdio.h>

int main(void)
{
    int friends = 5;
    int i=1;
    while(friends <= 150)
    {   
        friends -=i;
        friends *=2;
        printf("weeks:%4d, friends:%4d\n",i, friends);
        i++;
    }
}
