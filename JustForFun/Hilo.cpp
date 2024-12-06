#include <stdio.h>

void decimalToBinary(unsigned int n)
{
    int binaryNum[16];
    for (int i = 0; i < 16; i++)
    {
        binaryNum[i] = 0;
    }
    int i = 15;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i--;
    }
    for (int j = 0; j < 8; j++)
    {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
    for (int j = 8; j < 16; j++)
    {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main()
{
    unsigned int n;
    scanf("%u", &n);
    decimalToBinary(n);
    return 0;
}