#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int p[10000];
    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]);

    sort(p, p + n);

    int ans = 0;
    for (int i = 0; i < k; i++)
        ans += p[i];

    printf("%d", ans);

    return 0;
}