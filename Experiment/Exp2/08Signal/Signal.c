//计算某个给定整数的符号
#include <stdio.h>
char sign(int num)
{
    if(num > 0)
        return '+';
    else if(num < 0)
        return '-';
    else
        return '=';
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%c",sign(n));
    return 0;
}