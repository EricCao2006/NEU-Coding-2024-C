#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int serial_search(int arr[],int n,int key)
{
    //顺序搜索函数,返回Flag
    int exist=0;
    for(int i=0;i<n;i++)
        if (arr[i]==key)
            {exist=1;
            break;}
    return exist;
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
    //待搜索数生成
    int key=rand()%1000;
    printf("Searching for %d\n",key);
    //搜索
    int exist=serial_search(arr,100,key);
    if(exist)
        printf("%d is found in the array.\n",key);
    else
        printf("%d is not found in the array.\n",key);
    return 0;
}