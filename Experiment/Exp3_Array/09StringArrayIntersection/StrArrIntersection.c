//求字符串数组的交集
#include<stdio.h>
#include<string.h>
int main(void)
{
    char strs1[10][10], strs2[10][10];
    int length1=0, length2=0;
    char temp[10];
    for(int i=0;i<10;i++)
    {
        scanf("%s",temp);
        if(temp[0]=='#')
            break;
        else
        {
            strcpy(strs1[i],temp);
            length1++;
        }
    }
    for(int i=0;i<10;i++)
    {
        scanf("%s",temp);
        if(temp[0]=='#')
            break;
        else
        {
            strcpy(strs2[i],temp);
            length2++;
        }
    }
    char intersection[length1][10];
    int intersection_length=0;
    for(int i=0;i<length1;i++)
        intersection[i][0]='\0';
    for(int i=0;i<length1;i++)
    {
        for(int j=0;j<length2;j++)
        {
            if(strcmp(strs1[i],strs2[j])==0)
            {
                strcpy(intersection[intersection_length],strs1[i]);
                intersection_length++;
                break;
            }
        }
    }
    if(intersection_length==0)
        printf("NULL");
    else
        for(int i=0;i<intersection_length;i++)
            printf("%s ",intersection[i]);
    return 0;
}