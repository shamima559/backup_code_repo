#include <stdio.h>
#include <math.h>

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int i, diff[16] = {0};
    for (i = 1; i <= 15; i++)
        diff[i] = diff[i - 1] + pow(2, i);

    int test, n;

    scanf("%d", &test);

    while (test--)
    {
        scanf("%d", &n);
        printf("%d\n", diff[n / 2]);
    }

    return 0;
}