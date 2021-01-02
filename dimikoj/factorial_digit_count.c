#include <stdio.h>
#include <math.h>

int main()
{
    int test, i, n, ans, s;

    scanf("%d", &test);

    while (test--)
    {
        ans = 0;
        scanf("%d", &n);
        for (i = 1; (n / pow(5, i)) != 0; i++)
            ans += (n / pow(5, i));

        printf("%d\n", ans);
    }
}