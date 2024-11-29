//寻找字符串中某字符第一次和最后一次出现的位置
//不区分大小写
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
int main(void)
{
    //输入
    char to_search;
    char input;
    to_search=tolower(getchar());
    //查找
    int first=-1,last=-1;
    int temp=0;
    int exist=FALSE;
    getchar();
    while(TRUE)
    {
        input=tolower(getchar());
        if(exist==FALSE)
            first=temp;
        if(input=='\n')
            break;
        if(input==to_search)
        {    
            last=temp;
            exist=TRUE;
        }
        temp++;
    }
    if(exist==FALSE)
        first=-1;
    if(first==last)
        printf("%d",first);
    else
        printf("%d %d",first,last);
    return 0;
}