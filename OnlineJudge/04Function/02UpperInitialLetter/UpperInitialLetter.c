//将输出中连续字母的首字母大写
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char str[100];
    for(int i=0;i<100;i++)
    {
        str[i]=getchar();
        if(str[i]=='\n')
            {
                str[i]='\0';
                break;
            }
    }
    for(int i=0;i<100;i++)
    {
        if(isalpha(str[i]))
        {
            str[i]=toupper(str[i]);
            for(;isalpha(str[i]);i++)
            ;
        }
    }
    printf("%s",str);
    return 0;
}