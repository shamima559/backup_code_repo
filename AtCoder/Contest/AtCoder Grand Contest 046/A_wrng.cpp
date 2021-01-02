#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    scanf("%d", &x);

    int a[22];
    for (int i = 1, j = 0; i <= 120; ++i)
    {
        if (360 % i == 0)
            a[j++] = i;
    }

    int t, ans = 1;

    if (360 % x)
    {
        while (1)
        {
            for (int i = 0; i < 22; i++)
            {
                if ((a[i] <= x / 2) && (a[i + 1] > x / 2))
                {
                    t = i;
                    break;
                }
            }
            ans *= (((360 / a[t]) * (360 / a[t + 1])));
            if (a[t] + a[t + 1] == x)
                break;
            else
                x -= (a[t] + a[t + 1]);
        }
        printf("%d", ans);
    }
    else
        printf("%d", 360 / x);

    return 0;
}