#include <bits/stdc++.h>

using namespace std;

char s[200010], t[200010];
int main()
{
    scanf("%s %s", s, t);

    int c = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != t[i])
            c++;
    }
    printf("%d", c);

    return 0;
}