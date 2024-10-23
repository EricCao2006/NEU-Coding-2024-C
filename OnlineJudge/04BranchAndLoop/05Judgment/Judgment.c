//小学口算检查
#include <stdio.h>
int main(void)
{
    int a,b,c,output;
    char operator;
    scanf("%d%c%d=%d",&a,&operator,&b,&c);
    switch(operator)
    {
        case '+':
            output=a+b;
            break;
        case '-':
            output=a-b;
            break;
        case '*':
            output=a*b;
            break;
        case '/':
            output=a/b;
            break;
    }
    printf("%d",output==c);
    return 0;
}