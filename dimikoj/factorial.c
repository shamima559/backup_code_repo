#include <stdio.h>

int main()
{
    long long factorial, test, i, n;

    scanf("%lld", &test);

    while (test--)
    {
        scanf("%lld", &n);
        factorial = 1;
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }
}