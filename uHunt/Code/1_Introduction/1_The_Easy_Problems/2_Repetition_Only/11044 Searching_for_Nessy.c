#include <stdio.h>

int main()
{
    int test, row, column;
    scanf("%d", &test);

    while (test--)
    {
        scanf("%d%d", &row, &column);
        row = row / 3;
        column = column / 3;
        printf("%d\n", row * column);
    }

    return 0;
}