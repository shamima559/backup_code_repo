#include <stdio.h>

int main()
{
    int i;
    printf("1000\t");
    for (i = 999; i > 0; i--)
    {
        printf("%d\t", i);
        if (i % 5 == 1)
        {
            printf("\n");
        }
    }
}
