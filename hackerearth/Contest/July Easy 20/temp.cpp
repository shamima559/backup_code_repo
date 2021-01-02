#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x < y)
            printf("-1\n");
        else
            printf("%d\n", max(x, y));
    }

    return 0;
}