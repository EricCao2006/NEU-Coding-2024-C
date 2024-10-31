//选择排序算法实现
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(void)
{
    //数组生成
    srand(time(NULL));
    int arr[100];
    int n=0;
    for(n=0;n<100;n++)
        arr[n]=rand()%1000;
    printf("Before sorting:\n");
    for(n=0;n<100;n++)
        printf("%d ",arr[n]);
    printf("\n");
    //选择排序
    int i,j,temp,minindex;
    for(i=0;i<100;i++)
    {
        minindex=i;
        for(j=i+1;j<100;j++)
        {
            if (arr[j]<arr[minindex])
                minindex=j;
        }
        if (minindex!=i)
        {
            temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
    //输出排序后的数组
    printf("After sorting:\n");
    for(n=0;n<100;n++)
        printf("%d ",arr[n]);
    printf("\n");
    return 0;
}