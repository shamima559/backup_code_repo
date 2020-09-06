#include <stdio.h>

int relevance[10];

void bubble_sort(int relevance[], int size)
{
    int i, j, flag, s;
    for (j = 0; j < size; j++)
    {
        flag = 0;
        for (i = 0; i < size - 1 - j; i++)
        {
            if (relevance[i] > relevance[i + 1])
            {
                s = relevance[i];
                relevance[i] = relevance[i + 1];
                relevance[i + 1] = s;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int test, i, cpy[10], k = 1;
    char url[10][101];

    scanf("%d", &test);

    while (test--)
    {
        for (i = 0; i < 10; i++)
        {
            scanf("%s%d", url[i], &relevance[i]);
            cpy[i] = relevance[i];
        }

        bubble_sort(relevance, 10);

        int temp[10] = {0}, j;

        for (i = 0, j = 0; i < 10; i++)
        {
            if (relevance[9] == cpy[i])
                temp[j++] = i;
        }

        printf("Case #%d:\n", k);

        for (i = 0; i < j; i++)
            printf("%s\n", url[temp[i]]);

        k++;
    }

    return 0;
}