#include <stdio.h>

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    scanf("%d", &n);

    int ans[10], i, j = 0;
    if (n == 0)
        printf("10");
    else if (n == 1)
        printf("1");
    else
    {
        for (i = 9; i > 1; i--)
        {
            while (n % i == 0)
            {
                n /= i;
                ans[j++] = i;
            }
        }

        if (n == 1)
        {
            for (i = j - 1; i >= 0; i--)
                printf("%d", ans[i]);
        }
        else
            printf("-1");
    }

    return 0;
}