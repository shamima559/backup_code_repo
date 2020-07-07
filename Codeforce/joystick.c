#include <stdio.h>

void swap(int *a, int *b)
{
    int t;

    t = *b;
    *b = *a;
    *a = t;
}

int max(int a, int b)
{
    if (a >= b)
        return 1;
    else
        return 0;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int a1, a2, c = 0;

    scanf("%d %d", &a1, &a2);

    if (a1 == 1 && a2 == 1)
    {
        printf("0\n");
        return 0;
    }

    while (a1 > 0 && a2 > 0)
    {
        if (max(a1, a2))
            swap(&a1, &a2);

        a1++;
        a2 -= 2;
        c++;
    }
    printf("%d\n", c);

    return 0;
}