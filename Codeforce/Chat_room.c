#include <stdio.h>

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int i = 0;
    char str[] = "hello", ch;

    /*ch = getchar();
    while (ch != '\n')
    {
        if (ch == str[i])
            i++;
        ch = getchar();
    }*/

    while (scanf("%c", &ch) && ch != '\n')
    {
        if (ch == str[i])
            i++;
    }

    if (i == 5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}