//一组整数的最大值和最小值
#include <stdio.h>
#define TRUE 1
int main(void)
{
    int input,max,min;
    scanf("%d",&input);
    max=min=input;
    while(TRUE)
    {
        scanf("%d",&input);
        if (input==-1)
            break;
        if (input>max)
            max=input;
        if (input<min)
            min=input;
    }
    printf("%d %d",max,min);
    return 0;
}