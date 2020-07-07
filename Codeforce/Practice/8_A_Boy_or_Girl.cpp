#include <bits/stdc++.h>

using namespace std;

int cnt[130];
int main()
{
    char s[110];
    scanf("%s", s);

    for (int i = 0; i < (int)strlen(s); i++)
        cnt[s[i]]++;

    int c = 0;
    for (int i = 97; i <= 122; i++)
    {
        if (cnt[i])
            c++;
    }
    printf(c % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}