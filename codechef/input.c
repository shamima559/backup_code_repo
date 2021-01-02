#include <stdio.h>

int main()
{
    freopen("input.txt", "w", stdout);

    int i, t;

    scanf("%d", &t);

    printf("%d\n", t);

    for (i = t; i > 0; i--)
        printf("%d\n", i);

    return 0;
}
