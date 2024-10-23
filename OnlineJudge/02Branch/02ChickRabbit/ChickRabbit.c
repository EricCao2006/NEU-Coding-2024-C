//鸡兔同笼问题
#include<stdio.h>
int main(void)
{
    int num,leg,chi,rab;
    scanf("%d %d",&num,&leg);
    //num=chi+rab
    //leg=2*chi+4*rab
    rab=0.5*leg-num;
    chi=2*num-0.5*leg;
    if(chi<0||rab<0)
    printf("-1 -1");
    else
    printf("%d %d",chi,rab);
    return 0;
}