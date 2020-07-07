#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int test, n, i, a = 1;
    long long arr[25] = {[0 ... 24] = 1};

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);

        for (i = n; arr[i] == 1; i--)
        {
            a = i;
            if (arr[i] != 1)
                break;
        }
        //a = i;

        if (n < a)
        {
            for (; i < n; i++)
                arr[i + 1] = arr[i] * (i + 1);
        }
        else
        {
            for (i = a; i < n; i++)
                arr[i + 1] = arr[i] * (i + 1);
        }

        printf("%lld\n", arr[i]);
        a = n;
    }

    return 0;
}