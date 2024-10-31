#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void bubbleSort(int arr[],int n)
{
    //冒泡排序,直接在原数组上排序
    int i,temp,sorted=0;
    while(sorted==0)
    {
        sorted=1;
        for(i=0;i<99;i++)
        {
            if (arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                sorted=0;
            }
        }
    }
}
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
    //调用冒泡排序算法
    bubbleSort(arr,100);
    //输出排序后的数组
    printf("After sorting:\n");
    for(n=0;n<100;n++)
        printf("%d ",arr[n]);
    printf("\n");
    return 0;
}