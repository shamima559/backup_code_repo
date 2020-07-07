#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[1000];

    while (fgets(str, sizeof(str), stdin))
    {
        for (i = 0; i < strlen(str); i++)
        {
            putchar(str[i]);
        }
    }

    return 0;
}