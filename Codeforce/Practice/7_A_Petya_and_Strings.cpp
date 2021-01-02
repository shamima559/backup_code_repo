#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s1[200], s2[200];
    scanf("%s %s", s1, s2);

    for (int i = 0; i < (int)strlen(s1); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += (-'A' + 'a');
    }
    for (int i = 0; i < (int)strlen(s2); i++)
    {
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += (-'A' + 'a');
    }

    for (int i = 0; i < (int)strlen(s2); i++)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] < s2[i])
            {
                printf("-1");
                return 0;
            }
            else if (s1[i] > s2[i])
            {
                printf("1");
                return 0;
            }
        }
    }
    printf("0");

    return 0;
}