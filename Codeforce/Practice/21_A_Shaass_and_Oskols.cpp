#include <bits/stdc++.h>

using namespace std;

int a[1000];
int main()
{
    //freopen("input.txt", "r", stdin);

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    int m, x, y;
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d %d", &x, &y);
        if (x + 1 <= n)
            a[x + 1] += (a[x] - y);
        if (x + 1 >= 1)
            a[x - 1] += (y - 1);
        a[x] = 0;

        /* for (int i = 1; i <= n; i++)
            printf("%d = %d\n", i, a[i]); */
    }
    for (int i = 1; i <= n; i++)
        printf("%d\n", a[i]);

    return 0;
}