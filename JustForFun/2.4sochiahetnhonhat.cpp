#include <stdio.h>

int main()
{
    unsigned long long a, b;
    scanf("%llu %llu", &a, &b);
    if (a % b == 0)
        printf("%llu", a);
    else
        printf("%llu", a + b - (a % b));
    return 0;
}