//数据加密与解密（由时间戳随机生成密钥）
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int encrypt(int data,int key)
{
    int encrypted=data^key;
    return encrypted;
}
int decrypt(int encrypted,int key)
{
    int decrypted=encrypted^key;
    return decrypted;
}
int main(void)
{
    srand(time(NULL));
    printf("Data:");
    char data[100];
    for(int i=0;i<100;i++)
        {data[i]=rand()%256;
        printf("%c",data[i]);}
    printf("\nKey:");
    int key=rand()%256;
    printf("%d",key);
    printf("\nEncrypted data:");
    char encrypted[100];
    for(int j=0;j<100;j++)
        {encrypted[j]=encrypt(data[j],key);
        printf("%c",encrypted[j]);}
    printf("\nDecrypted data:");
    char decrypted[100];
    for(int k=0;k<100;k++)
        {decrypted[k]=decrypt(encrypted[k],key);
        printf("%c",decrypted[k]);}
    return 0;
}