#include <bits/stdc++.h>

using namespace std;

int cnt[200];
int main()
{
    // freopen("input.txt","r",stdin);

    char s[2000];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        // printf("%d", s[i]);
        cnt[(int)s[i]]++;
    }

    int c = 0;
    for (int i = 65; i <= 90; i++)
    {
        // printf("%d", cnt[i]);
        if (cnt[i] == 0)
            c++;
    }

    printf("%d", c);

    return 0;
}