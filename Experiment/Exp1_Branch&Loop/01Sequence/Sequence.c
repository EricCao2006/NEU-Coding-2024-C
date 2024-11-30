//数列2/1，3/2，5/3，8/5...
#include <stdio.h>
int main(void)
{
    int n=1,a=2,b=1;
    int temp;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        temp=a;
        a=a+b;
        b=temp;
    }
    printf("%d/%d",a,b);
    return 0;
}