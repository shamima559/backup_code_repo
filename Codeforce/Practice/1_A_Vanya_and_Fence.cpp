#include <bits/stdc++.h>

using namespace std;

int a[100000];
int main()
{
    int n, h, ans = 0;
    scanf("%d %d", &n, &h);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] <= h)
            ans++;
        else
            ans += 2;
    }
    printf("%d\n", ans);

    return 0;
}