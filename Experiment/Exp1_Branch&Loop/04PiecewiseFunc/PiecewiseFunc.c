//一个分段函数
#include <stdio.h>
int main(void)
{
    int x,y;
    scanf("%d",&x);
    if(x<0)
        y=2*x+1;
    else if(x>0)
        y=2*x-1;
    else
        y=0;
    printf("%d",y);
    return 0;
}