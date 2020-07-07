#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n, m, t, sum = 0;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &t);
            sum += t;
        }

        if (m != n || n == 2)
        {
            printf("-1\n");
            continue;
        }

        printf("%d\n", sum * 2);
        for (int i = 1; i <= m; i++)
        {
            if (i != m)
                printf("%d %d\n", i, i + 1);
            else
                printf("%d 1\n", m);
        }
    }
    return 0;
}