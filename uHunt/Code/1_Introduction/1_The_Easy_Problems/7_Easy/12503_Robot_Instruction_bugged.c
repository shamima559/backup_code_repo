#include <stdio.h>
#include <string.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test, instruction, position = 0, i, j, k, val[2];
    char str[100][15];

    scanf("%d", &test);

    while (test--)
    {
        position = 0;

        scanf("%d", &instruction);
        getchar();

        for (i = 0; i < instruction; i++)
        {
            gets(str[i]);

            if (strcmp(str[i], "LEFT") == 0)
                position--;
            else if (strcmp(str[i], "RIGHT") == 0)
                position++;
            else
            {
                for (j = 8, k = 0; str[i][j] != '\0'; j++)
                    val[k++] = (int)str[i][j] - 49;
                if (k > 1)
                    val[0] = val[0] * 10 + val[1];

                while (strcmp(str[val[0]], "LEFT") != 0 && strcmp(str[val[0]], "RIGHT") != 0)
                {
                    for (j = 8, k = 0; str[val[0]][j] != '\0'; j++) //***************bug*****************
                        val[k++] = (int)str[val[0]][j] - 49; //****************bug******************
                    if (k > 1)
                        val[0] = val[0] * 10 + val[1];
                }

                if (strcmp(str[val[0]], "LEFT") == 0)
                    position--;
                else if (strcmp(str[val[0]], "RIGHT") == 0)
                    position++;
            }
        }
        printf("%d\n", position);
    }

    return 0;
}