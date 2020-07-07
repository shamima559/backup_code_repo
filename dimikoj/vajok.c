#include <stdio.h>

int main()
{
    int test, nmbr, i, j;

    scanf("%d", &test);

    for (i = 0; i < test; i++)
    {
        scanf("%d", &nmbr);
        printf("Case %d:", i + 1);
        for (j = 1; j <= nmbr; j++)
        {
            if (nmbr % j == 0)
                printf(" %d", j);
        }
        printf("\n");
    }
}
