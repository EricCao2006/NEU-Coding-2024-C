//对五个学生的成绩排序
#include <stdio.h>
int main(void)
{
    int score[5];
    for(int i=0;i<5;i++)
        scanf(" %d",&score[i]);
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(score[j]<score[j+1])
            {
                temp=score[j];
                score[j]=score[j+1];
                score[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
        printf("%d\n",score[i]);
    return 0;
}