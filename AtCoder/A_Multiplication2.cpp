#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    unsigned long long int nm[100000];
    long double ans = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%llu", &nm[i]);
        if (nm[i] == 0)
        {
            printf("0");
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        ans *= nm[i];

        if (ans > 1000000000000000000)
        {
            printf("-1");
            return 0;
        }
    }

    printf("%lld", (long long int)ans);

    return 0;
}
