#include <stdio.h>

int main()
{
    int test, length, width, height, flag, i;

    scanf("%d", &test);
    for (i = 0; i < test; i++)
    {
        flag = 0;
        scanf("%d%d%d", &length, &width, &height);

        if (length <= 20)
            if (width <= 20)
                if (height <= 20)
                {
                    flag = 1;
                    printf("Case %d: good\n", i + 1);
                }

        if (flag == 0)
        {
            printf("Case %d: bad\n", i + 1);
        }
    }
    return 0;
}