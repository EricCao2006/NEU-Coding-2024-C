//一个分段函数
#include<stdio.h>
#include<math.h>
float f(float x)
{
    float y;
    if(x>=0)
        y=sqrt(x);
    else
        y=pow(x+1,2)+2*x+(1/x);
    return y;
}
int main()
{
    float x;
    scanf("%f", &x);
    printf("%f", f(x));
}