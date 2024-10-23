//四则运算计算器，无限循环
//退出请按ctrl+c
#include <stdio.h>
#define TRUE 1
char symbol='+';
float num1=0.0;
float num2=0.0;
float ans=0.0;
int main(void)
{
    while (TRUE)
    {
        printf("Input the first number:");
        scanf(" %f",&num1);
        printf("Input the operational symbol:");
        scanf(" %c",&symbol);
        printf("Input the second number:");
        scanf(" %f",&num2);
        switch(symbol)
        {
            case '+':
                ans=num1+num2;
                break;
            case '-':
                ans=num1-num2;
                break;
            case '*':
                ans=num1*num2;
                break;
            case '/':
                ans=num1/num2;
                break;
        }
         printf("%f %c %f = %f \n",num1,symbol,num2,ans);
    }
}
