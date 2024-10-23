//统计输入的奇数和偶数的和，输入-1结束。
#include <stdio.h>
#define True 1
int main() 
{
    int num = 0;
    int even_sum = 0;
    int odd_sum = 0;
    while (True) 
    {
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        if (num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
    }
    printf("%d %d",odd_sum,even_sum);
    return 0;
}
