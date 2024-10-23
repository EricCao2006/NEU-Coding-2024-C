//求绝对值，保留3位小数
#include<stdio.h>
int main(void)
{
    int n;
    int i;
    scanf("%d",&n);
    float value[n];
    for(i=0;i<n;i++)
    {
        scanf(" %f",&value[i]);
        if(value[i]<0)
            value[i]=-value[i];
            printf("%.3f\n",value[i]);
    }
    return 0;
}