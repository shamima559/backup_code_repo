#include <stdio.h>
#include <time.h>

int main()
{

    freopen("input.txt", "r", stdin);
    long long factorial, test, i, n, c = 0;

    scanf("%lld", &test);

    while (test--)
    {
        scanf("%lld", &n);
        factorial = 1;
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
            //c++;
        }
        printf("%lld\n", factorial);
    }
    //printf("%lld\n", c);
    return 0;
}
