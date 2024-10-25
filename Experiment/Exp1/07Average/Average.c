//平均数，保留两位小数
#include <stdio.h>
int main (void)
{
    int num1,num2;
    float avg;
    scanf("%d %d",&num1,&num2);
    avg=num1+num2;
    avg=avg/2;
    printf("%.2f",avg);
    return 0;
}