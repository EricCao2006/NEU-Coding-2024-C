//奇怪的加法，1+11+111+1111+...
#include <stdio.h>
#include <math.h>
int main() 
{
    int a=0;
    int n=0;
    int sin=0;
    int sum=0;
    scanf("%d %d",&a,&n);
    for(int i=1;i<=n;i++)
    {
        for (int j=0;j<i;j++)
        {
            sin+=a*pow(10,j);
        }
        sum+=sin;
        sin=0;
    }
    printf("%d",sum);
    return 0;
}