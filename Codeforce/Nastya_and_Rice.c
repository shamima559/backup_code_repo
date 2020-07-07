#include <stdio.h>

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int test, n, a, b, c, d;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);

        if ((a - b) * n > (c + d) || (a + b) * n < (c - d))
            printf("No\n");
        else
            printf("Yes\n");
    }

    return 0;
}