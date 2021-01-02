#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[55], t[55];
    scanf("%s %s", s, t);

    int c = 1, temp = 0, i, j;
    for (i = 0; i < (int)strlen(s); i++)
    {
        for (j = temp; j < (int)strlen(t); j++)
        {
            if (s[i] == t[j])
            {
                c++;
                temp = j + 1;
                break;
            }
        }
        if (j == (int)strlen(t))
            break;
    }
    printf("%d", c);

    return 0;
}