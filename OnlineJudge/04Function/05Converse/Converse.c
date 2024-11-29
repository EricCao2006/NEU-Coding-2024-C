//不知道该怎么描述了:(
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
char converse(char letter) 
{
    char conversed;
    if(islower(letter))
        conversed=(letter-'a'+5)%26+'A';
    else if(isupper(letter))
        conversed=(letter-'A'+5)%26+'a';
    return conversed;
}
int main(void)
{
    char str[100];
    char temp;
    int i=0;
    while(TRUE)
    {   
        temp=getchar();
        if (temp=='\n') 
        {
            str[i]='\0';
            break;
        } 
        if (isalpha(temp)) 
        {
            str[i]=converse(temp);
            i++;
        } 
        else if (!isdigit(temp)) 
        {
            str[i]=temp;
            i++;
        }
    }
    printf("%s\n", str);
    return 0;
}