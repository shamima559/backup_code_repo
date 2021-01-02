#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long int test;

    scanf("%lld", &test);

    while (test--)
    {
        long long int x, y, a, b, ans;
        scanf("%lld %lld %lld %lld", &x, &y, &a, &b);
        if (a >= b || a * 2 > b)
            ans = min(x, y) * b + (max(x, y) - min(x, y)) * a;
        else
            ans = (x + y) * a;

        printf("%lld\n", ans);
    }

    return 0;
}