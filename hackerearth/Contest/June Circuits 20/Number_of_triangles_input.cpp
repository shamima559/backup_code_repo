#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("output.txt", "w", stdout);

    int n;
    scanf("%d", &n);

    for (int i = 5; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int k = 1; k <= i; k++)
                printf("%d %d %d\n", i, j, k);
        }
    }

    return 0;
}