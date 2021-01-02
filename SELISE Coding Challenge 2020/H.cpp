#include <bits/stdc++.h>

using namespace std;

int si[200], fi[200];
double a[200];
int main()
{
    freopen("input.txt","r",stdin);

    int test;
    scanf("%d", &test);

    for (int k = 1; k <= test; k++)
    {
        int n, c;
        scanf("%d %d", &n, &c);

        for (int i = 0; i < n; i++)
            scanf("%d %d", &si[i], &fi[i]);

        for (int i = 0; i < n; i++)
            a[i] = fi[i] * 1.0 / si[i];

        // sort(a, a + n, greater<float>());

        int index, fun = 0, space = 0;
        double mx;
        while (space < c)
        {
            mx = 0;
            for (int i = 0; i < n; i++)
            {
                if (si[i] <= c && a[i] > mx)
                {
                    mx = a[i];
                    index = i;
                }
            }
            a[index] = 0;
            space += si[index];
            if (space >= c)
                break;
            fun += fi[index];
        }

        printf("Case %d: %d\n", k, fun);
    }

    return 0;
}
