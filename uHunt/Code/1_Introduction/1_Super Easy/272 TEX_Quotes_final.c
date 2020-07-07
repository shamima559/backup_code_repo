#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    int i, j, count = 0;

    while (fgets(ch, sizeof(ch), stdin))
    {
        for (i = 0; i < strlen(ch); i++)
        {
            if (ch[i] == '"')
            {
                count++;
                if (count % 2 == 0)
                {
                    for (j = strlen(ch); j > (i - 1); j--)
                    {
                        ch[j + 1] = ch[j];
                    }
                    ch[i] = 39;
                    ch[i + 1] = 39;
                }
                else
                {
                    for (j = strlen(ch); j > (i - 1); j--)
                    {
                        ch[j + 1] = ch[j];
                    }
                    ch[i] = '`';
                    ch[i + 1] = '`';
                }
            }
        }

        for (i = 0; i < strlen(ch); i++)
        {
            putchar(ch[i]);
        }
    }
    return 0;
}