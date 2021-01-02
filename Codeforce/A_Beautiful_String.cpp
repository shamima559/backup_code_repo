#include <bits/stdc++.h>

using namespace std;

#define MAX 100000

int main()
{
    //freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);
    getchar();

    while (test--)
    {
        char str[MAX], temp = 'd';
        str[0] = 'e';
        for (int i = 1;; i++)
        {
            scanf("%c", &str[i]);
            if (str[i] == '\n')
            {
                str[i] = 0;
                break;
            }
            if (temp == str[i] && str[i] != '?')
            {
                printf("-1\n");
                while (temp != '\n')
                    temp = getchar();
                goto cont;
            }
            temp = str[i];
        }

        for (int i = 1; str[i]; i++)
        {
            if (str[i] == '?')
            {
                if (str[i - 1] != 'a' && str[i + 1] != 'a')
                {
                    str[i] = 'a';
                    printf("a");
                }
                else if (str[i - 1] != 'b' && str[i + 1] != 'b')
                {
                    str[i] = 'b';
                    printf("b");
                }
                else if (str[i - 1] != 'c' && str[i + 1] != 'c')
                {
                    str[i] = 'c';
                    printf("c");
                }
            }
            else
                printf("%c", str[i]);
        }
        printf("\n");

    cont:
        continue;
    }
    return 0;
}