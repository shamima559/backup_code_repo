#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    char str[500];

    scanf("%d", &test);
    getchar();

    while (test--)
    {
        scanf("%s", str);
        if ((str[0] == '1' || str[0] == '4' || (str[0] == '7' && str[1] == '8')) && strlen(str) <= 2)
            printf("+\n");
        else if (str[strlen(str) - 1] == '5' && str[strlen(str) - 2] == '3')
            printf("-\n");
        else if (str[0] == '9' && str[strlen(str) - 1] == '4')
            printf("*\n");
        else
            printf("?\n");
    }

    return 0;
}