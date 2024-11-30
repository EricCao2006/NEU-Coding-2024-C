//在字符串的指定位置插入字符串
#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[100],t[100],inserted[200];
    int n;
    scanf("%s %d %s",s,&n,t);
    for(int i=0;i<n;i++)
        inserted[i]=s[i];
    for(int i=0;i<strlen(t);i++)
        inserted[i+n]=t[i];
    for(int i=0;i<strlen(s)-n;i++)
        inserted[i+n+strlen(t)]=s[i+n];
    inserted[strlen(s)+strlen(t)]='\0';
    printf("%s",inserted);
    return 0;
}