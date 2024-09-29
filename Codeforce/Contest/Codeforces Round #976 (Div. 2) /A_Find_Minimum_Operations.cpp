#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n, k, x = 0, ans = 0, rem;
        scanf("%d", &n);
        scanf("%d", &k);
        rem = n;

        if (n < k)
            printf("%d\n", n);
        else if (n == k)
            printf("1\n");
        else
        {
            while (rem != 0)
            {
                ans++;
                x = log(rem) / log(k);
                rem = rem - pow(k, x);
                // printf("rem = %d\n", rem);
            }

            printf("%d\n", ans);
        }
    }

    return 0;
}