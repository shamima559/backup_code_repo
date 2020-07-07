#include <bits/stdc++.h>

using namespace std;

long long p[100009], cum[100009];
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &p[i]);
        cum[i] = cum[i - 1] + p[i];
    }
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        scanf("%d %d", &l, &r);

        printf("%lld\n", cum[r] - cum[l - 1]);
    }

    return 0;
}