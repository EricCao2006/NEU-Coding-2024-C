//n人围圈报数，报到m的退出，求胜者（一人）的编号
//又称“约瑟夫环”问题
#include <stdio.h>
#include <string.h>
int main(void)
{
    //初始化
    int list[100];
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i=0;i<n;i++)
        list[i]=i+1;
    int count=0;
    int remaining=n;
    //主循环
    while (remaining>1)
    {
        count=(count+m-1)%remaining;
        for (int i=count;i<remaining-1;i++)
            list[i]=list[i+1];
        remaining--;
    }
    printf("%d",list[0]);
    return 0;
}