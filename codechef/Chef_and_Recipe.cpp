#include <bits/stdc++.h>

using namespace std;

int a[10], store[10];
int main()
{
    //freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n, j = 0, l = 0, cnt[10] = {};
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (!i)
                store[j++] = a[i];
            if (i != 0 && a[i] != a[i - 1])
            {
                store[j++] = a[i];
                cnt[++l] = 1;
            }
            else
                cnt[l]++;
        }

        /*for (int i = 0; i < j; i++)
            printf("%d ", store[i]);
        cout << "\n";

        for (int i = 0; i <= l; i++)
            printf("%d ", cnt[i]);
        cout << "\n";*/

        bool flag = false;
        for (int i = 0; i < j; i++)
        {
            for (int k = 0; k < i; k++)
            {
                if ((store[i] == store[k]) || (cnt[i] == cnt[k]))
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}