//输出三个数中比平均数大的数
#include <stdio.h>
int main(void)
    {
    int num[3]={0,0,0};
    int ave=0;
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    ave=num[0]+num[1]+num[2];
    (float)ave;
    ave=ave/3;
    if (num[0]>ave)
    printf("%d ",num[0]);
    if (num[1]>ave)
    printf("%d ",num[1]);
    if (num[2]>ave)
    printf("%d ",num[2]);
    return 0;
    }