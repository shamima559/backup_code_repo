#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    char ch[10];

    scanf("%d", &test);

    while (test--)
    {
        scanf("%s", ch);
        if (ch[0] == 't' && ch[1] == 'w' && ch[2] == 'o')
            printf("%d\n", 2);
        else if (ch[0] == 't' && ch[1] == 'w')
            printf("%d\n", 2);
        else if (ch[0] == 't' && ch[2] == 'o')
            printf("%d\n", 2);
        else if (ch[1] == 'w' && ch[2] == 'o')
            printf("%d\n", 2);
        else if (strlen(ch) == 5)
            printf("%d\n", 3);
        else
            printf("%d\n", 1);
    }

    return 0;
}