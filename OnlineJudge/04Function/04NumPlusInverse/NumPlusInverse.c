//一个数加上它的逆序数
#include<stdio.h>
int inverse(int num)
{
    int inversed=0;
    int temp=num;
    while(temp>0)
    {
        inversed=inversed*10+temp%10;
        temp/=10;
    }
    return inversed;
}
int main(void)
{
    int num,inversed;
    scanf("%d",&num);
    inversed=inverse(num);
    printf("%d",num+inversed);
    return 0;
}