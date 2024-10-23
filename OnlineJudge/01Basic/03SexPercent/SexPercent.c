//男女比例计算
#include<stdio.h>
int main(void)
{
    float ma,fe;
    scanf("%f %f",&ma,&fe);
    float map=(ma/(ma+fe))*100;
    float fep=(fe/(ma+fe))*100;
    printf("%.2f%% %.2f%%",map,fep);
    return 0;
}