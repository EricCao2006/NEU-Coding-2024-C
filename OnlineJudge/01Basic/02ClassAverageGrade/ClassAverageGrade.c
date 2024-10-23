//四个班的平均成绩，保留两位小数
#include<stdio.h>
int main(void)
{
    float cla1,cla2,cla3,cla4;
    scanf("%f %f %f %f",&cla1,&cla2,&cla3,&cla4);
    float ave=(cla1+cla2+cla3+cla4)/4;
    printf("%.2f\n",ave);
    return 0;
}