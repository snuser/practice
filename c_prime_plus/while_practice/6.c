#include <stdio.h>

int main(void)
{
    int start, end;
    printf("input start?\n");
    scanf("%d", &start);
    printf("input end?\n");
    scanf("%d", &end);
    while(start<=end)
    {
        printf("%d%4d%4d\n", start, start*start, start*start*start);
        start++;
    }
}
