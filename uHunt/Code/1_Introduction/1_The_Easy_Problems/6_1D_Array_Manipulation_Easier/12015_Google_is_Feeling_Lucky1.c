#include <stdio.h>

int max(int arr[], int size)
{
    int mx, i;
    mx = arr[0];

    for (i = 0; i < size - 1; i++)
    {
        if (mx < arr[i + 1])
            mx = arr[i + 1];
    }
    return mx;
}

int main()
{
    int test, relevance[10], i, cpy[10], k = 1, mx;
    char url[10][101];

    scanf("%d", &test);

    while (test--)
    {
        for (i = 0; i < 10; i++)
        {
            scanf("%s%d", url[i], &relevance[i]);
            cpy[i] = relevance[i];
        }

        mx = max(relevance, 10);

        int temp[10] = {0}, j;

        for (i = 0, j = 0; i < 10; i++)
        {
            if (mx == cpy[i])
                temp[j++] = i;
        }

        printf("Case #%d:\n", k);

        for (i = 0; i < j; i++)
            printf("%s\n", url[temp[i]]);

        k++;
    }

    return 0;
}