#include <stdio.h>
#include <time.h>

int main()
{

    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int test, n, i, j;
    long long arr[30] = {0}, c = 0;
    arr[1] = 1;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);

        if (arr[n] != 0)
            printf("%lld\n", arr[n]);
        else
        {
            for (i = n; i >= 1; i--)
            {
                if (arr[i] != 0)
                    break;
            }

            for (j = i + 1; j <= n; j++)
            {
                arr[j] = arr[j - 1] * j;
                //c++;
            }

            printf("%lld\n", arr[n]);
        }
    }
    //printf("%lld\n", c);
    return 0;
}
