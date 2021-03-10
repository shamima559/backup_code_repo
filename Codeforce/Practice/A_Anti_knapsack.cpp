#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n, k, t;
        scanf("%d %d", &n, &k);

        t = ceil((double)k / 2);
        printf("%d\n", (n - k) + (k - t));
        while (t <= n)
        {
            if(t != k)
            {
                printf("%d ", t);
            }
            t++;
        }
        printf("\n");
    }

    return 0;
}