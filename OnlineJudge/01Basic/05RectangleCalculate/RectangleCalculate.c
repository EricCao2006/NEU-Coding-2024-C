//长方形的周长和面积计算
#include<stdio.h>
int main(void)
{
    int len,wid,per,area;
    scanf("%d %d",&len,&wid);
    printf("perimeter=%d\narea=%d\n",per=(len+wid)*2,area=len*wid);
    return 0;
}