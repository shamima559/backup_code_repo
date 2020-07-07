#include <stdio.h>

int main()
{
    int test, column, y1, y2, i, j, k;

    scanf("%d", &test);

    while (test--)
    {
        getchar();
        i = 0;
        scanf("%d", &column);
        int diff[column], ref, flag = 0;
        for (j = 0; j < column; j++)
        {
            scanf("%d%d", &y1, &y2);
            diff[i] = y1 - y2;
            if (diff[i] < 0)
                diff[i] = -diff[i];
            i++;
        }

        ref = diff[0];
        for (k = 0; k < column; k++)
        {
            if (ref != diff[k])
                flag = 1;
        }

        if (flag == 1)
            printf("no\n");
        else
            printf("yes\n");
        if (test != 0)
            printf("\n");
    }

    return 0;
}