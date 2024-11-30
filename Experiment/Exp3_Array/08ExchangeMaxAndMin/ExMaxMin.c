//交换最大值与最小值并输出
#include <stdio.h>
int main(void)
{
    //初始化
    int data[10];
    int length=0;
    int temp;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&temp);
        if(temp==-1)
            break;
        else
        {    
            data[i]=temp;
            length++;
        }
    }
    //交换
    int max=data[0],min=data[0];
    int max_index=0,min_index=0;
    for(int i=1;i<length;i++)
    {
        if(data[i]>max)
        {
            max=data[i];
            max_index=i;
        }
        if(data[i]<min)
        {
            min=data[i];
            min_index=i;
        }
    }
    temp=data[max_index];
    data[max_index]=data[min_index];
    data[min_index]=temp;
    for(int i=0;i<length;i++)
        printf("%d ",data[i]);
    return 0;
}