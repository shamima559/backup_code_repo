#include <stdio.h>
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int test, n, m;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d %d", &n, &m);

        if (n == 1 || m == 1)
            printf("YES\n");
        else if (n == 2 && m == 2)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}