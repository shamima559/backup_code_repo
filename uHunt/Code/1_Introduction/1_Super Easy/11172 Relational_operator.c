#include <stdio.h>

int main()
{
    int test, a, b;
    //char ch;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d%d", &a, &b);

        if (a > b)
            putchar('>');
        if (a < b)
            putchar('<');
        if (a == b)
            putchar('=');
        printf("\n");
    }

    return 0;
}