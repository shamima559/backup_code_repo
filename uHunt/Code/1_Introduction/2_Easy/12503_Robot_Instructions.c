#include <stdio.h>
#include <string.h>

int main()
{
    int test, instruction, position = 0, i, pos, val[101];
    char str[15];

    scanf("%d", &test);

    while (test--)
    {
        position = 0;
        scanf("%d", &instruction);

        for (i = 0; i < instruction; i++)
        {
            scanf("%s", str);

            if (strcmp(str, "LEFT") == 0)
                position += val[i] = -1;
            else if (strcmp(str, "RIGHT") == 0)
                position += val[i] = 1;
            else
            {
                scanf("%*s %d", &pos);
                position += val[i] = val[pos - 1];
            }
        }
        printf("%d\n", position);
    }

    return 0;
}