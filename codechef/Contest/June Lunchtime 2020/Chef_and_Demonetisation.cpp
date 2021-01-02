#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        int s, n;
        scanf("%d %d", &s, &n);

        int mod = s % n, ans;
        if (mod)
        {
            ans = s / n;
            if (mod == 1 || mod % 2 == 0)
                ans++;
            else
                ans += 2;
        }
        else
            ans = s / n;

        printf("%d\n", ans);
    }

    return 0;
}