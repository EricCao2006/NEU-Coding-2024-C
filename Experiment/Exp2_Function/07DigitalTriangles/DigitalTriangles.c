//输出n层数字三角形
#include <stdio.h>
void draw(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    draw(n);
    return 0;
}