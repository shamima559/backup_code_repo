#include <bits/stdc++.h>

using namespace std;

char str[1000000];
int main()
{
    int c = 1;
    while (scanf("%s", str) != EOF && str != "\n")
    {
        printf("Case %d:\n", c++);
        int n;
        scanf("%d", &n);

        for (int j = 0; j < n; j++)
        {
            int x, y;
            scanf("%d %d", &x, &y);

            bool flag = false;
            for (int i = min(x, y); i <= max(x, y) - 1; i++)
            {
                if (str[i] != str[i + 1])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }

    return 0;
}