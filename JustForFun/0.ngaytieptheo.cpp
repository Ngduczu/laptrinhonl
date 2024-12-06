#include <stdio.h>
int nhuan(int y)
{
    return (y % 400 == 0 || (y % 4 == 0 && y % 100));
}
int main()
{
    int d, m, y, a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d/%d/%d", &d, &m, &y);
    if (nhuan(y))
        a[2]++;
    if (y <= 0 || m <= 0 || m > 12 || d <= 0 || d > a[m])
        return 0;
    else
    {
        if (d < a[m])
            printf("\n%d/%d/%d", d + 1, m, y);
        if (d == a[m] && m < 12)
            printf("\n%d/%d/%d", 1, m + 1, y);
        if (d == a[m] && m == 12)
            printf("\n%d/%d/%d", 1, 1, y + 1);
    }
}