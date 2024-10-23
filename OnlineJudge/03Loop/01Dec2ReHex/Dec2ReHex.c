//十进制转十六进制
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void restr(char* str)
{
	int len = strlen(str);
	char tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';

	if ((strlen(str + 1)) >= 2)
	{
		restr(str + 1);
	}
	*(str + len - 1) = tmp;
}
int main(void)
{
    char hexnum[3];
    int decnum=0;
    char temp='0';
    scanf("%d",&decnum);
    sprintf(hexnum,"%X",decnum);
    restr(hexnum);
    puts(hexnum);
    return 0;
}