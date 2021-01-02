#include <stdio.h>

int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, m, n, i = 1;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d", &m, &n);

        printf("Case %d:", i++);
        if (m == 1 || n == 1)
            printf(" %d\n", max(m, n));
        else if (m == 2 || n == 2)
        {
            if (max(m, n) % 4 == 0)
                printf("% d\n", max(m, n));
            else
                printf(" %d\n", ((max(m, n) / 2) + 1) * 2);
        }
        else if (m % 2 == 1 || n % 2 == 1)
            printf(" %d\n", (m * n + 1) / 2);
        else
            printf(" %d\n", (m * n) / 2);
    }

    return 0;
}