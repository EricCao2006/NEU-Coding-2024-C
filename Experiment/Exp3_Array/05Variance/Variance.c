//计算十个数的方差
#include<stdio.h>
int main(void)
{
    int input[10];
    double variance=0,average=0;
    for(int i=0;i<10;i++)
    {
        scanf(" %d",&input[i]);
        average+=input[i]/10.0;
    }
    for(int i=0;i<10;i++)
        variance+=(input[i]-average)*(input[i]-average)/10.0;
    printf("%0.2lf",variance);
    return 0;
}