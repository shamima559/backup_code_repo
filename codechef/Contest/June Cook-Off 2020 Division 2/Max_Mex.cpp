#include <bits/stdc++.h>

using namespace std;

int x[100000];
int main()
{
    //freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n, b, m, cnt = 1;
        scanf("%d %d %d", &n, &b, &m);

        for (int i = 0; i < m; i++)
            scanf("%d", &x[i]);

        for (int i = 0; i < m - 1; i++)
        {
            if ((x[i] / b) != (x[i + 1] / b))
                cnt++;
        }

        printf("%d\n", cnt);
    }

    return 0;
}