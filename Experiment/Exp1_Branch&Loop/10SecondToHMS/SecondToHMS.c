//把秒数转换为时分秒
#include <stdio.h>
int main(void)
{
    int input,sec,min,hour;
    scanf("%d",&input);
    sec = input % 60;
    input /= 60;
    min = input % 60;
    input /= 60;
    hour = input;
    printf("%02d:%02d:%02d\n",hour,min,sec);
    return 0;
}