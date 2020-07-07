#include <stdio.h>

int main()
{
    int test, n, i, a, b, j = 1;

    while (scanf("%d", &test) && test != 0)
    {
        a = 0;
        b = 0;
        for (i = 0; i < test; i++)
        {
            scanf("%d", &n);
            if (n != 0)
                a++;
            else
                b++;
        }
        printf("Case %d: %d\n", j, a - b);
        j++;
    }

    return 0;
}