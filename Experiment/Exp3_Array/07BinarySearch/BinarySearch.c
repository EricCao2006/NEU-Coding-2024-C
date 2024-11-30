//输入一组降序数据及查找目标，进行二分查找
#include <stdio.h>
int main(void)
{
    int scores[5];
    int target;
    int ranking=0;
    int i,left=0,right=4,mid;
    for(i=0;i<5;i++)
        scanf(" %d",&scores[i]);
    scanf(" %d",&target);
    while(left<=right)
    {
        mid=(left+right)/2;
        if(scores[mid]==target)
        {
            ranking=mid+1;
            break;
        }
        else if(scores[mid]<target)
            right=mid-1;
        else
            left=mid+1;
    }
    if(ranking==0)
        printf("-1");
    else
        printf("%d %d",target,ranking);
    return 0;
}