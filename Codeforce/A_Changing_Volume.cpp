#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int diff = abs(a - b), c = 0;
        if (diff >= 5)
        {
            c = diff / 5;
            diff %= 5;
            if (diff >= 2)
                c += (diff / 2);
            c += (diff % 2);
        }
        else
        {
            c += (diff / 2);
            c += (diff % 2);
        }
        printf("%d\n", c);
    }
    return 0;
}