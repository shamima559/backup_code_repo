#include <stdio.h>
#include <string.h>

int main()
{
    int test, i, c, j, l, k;

    scanf("%d", &test);
    char word_matrix[test][15];
    getchar();

    for (i = 0; i < test; i++)
    {
        scanf("%s", word_matrix[i]);
    }
    c = 0;
    for (j = 0; j < test; j++)
    {
        if (word_matrix[j][0] != '\0')
        {
            for (l = j + 1; l <= test; l++)
            {
                if (strcmp(word_matrix[j], word_matrix[l]) == 0)
                {
                    word_matrix[l][0] = '\0';
                }
            }
            c++;
        }
    }
    printf("%d\n", c);

    return 0;
}