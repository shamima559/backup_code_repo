#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, mx = INT_MIN, mn = INT_MAX;
        scanf("%d", &n);

        int a, b;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &a, &b);
            mn = min(b, mn);
            mx = max(a, mx);
        }
        if (mx - mn < 0)
            printf("0\n");
        else
            printf("%d\n", mx - mn);
    }
    return 0;
}