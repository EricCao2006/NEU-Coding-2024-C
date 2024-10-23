//三个整数排序，冒泡算法
#include<stdio.h>
int main(void)
    {
    int nums[3]={0,0,0};
    int temp=0,i=0,flag=1;
    scanf("%d %d %d",&nums[0],&nums[1],&nums[2]);
    while(flag)
    {
	    flag=0;
	    for(i=0;i<2;i++)
        {
		    if(nums[i]>nums[i+1]) 
            {
			    flag=1;
			    temp=nums[i+1];
			    nums[i+1]=nums[i];
			    nums[i]=temp;
		    }
	    }	
    }
    printf("%d %d %d",nums[0],nums[1],nums[2]);
    return 0;
    }