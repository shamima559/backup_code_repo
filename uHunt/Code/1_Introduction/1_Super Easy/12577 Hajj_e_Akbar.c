#include <stdio.h>

int main()
{
    char str[100];
    int i = 1;

    while (scanf("%s", str))
    {
        if (str[0] == '*')
            break;
        else if (str[0] == 'H')
            printf("Case %d: Hajj-e-Akbar\n", i);
        else
            printf("Case %d: Hajj-e-Asghar\n", i);
        i++;
    }
    return 0;
}