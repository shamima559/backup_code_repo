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

        int mx = 0, cnt[200009] = {};
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            mx = max(mx, a[i]);
            cnt[a[i]]++;
            if (cnt[a[i]] > 2)
                flag = true;
        }

        if (flag || cnt[mx] != 1)
            printf("NO");
        else
        {
            printf("YES\n");
            for (int i = 0; i <= mx; i++)
            {
                if (cnt[i] != 0)
                {
                    printf("%d ", i);
                    cnt[i]--;
                }
            }
            for (int i = mx; i >= 0; i--)
            {
                if (cnt[i] != 0)
                {
                    printf("%d ", i);
                    cnt[i]--;
                }
            }
        }
        printf("\n");
    }

    return 0;
}