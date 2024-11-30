//求中位数
#include <stdio.h>
int main(void)
{
    //输入
    int nums[10];
    int length=0;
    int temp;
    for(int i=0;i<10;i++)
    {
        scanf(" %d",&temp);
        if(temp==-1)
            break;
        else
        {
            nums[i]=temp;
            length++;
        }
    }
    //冒泡排序
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length-i-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    if(length%2==0)
        printf("%d",(nums[length/2]+nums[length/2-1])/2);
    else
        printf("%d",nums[length/2]);
    return 0;
}