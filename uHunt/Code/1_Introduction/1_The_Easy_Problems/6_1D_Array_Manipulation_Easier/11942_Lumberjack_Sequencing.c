#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int test, length[10], i;

    scanf("%d", &test);
    printf("Lumberjacks:\n");

    while (test--)
    {
        int count1 = 0, count2 = 0;
        for (i = 0; i < 10; i++)
            scanf("%d", &length[i]);

        for (i = 0; i < 9; i++)
        {
            if (length[i] < length[i + 1])
                count1++;
        }
        for (i = 0; i < 9; i++)
        {
            if (length[i] > length[i + 1])
                count2++;
        }

        if (count1 == 9 || count2 == 9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }

    return 0;
}