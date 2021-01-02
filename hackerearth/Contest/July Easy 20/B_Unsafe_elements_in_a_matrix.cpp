#include <bits/stdc++.h>

using namespace std;

int s[100000][10000];
int main()
{
    //freopen("input.txt","r",stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int mx = 0, mn = INT_MAX, t;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &t);
                s[i][j] = t;
                mx = max(mx, t);
                mn = min(mn, t);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s[i][j] == mx || s[i][j] == mn)
                {
                    for (int k = 1; k <= m; k++)
                        s[i][k] = 0;
                    for (int k = 1; k <= m; k++)
                        s[k][j] = 0;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                printf("%d ", s[i][j]);
            }
            cout << "\n";
        }
    }

    return 0;
}