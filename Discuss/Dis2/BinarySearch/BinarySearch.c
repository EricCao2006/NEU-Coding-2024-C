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
int binary_search(int sorted_arr[],int n,int key)
{
    //二分搜索函数,需要传入有序数组,返回Flag
    int low=0,high=n-1,mid=(low+high)/2;
    while(key!=sorted_arr[mid]&&low<=high)
    {
        if(key<sorted_arr[mid])
            high=mid-1;
        else
            low=mid+1;
        mid=(low+high)/2;
    }
    if(sorted_arr[mid]==key)
        return 1;
    else
        return 0;
}
int main(void)
{
    //数组生成
    srand(time(NULL));
    int arr[100];
    int n=0;
    for(n=0;n<100;n++)
        {arr[n]=rand()%1000;
        printf("%d ",arr[n]);}
    printf("\n");
    //排序
    selectionSort(arr,100);
    //待搜索数生成
    int key=rand()%1000;
    printf("Searching for %d\n",key);
    //搜索
    int exist=binary_search(arr,100,key);
    if(exist)
        printf("%d is found in the array.\n",key);
    else
        printf("%d is not found in the array.\n",key);
    return 0;
}