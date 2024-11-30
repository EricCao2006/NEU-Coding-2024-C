//三个数字排列组合，其中奇数的个数
#include <stdio.h>
int main(void)
{
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    if (a*b*c!=0)
    {
        sum=2*(a%2+b%2+c%2);
    }
    else
    {
        if(a*b+b*c+c*a==0)
            sum=0;
        else
            sum=(a%2+b%2+c%2);
    }
    printf("%d",sum);
    return 0;
}