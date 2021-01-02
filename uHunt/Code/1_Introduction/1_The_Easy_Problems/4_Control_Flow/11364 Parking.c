#include <stdio.h>

int min(int A[], int size)
{
    int min, i;
    min = A[0];

    for (i = 0; i < size; i++)
    {
        if (A[i] < min)
            min = A[i];
    }
    return min;
}

int max(int A[], int size)
{
    int max, i;
    max = A[0];

    for (i = 0; i < size; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}

int main()
{
    int test, store, i, mx, mn;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d", &store);
        int position[store];
        for (i = 0; i < store; i++)
        {
            scanf("%d", &position[i]);
        }
        mx = max(position, store);
        mn = min(position, store);
        printf("%d\n", (mx - mn) * 2);
    }

    return 0;
}