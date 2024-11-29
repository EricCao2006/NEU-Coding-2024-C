//将正整数分解为最小素数因子
#define TRUE 1
#define FALSE 0
#include <stdio.h>
int isPrime(int n) 
{
    //默认n是正整数
    if (n==1) 
        return FALSE;
    for (int i=2;i*i<=n;i++) 
    {
        if (n%i==0) 
            return FALSE;
    }
    return TRUE;
}
int main(void)
{
    int input;
    scanf("%d",&input);
    if(isPrime(input)==TRUE)
            printf("%d ",input);
    else
    {
        while(input!=1)
        {
            for(int i=2;i<=input;i++)
            {
                if(input%i==0&&isPrime(i)==TRUE)
                {
                    printf("%d ",i);
                    input/=i;
                    break;
                }
            }
        }
    }
    return 0;
}