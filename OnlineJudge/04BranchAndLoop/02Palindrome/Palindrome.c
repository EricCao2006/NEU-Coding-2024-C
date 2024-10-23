//判断一个数是否为回文数
#include <stdio.h>
int main(void)
{
    int num,temp,rev;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        int digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    printf("%d",num==rev);
    return 0;
}