#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000];
    scanf("%s", s);

    int move = min(abs('a' - s[0]), (26 - abs('a' - s[0])));
    for (int i = 0; i < (int)strlen(s) - 1; i++)
        move += min(abs(s[i] - s[i + 1]), (26 - abs(s[i] - s[i + 1])));

    printf("%d", move);

    return 0;
}