#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[10], b[10];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &b[i]);

        int k, diff[10];
        bool flag1 = false, flag2 = false, flag3 = false;
        for (int i = 0, j = 0; i < n; i++)
        {
            k = b[i] - a[i];
            if (k < 0)
            {
                flag1 = true;
                break;
            }
            else if (k == 0 && j == 0)
                continue;
            else if (k == 0 && j != 0)
            {
                for (int j = i; j < n; j++)
                {
                    flag3 = true;
                    if (b[j] - a[j] != 0)
                    {
                        flag2 = true;
                        break;
                    }
                }
            }
            else
            {
                diff[j++] = k;
                if ((diff[j - 1] != diff[j - 2]) && (j - 2 >= 0))
                {
                    flag1 = true;
                    break;
                }
            }
            if (flag2)
            {
                flag1 = true;
                break;
            }
            if (flag3)
                break;
        }

        if (flag1)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}