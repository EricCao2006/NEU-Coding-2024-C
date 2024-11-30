//3*3矩阵主对角线求和
#include <stdio.h>
int main(void)
{
    int a[3][3];
    //采用"\"换行符
    scanf("%d %d %d\n  \
    %d %d %d\n  \
    %d %d %d",  \
     &a[0][0], &a[0][1], &a[0][2],  \
     &a[1][0], &a[1][1], &a[1][2],  \
     &a[2][0], &a[2][1], &a[2][2]);
    int sum=a[0][0]+a[1][1]+a[2][2];
    printf("%d",sum);
    return 0;
}