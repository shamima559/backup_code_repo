#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int p[10005], sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p[i]);
            if (p[i] > k)
                sum += (p[i] - k);
        }
        printf("%d\n", sum);
    }

    return 0;
}