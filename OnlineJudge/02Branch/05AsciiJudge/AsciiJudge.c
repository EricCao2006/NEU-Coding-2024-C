//判断输入的字符是否为数字，如果是数字则输出ascii码，否则输出字符
#include<stdio.h>
int main(void)
{
    char c=getchar();
    if (c<48||c>57)
        printf("%d",(int) c);
    else
        putchar(c);
    return 0;
}