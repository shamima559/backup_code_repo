#include <bits/stdc++.h>

using namespace std;

int p[26], cum[26];
int main()
{
    freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n;
        scanf("%d", &n);

        int mid;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &p[i]);
            if (p[i] == 1)
                mid = i;
            cum[i] = cum[i - 1] + i;
        }

        int l, r, sum = 1, small, i;
        bool flag;

        printf("1");
        if (mid == 1)
        {
            i = 2;
            while (i <= n)
            {
                sum += p[i];
                if (sum == cum[i++])
                    printf("1");
                else
                    printf("0");
            }
        }
        else if (mid == n)
        {
            i = n - 1;
            while (i >= 1)
            {
                sum += p[i];
                if (sum == cum[i--])
                    printf("1");
                else
                    printf("0");
            }
        }
        else
        {
            //int c = 0;
            i = 2, l = mid - 1, r = mid + 1;
            while (l >= 1 && r <= n)
            {
                if (p[l] < p[r])
                {
                    small = p[l];
                    if (l != 1)
                        l--;
                    else
                        r++;
                    flag = true;
                }
                else
                {
                    small = p[r];
                    if (r != n)
                        r++;
                    else
                        l--;
                    flag = false;
                }

                sum += small;
                if (sum == cum[i++])
                    printf("1");
                else
                    printf("0");
            }
            if (flag && sum + p[n] == cum[i])
                printf("1");
            else if (!flag && sum + p[1] == cum[i])
                printf("1");
            else
                printf("0");
        }

        printf("\n");
    }
    return 0;
}