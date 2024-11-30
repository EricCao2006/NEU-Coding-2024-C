//a方+b方>100输出a+b，否则输出a*b
#include <stdio.h>
int main(void)
{
    int a,b,output;
    scanf("%d %d",&a,&b);
    if(a*a+b*b>100)
        output=a+b;
    else
        output=a*b;
    printf("%d",output);
    return 0;
}