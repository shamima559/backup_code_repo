#include <bits/stdc++.h>

using namespace std;

int a[100];
int main()
{
    //freopen("input.txt","r",stdin);

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, a + n);

    for (int i = 0; i < n - 1; i++)
        a[i + 1] = a[i] + a[i + 1];

    int l = a[n - 1] - a[n - 2];
    int mn = abs(a[n - 2] - l);
    int r, ll;
    for (int i = 0; i < n - 1; i++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            ll = l + a[i];
            r = a[n - 2] - a[i];
            if (abs(l - r) < mn)
            {
                mn = abs(l - r);
                // break;
            }
        }
    }
    printf("%d\n", mn);

    return 0;
}
