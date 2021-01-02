#include <stdio.h>

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int test, X, Y, a, b;

    while (scanf("%d", &test) && test != 0)
    {
        scanf("%d%d", &X, &Y);
        while (test--)
        {
            scanf("%d%d", &a, &b);

            if (X < a && Y < b)
                printf("NE\n");
            if (X > a && Y > b)
                printf("SO\n");
            if (X > a && Y < b)
                printf("NO\n");
            if (X < a && Y > b)
                printf("SE\n");
            if (X == a || Y == b)
                printf("divisa\n");
        }
    }

    return 0;
}