//猴子吃桃问题
#include <stdio.h>
int func(int n)
{
    int i;
    if(n==1)
        return 1;
    if(n>1)
        return i=2*(func(n-1)+1);
}
int main() 
{
    int n;
    scanf("%d",&n);
    printf("%d",func(n));
    return 0;
}