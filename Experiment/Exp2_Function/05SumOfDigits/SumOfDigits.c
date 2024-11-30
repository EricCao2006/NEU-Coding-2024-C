//计算给定整数的各位数字之和
#include <stdio.h>
int f(int x)
{
    int sum = 0;
    while (x!= 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}