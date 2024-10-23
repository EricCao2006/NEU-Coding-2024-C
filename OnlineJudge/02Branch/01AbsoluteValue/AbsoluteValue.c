//求绝对值，小数点后保留6位
#include<stdio.h>
int main(void)
{
    float realnum=0.0;
    scanf("%f",&realnum);
    if (realnum<0)
    realnum=-realnum;
    else
    ;
    printf("%.6f",realnum);
    return 0;
}