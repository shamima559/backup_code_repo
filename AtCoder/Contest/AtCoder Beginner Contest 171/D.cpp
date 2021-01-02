#include <bits/stdc++.h>

using namespace std;

int cnt[100000];
int main()
{
    //freopen("input.txt", "r", stdin);

    int n;
    scanf("%d", &n);

    int t;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        cnt[t]++;
        sum += t;
    }

    int q, b, c;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        scanf("%d %d", &b, &c);
        cnt[c] += cnt[b];
        sum += (-cnt[b] * b + cnt[b] * c);
        cnt[b] = 0;

        printf("%lld\n", sum);
    }

    return 0;
}