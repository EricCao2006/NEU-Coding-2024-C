//计算给定区域内的素数和
#include <stdio.h>
int isprime(int n)
{
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}
int f(int m,int n)
{
    //计算[m,n]区间中所有素数的和
    int sum=0;
    for(int i=m;i<=n;i++)
        if(isprime(i)) sum+=i;
    return sum;
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",f(m,n));
    return 0;
}