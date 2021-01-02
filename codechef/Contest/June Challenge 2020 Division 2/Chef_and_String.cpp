#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int t;
    scanf("%d", &t);
    getchar();

    char str[100000];
    while (t--)
    {
        int c = 0;
        scanf("%s", str);
        for (unsigned int i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'x')
            {
                unsigned int j;
                for (j = i + 1; j < strlen(str); j++)
                {
                    if (str[j] == 'y')
                    {
                        c++;
                        break;
                    }
                }
                i = j;
            }
            else
            {
                unsigned int j;
                for (j = i + 1; j < strlen(str); j++)
                {
                    if (str[j] == 'x')
                    {
                        c++;
                        break;
                    }
                }
                i = j;
            }
        }
        printf("%d\n", c);
    }

    return 0;
}