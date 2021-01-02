#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0;
    scanf("%d", &n);

    while (n--)
    {
        int p, v, t;
        scanf("%d %d %d", &p, &v, &t);

        if (p + v + t >= 2)
            c++;
    }
    printf("%d", c);

    return 0;
}