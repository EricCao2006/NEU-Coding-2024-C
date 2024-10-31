#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void selectionSort(int arr[],int n)
{   
    //选择排序,直接在原数组上排序
    int i,j,temp,minindex;
    for(i=0;i<n;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
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
    //调用选择排序算法
    selectionSort(arr,100);
    //输出排序后的数组
    printf("After sorting:\n");
    for(n=0;n<100;n++)
        printf("%d ",arr[n]);
    printf("\n");
    return 0;
}