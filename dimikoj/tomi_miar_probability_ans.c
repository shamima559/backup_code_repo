#include <stdio.h>
#include <string.h>

int facto(int n)
{
    int i, facto = 1;
    for (i = n; i > 1; i--)
        facto = facto * i;
    return facto;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, i, j, k, l;
    int count[11];
    char line[210], word_matrix[11][22];

    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        gets(line);
        for (j = 0, k = 0, l = 0; j < strlen(line); j++)
        {
            if (line[j] == ' ')
            {
                word_matrix[k][l] = '\0';
                l = 0;
                k++;
                j++;
            }
            word_matrix[k][l++] = line[j];
        }
        word_matrix[k][l] = '\0';
        for (j = 0; j <= k; j++)
            count[j] = 1;
        int c = 0;
        for (j = 0; j < k; j++)
        {
            if (word_matrix[j][0] != '\0')
            {
                for (l = j + 1; l <= k; l++)
                {
                    if (strcmp(word_matrix[j], word_matrix[l]) == 0)
                    {
                        count[c]++;
                        word_matrix[l][0] = '\0';
                    }
                }
                c++;
            }
        }
        int prb = 1;
        for (j = 0; j < c; j++)
            prb = prb * facto(count[j]);
        prb = facto(k + 1) / prb;
        printf("1/%d\n", prb);
    }
    return 0;
}