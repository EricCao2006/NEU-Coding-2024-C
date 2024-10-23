//输入10个字符，统计其中的字母、数字、其他字符的个数
#include<stdio.h>
int main(void)
{
    int let,num,oth;
    let=num=oth=0;
    char input[10];
    scanf("%s",&input);
    for(int i=0;i<10;i++)
    {
        if((input[i]>='a'&&input[i]<='z')||(input[i]>='A'&&input[i]<='Z'))
            let++;
        else if(input[i]>='0'&&input[i]<='9')
            num++;
        else
            oth++;
    }
    printf("%d\n%d\n%d\n",let,num,oth);
    return 0;
}