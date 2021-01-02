#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, m, i = 1;
    scanf("%d %d", &n, &m);
    while (n != 0 && m != 0)
    {
        printf("Field #%d:\n", i++);
        getchar();

        char str[105][105] = {0};
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                scanf("%c", &str[i][j]);
            getchar();
        }

        int c = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (str[i][j] == '.')
                {
                    for (int k = i - 1; k <= i + 1; k++)
                    {
                        for (int l = j - 1; l <= j + 1; l++)
                        {
                            if (str[k][l] == '*')
                                c++;
                        }
                    }
                    printf("%d", c);
                    c = 0;
                }
                else
                {
                    printf("*");
                    continue;
                }
            }
            printf("\n");
        }
        scanf("%d %d", &n, &m);
        if (n != 0 && m != 0)
            printf("\n");
    }

    return 0;
}