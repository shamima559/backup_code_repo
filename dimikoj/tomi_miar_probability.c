#include <stdio.h>
#include <string.h>
int repeated_word_array[15];

int factorial(int n)
{
    int factorial, i;

    factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

//sentence e koyta word ase eta count korar jonno ei function
int word_count(char *ch)
{
    int count, j;
    count = 0;
    for (j = 0; ch[j] != '\0'; j++)
    {
        if (ch[j] == ' ' && ch[j + 1] != ' ' && ch[j + 1] != '\n')
            count++;
    }
    if (ch[0] == ' ' || ch[0] == '\n')
        count--;
    return count + 1;
}

//repeated word count korar jonno ei function
void repeated_word_count(char *sentence)
{
    int word_no, word, i, j, l, c;
    char word_matrix[11][22];

    for (i = 0, word_no = 0, word = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ')
        {
            word_matrix[word_no][word++] = sentence[i];
        }
        else if ((sentence[i] = ' ' && sentence[i + 1] != ' ') || sentence[i + 1] != '\0')
        {
            word_matrix[word_no++][word] = '\0';
            word = 0;
        }
    }
    word_matrix[word_no][word] = '\0';

    for (j = 0; j <= word_no; j++)
        repeated_word_array[j] = 1;
    c = 0;
    for (j = 0; j < word_no; j++)
    {
        if (word_matrix[j][0] != '\0')
        {
            for (l = j + 1; l <= word_no; l++)
            {
                if (strcmp(word_matrix[j], word_matrix[l]) == 0)
                {
                    repeated_word_array[c]++;
                    word_matrix[l][0] = '\0';
                }
            }
            c++;
        }
    }
    /*for (i = 0; i <= word_no; i++)
    {
        if (word_matrix[i][0] != '\0')
            printf("'%s' appeares %d times\n", word_matrix[i], repeated_word_array[i]);
    }*/
}

int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int test, word, numerator = 1, i, denominator, inv_probability;
    char str[250];

    scanf("%d", &test);
    getchar();

    while (test--)
    {
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';

        word = word_count(str);
        denominator = factorial(word);

        repeated_word_count(str);

        /*for(i=0;i<word;i++)
        {
        	printf("%d\n",repeated_word_array[i]);
        }*/
        for (i = 0; repeated_word_array[i] > 1 && i < word; i++)
            numerator *= factorial(repeated_word_array[i]);

        inv_probability = denominator / numerator;
        printf("1/%d\n", inv_probability);
        numerator = 1;
    }
    return 0;
}