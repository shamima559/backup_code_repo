#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, repeated_word_array[15];
    char item[200000][11];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s", item[i]);

    for (int j = 0; j < n; j++)
        repeated_word_array[j] = 1;
    int c = 0;
    for (int j = 0; j < n - 1; j++)
    {
        if (item[j][0] != '\0')
        {
            for (int l = j + 1; l < n; l++)
            {
                if (strcmp(item[j], item[l]) == 0)
                {
                    repeated_word_array[c]++;
                    item[l][0] = '\0';
                }
            }
            c++;
        }
    }
    /*for (int i = 0; i < n; i++)
    {
        if (item[i][0] != '\0')
            printf("'%s' appeares %d times\n", item[i], repeated_word_array[i]);
    }*/
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (item[i][0] != '\0')
            count++;
    }

    printf("%d\n", count);

    return 0;
}