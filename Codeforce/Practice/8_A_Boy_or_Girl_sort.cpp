#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[110];
    scanf("%s", s);

    sort(s, s + strlen(s));
    int c = 0;
    for (int i = 0; i < (int)strlen(s) - 1; i++)
    {
        if (s[i] != s[i + 1])
            c++;
    }
    c++;

    printf(c % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}