#include <stdio.h>

int main()
{
    char ch;
    int cnt = 0;
    while (scanf("%c", &ch) == 1)
    {
        if (ch == '"')
        {
            cnt++;
            if (cnt % 2 == 1)
                printf("``");
            else if (cnt % 2 == 0)
                printf("''");
        }
        else
            printf("%c", ch);
    }
    return 0;
}