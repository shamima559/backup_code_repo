#include <bits/stdc++.h>

using namespace std;

int a[200009];
int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int ind_o = -1, ind_z = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (!a[i])
            {
                ind_z = i;
                break;
            }
        }
        int ans = 0;
        for (int i = ind_z; i >= 0; i--)
        {
            if (a[i])
            {
                ind_o = i;
                ans += (ind_z - ind_o);
                ind_z--;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}