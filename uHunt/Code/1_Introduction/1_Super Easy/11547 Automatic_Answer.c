#include <stdio.h>

int main()
{
    int test, n;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);
        n = (n * 63 + 7492) * 5 - 498;
        n /= 10;
        if (n < 0)
            n = -n;
        printf("%d\n", n % 10);
    }

    return 0;
}