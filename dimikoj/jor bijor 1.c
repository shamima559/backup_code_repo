#include <stdio.h>

int main()
{
    int T[100], i, n;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &T[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (T[i] % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
}
