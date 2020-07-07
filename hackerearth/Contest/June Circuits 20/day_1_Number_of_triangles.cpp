#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        if (n == 5)
            printf("1\n");
        /*else if (a == b)
            printf("%lld\n", (long long int)pow((n - 4), 2) + (n - 5));*/
        else if ((abs(a - b) == 1) || (a == 1 && b == n) || (a == n && b == 1))
            printf("%lld\n", (long long int)pow((n - 4), 2));
        else if ((abs(a - b) == 2) || (a == 1 && b == n - 1) || (a == n - 1 && b == 1) || (a == 2 && b == n) || (a == n && b == 2))
            printf("%lld\n", (long long int)pow((n - 4), 2) - (n - 5));
        else
            printf("%lld\n", (long long int)pow((n - 4), 2) - (n - 6));
    }

    return 0;
}