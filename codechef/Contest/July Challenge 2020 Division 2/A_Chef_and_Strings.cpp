#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n, sum = 0, t = 0, s = 0;
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &s);
            if (i)
                sum += ((abs(s - t)) - 1);
            t = s;
        }

        printf("%d\n", sum);
    }

    return 0;
}