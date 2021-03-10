#include <bits/stdc++.h>

using namespace std;

char str[200];
int main()
{
    freopen("input.txt","r",stdin);

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n, k;
        bool flag = false;

        scanf("%d %d", &n, &k);

        scanf("%s", str);

        if (k == 0)
        {
            flag = false;
        }
        else if (k * 2 == n)
        {
            flag = true;
        }
        else if (n % 2 == 1)
        {
            for (int i = 0, j = n - 1; i != j; i++, j--)
            {
                if (str[i] == str[j])
                    continue;
                else
                {
                    flag = true;
                    break;
                }
            }
        }
        else if (n % 2 == 0)
        {
            for (int i = 0, j = n - 1; (j - i) != 1; i++, j--)
            {
                if (str[i] == str[j])
                    continue;
                else
                {
                    flag = true;
                    break;
                }
            }
        }


        if (!flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}