//计算组合数
#include<stdio.h>
int p(int n)
{
    int factorial=1;
    if(n!=0)
        for (int i=1; i<=n; i++)
            factorial*=i;
    else
        ;
    return factorial;
}
int C(int n, int m)
{
    return p(n)/(p(m)*p(n-m));
}
int main()
{
    int m, n;
    scanf("%d%d", &n, &m);
    printf("%d",C(n,m));
}