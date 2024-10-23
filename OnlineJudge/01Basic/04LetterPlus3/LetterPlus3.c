//小写字母后移3位
#include<stdio.h>
int main(void)
{
    char let;
    scanf(" %c",&let);
    if (let>='x')
        let=let-23;
    else
        let=let+3;
    printf("%c",let);
    return 0;
}