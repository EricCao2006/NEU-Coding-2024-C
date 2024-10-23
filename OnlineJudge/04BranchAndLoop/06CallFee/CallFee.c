//计算话费
#include <stdio.h>
int main(void)
{
    int time;
    float fee;
    scanf("%d", &time);
    if (time<=100) 
        fee=20.00;
    else
        fee=20+0.2*(time-100);
    printf("%.2f",fee);
    return 0;
}