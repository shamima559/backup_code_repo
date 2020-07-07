#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[200];
    scanf("%s", s);

    int lwrcse = 0, uprcse = 0;
    for (int i = 0; i < (int)strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            uprcse++;
        else
            lwrcse++;
    }

    if (uprcse <= lwrcse)
    {
        for (int i = 0; i < (int)strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += (-'A' + 'a');
        }
    }
    else if (uprcse > lwrcse)
    {
        for (int i = 0; i < (int)strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] += (-'a' + 'A');
        }
    }

    printf("%s", s);

    return 0;
}