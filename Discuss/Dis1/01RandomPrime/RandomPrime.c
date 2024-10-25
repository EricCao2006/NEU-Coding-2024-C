//100~1000随机数生成，并判断是否为质数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int myrandom(void)
{
    int num;
    num = rand() % 901 + 100;
    return num;
}
int is_prime(int num)
{
    int is_prime=1;
    for(int i=2;i<(num);i++)
    {
        if(num%i==0)
            {is_prime=0;
            break;}
    }
    return is_prime;
}
int main(void)
{
    int nums[1000];
    srand(time(NULL));
    for(int i=0;i<1000;i++)
        nums[i]=myrandom();
    for(int i=0;i<1000;i++)
        if(is_prime(nums[i]))
            printf("%d ",nums[i]);
    return 0;
}