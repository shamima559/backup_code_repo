#include <stdio.h>

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int test, a, b, c, d;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%d %d %d\n", b, c, c);
    }

    return 0;
}