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
        else if (n == 6)
            printf("4\n");
        else
        {
            int addend = 4, ans = 4;
            for (int i = 0; i < n - 6; i++, addend += 2)
                ans += addend;

            printf("%d\n", ans);
        }
    }

    return 0;
}