#include <bits/stdc++.h>

using namespace std;

#define MAX 10

int main()
{
    //freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);
    getchar();

    while (test--)
    {
        char str[MAX];

        scanf("%s", str);

        bool flag = true;
        for (int i = 0; str[i]; i++)
        {
            if (str[i] == str[i + 1] && str[i] != '?')
            {
                printf("-1\n");
                flag = false;
                break;
            }
            else if (str[i] == '?')
            {
                if (str[i - 1] != 'a' && str[i + 1] != 'a')
                    str[i] = 'a';
                else if (str[i - 1] != 'b' && str[i + 1] != 'b')
                    str[i] = 'b';
                else if (str[i - 1] != 'c' && str[i + 1] != 'c')
                    str[i] = 'c';
            }
        }
        if (flag)
            printf("%s\n", str);
    }
    return 0;
}