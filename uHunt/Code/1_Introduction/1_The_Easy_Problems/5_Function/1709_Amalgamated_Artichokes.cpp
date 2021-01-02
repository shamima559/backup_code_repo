#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);

    int p, a, b, c, d, n;
    while (scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n) != EOF)
    {
        double price, mx = 0, ans = 0;
        for (int k = 1; k <= n; k++)
        {
            price = p * (sin(a * k + b) + cos(c * k + d) + 2);
            mx = max(mx, price);
            ans = max(ans, mx - price);
        }
        printf("%.9lf\n", ans);
    }

    return 0;
}
