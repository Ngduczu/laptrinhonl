#include <stdio.h>

int main()
{
    int C;
    double F;
    scanf("%d", &C);
    F = (1.0 * C * 9 / 5) + 32;
    printf("%.2lf", F);
    return 0;
}