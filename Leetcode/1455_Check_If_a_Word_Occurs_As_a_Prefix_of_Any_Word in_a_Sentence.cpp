#include <bits/stdc++.h>

using namespace std;

int isPrefixOfWord(char *sentence, char *searchWord)
{
    unsigned int word_no, word, i, j;
    char word_matrix[110][101];

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

    for (j = 0, word = 0, i = 0; j <= word_no; j++)
    {
        if (word_matrix[j][0] != searchWord[0])
            continue;
        else
        {
            while (word_matrix[j][i] != '\0')
            {
                if (word_matrix[j][i] == searchWord[i])
                    i++;
                else
                    break;
            }
        }
        if (i == strlen(searchWord))
            return j + 1;
        else
        {
            i = 0;
            word = 0;
        }
    }
    return -1;
}

int main()
{
    freopen("input.txt", "r", stdin);

    int index;
    char sentence[200], word[11];

    fgets(sentence, sizeof(sentence), stdin);
    sentence[strlen(sentence) - 1] = '\0';

    scanf("%s", word);

    index = isPrefixOfWord(sentence, word);

    printf("%d\n", index);

    return 0;
}