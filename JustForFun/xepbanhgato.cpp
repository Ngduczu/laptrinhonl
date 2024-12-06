#include <stdio.h>
int main()
{
    unsigned int n;
    scanf("%u", &n);
    double dem[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int a;
        dem[i] = 0;
        scanf("%d", &a);
        double phan_so[a][2];
        for (int j = 0; j < a; j++)
        {
            scanf("%lf %lf", &phan_so[j][0], &phan_so[j][1]);
        }
        for (int j = 0; j < a; j++)
        {
            dem[i] += (phan_so[j][0] / phan_so[j][1]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (dem[i] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}