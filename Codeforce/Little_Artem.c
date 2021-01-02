#include <stdio.h>

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int test, n, m, i, j;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d %d", &n, &m);
        for (i = 1; i <= m; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i == 1 && j == 1)
                    printf("W");
                else
                    printf("B");
            }
            printf("\n");
        }
    }

    return 0;
}