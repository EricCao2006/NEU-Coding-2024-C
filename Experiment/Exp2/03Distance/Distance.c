//计算平面上两个点之间的距离
#include <stdio.h>
#include <math.h>
float d(int x1,int y1,int x2,int y2)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main()
{
    int x1,x2,y1,y2;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    printf("%.2f",d(x1,y1,x2,y2));
    return 0;
}